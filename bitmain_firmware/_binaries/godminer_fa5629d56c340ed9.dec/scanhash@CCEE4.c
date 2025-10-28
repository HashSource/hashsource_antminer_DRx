int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r5
  int v6; // r3
  unsigned int v7; // r0
  int v8; // r9
  int v9; // r11
  int v10; // r0
  unsigned int v11; // r0
  int v12; // r1
  _QWORD *v13; // r9
  __int64 v14; // kr08_8
  int v15; // r1
  bool v16; // cc
  int v17; // r1
  int v18; // r3
  int v19; // r0
  int v20; // r3
  char v21; // [sp+0h] [bp-123Ch]
  void *ptr; // [sp+10h] [bp-122Ch]
  char *s2; // [sp+14h] [bp-1228h]
  int v24; // [sp+18h] [bp-1224h]
  unsigned int v25; // [sp+1Ch] [bp-1220h]
  int v26; // [sp+20h] [bp-121Ch]
  unsigned int v27; // [sp+24h] [bp-1218h]
  char v28; // [sp+2Fh] [bp-120Dh] BYREF
  int v29; // [sp+30h] [bp-120Ch] BYREF
  int v30; // [sp+34h] [bp-1208h] BYREF
  char s[512]; // [sp+38h] [bp-1204h] BYREF
  char v32[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 252));
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v32, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  v25 = 1;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "scanhash",
    8,
    199,
    40,
    v32);
  v24 = 0;
  prctl(15, v2);
  v4 = *(_DWORD *)(a1 + 880);
  ptr = calloc(1u, *(_DWORD *)(a1 + 856));
  v27 = 1;
  s2 = (char *)calloc(1u, *(_DWORD *)(a1 + 860));
  v26 = 0;
LABEL_2:
  memset(s, 0, sizeof(s));
  queue_dequeue(v4, s, 1u);
  if ( !*(_BYTE *)(a1 + 920) )
  {
    while ( 1 )
    {
      while ( (unsigned __int8)s[0] != 170 )
      {
        queue_dequeue(v4, s, 1u);
        check_and_print_uart_debug_log(a1 + 1048, 1, (unsigned __int8 *)s, *(_DWORD *)(a1 + 260), 0);
        if ( *(_BYTE *)(a1 + 920) )
          goto LABEL_5;
      }
      queue_dequeue(v4, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 920) )
        break;
      if ( s[1] == 85 )
      {
        queue_dequeue(v4, &s[2], 1u);
        v7 = (*(int (__fastcall **)(_DWORD))(a1 + 176))((unsigned __int8)s[2]);
        v8 = v7 + 3;
        queue_dequeue(v4, &s[3], v7);
        check_and_print_uart_debug_log(a1 + 1048, v8, (unsigned __int8 *)s, *(_DWORD *)(a1 + 260), 0);
        v9 = *(unsigned __int8 *)(a1 + 920);
        if ( *(_BYTE *)(a1 + 920) )
          break;
        memset(ptr, *(unsigned __int8 *)(a1 + 920), *(_DWORD *)(a1 + 856));
        v29 = v9;
        v30 = v9;
        v28 = v9;
        v10 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 72))(
                a1,
                s,
                ptr,
                &v28,
                s2,
                &v29,
                &v30);
        if ( v10 == 10 )
        {
          if ( !queue_enqueue(*(_DWORD *)(a1 + 892), s, v8) )
          {
            v16 = v27 > ++v26;
            if ( !v16 )
            {
              V_LOCK();
              logfmt_raw(
                v32,
                0x1000u,
                0,
                "chain[%d], queue_enqueue of __low_priority_resp_packet_queue is false",
                *(_DWORD *)(a1 + 260));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_base.c",
                150,
                "scanhash",
                8,
                320,
                40,
                v32);
              V_LOCK();
              v19 = v26;
              v26 = 0;
              logfmt_raw(
                v32,
                0x1000u,
                0,
                "low_priority_enqueue_fail_cnt = %d, low_priority_enqueue_fail_limit = %d",
                v19,
                v27);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_base.c",
                150,
                "scanhash",
                8,
                321,
                40,
                v32);
              v20 = 10 * v27;
              if ( 10 * v27 >= 0x989680 )
                v20 = 10000000;
              v27 = v20;
            }
          }
        }
        else if ( v10 == 11 )
        {
          ++*(_QWORD *)(*(_DWORD *)(a1 + 480) + 40);
        }
        else if ( !v10 && *(_BYTE *)(a1 + 267) )
        {
          if ( !*(_BYTE *)(a1 + v30 + 560) && v28 && platform_check_repeat_nonce((int *)a1, v29, s2) )
          {
            ++*(_QWORD *)(*(_DWORD *)(a1 + 480) + 48 * v29 + 32);
          }
          else
          {
            v11 = (*(int (__fastcall **)(int, void *))(a1 + 76))(a1, ptr);
            if ( v11 <= 5 )
            {
              v12 = v29;
              v13 = (_QWORD *)(*(_DWORD *)(a1 + 480) + 8 * v11 + 48 * v29);
              ++*v13;
              if ( v11 <= 1 )
              {
                v14 = *(_QWORD *)(a1 + 472) + 1LL;
                ++*(_DWORD *)(*(_DWORD *)(a1 + 504) + 4 * v12);
                v15 = v30;
                *(_QWORD *)(a1 + 472) = v14;
                ++*(_QWORD *)(a1 + 8 * v15 + 592);
                if ( !v11
                  && !*(_BYTE *)(a1 + v15 + 560)
                  && !queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 896) + 888), (char *)ptr, 1) )
                {
                  v16 = v25 > ++v24;
                  if ( !v16 )
                  {
                    V_LOCK();
                    logfmt_raw(
                      v32,
                      0x1000u,
                      0,
                      "chain[%d], queue_enqueue of __nonce_retrieve_queue is false",
                      *(_DWORD *)(a1 + 260));
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/backend_base.c",
                      150,
                      "scanhash",
                      8,
                      291,
                      40,
                      v32);
                    V_LOCK();
                    v17 = v24;
                    v24 = 0;
                    logfmt_raw(v32, 0x1000u, 0, "nonce_enqueue_fail_cnt = %d, nonce_enqueue_fail_limit = %d", v17, v25);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/backend_base.c",
                      150,
                      "scanhash",
                      8,
                      292,
                      40,
                      v32);
                    v18 = 10 * v25;
                    if ( 10 * v25 >= 0x989680 )
                      v18 = 10000000;
                    v25 = v18;
                  }
                }
              }
            }
          }
        }
        goto LABEL_2;
      }
      v6 = *(_DWORD *)(a1 + 260);
      v21 = *(_BYTE *)(a1 + 920);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1048, 2, (unsigned __int8 *)s, v6, v21);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 920) = 0;
  free(ptr);
  free(s2);
  return 0;
}
