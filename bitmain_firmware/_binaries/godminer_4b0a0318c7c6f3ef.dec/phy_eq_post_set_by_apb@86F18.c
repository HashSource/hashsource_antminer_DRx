int __fastcall phy_eq_post_set_by_apb(int result, unsigned int a2, unsigned __int8 *a3, int a4, unsigned __int8 a5)
{
  unsigned __int8 *v5; // r7
  int v7; // r8
  int v8; // r5
  int v9; // r4
  int v10; // r6
  int v11; // r2
  unsigned __int8 *v12; // [sp+4h] [bp-8h]

  if ( a4 )
  {
    v5 = a3;
    v7 = result;
    v12 = &a3[(unsigned __int8)(a4 - 1) + 1];
    do
    {
      v8 = 0;
      do
      {
        v9 = v8 | 0x1004;
        v10 = serdes_apb_read(v7, a2, *v5, v8 | 0x1004) & 0xE07F | (a5 << 7);
        v11 = v8 | 0x1004;
        v8 = (unsigned __int16)(v8 + 512);
        sub_80014(v7, *v5, v11, v10);
        result = sub_80014(v7, *v5, v9, v10 | 0x2000);
      }
      while ( v8 != 2048 );
      ++v5;
    }
    while ( v5 != v12 );
  }
  return result;
}
