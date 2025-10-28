int __fastcall sub_319C8(unsigned int *a1, int a2, const char *a3, const char *a4, int a5, unsigned __int8 a6)
{
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  char **v17; // r0
  char **v18; // r1
  int v19; // r3
  int v20; // r3
  int v22; // [sp+Ch] [bp-10h] BYREF
  double v23; // [sp+10h] [bp-Ch] BYREF

  v22 = a2;
  v23 = dbl_739E8 / 1000.0 / dbl_6C2C0;
  v9 = sub_2E418(0, "STATS", 6, (const char *)&v22, 0);
  v10 = sub_2E418(v9, "ID", 1, a3, 0);
  v11 = sub_2E418(v10, "Elapsed", 13, (const char *)&dbl_6C2C0, 0);
  v12 = sub_2E418(v11, "Calls", 8, a4, 0);
  v13 = sub_2E418(v12, "Wait", 15, a4 + 4, 0);
  v14 = sub_2E418(v13, "Max", 15, a4 + 12, 0);
  v15 = sub_2E418(v14, "Min", 15, a4 + 20, 0);
  dbl_73D88 = dbl_72D90 + dbl_72E30 + dbl_739F8;
  v23 = dbl_739E8 / 1000.0 / dbl_6C2C0;
  v16 = sub_2E418(v15, "GHS 5s", 1, byte_6F7FC, 0);
  v17 = (char **)sub_2E418(v16, "GHS av", 17, (const char *)&v23, 0);
  v18 = v17;
  if ( a5 )
  {
    if ( v17 )
    {
      v19 = *(_DWORD *)(a5 + 16);
      *(_DWORD *)(a5 + 16) = v17[4];
      *((_DWORD *)v17[4] + 5) = a5;
      *(_DWORD *)(v19 + 20) = v17;
      v17[4] = (char *)v19;
    }
    else
    {
      v18 = (char **)a5;
    }
  }
  v20 = a6;
  if ( a6 )
    v20 = v22 > 0;
  sub_2F9C4(a1, v18, a6, v20);
  return v22 + 1;
}
