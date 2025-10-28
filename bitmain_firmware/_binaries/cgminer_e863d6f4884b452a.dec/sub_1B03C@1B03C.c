int __fastcall sub_1B03C(int a1, int a2, int a3)
{
  int v3; // r5
  int v4; // r4
  int v6; // r6
  int v7; // t1
  char *v8; // r0

  if ( a3 <= 0 )
    return 0;
  v4 = a2 - 1;
  v6 = a3 + a2 - 1;
  v3 = 0;
  do
  {
    v7 = *(unsigned __int8 *)++v4;
    v8 = (char *)(a1 + v3);
    v3 += 2;
    sprintf(v8, "%02X", v7);
  }
  while ( v4 != v6 );
  return v3;
}
