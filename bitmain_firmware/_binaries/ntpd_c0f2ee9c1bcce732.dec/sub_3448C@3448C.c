int __fastcall sub_3448C(int a1, int *a2)
{
  int v4; // r6
  int v5; // r4
  const unsigned __int16 *v6; // r7
  int v7; // r3
  int v8; // r5

  v4 = 0;
  v5 = 0;
  v6 = *_ctype_b_loc();
  while ( 1 )
  {
    v8 = *(unsigned __int8 *)(a1 + v5);
    if ( (v6[v8] & 0x1000) == 0 || v5 == 2 )
      break;
    if ( (v6[v8] & 0x800) != 0 )
      v7 = (*_ctype_toupper_loc())[v8] - 48;
    else
      v7 = (*_ctype_toupper_loc())[v8] - 55;
    v4 = v7 + 16 * v4;
    ++v5;
  }
  *a2 = v4;
  return v4;
}
