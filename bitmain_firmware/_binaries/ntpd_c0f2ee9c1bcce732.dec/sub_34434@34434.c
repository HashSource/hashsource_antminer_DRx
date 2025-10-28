int __fastcall sub_34434(int a1, int *a2)
{
  const unsigned __int16 **v4; // r0
  int v5; // r2
  int v6; // r3
  const unsigned __int16 *v7; // r0
  int v9; // r12

  v4 = _ctype_b_loc();
  v5 = 0;
  v6 = 0;
  v7 = *v4;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(a1 + v6);
    if ( (v7[v9] & 0x800) == 0 )
      break;
    if ( v6++ == 2 )
      break;
    v5 = v9 - 48 + 10 * v5;
  }
  *a2 = v5;
  return v5;
}
