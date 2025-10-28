void __fastcall sub_404D8(int a1)
{
  int v2; // r5
  int v3; // r4
  int v4; // r7
  int v5; // r6
  int v6; // t1
  int v7; // [sp+14h] [bp-808h] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v7 = 0;
  sub_3A904(a1, &v7);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "%s: frequency = %d", "set_frequency_i", a1);
    sub_38438(7, s, 0);
  }
  v2 = 805859;
  v3 = 0;
  v4 = v7;
  v5 = 805836;
  do
  {
    v6 = *(unsigned __int8 *)++v2;
    if ( v6 == 1 )
    {
      sub_3F864(*(_DWORD *)(v5 + 8), 1, 0, 8, v4);
      *(_WORD *)(v3 + 808094) = a1;
      sub_2B244();
    }
    v3 += 2;
    v5 += 4;
  }
  while ( v3 != 8 );
}
