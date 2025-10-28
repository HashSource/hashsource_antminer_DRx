int __fastcall sub_52100(int a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v5; // r1
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  __int64 v13; // [sp+0h] [bp-D8h] BYREF
  char dest[32]; // [sp+8h] [bp-D0h] BYREF
  _BYTE v15[140]; // [sp+28h] [bp-B0h] BYREF
  int v16; // [sp+B4h] [bp-24h]
  _DWORD v17[8]; // [sp+B8h] [bp-20h] BYREF

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 281);
  v13 = v2;
  strcpy(dest, v5);
  memcpy(v15, a2 + 1, sizeof(v15));
  v6 = *((_DWORD *)a2 + 259);
  v7 = *((_DWORD *)a2 + 260);
  v8 = *((_DWORD *)a2 + 261);
  v17[0] = *((_DWORD *)a2 + 258);
  v17[1] = v6;
  v17[2] = v7;
  v17[3] = v8;
  v9 = *((_DWORD *)a2 + 263);
  v10 = *((_DWORD *)a2 + 264);
  v11 = *((_DWORD *)a2 + 265);
  v17[4] = *((_DWORD *)a2 + 262);
  v17[5] = v9;
  v17[6] = v10;
  v17[7] = v11;
  v16 = target_to_diff_zec(v17);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 32))(a1, &v13);
  return 0;
}
