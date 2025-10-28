int __fastcall sub_3A034(int a1)
{
  int v2; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sub_3837C(a1, 6, 0);
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "%s: erase_loop = %d\n", "erase_PIC16F1704_app_flash_new", 76);
    sub_343C4(5, s, 0);
  }
  v2 = 76;
  do
  {
    sub_38A40(a1);
    --v2;
  }
  while ( v2 );
  return 0;
}
