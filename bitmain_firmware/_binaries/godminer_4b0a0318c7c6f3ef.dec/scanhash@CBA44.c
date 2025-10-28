int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r3
  _DWORD *v5; // r7
  int v6; // r1
  int v7; // r5
  void *v8; // r10
  int v10; // r3
  unsigned int v11; // r0
  int v12; // r9
  int v13; // r11
  int v14; // r0
  unsigned int v15; // r0
  int v16; // r1
  _QWORD *v17; // r9
  __int64 v18; // kr08_8
  int v19; // r1
  bool v20; // cc
  int v21; // r1
  int v22; // r0
  int v23; // r3
  int v24; // r3
  int v25; // r1
  int v26; // r0
  int v27; // r3
  int v28; // r1
  int v29; // r3
  char v30; // [sp+0h] [bp-123Ch]
  char *ptr; // [sp+14h] [bp-1228h]
  int v32; // [sp+18h] [bp-1224h]
  unsigned int v33; // [sp+1Ch] [bp-1220h]
  int v34; // [sp+20h] [bp-121Ch]
  unsigned int v35; // [sp+24h] [bp-1218h]
  char v36; // [sp+2Fh] [bp-120Dh] BYREF
  int v37; // [sp+30h] [bp-120Ch] BYREF
  int v38; // [sp+34h] [bp-1208h] BYREF
  char s[512]; // [sp+38h] [bp-1204h] BYREF
  char v40[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 248));
  V_LOCK();
  v33 = 1;
  v3 = syscall(224);
  LOWORD(v4) = -31520;
  HIWORD(v4) = (unsigned int)"URL -- '%s'" >> 16;
  LOWORD(v5) = 20532;
  v32 = 0;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(v40, 0x1000u, 0, v4, v2, v3);
  V_UNLOCK();
  LOWORD(v6) = 31772;
  HIWORD(v6) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
  zlog(*v5, v6, 150, "scanhash", 8, 199, 40, v40);
  prctl(15, v2);
  v7 = *(_DWORD *)(a1 + 872);
  v35 = 1;
  v8 = calloc(1u, *(_DWORD *)(a1 + 848));
  v34 = 0;
  ptr = (char *)calloc(1u, *(_DWORD *)(a1 + 852));
