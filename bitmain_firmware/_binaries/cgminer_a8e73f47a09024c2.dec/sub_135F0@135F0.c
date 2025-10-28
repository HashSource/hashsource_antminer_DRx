const char *__fastcall sub_135F0(int a1, int a2)
{
  char **v2; // r11
  const char *v3; // r0
  char *i; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  int v7; // r3
  int v8; // r6
  const char *v9; // r9
  int v10; // r4
  unsigned int v11; // r6
  _DWORD *v12; // r0
  char *v14; // r3
  _DWORD *v15; // r0
  const char *v16; // r0
  char *ptr; // [sp+14h] [bp-810h]
  char *v20; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a2 && !dword_7AE44 )
    dword_7AE44 = 1;
  if ( dword_79464 != 16 )
  {
    if ( (dword_79464 & 8) != 0 )
LABEL_8:
      _assert_fail("!(opt->type & OPT_SUBTABLE)", "cgminer.c", 0x8EBu, "parse_config");
    v2 = &off_7947C;
    while ( 1 )
    {
      v3 = *(v2 - 7);
      if ( v3 )
      {
        ptr = _strdup(v3);
        for ( i = strtok(ptr, (const char *)&word_62AA0); i; i = strtok(0, (const char *)&word_62AA0) )
        {
          if ( i[1] != 45 )
            continue;
          v5 = (_DWORD *)sub_5BC34(a1, i + 2);
          v6 = v5;
          if ( !v5 )
            continue;
          v7 = (int)*(v2 - 6);
          if ( (v7 & 6) != 0 )
          {
            if ( *v5 == 2 )
            {
              v8 = sub_5C084(v5);
              v9 = (const char *)((int (__fastcall *)(int, _DWORD))*(v2 - 4))(v8, *(v2 - 2));
              if ( *(v2 - 6) == (char *)4 )
                sub_5D37C(v8, *(v2 - 2));
              goto LABEL_33;
            }
            if ( *v5 == 1 )
            {
              v11 = 0;
              v20 = i;
LABEL_27:
              if ( v11 >= sub_5BE8C(v6) )
                continue;
              v12 = (_DWORD *)sub_5BEB8(v6, v11);
              if ( !v12 )
                continue;
              if ( *v12 == 2 )
              {
                v10 = sub_5C084(v12);
                v9 = (const char *)((int (__fastcall *)(int, _DWORD))*(v2 - 4))(v10, *(v2 - 2));
                if ( *(v2 - 6) == (char *)4 )
                  sub_5D37C(v10, *(v2 - 2));
                goto LABEL_25;
              }
              if ( !*v12 )
              {
                v9 = (const char *)sub_135F0();
LABEL_25:
                if ( v9 )
                {
                  i = v20;
                  goto LABEL_36;
                }
              }
              ++v11;
              goto LABEL_27;
            }
          }
          if ( (v7 & 1) != 0 )
          {
            if ( *v5 != 5 )
            {
              v9 = "Invalid value";
              goto LABEL_36;
            }
            v9 = (const char *)((int (__fastcall *)(_DWORD))*(v2 - 5))(*(v2 - 2));
LABEL_33:
            if ( !v9 )
              continue;
            goto LABEL_36;
          }
          v9 = "Invalid value";
LABEL_36:
          if ( !a2 )
          {
            snprintf(::s, 0xC8u, "Parsing JSON option %s: %s", i, v9);
            return ::s;
          }
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
          {
            snprintf(s, 0x800u, "Invalid config option %s: %s", i, v9);
            sub_3F178(3, s, 0);
          }
          dword_7AE44 = -1;
        }
        free(ptr);
      }
      v14 = v2[1];
      if ( v14 == (char *)16 )
        break;
      v2 += 7;
      if ( ((unsigned __int8)v14 & 8) != 0 )
        goto LABEL_8;
    }
  }
  v15 = (_DWORD *)sub_5BC34(a1, "include");
  if ( !v15 )
    return 0;
  if ( *v15 != 2 )
    return 0;
  v16 = (const char *)sub_5C084(v15);
  return sub_134B4(v16);
}
