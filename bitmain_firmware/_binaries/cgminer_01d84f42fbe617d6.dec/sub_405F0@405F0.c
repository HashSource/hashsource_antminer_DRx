int __fastcall sub_405F0(int a1, int a2, int a3)
{
  int v7; // [sp+14h] [bp-804h] BYREF
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v7 = 0;
  sub_3A904(a2, &v7);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "%s: frequency = %d", "set_frequency_with_addr_i", a2);
    sub_38438(7, s, 0);
  }
  sub_3F864(*((_DWORD *)&unk_C4BCC + a1 + 2), 0, a3, 8, v7);
  return sub_2B21C();
}
