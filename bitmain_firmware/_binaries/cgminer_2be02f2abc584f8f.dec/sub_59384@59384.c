int __fastcall sub_59384(int result, int a2)
{
  const char **v2; // r5
  int v3; // r6
  const char *v5; // r3
  const char **v6; // r4
  int v7[8]; // [sp+4h] [bp-20h] BYREF

  v2 = (const char **)result;
  v3 = dword_93CA8;
  if ( a2 )
  {
    v7[0] = 0;
    v7[1] = 8;
    memset(&v7[2], 0, 16);
    v7[6] = a2;
    result = sub_59168(v7);
  }
  v5 = v2[1];
  if ( v5 != (const char *)16 )
  {
    v6 = v2 + 7;
    do
    {
      if ( v5 == (const char *)8 )
      {
        result = sub_59384(*v2, v2[6]);
      }
      else
      {
        sub_58FE4(v2);
        result = sub_59168((int *)v2);
      }
      v2 = v6;
      v6 += 7;
      v5 = *(v6 - 6);
    }
    while ( v5 != (const char *)16 );
  }
  if ( a2 )
    *(_DWORD *)(dword_93CB0 + 28 * v3 + 20) = dword_93CA8 - v3;
  return result;
}
