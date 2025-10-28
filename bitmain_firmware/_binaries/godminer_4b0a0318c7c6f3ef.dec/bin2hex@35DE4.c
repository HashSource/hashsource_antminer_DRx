int __fastcall bin2hex(int s, int a2, int a3)
{
  int v3; // r4
  int v4; // r6
  int v5; // r5
  int v6; // t1
  char *v7; // r0

  if ( a3 )
  {
    v3 = a2 - 1;
    v4 = a2 - 1 + a3;
    v5 = s;
    do
    {
      v6 = *(unsigned __int8 *)++v3;
      v7 = (char *)v5;
      v5 += 2;
      s = sprintf(v7, "%02x", v6);
    }
    while ( v3 != v4 );
  }
  return s;
}
