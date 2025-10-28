int __fastcall sub_3F9D8(char a1, int a2, int a3)
{
  int v4; // [sp+Ch] [bp-8h]

  HIBYTE(v4) = a1;
  LOWORD(v4) = -26367;
  BYTE2(v4) = 17;
  sub_3F864(*((_DWORD *)&unk_C4BCC + a3 + 2), 0, (unsigned __int8)aBitmainL3Detec_0[a2 + 1604], 28, v4);
  return usleep(0x7D0u);
}
