int __fastcall sub_17490(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    snprintf(v3, 0x800u, "WTF No pool %d found!", a1);
    sub_343C4(3, v3, 0);
  }
  return *(_DWORD *)(dword_732EC + 4 * a1);
}
