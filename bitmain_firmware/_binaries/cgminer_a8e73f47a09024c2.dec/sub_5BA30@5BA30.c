int __fastcall sub_5BA30(const char *a1, signed int a2)
{
  signed int v3; // r7
  int v4; // r4
  int v5; // r0
  int v6; // r5

  v3 = a2;
  if ( a2 == -1 )
    v3 = strlen(a1);
  if ( v3 <= 0 )
    return 1;
  v4 = 0;
  while ( 1 )
  {
    v5 = sub_5B81C((unsigned __int8)a1[v4]);
    v6 = v5;
    if ( !v5 )
      break;
    if ( v5 > 1 )
    {
      if ( v3 < v4 + v5 || !sub_5B8A0((char *)&a1[v4], v5, 0) )
        return 0;
      v4 += v6 - 1;
    }
    if ( v3 <= ++v4 )
      return 1;
  }
  return 0;
}
