int __fastcall sub_4631C(int a1)
{
  int v2; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sub_43650(a1, 6, 0);
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(s, 0x800u, "%s: erase_loop = %d\n", "erase_PIC16F1704_app_flash_new", 76);
    sub_3F1C0(5, s, 0);
  }
  v2 = 76;
  do
  {
    sub_44118(a1);
    --v2;
  }
  while ( v2 );
  return 0;
}
