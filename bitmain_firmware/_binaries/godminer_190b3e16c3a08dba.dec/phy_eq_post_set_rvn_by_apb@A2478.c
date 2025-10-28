int __fastcall phy_eq_post_set_rvn_by_apb(int result, unsigned int a2, unsigned __int8 *a3, int a4, unsigned __int8 a5)
{
  unsigned __int8 *v5; // r7
  int v7; // r8
  int v8; // r5
  int v9; // r4
  int v10; // r6
  unsigned __int8 *v11; // [sp+4h] [bp-8h]

  if ( a4 )
  {
    v5 = a3;
    v7 = result;
    v11 = &a3[(unsigned __int8)(a4 - 1) + 1];
    do
    {
      v8 = 0;
      do
      {
        v9 = v8 | 0x1004;
        v10 = serdes_apb_read_rvn_0(v7, a2, *v5, v8 | 0x1004) & 0xE07F | (a5 << 7);
        v8 = (unsigned __int16)(v8 + 512);
        sub_99EC0(v7, *v5, v9, v10);
        result = sub_99EC0(v7, *v5, v9, v10 | 0x2000);
      }
      while ( (unsigned __int16)v8 != 2048 );
      ++v5;
    }
    while ( v5 != v11 );
  }
  return result;
}
