time_t __fastcall read_feedback_voltage(int a1)
{
  int v1; // s0
  int v2; // s1
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  int v8; // [sp+4h] [bp-1010h]
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( platform_is_pic_mcu_en() )
    pic1704_get_an_voltage1(a1);
  else
    bitmain_get_sample_voltage();
  V_LOCK();
  LOWORD(v4) = -4304;
  HIWORD(v4) = (unsigned int)&unk_149E88 >> 16;
  logfmt_raw(v9, 0x1000u, 0, v4, a1, v8, v1, v2);
  V_UNLOCK();
  LOWORD(v5) = -12376;
  HIWORD(v5) = (unsigned int)&unk_18C750 >> 16;
  LOWORD(v6) = -4532;
  HIWORD(v6) = (unsigned int)&unk_149DA4 >> 16;
  return zlog(*v5, v6, 150, "read_feedback_voltage", 21, 57, 20, v9);
}
