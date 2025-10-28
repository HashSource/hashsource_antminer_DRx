int __fastcall sub_46504(const char *a1, signed int a2)
{
  signed int v2; // r8
  int v4; // r4
  int v5; // r5
  char *v6; // r0

  v2 = a2;
  if ( a2 == -1 )
    v2 = strlen(a1);
  if ( v2 <= 0 )
    return 1;
  v4 = 0;
  while ( 1 )
  {
    v5 = sub_4633C((unsigned __int8)a1[v4]);
    v6 = (char *)&a1[v4];
    if ( !v5 )
      break;
    if ( v5 > 1 )
    {
      if ( v2 < v4 + v5 )
        break;
      v4 += v5 - 1;
      if ( !sub_463B8(v6, v5, 0) )
        break;
    }
    if ( v2 <= ++v4 )
      return 1;
  }
  return 0;
}
