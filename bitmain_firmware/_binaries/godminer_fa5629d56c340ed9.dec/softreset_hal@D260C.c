unsigned int __fastcall softreset_hal(int a1)
{
  unsigned int result; // r0
  _BYTE v3[20]; // [sp+0h] [bp-14h] BYREF

  while ( uart_receive(g_chain_info[2 * a1], (int)v3, 0x10u) )
    ;
  sleep(1u);
  do
    result = uart_receive(g_chain_info[2 * a1], (int)v3, 0x10u);
  while ( result );
  return result;
}
