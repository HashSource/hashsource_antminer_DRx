size_t __fastcall dcr_uart_send(unsigned __int8 a1, const void *a2, size_t a3)
{
  _BYTE s[512]; // [sp+14h] [bp+14h] BYREF
  int v9; // [sp+214h] [bp+214h]

  v9 = 0;
  if ( a1 == 255 )
  {
    printf("%s: invalid chain id\n", "dcr_uart_send");
    return -1;
  }
  else
  {
    memset(s, 0, sizeof(s));
    s[0] = 85;
    s[1] = -86;
    memcpy(&s[2], a2, a3);
    return uart_send(a1, s, a3 + 2);
  }
}
