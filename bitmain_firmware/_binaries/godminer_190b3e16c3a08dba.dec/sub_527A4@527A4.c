int __fastcall sub_527A4(int a1, __int64 *a2)
{
  int v2; // r6
  __int64 v3; // r2
  const char *v6; // r1
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  void (__fastcall *v11)(int, __int64 *); // r6
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  __int64 v17; // [sp+0h] [bp-B4h] BYREF
  char dest[32]; // [sp+8h] [bp-ACh] BYREF
  _BYTE v19[80]; // [sp+28h] [bp-8Ch] BYREF
  int v20; // [sp+78h] [bp-3Ch]
  int v21; // [sp+7Ch] [bp-38h]
  int v22; // [sp+80h] [bp-34h]
  int v23; // [sp+84h] [bp-30h]
  int v24; // [sp+88h] [bp-2Ch]
  int v25; // [sp+8Ch] [bp-28h]
  int v26; // [sp+90h] [bp-24h]
  int v27; // [sp+94h] [bp-20h]
  int v28; // [sp+98h] [bp-1Ch]
  int v29; // [sp+9Ch] [bp-18h]
  int v30; // [sp+A0h] [bp-14h]
  __int64 v31; // [sp+A8h] [bp-Ch]

  v2 = *((_DWORD *)a2 + 283);
  if ( v2 )
  {
    v3 = *a2;
    v6 = (const char *)*((_DWORD *)a2 + 281);
    v17 = v3;
    strcpy(dest, v6);
    v31 = *(_QWORD *)(v2 + 8);
    memcpy(v19, a2 + 1, sizeof(v19));
    v7 = target_to_diff_dash((int)(a2 + 129));
    v8 = *((_DWORD *)a2 + 259);
    v9 = *((_DWORD *)a2 + 260);
    v10 = *((_DWORD *)a2 + 261);
    v20 = v7;
    v11 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
    v21 = *((_DWORD *)a2 + 258);
    v22 = v8;
    v23 = v9;
    v24 = v10;
    v12 = *((_DWORD *)a2 + 263);
    v13 = *((_DWORD *)a2 + 264);
    v14 = *((_DWORD *)a2 + 265);
    v25 = *((_DWORD *)a2 + 262);
    v26 = v12;
    v27 = v13;
    v28 = v14;
    v15 = *((_DWORD *)a2 + 276);
    v29 = *((_DWORD *)a2 + 275);
    v30 = v15;
    v11(a1, &v17);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
