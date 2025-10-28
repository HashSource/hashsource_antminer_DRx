__int64 *__fastcall update_pool_diff1_of_all_runtimes(int *a1)
{
  int *all_created_runtime; // r0
  int v3; // r6
  __int64 v4; // r2
  int *v5; // r5
  int v6; // lr
  unsigned int v7; // r12
  int v8; // t1
  __int64 *result; // r0
  unsigned int v10; // lr
  unsigned int v11; // r1
  unsigned int v12; // r5
  unsigned __int64 v13; // kr10_8
  int v14; // r3
  int v15; // r12
  int v16; // [sp+4h] [bp-4h] BYREF

  v16 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v16);
  v3 = *a1;
  if ( v16 <= 0 )
  {
    LODWORD(v4) = 0;
    v7 = 0;
  }
  else
  {
    LODWORD(v4) = 0;
    v5 = &all_created_runtime[v16];
    v6 = 8 * (v3 + 66);
    v7 = 0;
    do
    {
      v8 = *all_created_runtime++;
      HIDWORD(v4) = *(_DWORD *)(v8 + v6 + 4);
      v7 = (v4 + __PAIR64__(v7, *(_DWORD *)(v8 + v6))) >> 32;
      LODWORD(v4) = v4 + *(_DWORD *)(v8 + v6);
    }
    while ( v5 != all_created_runtime );
  }
  LOWORD(result) = -12240;
  HIWORD(result) = (unsigned int)&unk_186220 >> 16;
  HIDWORD(v4) = 8 * v3 + 1548352;
  v10 = *(_DWORD *)result;
  v11 = dword_17A0C0[2 * v3];
  v12 = dword_17A0C0[2 * v3 + 1];
  *(_DWORD *)(HIDWORD(v4) + 128) = v4;
  *(_DWORD *)(HIDWORD(v4) + 132) = v7;
  v13 = __PAIR64__(v7, v4) - __PAIR64__(v12, v11);
  v14 = a1[498];
  v15 = a1[499];
  *result = __PAIR64__(*((_DWORD *)result + 1), v10) + v13;
  a1[498] = v14 + v13;
  a1[499] = HIDWORD(v13) + __CFADD__(v14, (_DWORD)v13) + v15;
  return result;
}
