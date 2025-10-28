void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // r5
  char *v6; // r7
  const char *v7; // r0
  size_t v8; // r2
  char **v9; // r12
  int v10; // r3
  char *v11; // r2
  char *v12; // t1
  size_t v13; // r0
  int v14; // r8
  int v15; // r4
  int v16; // r4
  int v17; // r0
  int v18; // r6
  char v19[48]; // [sp+0h] [bp-30h] BYREF

  dword_11CF8 = (int)&dword_11CB8;
  if ( a1 <= 1 )
    goto LABEL_8;
  v6 = a2[1];
  if ( *v6 != 45 )
  {
    if ( strcmp("-force", a2[1]) )
    {
LABEL_4:
      v7 = "Error: No action specified !\n";
      v8 = 29;
      goto LABEL_18;
    }
    goto LABEL_9;
  }
  v14 = (unsigned __int8)v6[1];
  switch ( v14 )
  {
    case 'r':
      if ( v6[2] )
        break;
      v3 = 1;
LABEL_8:
      warn();
      goto LABEL_9;
    case 'e':
      if ( !v6[2] )
      {
        v3 = 2;
        goto LABEL_8;
      }
      break;
    case 'w':
      if ( v6[2] )
        break;
      v3 = (unsigned __int8)v6[2];
      goto LABEL_8;
    default:
      if ( v14 == 112 && !v6[2] )
      {
        v3 = 3;
        goto LABEL_8;
      }
      break;
  }
  if ( strcmp("-force", a2[1]) )
  {
    if ( v14 == 118 )
    {
      v15 = (unsigned __int8)v6[2];
      if ( !v6[2] )
      {
        fwrite("eepromer v 0.4 (c) Daniel Smolik 2001\n", 1u, 0x26u, (FILE *)stderr);
        exit(v15);
      }
    }
    goto LABEL_4;
  }
LABEL_9:
  if ( a1 <= 4 )
  {
    v7 = "Error: No i2c address specified !\n";
    v8 = 34;
  }
  else
  {
    v9 = a2;
    v10 = 1;
    while ( 1 )
    {
      v12 = v9[1];
      ++v9;
      v11 = v12;
      if ( *v12 == 45 && v11[1] == 102 && !v11[2] )
        break;
      if ( ++v10 == a1 )
        goto LABEL_16;
    }
    strcpy(v19, a2[v10 + 1]);
LABEL_16:
    if ( v19[0] )
    {
      v16 = strtol(a2[4], 0, 16);
      if ( v16 )
      {
        v17 = sub_8E9C(v19, v16);
        v18 = v17;
        if ( v17 )
        {
          switch ( v3 )
          {
            case 2:
              sub_8F88(v17, v16);
              break;
            case 3:
              sub_9564();
              break;
            case 1:
              sub_9470();
              break;
            default:
              sub_92A0();
              break;
          }
          close(v18);
          exit(0);
        }
        fwrite("Error: Init failed !\n", 1u, 0x15u, (FILE *)stderr);
        exit(1);
      }
      v7 = "Error: Bad device address !\n";
      v8 = 28;
    }
    else
    {
      v7 = "Error: No device specified !\n";
      v8 = 29;
    }
  }
LABEL_18:
  v13 = fwrite(v7, 1u, v8, (FILE *)stderr);
  sub_8C54(v13);
  exit(1);
}
