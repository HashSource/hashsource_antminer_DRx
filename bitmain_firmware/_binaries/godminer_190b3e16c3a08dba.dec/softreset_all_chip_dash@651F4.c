int __fastcall softreset_all_chip_dash(int *a1)
{
  sub_64ADC((int)a1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_64780((int)a1, 8, 0);
  sub_64780((int)a1, 1, 4);
  sub_64C1C(a1, 255);
  return 0;
}
