int __fastcall sub_13454(int a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v4; // r5
  unsigned __int8 *v5; // r8
  int v6; // r4
  int v7; // t1

  if ( a3 <= 0 )
    return 0;
  v4 = a2;
  v5 = &a2[a3];
  v6 = 0;
  do
  {
    v7 = *v4++;
    v6 += sprintf((char *)(a1 + v6), "%02X", v7);
  }
  while ( v4 != v5 );
  return v6;
}
