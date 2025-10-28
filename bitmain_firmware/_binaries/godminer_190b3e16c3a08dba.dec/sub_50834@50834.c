int __fastcall sub_50834(int a1, __int64 *a2)
{
  size_t *v2; // r6
  __int64 v3; // r2
  __int64 *v5; // r5
  const char *v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  __int64 *v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  void (__fastcall *v20)(int, __int64 *); // r4
  int v21; // r1
  __int64 v23; // [sp+0h] [bp-D8h] BYREF
  char dest[64]; // [sp+8h] [bp-D0h] BYREF
  _BYTE v25[80]; // [sp+48h] [bp-90h] BYREF
  int v26; // [sp+98h] [bp-40h]
  int v27; // [sp+9Ch] [bp-3Ch]
  int v28; // [sp+A0h] [bp-38h]
  int v29; // [sp+A4h] [bp-34h]
  int v30; // [sp+A8h] [bp-30h]
  int v31; // [sp+ACh] [bp-2Ch]
  int v32; // [sp+B0h] [bp-28h]
  int v33; // [sp+B4h] [bp-24h]
  int v34; // [sp+B8h] [bp-20h]
  _BYTE v35[16]; // [sp+BCh] [bp-1Ch] BYREF
  size_t v36; // [sp+CCh] [bp-Ch]
  int v37; // [sp+D0h] [bp-8h]
  int v38; // [sp+D4h] [bp-4h]
  int vars0; // [sp+D8h] [bp+0h]
  int vars4; // [sp+DCh] [bp+4h]
  int vars8; // [sp+E0h] [bp+8h]
  int varsC; // [sp+E4h] [bp+Ch]

  v2 = (size_t *)*((_DWORD *)a2 + 283);
  if ( v2 )
  {
    v3 = *a2;
    v5 = a2 + 128;
    v7 = (const char *)*((_DWORD *)a2 + 281);
    ++v5;
    v23 = v3;
    strcpy(dest, v7);
    memcpy(v25, a2 + 1, sizeof(v25));
    v8 = target_to_diff_ltc((int)v5);
    v9 = *((_DWORD *)v5 + 1);
    v10 = *((_DWORD *)v5 + 2);
    v11 = *((_DWORD *)v5 + 3);
    v26 = v8;
    v27 = *(_DWORD *)v5;
    v28 = v9;
    v29 = v10;
    v30 = v11;
    v12 = *((_DWORD *)v5 + 5);
    v13 = *((_DWORD *)v5 + 6);
    v14 = *((_DWORD *)v5 + 7);
    v31 = *((_DWORD *)v5 + 4);
    v32 = v12;
    v33 = v13;
    v34 = v14;
    memcpy(v35, v2 + 1, *v2);
    v15 = a2 + 136;
    v16 = *((_DWORD *)a2 + 275);
    v17 = *((_DWORD *)a2 + 276);
    v18 = *((_DWORD *)a2 + 277);
    v19 = *((_DWORD *)a2 + 278);
    v36 = *v2;
    v20 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
    v37 = v16;
    v38 = v17;
    vars0 = v18;
    vars4 = v19;
    v21 = *((_DWORD *)v15 + 8);
    vars8 = *((_DWORD *)v15 + 7);
    varsC = v21;
    v20(a1, &v23);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
