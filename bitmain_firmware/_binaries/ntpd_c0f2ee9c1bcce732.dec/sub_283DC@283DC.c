void *__fastcall sub_283DC(void **a1, int *a2)
{
  void *v3; // r4
  int v5; // r5
  void *result; // r0
  int v7; // r12
  int v8; // r11
  int v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r10
  unsigned int v12; // r8
  unsigned int v13; // r12
  unsigned int v14; // lr
  unsigned int v15; // r9
  unsigned int v16; // r3
  unsigned int v17; // r0
  unsigned int v18; // r3
  unsigned int v19; // r1
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r2
  int v28; // r3

  v3 = *a1;
  v5 = *a2;
  result = memset(*a1, 0, 0x88u);
  if ( *(_WORD *)(v5 + 20) != 10 )
  {
    *((_DWORD *)v3 + 12) = 0;
    v7 = 0;
    *(_DWORD *)v3 = *(_DWORD *)(v5 + 24);
    *((_DWORD *)v3 + 4) = *(_DWORD *)(v5 + 80);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(v5 + 52);
LABEL_3:
    *((_DWORD *)v3 + 12) = v7;
    strncpy((char *)v3 + 52, (const char *)(v5 + 104), 0x20u);
    v8 = *(_DWORD *)(v5 + 176);
    v9 = (*(unsigned __int16 *)(v5 + 136) << 8) | HIBYTE(*(unsigned __int16 *)(v5 + 136));
    v10 = bswap32(*(_DWORD *)(v5 + 144));
    v11 = *(_DWORD *)(v5 + 160);
    v12 = *(_DWORD *)(v5 + 164);
    v13 = bswap32(dword_CB548 - *(_DWORD *)(v5 + 156));
    v14 = *(_DWORD *)(v5 + 168);
    v15 = bswap32(*(_DWORD *)(v5 + 152));
    *((_DWORD *)v3 + 21) = bswap32(*(_DWORD *)(v5 + 140));
    v16 = *(_DWORD *)(v5 + 172);
    *((_DWORD *)v3 + 22) = v10;
    v17 = *(_DWORD *)(v5 + 16);
    v18 = bswap32(v16);
    *((_BYTE *)v3 + 130) = v8;
    v19 = *(_DWORD *)(v5 + 184);
    *((_DWORD *)v3 + 23) = v15;
    *((_DWORD *)v3 + 24) = bswap32(v11);
    *((_DWORD *)v3 + 25) = bswap32(v12);
    *((_DWORD *)v3 + 26) = bswap32(v14);
    *((_DWORD *)v3 + 29) = v18;
    *((_DWORD *)v3 + 28) = v18;
    *((_DWORD *)v3 + 27) = v13;
    *((_DWORD *)v3 + 30) = bswap32(v17);
    *((_DWORD *)v3 + 31) = bswap32(v19);
    *((_WORD *)v3 + 64) = v9;
    *((_BYTE *)v3 + 131) = *((_BYTE *)a2 + 4);
    result = sub_2824C();
    *a1 = result;
    return result;
  }
  if ( dword_7FF54 )
  {
    *((_DWORD *)v3 + 12) = 1;
    v20 = *(_DWORD *)(v5 + 32);
    v21 = *(_DWORD *)(v5 + 36);
    v22 = *(_DWORD *)(v5 + 40);
    v7 = 0x1000000;
    *(_DWORD *)v3 = *(_DWORD *)(v5 + 28);
    *((_DWORD *)v3 + 1) = v20;
    *((_DWORD *)v3 + 2) = v21;
    *((_DWORD *)v3 + 3) = v22;
    v23 = *(_DWORD *)(v5 + 88);
    v24 = *(_DWORD *)(v5 + 92);
    v25 = *(_DWORD *)(v5 + 96);
    *((_DWORD *)v3 + 4) = *(_DWORD *)(v5 + 84);
    *((_DWORD *)v3 + 5) = v23;
    *((_DWORD *)v3 + 6) = v24;
    *((_DWORD *)v3 + 7) = v25;
    v26 = *(_DWORD *)(v5 + 60);
    v27 = *(_DWORD *)(v5 + 64);
    v28 = *(_DWORD *)(v5 + 68);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(v5 + 56);
    *((_DWORD *)v3 + 9) = v26;
    *((_DWORD *)v3 + 10) = v27;
    *((_DWORD *)v3 + 11) = v28;
    goto LABEL_3;
  }
  return result;
}
