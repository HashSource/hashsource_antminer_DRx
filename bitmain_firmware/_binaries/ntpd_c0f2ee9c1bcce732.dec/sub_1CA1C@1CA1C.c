unsigned __int16 *__fastcall sub_1CA1C(int a1, __int16 a2)
{
  int v3; // r0
  int v4; // r2

  if ( (a2 & 0x100) != 0 )
    return sub_1B684(1);
  v3 = a1 + 8;
  if ( (a2 & 0x200) != 0 )
    v4 = 2;
  else
    v4 = 1;
  if ( !sub_1C824(v3, *(_DWORD *)(a1 + 64), v4, byte_7D3AE) )
    sub_1B684(1);
  return sub_19AF8(0);
}
