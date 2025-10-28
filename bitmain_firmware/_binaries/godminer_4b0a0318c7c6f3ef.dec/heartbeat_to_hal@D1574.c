int __fastcall heartbeat_to_hal(int a1)
{
  int result; // r0

  result = platform_is_pic_mcu_en();
  if ( result )
    return pic1704_heart_beat(g_chain_info[2 * a1]);
  return result;
}
