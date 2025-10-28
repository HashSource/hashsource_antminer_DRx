void __fastcall sub_10210(int a1, char *filename)
{
  FILE *v3; // r11
  int v4; // r6
  _DWORD *v5; // r8
  _DWORD *v6; // r10
  int v7; // r7
  _DWORD *v8; // r5
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  int v12; // r3
  int v13; // r3
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  char *v17; // r4
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0

  v3 = fopen(filename, "w+");
  if ( !v3 )
    puts("open error");
  v4 = 0;
  v5 = sub_DE4C();
  v6 = sub_DE34();
  sub_DAC8(v5, "pools", (int)v6);
  do
  {
    v7 = 164 * v4++;
    v8 = sub_DE4C();
    sub_DA90((int)v6, (int)v8);
    v9 = sub_DE04((const char *)(a1 + v7 + 4));
    sub_DAC8(v8, "url", (int)v9);
    v10 = sub_DE04((const char *)(a1 + v7 + 84));
    sub_DAC8(v8, "user", (int)v10);
    v11 = sub_DE04((const char *)(a1 + v7 + 124));
    sub_DAC8(v8, "pass", (int)v11);
  }
  while ( v4 != 3 );
  v12 = *(_DWORD *)(a1 + 492);
  if ( v12 == 1 )
  {
    v23 = sub_DD80();
    sub_DAC8(v5, "api-listen", (int)v23);
LABEL_7:
    v13 = *(_DWORD *)(a1 + 496);
    if ( v13 != 1 )
      goto LABEL_8;
LABEL_14:
    v19 = sub_DD80();
    sub_DAC8(v5, "api-network", (int)v19);
    if ( *(_DWORD *)(a1 + 500) != 1 )
      goto LABEL_11;
LABEL_15:
    v20 = sub_DD80();
    sub_DAC8(v5, "bitmain-nobeeper", (int)v20);
    if ( *(_DWORD *)(a1 + 504) != 1 )
      goto LABEL_12;
LABEL_16:
    v21 = sub_DD80();
    sub_DAC8(v5, "bitmain-notempoverctrl", (int)v21);
    goto LABEL_12;
  }
  if ( v12 )
    goto LABEL_7;
  v18 = sub_DD98();
  sub_DAC8(v5, "api-listen", (int)v18);
  v13 = *(_DWORD *)(a1 + 496);
  if ( v13 == 1 )
    goto LABEL_14;
LABEL_8:
  if ( !v13 )
  {
    v22 = sub_DD98();
    sub_DAC8(v5, "api-network", (int)v22);
  }
  if ( *(_DWORD *)(a1 + 500) == 1 )
    goto LABEL_15;
LABEL_11:
  if ( *(_DWORD *)(a1 + 504) == 1 )
    goto LABEL_16;
LABEL_12:
  v14 = sub_DE04((const char *)(a1 + 508));
  sub_DAC8(v5, "api-allow", (int)v14);
  v15 = sub_DE04((const char *)(a1 + 518));
  sub_DAC8(v5, "bitmain-freq", (int)v15);
  v16 = sub_DE04((const char *)(a1 + 533));
  sub_DAC8(v5, "bitmain-voltage", (int)v16);
  v17 = sub_D9E4((size_t)v5);
  fputs(v17, v3);
  fclose(v3);
  sub_D864(v5);
  free(v17);
}
