unsigned int __fastcall sub_386E0(int a1, int a2)
{
  int v2; // r3
  _DWORD *v4; // r4
  unsigned int result; // r0
  char s[260]; // [sp+10h] [bp-104h] BYREF

  v2 = *(_DWORD *)(a2 + 60);
  v4 = *(_DWORD **)(v2 + 28);
  if ( (*(_BYTE *)(v2 + 752) & 8) != 0 )
  {
    snprintf(s, 0x100u, "%3d %3d %3d %3d %3d", v4[1], v4[2], v4[3], v4[4], v4[5]);
    result = sub_2DDBC(a2 + 12, s);
    v4[5] = 0;
    v4[4] = 0;
    v4[3] = 0;
    v4[2] = 0;
    v4[1] = 0;
  }
  return result;
}
