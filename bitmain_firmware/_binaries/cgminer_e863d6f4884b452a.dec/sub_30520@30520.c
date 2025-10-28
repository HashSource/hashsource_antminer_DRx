int __fastcall sub_30520(unsigned int *a1, int a2, char *s, unsigned __int8 a4, int a5)
{
  unsigned int *v6; // r5
  char *v8; // r0
  char *v9; // r7
  int v10; // r8
  int v11; // r9
  int v12; // r10
  int v13; // r4
  bool v14; // zf
  const char *v16; // r3
  int v17; // r1
  unsigned __int8 v18; // [sp+20h] [bp+20h]

  if ( !s || !*s )
  {
    v16 = 0;
    v18 = a4;
    v17 = 94;
    return sub_30214(a1, v17, 0, (int)v16, v18);
  }
  v6 = a1;
  v8 = strchr(s, 44);
  v9 = v8;
  if ( !v8 || (*v8 = 0, v8 == (char *)-1) || (v10 = (unsigned __int8)v8[1], !v8[1]) )
  {
    v16 = 0;
    v18 = a4;
    a1 = v6;
    v17 = 75;
    return sub_30214(a1, v17, 0, (int)v16, v18);
  }
  if ( !strcasecmp(s, "all") )
  {
    v11 = 0;
    v12 = 1;
  }
  else
  {
    if ( strcasecmp(s, "bestshare") )
    {
      v18 = a4;
      v16 = s;
      a1 = v6;
      v17 = 95;
      return sub_30214(a1, v17, 0, (int)v16, v18);
    }
    v12 = 0;
    v11 = 1;
  }
  v13 = LOBYTE((*_ctype_tolower_loc())[v10]);
  v14 = v13 == 116;
  if ( v13 != 116 )
    v14 = v13 == 102;
  v9[1] = v13;
  if ( !v14 )
  {
    v16 = 0;
    v18 = a4;
    a1 = v6;
    v17 = 76;
    return sub_30214(a1, v17, 0, (int)v16, v18);
  }
  if ( v13 == 116 )
  {
    sub_1CE6C();
    if ( !v12 )
      goto LABEL_14;
    goto LABEL_26;
  }
  if ( v12 )
LABEL_26:
    sub_1CC0C();
LABEL_14:
  if ( v11 )
    sub_1A8B4();
  v16 = "BestShare";
  if ( v12 )
    v16 = "All";
  v18 = a4;
  a1 = v6;
  if ( v13 == 116 )
    v17 = 96;
  else
    v17 = 97;
  return sub_30214(a1, v17, 0, (int)v16, v18);
}
