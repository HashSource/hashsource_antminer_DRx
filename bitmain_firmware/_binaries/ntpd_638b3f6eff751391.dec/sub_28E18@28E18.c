unsigned __int16 *__fastcall sub_28E18(int a1, int a2, int a3)
{
  _DWORD *v3; // r0
  unsigned int v4; // r3
  unsigned int v5; // r2

  v3 = sub_28654(a1, a2, (char *)(a3 + 2), (char *)(a3 + 3), 16);
  v4 = bswap32(dword_CB548 - dword_CB540);
  v5 = bswap32(dword_CB544);
  v3[2] = bswap32(dword_CB54C);
  *v3 = v4;
  v3[3] = v5;
  v3[1] = v4;
  sub_2824C();
  return sub_28778();
}
