int __fastcall sub_31530(int a1, int a2, int a3, int a4)
{
  char *v6; // r1
  int v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  char **v19; // r0
  int result; // r0
  int v21; // [sp+8h] [bp-Ch] BYREF
  char v22[8]; // [sp+Ch] [bp-8h] BYREF

  v21 = 0;
  *(_DWORD *)v22 = 0;
  sub_30214((unsigned int *)a1, 33, 0, 0, a4);
  v6 = ",\"CONFIG\":[";
  if ( !a4 )
    v6 = "CONFIG,";
  v7 = sub_2E530((unsigned int *)a1, v6);
  v8 = sub_2E418(0, "ASC Count", 6, (const char *)&v21, 0);
  v9 = sub_2E418(v8, "PGA Count", 6, v22, 0);
  v10 = sub_2E418(v9, "Pool Count", 6, (const char *)&dword_72EF0, 0);
  v11 = sub_2E418(v10, "Strategy", 2, off_6CB5C[dword_6DB74], 0);
  v12 = sub_2E418(v11, "Log Interval", 6, (const char *)&dword_6CA7C, 0);
  v13 = sub_2E418(v12, "Device Code", 2, &byte_57FF0, 0);
  v14 = sub_2E418(v13, "OS", 2, "Linux", 0);
  v15 = sub_2E418(v14, "Failover-Only", 14, &byte_73680, 0);
  v16 = sub_2E418(v15, "ScanTime", 6, (const char *)&dword_6CA98, 0);
  v17 = sub_2E418(v16, "Queue", 6, (const char *)&dword_6CAA4, 0);
  v18 = sub_2E418(v17, "Expiry", 6, (const char *)&dword_6CA9C, 0);
  v19 = (char **)sub_2E418(v18, "Hotplug", 2, "None", 0);
  result = sub_2F9C4((unsigned int *)a1, v19, a4, 0);
  if ( (a4 & v7) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
