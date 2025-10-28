const char *__fastcall sub_1B838(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r3
  const char *v5; // r0
  char *v6; // r9
  char *v7; // r4
  _DWORD *v8; // r0
  _DWORD *v9; // r7
  int v10; // r3
  const char *v11; // r3
  _DWORD *v12; // r0
  char *v13; // r0
  int v15; // r7
  int v16; // r0
  int v17; // r4
  _DWORD *v18; // r0
  int v19; // r0
  const char *v21; // [sp+14h] [bp-810h]
  char *v22; // [sp+14h] [bp-810h]
  int v23; // [sp+18h] [bp-80Ch]
  const char *v24; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a2 && !dword_6DC84 )
    dword_6DC84 = 1;
  if ( dword_6C2CC == 16 )
    goto LABEL_29;
  if ( (dword_6C2CC & 8) != 0 )
LABEL_51:
    _assert_fail("!(opt->type & OPT_SUBTABLE)", "cgminer.c", 0x8EBu, "parse_config");
  v3 = &unk_6C2E4;
  while ( 1 )
  {
    v5 = (const char *)*(v3 - 7);
    if ( !v5 )
    {
      v4 = v3[1];
      if ( v4 == 16 )
        break;
      goto LABEL_8;
    }
    v6 = _strdup(v5);
    v7 = strtok(v6, "|");
    if ( v7 )
    {
      while ( 1 )
      {
        if ( v7[1] != 45 )
          goto LABEL_12;
        v8 = (_DWORD *)sub_47F24(a1, v7 + 2);
        v9 = v8;
        if ( !v8 )
          goto LABEL_12;
        v10 = *(v3 - 6);
        if ( (v10 & 6) != 0 )
        {
          if ( *v8 != 2 )
          {
            if ( *v8 == 1 )
            {
              v22 = v7;
              v17 = 0;
              if ( sub_48034(v8) )
              {
                while ( 1 )
                {
                  v18 = (_DWORD *)sub_48048(v9, v17);
                  if ( !v18 )
                    goto LABEL_12;
                  if ( *v18 == 2 )
                  {
                    v23 = sub_4813C();
                    v19 = ((int (__fastcall *)(int, _DWORD))*(v3 - 4))(v23, *(v3 - 2));
                    v11 = (const char *)v19;
                    if ( *(v3 - 6) == 4 )
                    {
                      v24 = (const char *)v19;
                      sub_48B74(v23, *(v3 - 2));
                      v11 = v24;
                      if ( v24 )
                        goto LABEL_46;
                    }
                    else if ( v19 )
                    {
                      goto LABEL_46;
                    }
                  }
                  else if ( !*v18 )
                  {
                    v11 = (const char *)sub_1B838();
                    if ( v11 )
                    {
LABEL_46:
                      v7 = v22;
                      goto LABEL_22;
                    }
                  }
                  if ( sub_48034(v9) <= (unsigned int)++v17 )
                    goto LABEL_12;
                }
              }
              goto LABEL_12;
            }
            goto LABEL_18;
          }
          v15 = sub_4813C();
          v16 = ((int (__fastcall *)(int, _DWORD))*(v3 - 4))(v15, *(v3 - 2));
          v11 = (const char *)v16;
          if ( *(v3 - 6) != 4 )
            goto LABEL_21;
          v21 = (const char *)v16;
          sub_48B74(v15, *(v3 - 2));
          v11 = v21;
          if ( v21 )
          {
LABEL_22:
            if ( !a2 )
              goto LABEL_33;
            goto LABEL_23;
          }
LABEL_12:
          v7 = strtok(0, "|");
          if ( !v7 )
            break;
        }
        else
        {
LABEL_18:
          if ( (v10 & 1) != 0 && *v8 == 5 )
          {
            v11 = (const char *)((int (__fastcall *)(_DWORD))*(v3 - 5))(*(v3 - 2));
LABEL_21:
            if ( v11 )
              goto LABEL_22;
            goto LABEL_12;
          }
          v11 = "Invalid value";
          if ( !a2 )
          {
LABEL_33:
            snprintf(byte_6DBBC, 0xC8u, "Parsing JSON option %s: %s", v7, v11);
            return byte_6DBBC;
          }
LABEL_23:
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
          {
            snprintf(s, 0x800u, "Invalid config option %s: %s", v7, v11);
            sub_343C4(3, s, 0);
          }
          dword_6DC84 = -1;
          v7 = strtok(0, "|");
          if ( !v7 )
            break;
        }
      }
    }
    free(v6);
    v4 = v3[1];
    if ( v4 == 16 )
      break;
LABEL_8:
    v3 += 7;
    if ( (v4 & 8) != 0 )
      goto LABEL_51;
  }
LABEL_29:
  v12 = (_DWORD *)sub_47F24(a1, "include");
  if ( !v12 || *v12 != 2 )
    return 0;
  v13 = (char *)sub_4813C();
  return sub_1B7FC(v13);
}
