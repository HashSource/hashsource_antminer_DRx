void __fastcall sub_2E368(int a1, char *s)
{
  char *v3; // r0
  char *v4; // r0
  FILE *v5; // r4
  int v6; // r7
  bool v7; // zf
  FILE *v8; // r4
  __pid_t v9; // r0
  size_t v10; // r0
  size_t v11; // r0
  size_t v12; // r4
  char *v13; // r7
  __int16 v14; // r3
  const char *v15; // r0
  FILE *v16; // r0
  FILE *v17; // r6
  int v18; // [sp+Ch] [bp-148h] BYREF
  int v19; // [sp+10h] [bp-144h] BYREF
  int v20; // [sp+14h] [bp-140h] BYREF
  _DWORD v21[2]; // [sp+18h] [bp-13Ch] BYREF
  int v22; // [sp+20h] [bp-134h] BYREF
  char v23[20]; // [sp+28h] [bp-12Ch] BYREF
  char v24[20]; // [sp+3Ch] [bp-118h] BYREF
  char sa; // [sp+50h] [bp-104h] BYREF
  char v26; // [sp+51h] [bp-103h]
  char v27[254]; // [sp+52h] [bp-102h] BYREF

  strcpy((char *)v21, ".TEMP");
  switch ( a1 )
  {
    case 1:
      if ( s )
      {
        v11 = strlen(s);
        v12 = v11;
        if ( v11 )
        {
          dword_CB57C = sub_4F478(dword_CB57C, v11 + 1, 0, 0);
          v13 = (char *)sub_4F478(dword_7FFF0, v12 + 6, 0, 0);
          dword_7FFF0 = (int)v13;
          memcpy((void *)dword_CB57C, s, v12 + 1);
          memcpy(v13, s, v12);
          v14 = v21[1];
          *(_DWORD *)&v13[v12] = v21[0];
          v15 = (const char *)dword_CB57C;
          *(_WORD *)&v13[v12 + 4] = v14;
          v16 = fopen(v15, "r");
          v17 = v16;
          if ( v16 )
          {
            if ( fscanf(v16, "%lf", &dbl_7A5F8) == 1 )
            {
              fclose(v17);
              dbl_7A5F8 = dbl_7A5F8 / 1000000.0;
              dbl_80070 = dbl_7A5F8;
            }
            else
            {
              sub_4FE78(3, "format error frequency file %s", (const char *)dword_CB57C);
              fclose(v17);
            }
          }
        }
      }
      return;
    case 2:
      v10 = strlen(s);
      if ( v10 > 0xFF )
      {
        sub_4FE78(3, "statsdir too long (>%d, sigh)", 255);
      }
      else
      {
        if ( !v10 || s[v10 - 1] == 47 )
          snprintf(aVarNtp, 0x100u, "%s", s);
        else
          snprintf(aVarNtp, 0x100u, "%s%c", s, 47);
        sub_4CBA8(&v22);
        if ( (char *)dword_7FFFC == aVarNtp && dword_7FFF8 )
        {
          fclose((FILE *)dword_7FFF8);
          dword_7FFF8 = 0;
          sub_1DAE8((int)&dword_7FFF8, v22);
        }
        if ( (char *)dword_80010 == aVarNtp && dword_8000C )
        {
          fclose((FILE *)dword_8000C);
          dword_8000C = 0;
          sub_1DAE8((int)&dword_8000C, v22);
        }
        if ( (char *)dword_80024 == aVarNtp && dword_80020 )
        {
          fclose((FILE *)dword_80020);
          dword_80020 = 0;
          sub_1DAE8((int)&dword_80020, v22);
        }
        if ( (char *)dword_80038 == aVarNtp && dword_80034 )
        {
          fclose((FILE *)dword_80034);
          dword_80034 = 0;
          sub_1DAE8((int)&dword_80034, v22);
        }
        if ( (char *)dword_8004C == aVarNtp && dword_80048 )
        {
          fclose((FILE *)dword_80048);
          dword_80048 = 0;
          sub_1DAE8((int)&dword_80048, v22);
        }
        if ( (char *)dword_80060 == aVarNtp && dword_8005C )
        {
          fclose((FILE *)dword_8005C);
          dword_8005C = 0;
          sub_1DAE8((int)&dword_8005C, v22);
        }
      }
      return;
    case 3:
      v8 = fopen(s, "w");
      if ( v8 )
      {
        v9 = getpid();
        fprintf(v8, "%d", v9);
        fclose(v8);
      }
      else
      {
        sub_4FE78(3, "pid file %s: %m", s);
      }
      return;
    case 4:
      v5 = fopen(s, "r");
      if ( !v5 )
      {
        sub_4FE78(3, "leapseconds file %s: %m", s);
        return;
      }
      v6 = 10;
      v20 = 0;
      v18 = 0;
      v19 = 0;
      break;
    default:
      return;
  }
  while ( fgets(&sa, 255, v5) )
  {
    if ( sa )
    {
      if ( sa == 35 )
      {
        if ( strlen(&sa) > 2 )
        {
          v7 = v26 == 64;
          if ( v26 != 64 )
            v7 = v26 == 36;
          if ( !v7 )
            goto LABEL_15;
          if ( sscanf(v27, "%lu", &v19) != 1 )
            goto LABEL_17;
        }
      }
      else
      {
LABEL_15:
        if ( sscanf(&sa, "%lu %d", &v18, &v20) == 2 )
        {
          v7 = v20 == v6++;
          if ( !v7 )
            goto LABEL_17;
        }
      }
    }
  }
  if ( v6 != 10 )
  {
    dword_CB4D8 = v18;
    dword_CB450 = v20;
    dword_CB4F0 = v19;
    v3 = sub_2E2C4(v18);
    strcpy(v23, v3);
    v4 = sub_2E2C4(dword_CB4F0);
    strcpy(v24, v4);
    snprintf(&sa, 0x50u, "%d leap %s expire %s", dword_CB450, v23, v24);
    sub_1D3D8(14, 0, &sa);
    goto LABEL_4;
  }
LABEL_17:
  sub_4FE78(3, "format error leapseconds file %s", s);
LABEL_4:
  fclose(v5);
}
