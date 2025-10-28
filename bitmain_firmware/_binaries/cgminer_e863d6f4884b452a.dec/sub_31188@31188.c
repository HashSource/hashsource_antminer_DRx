int __fastcall sub_31188(int a1, int a2, char *s2, int a4, unsigned __int8 a5)
{
  const char *v8; // r3
  char **v9; // r4
  const char *v10; // t1
  const __int32_t **v11; // r0
  __int32_t v12; // r3
  int v13; // r5
  _DWORD *v14; // r0
  const char *v15; // r3
  char **v16; // r0
  int result; // r0
  int v18; // r0
  const char *v19; // r3
  int v20; // r0
  int v21; // r0
  char s[100]; // [sp+Ch] [bp-64h] BYREF

  if ( !s2 || !*s2 )
    return sub_30214((unsigned int *)a1, 71, 0, 0, a4);
  v8 = off_6D1C4;
  if ( off_6D1C4 )
  {
    v9 = &off_6D1C4;
    while ( strcmp(v8, s2) )
    {
      v10 = v9[3];
      v9 += 3;
      v8 = v10;
      if ( !v10 )
      {
        sub_30214((unsigned int *)a1, 72, 0, 0, a4);
        if ( !a4 )
          goto LABEL_20;
        goto LABEL_17;
      }
    }
    sprintf(s, "|%s|", s2);
    v11 = _ctype_toupper_loc();
    v12 = (*v11)[a5];
    if ( v12 == (*v11)[87] || strstr(*((const char **)&unk_73E10 + v12 - (*v11)[65]), s) )
    {
      sub_30214((unsigned int *)a1, 72, 0, 0, a4);
      if ( a4 )
        v13 = sub_2E530((unsigned int *)a1, ",\"CHECK\":[");
      else
        v13 = sub_2E530((unsigned int *)a1, "CHECK,");
      v14 = sub_2E418(0, "Exists", 2, "Y", 0);
      v15 = "Y";
      goto LABEL_12;
    }
    sub_30214((unsigned int *)a1, 72, 0, 0, a4);
    if ( a4 )
      v21 = sub_2E530((unsigned int *)a1, ",\"CHECK\":[");
    else
      v21 = sub_2E530((unsigned int *)a1, "CHECK,");
    v19 = "Y";
    v13 = v21;
  }
  else
  {
    sub_30214((unsigned int *)a1, 72, 0, 0, a4);
    if ( a4 )
    {
LABEL_17:
      v18 = sub_2E530((unsigned int *)a1, ",\"CHECK\":[");
      v19 = "N";
      v13 = v18;
    }
    else
    {
LABEL_20:
      v20 = sub_2E530((unsigned int *)a1, "CHECK,");
      v19 = "N";
      v13 = v20;
    }
  }
  v14 = sub_2E418(0, "Exists", 2, v19, 0);
  v15 = "N";
LABEL_12:
  v16 = (char **)sub_2E418(v14, "Access", 2, v15, 0);
  result = sub_2F9C4((unsigned int *)a1, v16, a4, 0);
  if ( (a4 & v13) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
