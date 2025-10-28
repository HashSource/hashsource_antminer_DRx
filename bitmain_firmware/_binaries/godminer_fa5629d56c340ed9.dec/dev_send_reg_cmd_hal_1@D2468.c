size_t __fastcall dev_send_reg_cmd_hal_1(int a1, const void *a2, size_t a3)
{
  return uart_send(14, a2, a3);
}
