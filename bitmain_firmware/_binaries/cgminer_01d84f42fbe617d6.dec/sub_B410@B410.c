int __fastcall sub_B410(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
  {
    snprintf(v3, 0x800u, "WTF No pool %d found!", a1);
    sub_38438(3, v3, 0);
  }
  return *(_DWORD *)(dword_639E0 + 4 * a1);
}
