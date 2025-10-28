int __fastcall sub_B1D8(int a1, int a2, int a3, __int16 a4)
{
  unsigned int v8; // r1
  int v9; // r2
  char v10; // r3
  int v11; // r6
  unsigned int v12; // r1
  char v13; // r3
  char v14; // r6
  int v15; // r12
  unsigned int v16; // r1
  unsigned int v17; // r12
  char v18; // r10
  int v19; // r7
  int result; // r0
  int v21; // r8
  const char *v22; // r4
  const char *v23; // r0
  int v24; // r8
  size_t n; // r6
  unsigned int v26; // r3
  bool v27; // zf
  int v28; // r3
  int v29; // r10
  const char *v30; // r4
  const char *v31; // r0
  unsigned int v32; // [sp+14h] [bp-60h] BYREF
  unsigned int v33; // [sp+18h] [bp-5Ch]
  int v34; // [sp+1Ch] [bp-58h] BYREF
  unsigned int v35; // [sp+20h] [bp-54h]
  char v36; // [sp+24h] [bp-50h] BYREF
  char v37; // [sp+25h] [bp-4Fh]
  char v38; // [sp+26h] [bp-4Eh]
  char v39; // [sp+27h] [bp-4Dh]
  unsigned int v40; // [sp+28h] [bp-4Ch]
  unsigned int v41; // [sp+2Ch] [bp-48h]
  int v42; // [sp+30h] [bp-44h]
  unsigned int v43; // [sp+34h] [bp-40h]
  unsigned int v44; // [sp+38h] [bp-3Ch]
  unsigned int v45; // [sp+3Ch] [bp-38h]
  unsigned int v46; // [sp+40h] [bp-34h]
  unsigned int v47; // [sp+44h] [bp-30h]
  unsigned int v48; // [sp+48h] [bp-2Ch]
  unsigned int v49; // [sp+4Ch] [bp-28h]
  unsigned int v50; // [sp+50h] [bp-24h]

  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 64) + 140) & 0x40) != 0 )
    *(_DWORD *)(a1 + 64) = sub_15BD4(a1 + 8);
  if ( (a4 & 0x400) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 136);
    v9 = *(_BYTE *)(a1 + 92) & 0x38;
    v45 = *(_DWORD *)(a1 + 132);
    v46 = v8;
    v47 = v45;
    v48 = v8;
    v10 = dword_7A1C8;
    v11 = *(unsigned __int8 *)(a1 + 94);
    v36 = ~((unsigned int)~(v9 << 26) >> 26) | a2 & 7;
    if ( v11 >= dword_7A1C8 )
      v10 = v11;
    ++dword_CB4E4;
    v49 = v45;
    v50 = v8;
    v38 = v10;
    v42 = *(_DWORD *)"RATE";
    v37 = 0;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 136);
    v13 = byte_CB4FC;
    v14 = dword_7A1C8;
    v45 = *(_DWORD *)(a1 + 132);
    v46 = v12;
    if ( byte_CB4FC == 16 )
      v13 = 0;
    v15 = *(unsigned __int8 *)(a1 + 94);
    v16 = bswap32(dword_CB500);
    v47 = bswap32(*(_DWORD *)(a1 + 76));
    if ( v15 >= dword_7A1C8 )
      v14 = v15;
    v17 = *(_DWORD *)(a1 + 80);
    v37 = v13;
    v48 = bswap32(v17);
    v38 = v14;
    v43 = v16;
    v39 = byte_CB478;
    v18 = *(_BYTE *)(a1 + 92);
    v44 = bswap32(dword_CB504);
    v42 = dword_CB4E0;
    v36 = a2 & 7 | (byte_CB4B0 << 6) | v18 & 0x38;
    v40 = bswap32((int)(dbl_CB4B8 * 65536.0));
    v41 = bswap32((unsigned int)(dbl_CB498 * 65536.0));
    sub_4CBA8(&v32);
    v49 = bswap32(v32);
    v50 = bswap32(v33);
  }
  if ( *(_DWORD *)(a1 + 88) == 48 )
  {
    v19 = a1 + 8;
    result = sub_154A4((struct sockaddr *)(a1 + 8), *(_DWORD *)(a1 + 64), 0, (int)&v36, 0x30u);
    if ( dword_7CF4C )
    {
      v21 = dword_CB548;
      v22 = (const char *)sub_50CD0(*(_DWORD *)(a1 + 64) + 20);
      v23 = (const char *)sub_50CD0(v19);
      return printf("transmit: at %ld %s->%s mode %d len %d\n", v21, v22, v23, a2, 48);
    }
  }
  else
  {
    v24 = a1 + 8;
    sub_4CBA8(&v32);
    n = sub_4E458(a3, &v36, 48) + 48;
    sub_154A4((struct sockaddr *)(a1 + 8), *(_DWORD *)(a1 + 64), 0, (int)&v36, n);
    sub_4CBA8(&v34);
    if ( v33 )
    {
      v26 = HIWORD(v35) + (-v33 >> 16);
      if ( (((unsigned __int16)v35 + (unsigned __int16)-(__int16)v33) & 0x10000) != 0 )
        ++v26;
      v27 = (v26 & 0x10000) == 0;
      v35 = (unsigned __int16)(v35 - v33) | (v26 << 16);
      v28 = ~v32 + v34;
      if ( !v27 )
        ++v28;
      v34 = v28;
    }
    else
    {
      v34 -= v32;
    }
    result = v34;
    unk_CB458 = v34;
    dword_CB45C = v35;
    if ( dword_7CF4C )
    {
      v29 = dword_CB548;
      v30 = (const char *)sub_50CD0(*(_DWORD *)(a1 + 64) + 20);
      v31 = (const char *)sub_50CD0(v24);
      return printf("transmit: at %ld %s->%s mode %d keyid %08x len %d\n", v29, v30, v31, a2, a3, n);
    }
  }
  return result;
}
