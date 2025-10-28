int __fastcall softreset_all_chip_hns(int *a1)
{
  sub_8C6E0((int)a1);
  usleep(0x3E8u);
  sub_8C3A0((int)a1, 8, 0);
  usleep(0x64u);
  sub_8C3A0((int)a1, 16, 0);
  usleep(0x64u);
  set_nonce_cycle_limit((int)a1);
  usleep(0x64u);
  sub_8C80C(a1, 255);
  usleep(0x64u);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
