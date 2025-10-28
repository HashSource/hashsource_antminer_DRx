int __fastcall sub_5B39C(int a1, int *a2, int a3)
{
  size_t *v3; // r4
  pthread_mutex_t *v5; // r8
  int *v8; // r2
  int v9; // r3
  int v10; // r0
  char v11; // r1
  char v12; // lr
  unsigned __int64 v13; // kr00_8
  int v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // lr
  int v18; // r12
  int v19; // r1
  void *v20; // r0
  char *v21; // r0
  int v22; // r2
  char v24[4100]; // [sp+18h] [bp-1004h] BYREF

  v3 = *(size_t **)(a1 + 1132);
  if ( v3 )
  {
    v5 = (pthread_mutex_t *)(a2 + 398);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    if ( a3 )
    {
      v11 = 0;
      v12 = 0;
      v9 = 0;
      v10 = 0;
      v8 = a2 + 80;
      v13 = 1;
    }
    else
    {
      v8 = a2 + 80;
      v9 = a2[78];
      v10 = a2[79];
      v11 = BYTE1(v9);
      v12 = v9;
      v13 = __PAIR64__(v10, v9) + 1;
    }
    *v3 = 2;
    *((_QWORD *)v8 - 1) = v13;
    *((_BYTE *)v3 + 16) = v12;
    v3[2] = v9;
    v3[3] = v10;
    *((_BYTE *)v3 + 17) = v11;
    V_LOCK();
    logfmt_raw(
      v24,
      0x1000u,
      0,
      "num2bin[%d] %02x%02x%02x%02x",
      *v3,
      *((unsigned __int8 *)v3 + 16),
      *((unsigned __int8 *)v3 + 17),
      *((unsigned __int8 *)v3 + 18),
      *((unsigned __int8 *)v3 + 19));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/zec/zec_1746/zec_1746_content.c",
      173,
      "pre_push_work_zec_1746",
      22,
      36,
      20,
      v24);
    memset((void *)(a1 + 8), 0, 0x400u);
    memcpy((void *)(a1 + 8), a2 + 42, 0x80u);
    memcpy((void *)(a1 + 116), (const void *)a2[20], a2[19]);
    memcpy((void *)(a1 + 8 + 128 - *v3), v3 + 4, *v3);
    v14 = a2[373];
    v15 = a2[374];
    v16 = a2[375];
    *(_DWORD *)(a1 + 1032) = a2[372];
    *(_DWORD *)(a1 + 1036) = v14;
    *(_DWORD *)(a1 + 1040) = v15;
    *(_DWORD *)(a1 + 1044) = v16;
    v17 = a2[376];
    v18 = a2[377];
    v19 = a2[379];
    *(_DWORD *)(a1 + 1056) = a2[378];
    v20 = *(void **)(a1 + 1124);
    *(_DWORD *)(a1 + 1048) = v17;
    *(_DWORD *)(a1 + 1052) = v18;
    *(_DWORD *)(a1 + 1060) = v19;
    if ( v20 )
    {
      free(v20);
      *(_DWORD *)(a1 + 1124) = 0;
    }
    v21 = _strdup((const char *)a2[395]);
    v22 = *a2;
    *(_DWORD *)(a1 + 1124) = v21;
    *(_QWORD *)a1 = v22;
    pthread_mutex_unlock(v5);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private", a3);
    return 3;
  }
}
