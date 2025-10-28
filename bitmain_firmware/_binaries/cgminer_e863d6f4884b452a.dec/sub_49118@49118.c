int __fastcall sub_49118(int result, int a2)
{
  const char **v2; // r4
  int v4; // r7
  const char *v5; // r3
  int v6[8]; // [sp+4h] [bp-20h] BYREF

  v2 = (const char **)result;
  v4 = dword_A71FC;
  if ( a2 )
  {
    v6[0] = 0;
    memset(&v6[2], 0, 16);
    v6[6] = a2;
    v6[1] = 8;
    sub_48FE8(v6);
    v5 = v2[1];
    if ( v5 == (const char *)16 )
    {
LABEL_7:
      result = 7 * v4;
      *(_DWORD *)(dword_A71F4 + 28 * v4 + 20) = dword_A71FC - v4;
      return result;
    }
  }
  else
  {
    v5 = *(const char **)(result + 4);
    if ( v5 == (const char *)16 )
      return result;
  }
  do
  {
    if ( v5 == (const char *)8 )
    {
      result = sub_49118(*v2, v2[6]);
    }
    else
    {
      sub_48EDC(v2);
      result = sub_48FE8((int *)v2);
    }
    v2 += 7;
    v5 = v2[1];
  }
  while ( v5 != (const char *)16 );
  if ( a2 )
    goto LABEL_7;
  return result;
}
