int __fastcall hs_date(
        int result,
        int a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5,
        int *a6,
        int *a7,
        _DWORD *a8)
{
  unsigned int v8; // r1
  unsigned int v9; // r11
  unsigned int v10; // r8
  unsigned int v11; // r1
  unsigned int v12; // r8
  unsigned int v13; // r1
  unsigned int v14; // lr
  int v15; // r4
  unsigned int v16; // r4
  unsigned int v17; // r11

  v8 = result / 86400 + 719468;
  v9 = v8 / 0x23AB1;
  v8 %= 0x23AB1u;
  v10 = v8 + v8 / 0x8EAC - v8 / 0x5B4 - v8 / 0x23AB0;
  v11 = v8 + v10 / 0x8E94 - v10 / 0x5B4;
  v12 = v10 / 0x16D;
  v13 = v11 - 365 * v12;
  v14 = (5 * v13 + 2) / 0x99;
  if ( v14 >= 0xA )
    v15 = -9;
  else
    v15 = 3;
  v16 = v15 + v14;
  if ( a3 )
  {
    v17 = v12 + 400 * v9;
    if ( v16 <= 2 )
      ++v17;
    *a3 = v17;
  }
  if ( a4 )
    *a4 = v16;
  if ( a5 )
    *a5 = v13 + 1 - (153 * v14 + 2) / 5;
  if ( a6 )
    *a6 = result / 3600 % 24;
  if ( a7 )
    *a7 = result / 60 % 60;
  if ( a8 )
  {
    result %= 60;
    *a8 = result;
  }
  return result;
}
