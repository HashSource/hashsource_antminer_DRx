int __fastcall sub_E1B0(int a1, int a2)
{
  time_t v4; // r0
  unsigned int v5; // r2
  int v6; // r12
  int v7; // r3
  unsigned int v8; // r2
  bool v9; // zf
  unsigned int v10; // r2
  int v11; // r3
  int v12; // r4
  int v13; // r0
  unsigned int v14; // r3
  int v15; // r0
  unsigned int v16; // r2
  int result; // r0
  int v18; // r3
  int v19; // r1
  unsigned int v20; // r3
  int v21; // r1
  unsigned int v22; // r2
  int v23; // r3
  int v24; // [sp+4h] [bp-4h] BYREF

  v4 = time(0);
  v5 = HIWORD(v4);
  v6 = v4 >> 31;
  v7 = (unsigned __int16)v4 + 0xFFFF;
  if ( (v7 & 0x10000) != 0 )
    v8 = v5 + 0x8000;
  else
    v8 = v5 + 32512;
  if ( (v7 & 0x10000) == 0 )
    v8 += 255;
  v9 = (v8 & 0x10000) == 0;
  v10 = (unsigned __int16)(v4 - 1) | (v8 << 16);
  if ( !v9 )
    ++v6;
  v11 = a1 + 2085978496;
  v12 = 0;
  if ( v10 < v11 )
    --v6;
  while ( v6 != v11 >> 31 )
  {
    while ( v6 >= 0 )
    {
      if ( ++v12 > 3 )
        return 0;
      v13 = (unsigned __int16)v11;
      v14 = HIWORD(v11);
      v15 = v13 + 9088;
      if ( (v15 & 0x10000) != 0 )
        v16 = v14 + 52054;
      else
        v16 = v14 + 52053;
      v11 = (unsigned __int16)v15 | (v16 << 16);
      if ( (v16 & 0x10000) == 0 )
        --v6;
      if ( v6 == v11 >> 31 )
        goto LABEL_19;
    }
    if ( --v12 < -3 )
      return 0;
    v19 = (unsigned __int16)v11;
    v20 = HIWORD(v11);
    v21 = v19 + 56448;
    if ( (v21 & 0x10000) != 0 )
      v22 = v20 + 13483;
    else
      v22 = v20 + 13482;
    v11 = (unsigned __int16)v21 | (v22 << 16);
    if ( (v22 & 0x10000) != 0 )
      ++v6;
  }
LABEL_19:
  v24 = v11;
  while ( 1 )
  {
    result = a2 ? (int)localtime(&v24) : (int)gmtime(&v24);
    if ( result )
      break;
    v18 = v24 - 883612800;
    if ( v24 < 0 )
    {
      if ( --v12 < -3 )
        return 0;
      v24 += 883612800;
    }
    else
    {
      if ( ++v12 > 3 )
        return 0;
      v24 -= 883612800;
      if ( v18 < 0 )
        return 0;
    }
  }
  if ( v12 )
  {
    v23 = *(_DWORD *)(result + 20) + 28 * v12;
    *(_DWORD *)(result + 20) = v23;
    if ( (unsigned int)(v23 - 1) > 0xC6 )
      return 0;
  }
  return result;
}
