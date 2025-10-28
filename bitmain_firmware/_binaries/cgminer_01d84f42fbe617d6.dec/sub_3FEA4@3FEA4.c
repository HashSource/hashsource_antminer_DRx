void __fastcall sub_3FEA4(unsigned __int8 a1, char a2, char a3, unsigned __int8 a4)
{
  int v4; // r7
  int v5; // r4
  int v6; // r5
  int v7; // t1
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = ((a3 & 1) << 7) | ((a2 & 0xF) << 8) | (a1 << 16) & 0xFFFFFF | (a4 << 24);
  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    snprintf(s, 0x800u, "opt_bitmain_L3_core_temp : %x", byte_60DEB);
    sub_38438(5, s, 0);
  }
  v5 = 805859;
  v6 = 805836;
  do
  {
    v7 = *(unsigned __int8 *)++v5;
    if ( v7 == 1 )
    {
      sub_3F864(*(_DWORD *)(v6 + 8), 0, 12, 60, v4);
      sub_2B21C();
      sub_3F864(*(_DWORD *)(v6 + 8), 0, 201, 60, v4);
      sub_2B21C();
    }
    v6 += 4;
  }
  while ( v5 != 805863 );
}
