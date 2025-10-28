int __fastcall sub_27300(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r3
  char v5; // r7
  void (__fastcall *v6)(int, int); // r3
  int v8; // r2
  int v9; // r7
  const char *v10; // r0

  v2 = *(unsigned __int8 *)(a1 + 64);
  ++*(_DWORD *)(a1 + 544);
  v3 = *(unsigned __int8 *)(a1 + 65);
  sub_4CBA8(a1 + 376);
  v4 = *(_DWORD *)(a1 + 116);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 116) = v4 - 1;
    goto LABEL_9;
  }
  if ( dword_7CF4C )
  {
    v9 = dword_CB548;
    v10 = (const char *)sub_50CD0(a1 + 12);
    printf("refclock_transmit: at %ld %s\n", v9, v10);
  }
  v5 = *(_BYTE *)(a1 + 106);
  *(_BYTE *)(a1 + 106) = 2 * v5;
  if ( ((2 * v5) & 0xE) != 0 )
  {
    *(_DWORD *)(a1 + 516) = dword_CB548;
    goto LABEL_7;
  }
  sub_246A0(a1);
  v8 = *(unsigned __int8 *)(a1 + 106);
  *(_DWORD *)(a1 + 516) = dword_CB548;
  if ( v8 )
  {
LABEL_7:
    if ( (*(_DWORD *)(a1 + 52) & 0x40) != 0 )
      *(_DWORD *)(a1 + 116) = 5;
    goto LABEL_9;
  }
  if ( (v5 & 0xFE) != 0 )
  {
    sub_1D3D8(131, a1, 0);
    *(_DWORD *)(a1 + 540) = dword_CB548;
  }
LABEL_9:
  v6 = (void (__fastcall *)(int, int))*((_DWORD *)*(&off_65B1C + v2) + 2);
  if ( v6 )
    v6(v3, a1);
  return sub_22F68(a1, *(unsigned __int8 *)(a1 + 48));
}
