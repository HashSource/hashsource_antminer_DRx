int __fastcall sub_493DC(__int64 a1)
{
  bool v1; // cf
  int v2; // off
  int v3; // r4
  bool v4; // zf
  unsigned int v5; // r3
  int v6; // r3
  bool v7; // cc
  int v8; // r2
  int v9; // r4
  int v10; // r4
  char v11; // r4
  int v12; // r4
  unsigned int v13; // r12
  int v14; // r2
  int v15; // r2

  if ( !a1 )
    return a1;
  if ( a1 < 0 )
    a1 = -a1;
  v12 = 1074;
  v13 = HIDWORD(a1) >> 22;
  if ( HIDWORD(a1) >> 22 )
  {
    v14 = 3;
    if ( HIDWORD(a1) >> 25 )
      v14 = 6;
    if ( HIDWORD(a1) >> 28 )
      v14 += 3;
    v15 = v14 + (HIDWORD(a1) >> 31);
    v13 = (_DWORD)a1 << (32 - v15);
    LODWORD(a1) = ((unsigned int)a1 >> v15) | (HIDWORD(a1) << (32 - v15));
    HIDWORD(a1) >>= v15;
    v12 = v15 + 1074;
  }
  if ( HIDWORD(a1) >= 0x100000 )
  {
    if ( HIDWORD(a1) >= 0x200000 )
    {
      v1 = a1 & 1;
      LODWORD(a1) = a1 >> 1;
      v13 = (v13 >> 1) | (v1 << 31);
      if ( (unsigned int)((v12 + 1) << 21) >= 0xFFC00000 )
      {
        LODWORD(a1) = 0;
        return a1;
      }
    }
    goto LABEL_13;
  }
  v1 = __CFSHL__(v13, 1);
  v13 *= 2;
  v2 = v1 + (_DWORD)a1;
  v1 = __CFADD__(v1, (_DWORD)a1) | __CFADD__((_DWORD)a1, v2);
  LODWORD(a1) = a1 + v2;
  HIDWORD(a1) += v1 + HIDWORD(a1);
  v3 = v12 - 1;
  if ( (a1 & 0x10000000000000LL) != 0 )
  {
LABEL_13:
    v1 = v13 >= 0x80000000;
    if ( v13 == 0x80000000 )
      v1 = a1 & 1;
    LODWORD(a1) = v1 + (_DWORD)a1;
    return a1;
  }
  v4 = HIDWORD(a1) == 0;
  if ( !HIDWORD(a1) )
  {
    HIDWORD(a1) = a1;
    LODWORD(a1) = 0;
  }
  v5 = __clz(HIDWORD(a1));
  if ( v4 )
    v5 += 32;
  v6 = v5 - 11;
  v8 = v6 - 32;
  v7 = v6 <= 32;
  if ( v6 >= 32 )
    goto LABEL_25;
  v7 = v8 <= -12;
  if ( v8 <= -12 )
  {
    LOBYTE(v8) = v6;
LABEL_25:
    if ( v7 )
      LOBYTE(v13) = 32 - v8;
    HIDWORD(a1) <<= v8;
    if ( v7 )
    {
      HIDWORD(a1) |= (unsigned int)a1 >> v13;
      LODWORD(a1) = (_DWORD)a1 << v8;
    }
    goto LABEL_29;
  }
  LODWORD(a1) = HIDWORD(a1) << v6;
  HIDWORD(a1) >>= 32 - v6;
LABEL_29:
  v7 = v3 < v6;
  v9 = v3 - v6;
  if ( v7 )
  {
    v10 = ~v9;
    v7 = v10 < 31;
    v11 = v10 - 31;
    if ( v7 )
      LODWORD(a1) = ((unsigned int)a1 >> (v11 + 32)) | (HIDWORD(a1) << -v11);
    else
      LODWORD(a1) = HIDWORD(a1) >> v11;
  }
  return a1;
}
