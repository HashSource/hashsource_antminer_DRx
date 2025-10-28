int __fastcall sub_47CE0(const char *a1, signed int a2)
{
  signed int v3; // r8
  int v4; // r4
  int v5; // r0
  int v6; // r5

  if ( a2 == -1 )
    v3 = strlen(a1);
  else
    v3 = a2;
  if ( v3 <= 0 )
    return 1;
  v4 = 0;
  while ( 1 )
  {
    v5 = sub_47BB0((unsigned __int8)a1[v4]);
    v6 = v5;
    if ( !v5 )
      break;
    if ( v5 > 1 )
    {
      if ( v5 + v4 > v3 || !sub_47BF0((char *)&a1[v4], v5, 0) )
        return 0;
      v4 += v6 - 1;
    }
    if ( v3 <= ++v4 )
      return 1;
  }
  return 0;
}
