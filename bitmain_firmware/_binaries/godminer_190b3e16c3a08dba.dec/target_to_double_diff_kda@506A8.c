int __fastcall target_to_double_diff_kda(_DWORD *a1)
{
  int v1; // r1
  __int64 *v2; // lr
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  __int64 *v8; // r12
  char v9; // r3
  __int64 v11; // [sp+0h] [bp-20h] BYREF
  int v12; // [sp+8h] [bp-18h]
  int v13; // [sp+Ch] [bp-14h]
  int v14; // [sp+10h] [bp-10h]
  int v15; // [sp+14h] [bp-Ch]
  int v16; // [sp+18h] [bp-8h]
  int v17; // [sp+1Ch] [bp-4h] BYREF

  v1 = a1[1];
  v2 = &v11;
  v3 = a1[2];
  v4 = a1[3];
  LODWORD(v11) = *a1;
  HIDWORD(v11) = v1;
  v12 = v3;
  v13 = v4;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  v8 = (__int64 *)((char *)&v17 + 3);
  v14 = a1[4];
  v15 = v5;
  v16 = v6;
  v17 = v7;
  do
  {
    v9 = *(_BYTE *)v2;
    *(_BYTE *)v2 = *(_BYTE *)v8;
    v2 = (__int64 *)((char *)v2 + 1);
    *(_BYTE *)v8 = v9;
    v8 = (__int64 *)((char *)v8 - 1);
  }
  while ( v2 < v8 );
  return le256_target_to_double_diff_base(&v11);
}
