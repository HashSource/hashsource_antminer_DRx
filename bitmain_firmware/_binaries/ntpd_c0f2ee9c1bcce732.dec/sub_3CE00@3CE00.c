int __fastcall sub_3CE00(int a1, int a2)
{
  int v4; // r5
  _BYTE *v6; // r0
  _BYTE *v7; // r7
  int v8; // r4
  int v9; // r0
  int v10; // r0
  char s[24]; // [sp+Ch] [bp-18h] BYREF

  sprintf(s, "/dev/zyfer%d", a1);
  v4 = sub_27D18(s, 0xDu, 32);
  if ( v4 )
  {
    sub_4FE78(5, "zyfer(%d) fd: %d dev <%s>", a1, v4, s);
    v6 = (_BYTE *)sub_4F524(48);
    v7 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0x30u);
      v8 = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(v8 + 12) = a2;
      *(_DWORD *)(v8 + 20) = v4;
      *(_DWORD *)(v8 + 4) = sub_3CF18;
      *(_DWORD *)(v8 + 16) = 0;
      if ( sub_15FC4((int *)v8) )
      {
        *(_DWORD *)(v8 + 28) = v7;
        v4 = 1;
        *(_BYTE *)(a2 + 71) = -20;
        *(_DWORD *)(v8 + 36) = "Zyfer GPStarplus";
        strcpy((char *)(v8 + 748), "GPS");
        v7[30] = 0;
        *((_DWORD *)v7 + 8) = 2;
      }
      else
      {
        v9 = v4;
        v4 = 0;
        close(v9);
        free(v7);
      }
    }
    else
    {
      v10 = v4;
      v4 = 0;
      close(v10);
    }
  }
  return v4;
}
