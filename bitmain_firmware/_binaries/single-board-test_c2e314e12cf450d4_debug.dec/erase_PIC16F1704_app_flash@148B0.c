int __fastcall erase_PIC16F1704_app_flash(char a1, char a2)
{
  unsigned int i; // [sp+1Ch] [bp+1Ch]

  set_PIC16F1704_flash_point32_ter(a1, a2, 6u, 0);
  printf("%s: erase_loop = %d\n", "erase_PIC16F1704_app_flash", 76);
  for ( i = 0; i < 0x4C; ++i )
    erase_PIC16F1704_flash(a1, a2);
  return 76;
}
