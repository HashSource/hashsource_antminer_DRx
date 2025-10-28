void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // r5
  char *v5; // r2
  int v6; // r6
  int v7; // r1
  int v8; // lr
  int v9; // r7
  int v10; // r8
  int v11; // r4
  const char *v12; // r10
  unsigned int v13; // r0
  int v14; // r1
  int v15; // r11
  size_t v16; // r0
  unsigned int v17; // r0
  int v18; // r0
  int v19; // r4
  int v20; // r0
  int v21; // r4
  int v22; // r11
  int v23; // r0
  int v24; // r9
  size_t v25; // r0
  char *v26; // r0
  int v27; // r2
  size_t v28; // r0
  size_t v29; // r0
  int v30; // r0
  _BOOL4 v31; // r2
  bool v32; // zf
  size_t v33; // r0
  size_t v34; // r0
  int v35; // r0
  int v36; // r5
  char **v37; // r9
  int v38; // r0
  FILE *v39; // r4
  int *v40; // r0
  char *v41; // r0
  _BOOL4 v42; // r2
  size_t v43; // r0
  size_t v44; // r0
  int v45; // r3
  int v46; // r1
  FILE *v47; // r4
  int *v48; // r0
  char *v49; // r0
  int v50; // r10
  bool v51; // zf
  const char *v52; // r12
  const char *v53; // r3
  const char *v54; // r2
  int v55; // r0
  int v56; // r12
  int v57; // r10
  int v58; // r5
  int v59; // r4
  int v60; // r2
  char v61; // r7
  int v62; // r0
  int v63; // r4
  int v64; // r1
  int v65; // r1
  FILE *v66; // r4
  int *v67; // r0
  char *v68; // r0
  int v69; // r12
  int v70; // r3
  _BYTE *v71; // r1
  char v72; // t1
  int v73; // r12
  _BYTE *v74; // r1
  int v75; // r3
  char v76; // t1
  const char *v77; // r2
  char *v78; // [sp+20h] [bp-17Ch]
  int v79; // [sp+20h] [bp-17Ch]
  size_t size; // [sp+24h] [bp-178h]
  unsigned int v81; // [sp+28h] [bp-174h]
  int v82; // [sp+2Ch] [bp-170h]
  int v83; // [sp+30h] [bp-16Ch]
  _BOOL4 v84; // [sp+34h] [bp-168h]
  char *endptr; // [sp+3Ch] [bp-160h] BYREF
  int v86; // [sp+40h] [bp-15Ch] BYREF
  char s[19]; // [sp+44h] [bp-158h] BYREF
  _BYTE v88[33]; // [sp+57h] [bp-145h] BYREF
  unsigned __int16 v89[18]; // [sp+78h] [bp-124h] BYREF
  char v90[36]; // [sp+9Ch] [bp-100h] BYREF
  __int16 v91[18]; // [sp+C0h] [bp-DCh] BYREF
  _BYTE v92[36]; // [sp+E4h] [bp-B8h] BYREF
  _BYTE v93[36]; // [sp+108h] [bp-94h] BYREF
  char v94[36]; // [sp+12Ch] [bp-70h] BYREF
  unsigned __int16 v95[18]; // [sp+150h] [bp-4Ch] BYREF
  char v96[36]; // [sp+174h] [bp-28h] BYREF

  v3 = a1;
  if ( a1 > 1 )
  {
    v5 = a2[1];
    if ( *v5 == 45 )
    {
      v6 = 0;
      v7 = 1;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      do
      {
        switch ( v5[1] )
        {
          case 'V':
            v7 = v11;
            v8 = 1;
            break;
          case 'f':
            v7 = v11;
            v10 = 1;
            break;
          case 'm':
            v19 = v11 + 2;
            if ( a1 > v19 )
              v12 = a2[v19];
            break;
          case 'r':
            v7 = v11;
            v6 = 1;
            break;
          case 'y':
            v7 = v11;
            v9 = 1;
            break;
          default:
            v20 = fprintf((FILE *)stderr, "Error: Unsupported option \"%s\"!\n", v5);
            sub_9B68(v20);
        }
        v11 = v7 + 1;
        v7 += 2;
        if ( v7 >= a1 )
          break;
        v5 = a2[v7];
      }
      while ( *v5 == 45 );
      if ( v8 )
      {
        fprintf((FILE *)stderr, "i2cset version %s\n", "3.1.0");
        exit(0);
      }
    }
    else
    {
      v12 = 0;
      v11 = 0;
      v10 = 0;
      v9 = 0;
      v6 = 0;
    }
    if ( a1 > v11 + 3 )
    {
      a1 = sub_A38C(a2[v11 + 1]);
      v82 = a1;
      if ( a1 >= 0 )
      {
        a1 = sub_9C74(a2[v11 + 2]);
        v83 = a1;
        if ( a1 >= 0 )
        {
          v13 = strtol(a2[v11 + 3], &endptr, 0);
          v81 = v13;
          if ( !*endptr && v13 <= 0xFF )
          {
            v14 = v11 + 4;
            if ( v11 + 4 != v3 )
            {
              v15 = v11 + 5;
              if ( v11 + 5 != v3 )
              {
                v78 = a2[v3 - 1];
                v16 = strlen(v78);
                v14 = v11 + 4;
                if ( v16 > 2 || v16 == 2 && v78[1] != 112 )
                  goto LABEL_21;
                v17 = (unsigned __int8)*v78;
                if ( v17 == 105 )
                {
                  v42 = v78[1] == 112;
                  if ( v78[1] == 112 )
                  {
                    v44 = fwrite("Error: PEC not supported for I2C block writes!\n", 1u, 0x2Fu, (FILE *)stderr);
                    sub_9B68(v44);
                  }
                  size = 8;
                }
                else
                {
                  if ( v17 <= 0x69 )
                  {
                    if ( v17 != 98 )
                      goto LABEL_21;
                    size = 2;
LABEL_50:
                    v84 = v78[1] == 112;
                    if ( v11 + 6 != v3 )
                      goto LABEL_51;
LABEL_74:
                    switch ( size )
                    {
                      case 2u:
                      case 3u:
                        goto LABEL_55;
                      case 5u:
                      case 8u:
                        v37 = &a2[v11];
                        v21 = 0;
                        break;
                    }
                    while ( v3 > v15 + v21 )
                    {
                      v38 = strtol(v37[4], &endptr, 0);
                      if ( *endptr || v38 < 0 )
                        goto LABEL_68;
                      ++v37;
                      if ( v38 > 255 )
                        goto LABEL_67;
                      v88[++v21] = v38;
                    }
                    v22 = -1;
                    goto LABEL_35;
                  }
                  if ( v17 != 115 )
                  {
                    if ( v17 == 119 )
                    {
                      size = 3;
                      goto LABEL_50;
                    }
LABEL_21:
                    v18 = fprintf((FILE *)stderr, "Error: Invalid mode '%s'!\n", a2[v3 - 1]);
                    sub_9B68(v18);
                  }
                  size = 5;
                  v42 = v78[1] == 112;
                }
                if ( v12 )
                {
                  v43 = fwrite("Error: Mask not supported for block writes!\n", 1u, 0x2Cu, (FILE *)stderr);
                  sub_9B68(v43);
                }
                v84 = v42;
                if ( v3 > v11 + 37 )
                {
LABEL_51:
                  v29 = fwrite("Error: Too many arguments!\n", 1u, 0x1Bu, (FILE *)stderr);
                  sub_9B68(v29);
                }
                goto LABEL_74;
              }
              v26 = a2[v14];
              if ( *v26 == 99 )
              {
                v27 = (unsigned __int8)v26[1];
                if ( !v26[1] || v27 == 112 && !v26[2] )
                {
                  v84 = v27 == 112;
                  goto LABEL_34;
                }
                v84 = 0;
                size = 2;
              }
              else
              {
                v84 = 0;
                size = 2;
              }
LABEL_55:
              v30 = strtol(a2[v14], &endptr, 0);
              v22 = v30;
              if ( *endptr || v30 < 0 )
              {
LABEL_68:
                v34 = fwrite("Error: Data value invalid!\n", 1u, 0x1Bu, (FILE *)stderr);
                sub_9B68(v34);
              }
              v31 = v30 > 255;
              if ( size != 2 )
                v31 = 0;
              if ( v31 )
                goto LABEL_67;
              v32 = v30 == 0x10000;
              if ( v30 >= 0x10000 )
                v32 = size == 3;
              v21 = v32;
              if ( v32 )
              {
LABEL_67:
                v33 = fwrite("Error: Data value out of range!\n", 1u, 0x20u, (FILE *)stderr);
                sub_9B68(v33);
              }
              goto LABEL_35;
            }
            v84 = 0;
LABEL_34:
            v21 = 0;
            v22 = -1;
            size = 1;
LABEL_35:
            if ( v12 )
            {
              v23 = strtol(v12, &endptr, 0);
              v24 = v23;
              if ( *endptr || !v23 )
              {
                v28 = fwrite("Error: Data value mask invalid!\n", 1u, 0x20u, (FILE *)stderr);
                sub_9B68(v28);
              }
              if ( size - 1 <= 1 )
              {
                if ( v23 > 255 )
                {
LABEL_40:
                  v25 = fwrite("Error: Data value mask out of range!\n", 1u, 0x25u, (FILE *)stderr);
                  sub_9B68(v25);
                }
              }
              else if ( v23 >= 0x10000 )
              {
                goto LABEL_40;
              }
            }
            else
            {
              v24 = 0;
            }
            v35 = sub_9D08(v82, s, 0x14u);
            v36 = v35;
            if ( v35 < 0 )
LABEL_85:
              exit(1);
            if ( ioctl(v35, 0x705u, &v86) < 0 )
            {
              v47 = (FILE *)stderr;
              v48 = _errno_location();
              v49 = strerror(*v48);
              fprintf(v47, "Error: Could not get the adapter functionality matrix: %s\n", v49);
              goto LABEL_85;
            }
            switch ( size )
            {
              case 1u:
                if ( (v86 & 0x40000) != 0 )
                  goto LABEL_93;
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus send byte");
                goto LABEL_85;
              case 2u:
                if ( (v86 & 0x100000) != 0 )
                  goto LABEL_93;
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus write byte");
                goto LABEL_85;
              case 3u:
                if ( (v86 & 0x400000) != 0 )
                  goto LABEL_93;
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus write word");
                goto LABEL_85;
              case 5u:
                if ( (v86 & 0x2000000) != 0 )
                  goto LABEL_93;
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus block write");
                goto LABEL_85;
              case 8u:
                if ( (v86 & 0x8000000) == 0 )
                {
                  fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "I2C block write");
                  goto LABEL_85;
                }
LABEL_93:
                if ( v84 && (v86 & 9) == 0 )
                  fwrite("Warning: Adapter does not seem to support PEC\n", 1u, 0x2Eu, (FILE *)stderr);
                if ( sub_A4D4(v36, v83, v10) )
                  goto LABEL_85;
                if ( !v9 )
                {
                  fwrite(
                    "WARNING! This program can confuse your I2C bus, cause data loss and worse!\n",
                    1u,
                    0x4Bu,
                    (FILE *)stderr);
                  if ( (unsigned int)(v83 - 80) <= 7 )
                  {
                    fwrite(
                      "DANGEROUS! Writing to a serial EEPROM on a memory DIMM\n"
                      "may render your memory USELESS and make your system UNBOOTABLE!\n",
                      1u,
                      0x77u,
                      (FILE *)stderr);
                    v50 = 1;
                  }
                  else
                  {
                    v50 = 0;
                  }
                  fprintf(
                    (FILE *)stderr,
                    "I will write to device file %s, chip address 0x%02x, data address\n0x%02x, ",
                    s,
                    v83,
                    v81);
                  if ( size == 1 )
                  {
                    fwrite("no data.\n", 1u, 9u, (FILE *)stderr);
                  }
                  else
                  {
                    v51 = size == 5;
                    if ( size != 5 )
                      v51 = size == 8;
                    if ( v51 )
                    {
                      fwrite("data", 1u, 4u, (FILE *)stderr);
                      v56 = v50;
                      v57 = v36;
                      v58 = v21;
                      v59 = 0;
                      while ( v58 > v59 )
                      {
                        v60 = (unsigned __int8)v88[++v59];
                        v79 = v56;
                        fprintf((FILE *)stderr, " 0x%02x", v60);
                        v56 = v79;
                      }
                      LOBYTE(v21) = v58;
                      v36 = v57;
                      v50 = v56;
                      v77 = "smbus block";
                      if ( size != 5 )
                        v77 = "i2c block";
                      fprintf((FILE *)stderr, ", mode %s.\n", v77);
                    }
                    else
                    {
                      v52 = "word";
                      if ( size == 2 )
                        v52 = "byte";
                      v53 = " (masked)";
                      if ( !v24 )
                        v53 = "";
                      fprintf((FILE *)stderr, "data 0x%02x%s, mode %s.\n", v22, v53, v52);
                    }
                  }
                  if ( v84 )
                    fwrite("PEC checking enabled.\n", 1u, 0x16u, (FILE *)stderr);
                  v54 = "Y/n";
                  if ( v50 )
                    v54 = "y/N";
                  fprintf((FILE *)stderr, "Continue? [%s] ", v54);
                  fflush((FILE *)stderr);
                  v55 = sub_A544(v50 ^ 1);
                  v45 = (int)&stderr;
                  if ( !v55 )
                  {
                    fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
                    exit(0);
                  }
                }
                if ( !v24 )
                  goto LABEL_109;
                if ( size == 1 )
                {
                  v45 = sub_8B84(v36);
                }
                else if ( size == 3 )
                {
                  if ( sub_8B54(v36, 1, v81, 3, (int)v89) )
                    goto LABEL_138;
                  v45 = v89[0];
                }
                else
                {
                  if ( sub_8B54(v36, 1, v81, 2, (int)v90) )
                    goto LABEL_138;
                  v45 = (unsigned __int8)v90[0];
                }
                if ( v45 >= 0 )
                {
                  v22 = v45 & ~v24 | v24 & v22;
                  if ( !v9 )
                  {
                    v46 = size == 3 ? 4 : 2;
                    fprintf(
                      (FILE *)stderr,
                      "Old value 0x%0*x, write mask 0x%0*x: Will write 0x%0*x to register 0x%02x\n",
                      v46,
                      v45,
                      v46,
                      v24,
                      v46,
                      v22,
                      v81);
                    fwrite("Continue? [Y/n] ", 1u, 0x10u, (FILE *)stderr);
                    fflush((FILE *)stderr);
                    if ( !sub_A544(1) )
                    {
                      fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
                      exit(0);
                    }
                  }
LABEL_109:
                  if ( v84 && ioctl(v36, 0x708u, 1, v45) < 0 )
                  {
                    v66 = (FILE *)stderr;
                    v67 = _errno_location();
                    v68 = strerror(*v67);
                    fprintf(v66, "Error: Could not set PEC: %s\n", v68);
                    goto LABEL_84;
                  }
                  switch ( size )
                  {
                    case 1u:
                      v61 = v81;
                      v62 = sub_8B54(v36, 0, v81, 1, 0);
                      break;
                    case 3u:
                      v91[0] = v22;
                      v61 = v81;
                      v62 = sub_8B54(v36, 0, v81, 3, (int)v91);
                      break;
                    case 5u:
                      v73 = (unsigned __int8)v21;
                      if ( (unsigned __int8)v21 >= 0x20u )
                        v73 = 32;
                      v74 = v88;
                      v75 = 1;
                      v61 = v81;
                      while ( v75 <= v73 )
                      {
                        v76 = *++v74;
                        v92[v75++] = v76;
                      }
                      v92[0] = v73;
                      v62 = sub_8B54(v36, 0, v81, 5, (int)v92);
                      break;
                    case 8u:
                      v69 = (unsigned __int8)v21;
                      if ( (unsigned __int8)v21 >= 0x20u )
                        v69 = 32;
                      v70 = 1;
                      v61 = v81;
                      v71 = v88;
                      while ( v70 <= v69 )
                      {
                        v72 = *++v71;
                        v93[v70++] = v72;
                      }
                      v93[0] = v69;
                      v62 = sub_8B54(v36, 0, v81, 6, (int)v93);
                      break;
                    default:
                      v94[0] = v22;
                      v61 = v81;
                      v62 = sub_8B54(v36, 0, v81, 2, (int)v94);
                      break;
                  }
                  if ( v62 < 0 )
                  {
                    fwrite("Error: Write failed\n", 1u, 0x14u, (FILE *)stderr);
                    close(v36);
                    exit(1);
                  }
                  if ( v84 && ioctl(v36, 0x708u, 0) < 0 )
                  {
                    v39 = (FILE *)stderr;
                    v40 = _errno_location();
                    v41 = strerror(*v40);
                    fprintf(v39, "Error: Could not clear PEC: %s\n", v41);
LABEL_84:
                    close(v36);
                    goto LABEL_85;
                  }
                  if ( !v6 )
                  {
                    close(v36);
                    exit(0);
                  }
                  if ( size == 1 )
                  {
                    v22 = v81;
                    v63 = sub_8B84(v36);
                  }
                  else
                  {
                    if ( size != 3 )
                    {
                      if ( !sub_8B54(v36, 1, v61, 2, (int)v96) )
                      {
                        v63 = (unsigned __int8)v96[0];
                        goto LABEL_158;
                      }
                      goto LABEL_171;
                    }
                    if ( sub_8B54(v36, 1, v61, 3, (int)v95) )
                    {
LABEL_171:
                      v63 = -1;
                      goto LABEL_158;
                    }
                    v63 = v95[0];
                  }
LABEL_158:
                  close(v36);
                  if ( v63 < 0 )
                  {
                    puts("Warning - readback failed");
                  }
                  else if ( v63 == v22 )
                  {
                    if ( size == 3 )
                      v65 = 4;
                    else
                      v65 = 2;
                    printf("Value 0x%0*x written, readback matched\n", v65, v63);
                  }
                  else
                  {
                    if ( size == 3 )
                      v64 = 4;
                    else
                      v64 = 2;
                    printf("Warning - data mismatch - wrote 0x%0*x, read back 0x%0*x\n", v64, v22, v64, v63);
                  }
                  exit(0);
                }
LABEL_138:
                fwrite("Error: Failed to read old value\n", 1u, 0x20u, (FILE *)stderr);
                exit(1);
                return;
            }
          }
          a1 = fwrite("Error: Data address invalid!\n", 1u, 0x1Du, (FILE *)stderr);
        }
      }
    }
  }
  sub_9B68(a1);
}
