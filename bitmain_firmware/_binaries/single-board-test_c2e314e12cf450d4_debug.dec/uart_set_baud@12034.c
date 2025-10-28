int __fastcall uart_set_baud(unsigned __int8 a1, int a2)
{
  int v3; // [sp+0h] [bp+0h] BYREF
  unsigned __int8 v4; // [sp+7h] [bp+7h]

  v3 = a2;
  v4 = a1;
  printf("uart_set_config %d \n", a2);
  return uart_set_config(v4, 0, &v3);
}
