int __fastcall power_off_hal(int a1)
{
  int v2; // r3

  if ( platform_is_pic_mcu_en() )
  {
    LOWORD(v2) = -8752;
    HIWORD(v2) = (unsigned int)&unk_186FC0 >> 16;
    pic1704_enable_disable_dc_dc(*(_BYTE *)(v2 + 8 * a1), 0);
    usleep(0x493E0u);
  }
  return 0;
}
