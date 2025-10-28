void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // r8
  char **v6; // r0
  int v7; // r11
  int v8; // r1
  int v9; // r7
  int i; // r6
  char *v11; // r2
  char *v12; // t1
  int v13; // r3
  int v14; // r0
  int v15; // r10
  int v16; // r9
  int v17; // r8
  char *v18; // r2
  int v19; // r3
  size_t v20; // r0
  unsigned int v21; // r0
  _BOOL4 v22; // r5
  int v23; // r0
  int v24; // r4
  int v25; // r0
  int v26; // r4
  int v27; // r1
  FILE *v28; // r5
  int *v29; // r0
  char *v30; // r0
  int v31; // r0
  int v32; // r0
  _BOOL4 v33; // r10
  bool v34; // zf
  int v35; // r7
  FILE *v36; // r0
  const char *v37; // r2
  const char *v38; // r2
  bool v39; // zf
  FILE *v40; // r4
  int *v41; // r0
  char *v42; // r0
  char **v43; // [sp+4h] [bp-A0h]
  char *endptr; // [sp+Ch] [bp-98h] BYREF
  int v45; // [sp+10h] [bp-94h] BYREF
  char v46; // [sp+14h] [bp-90h] BYREF
  char v47; // [sp+15h] [bp-8Fh]
  int v48; // [sp+18h] [bp-8Ch]
  _BYTE *v49; // [sp+1Ch] [bp-88h]
  char s[20]; // [sp+20h] [bp-84h] BYREF
  unsigned __int8 v51; // [sp+34h] [bp-70h] BYREF
  unsigned __int16 v52; // [sp+58h] [bp-4Ch] BYREF
  unsigned __int8 v53; // [sp+7Ch] [bp-28h] BYREF

  v3 = 0;
  v6 = a2;
  v7 = 0;
  v8 = 1;
  v9 = 0;
  for ( i = 0; v8 < a1; v7 = v8++ )
  {
    v12 = v6[1];
    ++v6;
    v11 = v12;
    if ( *v12 != 45 )
      break;
    v13 = (unsigned __int8)v11[1];
    switch ( v13 )
    {
      case 'f':
        i = 1;
        break;
      case 'y':
        v9 = 1;
        break;
      case 'V':
        v3 = 1;
        break;
      default:
        v14 = fprintf((FILE *)stderr, "Error: Unsupported option \"%s\"!\n", v11);
        sub_935C(v14);
    }
  }
  if ( v3 )
  {
    fprintf((FILE *)stderr, "i2cget version %s\n", "3.1.0");
    exit(0);
  }
  if ( a1 > v7 + 2 )
  {
    v6 = (char **)sub_9B80(a2[v8]);
    v15 = (int)v6;
    if ( (int)v6 >= 0 )
    {
      v6 = (char **)sub_9468(a2[v7 + 2]);
      v43 = v6;
      if ( (int)v6 >= 0 )
      {
        if ( a1 <= v7 + 3 )
        {
          v16 = -1;
          v17 = 1;
          goto LABEL_16;
        }
        v21 = strtol(a2[v7 + 3], &endptr, 0);
        v16 = v21;
        if ( !*endptr && v21 <= 0xFF )
        {
          v17 = 2;
LABEL_16:
          if ( a1 <= v7 + 4 )
          {
            v22 = 0;
          }
          else
          {
            v18 = a2[v7 + 4];
            v19 = (unsigned __int8)*v18;
            switch ( v19 )
            {
              case 'c':
                v17 = 1;
                break;
              case 'w':
                v17 = 3;
                break;
              case 'b':
                v17 = 2;
                break;
              default:
                v20 = fwrite("Error: Invalid mode!\n", 1u, 0x15u, (FILE *)stderr);
                sub_935C(v20);
            }
            v22 = v18[1] == 112;
          }
          v23 = sub_94FC(v15, s, 0x14u);
          v24 = v23;
          if ( v23 >= 0 )
          {
            if ( ioctl(v23, 0x705u, &v45) < 0 )
            {
              v40 = (FILE *)stderr;
              v41 = _errno_location();
              v42 = strerror(*v41);
              fprintf(v40, "Error: Could not get the adapter functionality matrix: %s\n", v42);
              goto LABEL_51;
            }
            if ( v17 == 2 )
            {
              if ( (v45 & 0x80000) == 0 )
              {
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus read byte");
                goto LABEL_51;
              }
            }
            else if ( v17 == 3 )
            {
              if ( (v45 & 0x200000) == 0 )
              {
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus read word");
                goto LABEL_51;
              }
            }
            else
            {
              if ( (v45 & 0x20000) == 0 )
              {
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus receive byte");
                goto LABEL_51;
              }
              if ( v16 != -1 && (v45 & 0x40000) == 0 )
              {
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus send byte");
                goto LABEL_51;
              }
            }
            if ( v22 && (v45 & 9) == 0 )
              fwrite("Warning: Adapter does not seem to support PEC\n", 1u, 0x2Eu, (FILE *)stderr);
            if ( !sub_9CC8(v24, v43, i) )
            {
              if ( v9 )
                goto LABEL_42;
              fwrite(
                "WARNING! This program can confuse your I2C bus, cause data loss and worse!\n",
                1u,
                0x4Bu,
                (FILE *)stderr);
              if ( (unsigned int)(v43 - 20) > 7 )
              {
                v33 = v17 == 1;
                v39 = v16 == 0;
                if ( v16 >= 0 )
                  v39 = v17 == 1;
                if ( !v39 )
                {
LABEL_90:
                  fprintf((FILE *)stderr, "I will read from device file %s, chip address 0x%02x, ", s, v43);
                  if ( v16 == -1 )
                  {
                    fwrite("current data\naddress", 1u, 0x14u, (FILE *)stderr);
                    v36 = (FILE *)stderr;
                    if ( !v33 )
                      goto LABEL_92;
                    v35 = 0;
                    goto LABEL_98;
                  }
                  fprintf((FILE *)stderr, "data address\n0x%02x", v16);
                  v36 = (FILE *)stderr;
                  if ( !v33 )
                  {
LABEL_92:
                    v37 = "read word data";
                    v35 = 0;
                    if ( v17 == 2 )
                      v37 = "read byte data";
                    goto LABEL_77;
                  }
                  v37 = "write byte/read byte";
                  v35 = 0;
                  goto LABEL_77;
                }
                if ( v22 )
                {
                  fwrite(
                    "WARNING! All I2C chips and some SMBus chips will interpret a write\n"
                    "byte command with PEC as awrite byte data command, effectively writing a\n"
                    "value into a register!\n",
                    1u,
                    0xA3u,
                    (FILE *)stderr);
                  v35 = 1;
                  goto LABEL_75;
                }
              }
              else
              {
                if ( v22 )
                {
                  fwrite(
                    "STOP! EEPROMs are I2C devices, not SMBus devices. Using PEC\n"
                    "on I2C devices may result in unexpected results, such as\n"
                    "trashing the contents of EEPROMs. We can't let you do that, sorry.\n",
                    1u,
                    0xB8u,
                    (FILE *)stderr);
                  goto LABEL_83;
                }
                v33 = v17 == 1;
                v34 = v16 == 0;
                if ( v16 >= 0 )
                  v34 = v17 == 1;
                if ( !v34 )
                  goto LABEL_90;
              }
              v35 = v22;
LABEL_75:
              fprintf((FILE *)stderr, "I will read from device file %s, chip address 0x%02x, ", s, v43);
              fprintf((FILE *)stderr, "data address\n0x%02x", v16);
              v36 = (FILE *)stderr;
              if ( v16 == -1 )
              {
LABEL_98:
                v37 = "read byte";
                goto LABEL_77;
              }
              v37 = "write byte/read byte";
LABEL_77:
              fprintf(v36, ", using %s.\n", v37);
              if ( v22 )
                fwrite("PEC checking enabled.\n", 1u, 0x16u, (FILE *)stderr);
              v38 = "Y/n";
              if ( v35 )
                v38 = "y/N";
              fprintf((FILE *)stderr, "Continue? [%s] ", v38);
              fflush((FILE *)stderr);
              if ( sub_9D38(v35 ^ 1) )
              {
LABEL_42:
                if ( v22 && ioctl(v24, 0x708u, 1) < 0 )
                {
                  v28 = (FILE *)stderr;
                  v29 = _errno_location();
                  v30 = strerror(*v29);
                  fprintf(v28, "Error: Could not set PEC: %s\n", v30);
                  close(v24);
                  goto LABEL_51;
                }
                if ( v17 == 1 )
                {
                  if ( v16 != -1 )
                  {
                    v47 = v16;
                    v48 = 1;
                    v46 = 0;
                    v49 = 0;
                    if ( ioctl(v24, 0x720u, &v46) < 0 )
                      fwrite("Warning - write failed\n", 1u, 0x17u, (FILE *)stderr);
                  }
                  v46 = 1;
                  v48 = 1;
                  v47 = 0;
                  v49 = &v51;
                  v34 = ioctl(v24, 0x720u, &v46) == 0;
                  v32 = v24;
                  if ( v34 )
                  {
                    v26 = v51;
                    close(v32);
                    goto LABEL_47;
                  }
                }
                else
                {
                  if ( v17 == 3 )
                  {
                    v47 = v16;
                    v48 = 3;
                    v46 = 1;
                    v49 = &v52;
                    if ( !ioctl(v24, 0x720u, &v46) )
                    {
                      v31 = v24;
                      v26 = v52;
                      close(v31);
                      v27 = 4;
LABEL_48:
                      printf("0x%0*x\n", v27, v26);
                      exit(0);
                    }
                  }
                  else
                  {
                    v46 = 1;
                    v47 = v16;
                    v48 = 2;
                    v49 = &v53;
                    if ( !ioctl(v24, 0x720u, &v46) )
                    {
                      v25 = v24;
                      v26 = v53;
                      close(v25);
LABEL_47:
                      v27 = 2;
                      goto LABEL_48;
                    }
                  }
                  v32 = v24;
                }
                close(v32);
                fwrite("Error: Read failed\n", 1u, 0x13u, (FILE *)stderr);
                exit(2);
              }
              fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
LABEL_83:
              exit(0);
            }
          }
LABEL_51:
          exit(1);
        }
        v6 = (char **)fwrite("Error: Data address invalid!\n", 1u, 0x1Du, (FILE *)stderr);
      }
    }
  }
  sub_935C(v6);
}