LABEL_2:
  memset(s, 0, sizeof(s));
  queue_dequeue(v7, s, 1u);
  if ( !*(_BYTE *)(a1 + 912) )
  {
    while ( 1 )
    {
      while ( (unsigned __int8)s[0] != 170 )
      {
        queue_dequeue(v7, s, 1u);
        check_and_print_uart_debug_log(a1 + 1040, 1, (unsigned __int8 *)s, *(_DWORD *)(a1 + 256), 0);
        if ( *(_BYTE *)(a1 + 912) )
          goto LABEL_5;
      }
      queue_dequeue(v7, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 912) )
        break;
      if ( s[1] == 85 )
      {
        queue_dequeue(v7, &s[2], 1u);
        v11 = (*(int (__fastcall **)(_DWORD))(a1 + 176))((unsigned __int8)s[2]);
        v12 = v11 + 3;
        queue_dequeue(v7, &s[3], v11);
        check_and_print_uart_debug_log(a1 + 1040, v12, (unsigned __int8 *)s, *(_DWORD *)(a1 + 256), 0);
        v13 = *(unsigned __int8 *)(a1 + 912);
        if ( *(_BYTE *)(a1 + 912) )
          break;
        memset(v8, *(unsigned __int8 *)(a1 + 912), *(_DWORD *)(a1 + 848));
        v37 = v13;
        v38 = v13;
        v36 = v13;
        v14 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 72))(
                a1,
                s,
                v8,
                &v36,
                ptr,
                &v37,
                &v38);
        if ( v14 == 10 )
        {
          if ( !queue_enqueue(*(_DWORD *)(a1 + 884), s, v12) )
          {
            v20 = v35 > ++v34;
            if ( !v20 )
            {
              V_LOCK();
              logfmt_raw(
                v40,
                0x1000u,
                0,
                "chain[%d], queue_enqueue of __low_priority_resp_packet_queue is false",
                *(_DWORD *)(a1 + 256));
              V_UNLOCK();
              LOWORD(v25) = 31772;
              HIWORD(v25) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
              zlog(*v5, v25, 150, "scanhash", 8, 320, 40, v40);
              V_LOCK();
              v26 = v34;
              LOWORD(v27) = 32256;
              HIWORD(v27) = (unsigned int)"header:%02x%02x chip_addr:%02x, reg value:%08x, reg addr:%02x" >> 16;
              v34 = 0;
              logfmt_raw(v40, 0x1000u, 0, v27, v26, v35);
              V_UNLOCK();
              LOWORD(v28) = 31772;
              HIWORD(v28) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
              zlog(*v5, v28, 150, "scanhash", 8, 321, 40, v40);
              v29 = 10 * v35;
              if ( 10 * v35 >= 0x989680 )
                v29 = 10000000;
              v35 = v29;
            }
          }
        }
        else if ( v14 == 11 )
        {
          ++*(_QWORD *)(*(_DWORD *)(a1 + 472) + 40);
        }
        else if ( !v14 && *(_BYTE *)(a1 + 265) )
        {
          if ( !*(_BYTE *)(a1 + v38 + 552) && v36 && platform_check_repeat_nonce((int *)a1, v37, ptr) )
          {
            ++*(_QWORD *)(*(_DWORD *)(a1 + 472) + 48 * v37 + 32);
          }
          else
          {
            v15 = (*(int (__fastcall **)(int, void *))(a1 + 76))(a1, v8);
            if ( v15 <= 5 )
            {
              v16 = v37;
              v17 = (_QWORD *)(*(_DWORD *)(a1 + 472) + 8 * v15 + 48 * v37);
              ++*v17;
              if ( v15 <= 1 )
              {
                v18 = *(_QWORD *)(a1 + 464) + 1LL;
                ++*(_DWORD *)(*(_DWORD *)(a1 + 496) + 4 * v16);
                v19 = v38;
                *(_QWORD *)(a1 + 464) = v18;
                ++*(_QWORD *)(a1 + 8 * v19 + 584);
                if ( !v15
                  && !*(_BYTE *)(a1 + v19 + 552)
                  && !queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 888) + 880), (char *)v8, 1) )
                {
                  v20 = v33 > ++v32;
                  if ( !v20 )
                  {
                    V_LOCK();
                    logfmt_raw(
                      v40,
                      0x1000u,
                      0,
                      "chain[%d], queue_enqueue of __nonce_retrieve_queue is false",
                      *(_DWORD *)(a1 + 256));
                    V_UNLOCK();
                    LOWORD(v21) = 31772;
                    HIWORD(v21) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
                    zlog(*v5, v21, 150, "scanhash", 8, 291, 40, v40);
                    V_LOCK();
                    v22 = v32;
                    LOWORD(v23) = 32124;
                    HIWORD(v23) = (unsigned int)"ta %08x" >> 16;
                    v32 = 0;
                    logfmt_raw(v40, 0x1000u, 0, v23, v22, v33);
                    V_UNLOCK();
                    zlog(
                      *v5,
                      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/backend_base.c",
                      150,
                      "scanhash",
                      8,
                      292,
                      40,
                      v40);
                    v24 = 10 * v33;
                    if ( 10 * v33 >= 0x989680 )
                      v24 = 10000000;
                    v33 = v24;
                  }
                }
              }
            }
          }
        }
        goto LABEL_2;
      }
      v10 = *(_DWORD *)(a1 + 256);
      v30 = *(_BYTE *)(a1 + 912);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1040, 2, (unsigned __int8 *)s, v10, v30);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 912) = 0;
  free(v8);
  free(ptr);
  return 0;
}
