void *__fastcall sub_134B0(int a1, _DWORD *a2)
{
  unsigned __int8 *v2; // r5
  int v5; // r3
  size_t v6; // r2
  unsigned __int8 *v7; // r0
  int v8; // r5
  int v9; // r12
  int v10; // r3

  v2 = (unsigned __int8 *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 16) & 0x3F;
  v6 = 55 - v5;
  *(_BYTE *)(a1 + 24 + v5) = 0x80;
  v7 = (unsigned __int8 *)(a1 + 24 + v5 + 1);
  if ( 55 - v5 < 0 )
  {
    memset(v7, 0, 63 - v5);
    sub_12904(v2, 16);
    sub_12938((_DWORD *)a1, (int *)v2);
    v7 = v2;
    v6 = 56;
  }
  memset(v7, 0, v6);
  sub_12904(v2, 14);
  *(_QWORD *)(a1 + 80) = 8LL * *(_QWORD *)(a1 + 16);
  sub_12938((_DWORD *)a1, (int *)v2);
  sub_12904((unsigned __int8 *)a1, 4);
  v8 = *(_DWORD *)(a1 + 4);
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_DWORD *)(a1 + 12);
  *a2 = *(_DWORD *)a1;
  a2[1] = v8;
  a2[2] = v9;
  a2[3] = v10;
  return memset((void *)a1, 0, 0x58u);
}
