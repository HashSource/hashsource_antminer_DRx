int __fastcall query_device_num(int a1)
{
  int (**v1)(void); // r0

  v1 = (int (**)(void))dev_ctrl(a1);
  return (*v1)();
}
