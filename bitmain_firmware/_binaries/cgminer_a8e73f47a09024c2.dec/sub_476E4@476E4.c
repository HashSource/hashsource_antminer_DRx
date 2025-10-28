int __fastcall sub_476E4(int a1)
{
  int v2; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sub_44A18(a1, 6, 0);
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "%s: erase_loop = %d\n", "erase_PIC16F1704_app_flash_new", 76);
    sub_3F178(5, s, 0);
  }
  v2 = 76;
  do
  {
    sub_454E0(a1);
    --v2;
  }
  while ( v2 );
  return 0;
}
