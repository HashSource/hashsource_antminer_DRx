void __fastcall sub_40D00(unsigned int a1)
{
  int v1; // r8
  int v2; // r4
  int v3; // r5
  int v4; // t1
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v1 = bswap32(a1);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "%s tm=%d", "set_asic_ticket_mask", v1);
    sub_38438(7, s, 0);
  }
  v2 = 805859;
  v3 = 805836;
  do
  {
    v4 = *(unsigned __int8 *)++v2;
    if ( v4 == 1 )
    {
      sub_3F864(*(_DWORD *)(v3 + 8), 1, 0, 20, v1);
      sub_2B21C();
    }
    v3 += 4;
  }
  while ( v2 != 805863 );
}
