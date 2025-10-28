int __fastcall sub_D3E0(FILE *a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r5
  int v6; // r0

  v4 = (_DWORD *)dword_7CDF8;
  if ( !dword_7CDF8 )
    return 0;
  v5 = 0;
  do
  {
    v6 = sub_C2A8((int)v4, a1, a2);
    v4 = (_DWORD *)*v4;
    v5 |= v6;
  }
  while ( v4 );
  return v5;
}
