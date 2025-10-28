int __fastcall hs_hex_encode(int a1, int a2, _BYTE *a3)
{
  int v3; // r3

  v3 = a2;
  if ( a2 )
    v3 = 1;
  if ( a1 )
    v3 = 0;
  if ( !a3 )
    v3 = 1;
  if ( v3 )
    return 0;
  else
    return sub_EA830(a1, a2, a3);
}
