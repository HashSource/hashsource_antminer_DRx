int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int is_pic_mcu_en; // r4
  int v8; // r4
  int v9; // r3
  int v10; // r6
  int v11; // r7
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r1
  char v15[4096]; // [sp+10h] [bp-1000h] BYREF

  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    v8 = pic1704_reset(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    is_pic_mcu_en = v8 + pic1704_jump_to_app(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    if ( a3 )
      goto LABEL_3;
  }
  else if ( a3 )
  {
    goto LABEL_3;
  }
  if ( !platform_is_pic_mcu_en() )
  {
LABEL_3:
    if ( !platform_is_pic_mcu_en() )
      goto LABEL_4;
    goto LABEL_10;
  }
  LOWORD(v9) = 28536;
  HIWORD(v9) = (unsigned int)&unk_1B5E60 >> 16;
  set_chain_isl_voltage(*(_DWORD *)(v9 + 8 * a1), a2);
  if ( !platform_is_pic_mcu_en() )
    goto LABEL_4;
LABEL_10:
  LOWORD(v10) = 28536;
  HIWORD(v10) = (unsigned int)&unk_1B5E60 >> 16;
  v11 = is_pic_mcu_en + pic1704_enable_disable_dc_dc(*(_BYTE *)(v10 + 8 * a1), 1);
  if ( v11 != 3 )
  {
    V_LOCK();
    LOWORD(v12) = -24820;
    HIWORD(v12) = (unsigned int)"pic sensor addr" >> 16;
    logfmt_raw(v15, 0x1000u, 0, v12, *(_DWORD *)(v10 + 8 * a1), v11);
    V_UNLOCK();
    LOWORD(v13) = 24916;
    HIWORD(v13) = (unsigned int)&unk_1B503C >> 16;
    LOWORD(v14) = -25292;
    HIWORD(v14) = (unsigned int)"ersion OOM" >> 16;
    zlog(*v13, v14, 164, "power_on_hal", 12, 481, 100, v15);
    return -1;
  }
LABEL_4:
  if ( (unsigned int)(opt_algo - 11) > 1 )
    sleep(1u);
  return 0;
}
