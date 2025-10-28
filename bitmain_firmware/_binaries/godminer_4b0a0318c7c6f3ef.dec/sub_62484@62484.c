int sub_62484()
{
  char *all_created_runtime; // r5
  int result; // r0
  int v2; // r3
  _DWORD *v3; // r3
  __int64 v4; // r6
  __int64 v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r6
  int v12; // r9
  int v13; // r5
  __int64 *v14; // r4
  __int64 *v15; // r5
  int v16; // r10
  __int64 v17; // t1
  int v19; // [sp+1Ch] [bp-ACh]
  char *v20; // [sp+20h] [bp-A8h]
  int v21; // [sp+24h] [bp-A4h]
  int v22; // [sp+30h] [bp-98h]
  int v23; // [sp+34h] [bp-94h]
  int v24; // [sp+4Ch] [bp-7Ch] BYREF
  char v25[32]; // [sp+50h] [bp-78h] BYREF
  char v26[32]; // [sp+70h] [bp-58h] BYREF
  char v27[20]; // [sp+90h] [bp-38h] BYREF
  int v28; // [sp+C0h] [bp-8h]
  int v29; // [sp+C4h] [bp-4h]
  char v30[4088]; // [sp+C8h] [bp+0h] BYREF
  char v31[4100]; // [sp+10C8h] [bp+1000h] BYREF

  v24 = 0;
  v23 = frontend_runtime_instance();
  all_created_runtime = (char *)get_all_created_runtime(&v24);
  read_system_status_from_monitor((int)v27);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v23 + 72) + 16), v25);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v23 + 72) + 16), v26);
  V_LOCK();
  logfmt_raw(v31, 0x1000u, 0, "total avg hashrate %s 2min avg hashrate %s hw %llu", v25, v26, v28, v29);
  V_UNLOCK();
  result = zlog(
             g_hash_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/miner_util/miner_monitor/miner_monitor.c",
             168,
             "task_applog_printer",
             19,
             125,
             40,
             v31);
  if ( v24 > 0 )
  {
    v20 = all_created_runtime - 4;
    v22 = 0;
    do
    {
      v2 = *(_DWORD *)(*((_DWORD *)v20 + 1) + 248);
      v20 += 4;
      v3 = &dword_1974C8[54 * v2];
      v4 = *((_QWORD *)v3 + 8);
      v5 = *((_QWORD *)v3 + 10);
      format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v23 + 72) + 16), v25);
      v6 = format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v23 + 72) + 16), v26);
      v7 = dev_ctrl(v6);
      v8 = (*(int (__fastcall **)(_DWORD))(v7 + 60))(*(_DWORD *)(*(_DWORD *)v20 + 248));
      LODWORD(v4) = snprintf(
                      v30,
                      0x1000u,
                      "chain %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n",
                      v8,
                      *(_DWORD *)(*(_DWORD *)v20 + 248),
                      (_DWORD)v4,
                      v25,
                      v26,
                      v5);
      v9 = snprintf(
             &v30[v4],
             4096 - v4,
             "wc %llu nc %llu chip status str %s detail:\n",
             *(_DWORD *)v20 + 464,
             *(_DWORD *)(*(_DWORD *)v20 + 456),
             *(_DWORD *)(*(_DWORD *)v20 + 460),
             *(_DWORD *)(*(_DWORD *)v20 + 464),
             *(_DWORD *)(*(_DWORD *)v20 + 468),
             HIDWORD(v4));
      v10 = *(_DWORD *)v20;
      v11 = v4 + v9;
      v21 = *(_DWORD *)(*(_DWORD *)v20 + 352);
      if ( v21 > 0 )
      {
        v12 = 0;
        v19 = 0;
        while ( 1 )
        {
          v13 = *(_DWORD *)(v10 + 472);
          v14 = (__int64 *)(v13 + v12);
          v12 += 48;
          v15 = (__int64 *)(v13 + v12);
          ++v19;
          v16 = v11 + snprintf(&v30[v11], 4096 - v11, "%d:");
          do
          {
            v17 = *v14++;
            v16 += snprintf(&v30[v16], 4096 - v16, " %llu", v17);
          }
          while ( v15 != v14 );
          v11 = v16 + 2;
          snprintf(&v30[v16], 4096 - v16, " /");
          if ( v19 == v21 )
            break;
          v10 = *(_DWORD *)v20;
        }
      }
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, "%s", v30);
      V_UNLOCK();
      result = zlog(
                 g_hash_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godm"
                 "iner-origin_godminer-new/miner_util/miner_monitor/miner_monitor.c",
                 168,
                 "task_applog_printer",
                 19,
                 147,
                 40,
                 v31);
    }
    while ( v24 > ++v22 );
  }
  return result;
}
