__int64 __fastcall sph_bswap64(unsigned int a1, unsigned int a2)
{
  int v2; // r0
  int v3; // r1
  __int64 v4; // r2
  unsigned __int64 v6; // [sp+18h] [bp+18h]

  v6 = __PAIR64__(a1, a2);
  v2 = ((__int64)(v6 & 0xFFFF0000FFFF0000LL) >> 16) | ((_DWORD)v6 << 16);
  v3 = ((unsigned int)((v6 & 0xFFFF0000FFFF0000LL) >> 32) >> 16) | ((__int64)(v6 & 0xFFFF0000FFFFLL) >> 16);
  LODWORD(v4) = ((v2 & 0xFF00FF) << 8) | ((v2 & 0xFF00FF00) >> 8) | ((v3 & 0xFF00FF00) << 24);
  HIDWORD(v4) = ((v3 & 0xFF00FF) << 8) | ((v2 & 0xFF00FFu) >> 24) | ((v3 & 0xFF00FF00) >> 8);
  return v4;
}
