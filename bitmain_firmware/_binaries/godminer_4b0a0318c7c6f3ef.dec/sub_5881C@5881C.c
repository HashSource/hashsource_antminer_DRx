int __fastcall sub_5881C(int a1, int *a2, int a3)
{
  size_t *v3; // r7
  int *v6; // r8
  int v7; // r3
  char *v8; // r0
  int v9; // lr
  int v10; // r12
  int v11; // r1
  int v12; // lr
  int v13; // r12
  int v14; // r1
  char v16[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = *(size_t **)(a1 + 1132);
  if ( v3 )
  {
    v6 = a2 + 116;
    if ( a3 && memcmp(&unk_1968E8, a2 + 116, 0x116u) )
    {
      qword_196A08 = 0;
      memcpy(&unk_1968E8, v6, 0x11Eu);
    }
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    v7 = a2[21];
    if ( v7 && v7 == *v3 )
    {
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "pool->xnonce2_size: %d, private->xnonce2_len:%d", a2[21], *v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/kda/kda_2110/kda_2110_content.c",
        173,
        "pre_push_work_kda_2110",
        22,
        40,
        20,
        v16);
      memcpy(v3 + 1, &qword_196A08, *v3);
      if ( (unsigned __int64)qword_196A08 > 0xFF )
        qword_196A08 = 0;
      else
        ++qword_196A08;
    }
    v8 = (char *)memcpy((void *)(a1 + 8), v6, 0x11Eu);
    memcpy(&v8[286 - a2[19]], (const void *)a2[20], a2[19]);
    v9 = a2[373];
    v10 = a2[374];
    v11 = a2[375];
    *(_DWORD *)(a1 + 1032) = a2[372];
    *(_DWORD *)(a1 + 1036) = v9;
    *(_DWORD *)(a1 + 1040) = v10;
    *(_DWORD *)(a1 + 1044) = v11;
    v12 = a2[377];
    v13 = a2[378];
    v14 = a2[379];
    *(_DWORD *)(a1 + 1048) = a2[376];
    *(_DWORD *)(a1 + 1052) = v12;
    *(_DWORD *)(a1 + 1056) = v13;
    *(_DWORD *)(a1 + 1060) = v14;
    *(_QWORD *)a1 = *a2;
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private", a3);
    return 3;
  }
}
