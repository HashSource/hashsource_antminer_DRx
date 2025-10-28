int __fastcall softreset_all_chip_dash(int *a1)
{
  sub_6F0C4((int)a1);
  usleep((__useconds_t)&stru_186A0);
  sub_6EDB0((int)a1, 8, 0);
  sub_6EDB0((int)a1, 1, 4);
  sub_6F204(a1, 255);
  return 0;
}
