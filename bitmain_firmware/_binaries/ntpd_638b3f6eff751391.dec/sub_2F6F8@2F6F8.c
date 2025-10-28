int __fastcall sub_2F6F8(int a1, int a2)
{
  int v3; // r6
  _BYTE *v5; // r0
  _DWORD *v6; // r8
  int v7; // r5
  int v8; // r0
  char s[24]; // [sp+4h] [bp-18h] BYREF

  sprintf(s, "/dev/fgclock%d", a1);
  if ( dword_7CF4C )
    printf("starting FG with device %s\n", s);
  v3 = sub_27D18(s, 0xDu, 1);
  if ( !v3 )
    return 0;
  v5 = (_BYTE *)sub_4F524(12);
  v6 = v5;
  if ( !v5 )
    goto LABEL_10;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[11] = 0;
  v7 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(v7 + 28) = v5;
  *(_DWORD *)(v7 + 12) = a2;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 20) = v3;
  *(_DWORD *)(v7 + 4) = sub_2F3B8;
  if ( sub_15FC4((int *)v7) )
  {
    *(_BYTE *)(a2 + 71) = -10;
    *(_WORD *)(v7 + 748) = 20551;
    *(_DWORD *)(v7 + 36) = "Forum Graphic GPS dating station";
    v8 = *(_DWORD *)(v7 + 20);
    *(_BYTE *)(v7 + 750) = 83;
    *v6 = 0;
    if ( write(v8, &unk_7A658, 0x1Au) != 26 )
      sub_27040(a2, 3);
    return 1;
  }
  else
  {
LABEL_10:
    close(v3);
    return 0;
  }
}
