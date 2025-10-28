int __fastcall sub_1469C8(__int64 a1, unsigned int a2, int a3)
{
  char v3; // zf
  int v4; // r4
  int v5; // r5
  int v6; // r4
  char v7; // lr
  unsigned int v8; // r12
  __int64 v9; // r0
  __int64 v10; // r2
  bool v12; // nf
  char v13; // r5
  int v14; // r3
  unsigned int v15; // r5
  bool v16; // off
  int v17; // off
  bool v18; // cf
  int v20; // off
  bool v21; // zf
  unsigned int v22; // r3
  int v23; // r3
  bool v24; // cc
  int v25; // r2
  unsigned int v26; // r12
  int v27; // r4
  int v28; // r4
  int v29; // r4
  char v30; // r4
  char v31; // r4
  int (__fastcall *v33)(int, unsigned int); // [sp-4h] [bp-4h]

  if ( !v3 )
  {
    v18 = a2 == 0;
    a2 = -a2;
    a3 -= 2 * a3 + !v18;
  }
  if ( v4 == v5 )
  {
    a3 ^= 0x100000u;
    if ( v4 )
    {
      --v5;
    }
    else
    {
      HIDWORD(a1) ^= 0x100000u;
      v4 = 1;
    }
  }
  v6 = v4 - 1;
  v7 = 32 - v5;
  if ( v5 > 32 )
  {
    v13 = v5 - 32;
    v8 = a3 << (v7 + 32);
    if ( a2 )
      v8 |= 2u;
    v14 = a3 >> v13;
    LODWORD(a1) = a1 + v14;
    HIDWORD(a1) += (v14 >> 31) + __CFSHR__(v14, 31);
    v12 = a1 < 0;
  }
  else
  {
    v8 = a2 << v7;
    v9 = a1 + (a2 >> v5);
    LODWORD(v10) = a3 << v7;
    HIDWORD(v10) = a3 >> v5;
    a1 = v9 + v10;
    v12 = a1 < 0;
  }
  v15 = HIDWORD(a1) & 0x80000000;
  if ( v12 )
  {
    v18 = v8 == 0;
    v8 = -v8;
    v16 = v18;
    v18 = __CFSUB__(0, (_DWORD)a1, v18);
    LODWORD(a1) = -(a1 + !v16);
    HIDWORD(a1) = -(HIDWORD(a1) + !v18);
  }
  if ( HIDWORD(a1) >= 0x100000 )
  {
    if ( HIDWORD(a1) >= 0x200000 )
    {
      v18 = BYTE4(a1) & 1;
      HIDWORD(a1) >>= 1;
      v17 = v18 << 31;
      v18 = a1 & 1;
      LODWORD(a1) = ((unsigned int)a1 >> 1) | v17;
      v8 = (v8 >> 1) | (v18 << 31);
      if ( (unsigned int)(++v6 << 21) >= 0xFFC00000 )
        JUMPOUT(0x146B8C);
    }
    goto LABEL_15;
  }
  v18 = __CFSHL__(v8, 1);
  v8 *= 2;
  v20 = v18 + (_DWORD)a1;
  v18 = __CFADD__(v18, (_DWORD)a1) | __CFADD__((_DWORD)a1, v20);
  LODWORD(a1) = a1 + v20;
  HIDWORD(a1) += v18 + HIDWORD(a1);
  --v6;
  if ( (a1 & 0x10000000000000LL) != 0 )
  {
LABEL_15:
    v18 = v8 >= 0x80000000;
    if ( v8 == 0x80000000 )
      v18 = a1 & 1;
    return v33(v18 + (_DWORD)a1, ((__PAIR64__(v6 << 20, v18) + a1) >> 32) | v15);
  }
  v21 = HIDWORD(a1) == 0;
  if ( !HIDWORD(a1) )
  {
    HIDWORD(a1) = a1;
    LODWORD(a1) = 0;
  }
  v22 = __clz(HIDWORD(a1));
  if ( v21 )
    v22 += 32;
  v23 = v22 - 11;
  v25 = v23 - 32;
  v24 = v23 <= 32;
  if ( v23 >= 32 )
    goto LABEL_27;
  v24 = v25 <= -12;
  if ( v25 <= -12 )
  {
    LOBYTE(v25) = v23;
LABEL_27:
    if ( v24 )
      LOBYTE(v8) = 32 - v25;
    HIDWORD(a1) <<= v25;
    v26 = (unsigned int)a1 >> v8;
    if ( v24 )
    {
      HIDWORD(a1) |= v26;
      LODWORD(a1) = (_DWORD)a1 << v25;
    }
    goto LABEL_31;
  }
  LODWORD(a1) = HIDWORD(a1) << v23;
  HIDWORD(a1) >>= 32 - v23;
LABEL_31:
  v24 = v6 < v23;
  v27 = v6 - v23;
  if ( !v24 )
    return v33(a1, (HIDWORD(a1) + (v27 << 20)) | v15);
  v28 = ~v27;
  v24 = v28 < 31;
  v29 = v28 - 31;
  if ( !v24 )
    return v33(HIDWORD(a1) >> v29, v15);
  v24 = v29 <= -12;
  v30 = v29 + 12;
  if ( v24 )
  {
    v31 = v30 + 20;
    LODWORD(a1) = ((unsigned int)a1 >> v31) | (HIDWORD(a1) << (32 - v31));
    HIDWORD(a1) = v15 | (HIDWORD(a1) >> v31);
  }
  else
  {
    LODWORD(a1) = ((unsigned int)a1 >> (v30 + 20)) | (HIDWORD(a1) << (12 - v30));
    HIDWORD(a1) = v15;
  }
  return v33(a1, HIDWORD(a1));
}
