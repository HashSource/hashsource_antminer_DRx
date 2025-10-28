int __fastcall sub_30E1C(int a1, int a2, int a3, int a4)
{
  int v6; // r5
  char **v7; // r0
  int result; // r0
  char **v9; // r0
  int v10; // [sp+Ch] [bp-4h] BYREF

  v10 = 0;
  sub_30214((unsigned int *)a1, 104, 0, 0, a4);
  if ( a4 )
  {
    v6 = sub_2E530((unsigned int *)a1, ",\"ASCS\":[");
    v7 = (char **)sub_2E418(0, "Count", 6, (const char *)&v10, 0);
    result = sub_2F9C4((unsigned int *)a1, v7, 1, 0);
    if ( v6 )
      *(_BYTE *)(a1 + 13) = 1;
  }
  else
  {
    sub_2E530((unsigned int *)a1, "ASCS,");
    v9 = (char **)sub_2E418(0, "Count", 6, (const char *)&v10, 0);
    return sub_2F9C4((unsigned int *)a1, v9, 0, 0);
  }
  return result;
}
