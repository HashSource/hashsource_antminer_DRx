int __fastcall scanhash(int a1)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r9
  int v5; // r4
  void *v6; // r10
  char *v7; // r11
  int v8; // r3
  int v10; // r8
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r2
  _QWORD *v14; // r8
  __int64 v15; // kr08_8
  int v16; // r12
  int v17; // r3
  int v19; // r0
  int v20; // r3
  unsigned int v21; // [sp+14h] [bp-1228h]
  int v22; // [sp+18h] [bp-1224h]
  unsigned int v23; // [sp+1Ch] [bp-1220h]
  unsigned int v24; // [sp+24h] [bp-1218h]
  char v25; // [sp+2Fh] [bp-120Dh] BYREF
  int v26; // [sp+30h] [bp-120Ch] BYREF
  int v27; // [sp+34h] [bp-1208h] BYREF
  char s[512]; // [sp+38h] [bp-1204h] BYREF
  char v29[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 220));
  V_LOCK();
  v21 = 1;
  v3 = syscall(224);
  v4 = 0;
  logfmt_raw(v29, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "scanhash",
    8,
    118,
    40,
    v29);
  prctl(15, v2);
  v23 = 1;
  v5 = *(_DWORD *)(a1 + 816);
  v6 = calloc(1u, *(_DWORD *)(a1 + 792));
  v22 = 0;
  v7 = (char *)calloc(1u, *(_DWORD *)(a1 + 796));
  while ( 1 )
  {
    memset(s, 0, sizeof(s));
    queue_dequeue(v5, s, 1u);
    if ( *(_BYTE *)(a1 + 844) )
      break;
LABEL_5:
    v8 = (unsigned __int8)s[0];
    while ( 1 )
    {
      if ( v8 != 170 )
      {
        queue_dequeue(v5, s, 1u);
        if ( *(_BYTE *)(a1 + 844) )
          goto LABEL_10;
        goto LABEL_5;
      }
      queue_dequeue(v5, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 844) )
        goto LABEL_10;
      v8 = (unsigned __int8)s[1];
      if ( s[1] == 85 )
        break;
      s[0] = s[1];
    }
    queue_dequeue(v5, &s[2], 1u);
    v24 = (*(int (__fastcall **)(_DWORD))(a1 + 172))((unsigned __int8)s[2]);
    queue_dequeue(v5, &s[3], v24);
    v10 = *(unsigned __int8 *)(a1 + 844);
    if ( *(_BYTE *)(a1 + 844) )
      break;
    memset(v6, *(unsigned __int8 *)(a1 + 844), *(_DWORD *)(a1 + 792));
    v26 = v10;
    v27 = v10;
    v25 = v10;
    v11 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 68))(
            a1,
            s,
            v6,
            &v25,
            v7,
            &v26,
            &v27);
    if ( v11 == 10 )
    {
      if ( !queue_enqueue(*(_DWORD *)(a1 + 824), s, v24 + 3) && v23 <= ++v22 )
      {
        V_LOCK();
        logfmt_raw(
          v29,
          0x1000u,
          0,
          "chain[%d], queue_enqueue of __low_priority_resp_packet_queue is false",
          *(_DWORD *)(a1 + 224));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_base.c",
          150,
          "scanhash",
          8,
          227,
          40,
          v29);
        V_LOCK();
        v19 = v22;
        v22 = 0;
        logfmt_raw(
          v29,
          0x1000u,
          0,
          "low_priority_enqueue_fail_cnt = %d, low_priority_enqueue_fail_limit = %d",
          v19,
          v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_base.c",
          150,
          "scanhash",
          8,
          228,
          40,
          v29);
        v20 = 10 * v23;
        if ( 10 * v23 >= 0x989680 )
          v20 = 10000000;
        v23 = v20;
      }
    }
    else if ( v11 == 11 )
    {
      ++*(_QWORD *)(*(_DWORD *)(a1 + 424) + 40);
    }
    else if ( !v11 && *(_BYTE *)(a1 + 230) )
    {
      if ( !*(_BYTE *)(a1 + v27 + 496) && v25 && platform_check_repeat_nonce((int *)a1, v26, v7) )
      {
        ++*(_QWORD *)(*(_DWORD *)(a1 + 424) + 48 * v26 + 32);
      }
      else
      {
        v12 = (*(int (__fastcall **)(int, void *))(a1 + 72))(a1, v6);
        if ( v12 <= 5 )
        {
          v13 = v26;
          v14 = (_QWORD *)(*(_DWORD *)(a1 + 424) + 8 * v12 + 48 * v26);
          ++*v14;
          if ( v12 <= 1 )
          {
            v15 = *(_QWORD *)(a1 + 416) + 1LL;
            ++*(_DWORD *)(*(_DWORD *)(a1 + 448) + 4 * v13);
            v16 = v27;
            *(_QWORD *)(a1 + 416) = v15;
            ++*(_QWORD *)(a1 + 8 * v16 + 528);
            if ( !v12
              && !*(_BYTE *)(a1 + v16 + 496)
              && !queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 828) + 820), (char *)v6, 1)
              && v21 <= ++v4 )
            {
              V_LOCK();
              logfmt_raw(
                v29,
                0x1000u,
                0,
                "chain[%d], queue_enqueue of __nonce_retrieve_queue is false",
                *(_DWORD *)(a1 + 224));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_base.c",
                150,
                "scanhash",
                8,
                202,
                40,
                v29);
              V_LOCK();
              logfmt_raw(v29, 0x1000u, 0, "nonce_enqueue_fail_cnt = %d, nonce_enqueue_fail_limit = %d", v4, v21);
              V_UNLOCK();
              v4 = 0;
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_base.c",
                150,
                "scanhash",
                8,
                203,
                40,
                v29);
              v17 = 10 * v21;
              if ( 10 * v21 >= 0x989680 )
                v17 = 10000000;
              v21 = v17;
            }
          }
        }
      }
    }
  }
LABEL_10:
  *(_BYTE *)(a1 + 844) = 0;
  free(v6);
  free(v7);
  return 0;
}
