int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int v6; // r3
  __int64 v8; // kr00_8
  int realtime_speed; // r6
  char *v10; // r11
  int v11; // r1
  int v12; // r2
  int v13; // r3
  char *v14; // r8
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  _DWORD *v21; // r11
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r2
  bool v29; // cc
  int v30; // r3
  int v31; // r4
  int v32; // r9
  int v33; // r10
  int fan_max_speed; // r7
  int v35; // r3
  bool v36; // nf
  char v37; // [sp+20h] [bp-10F4h] BYREF
  char *v38; // [sp+40h] [bp-10D4h]
  const char *v39; // [sp+44h] [bp-10D0h]
  const char *v40; // [sp+4Ch] [bp-10C8h]
  char *v41; // [sp+50h] [bp-10C4h]
  char *s; // [sp+54h] [bp-10C0h]
  char *v43; // [sp+58h] [bp-10BCh]
  int fan_num; // [sp+5Ch] [bp-10B8h]
  int v45; // [sp+60h] [bp-10B4h]
  int *v46; // [sp+64h] [bp-10B0h]
  char *v47; // [sp+68h] [bp-10ACh]
  int v48; // [sp+6Ch] [bp-10A8h]
  int v49; // [sp+70h] [bp-10A4h]
  int v50; // [sp+74h] [bp-10A0h]
  int v51; // [sp+78h] [bp-109Ch]
  _DWORD *v52; // [sp+7Ch] [bp-1098h]
  int v53; // [sp+80h] [bp-1094h]
  char *v54; // [sp+84h] [bp-1090h]
  int v55; // [sp+8Ch] [bp-1088h] BYREF
  _DWORD v56[7]; // [sp+90h] [bp-1084h] BYREF
  int v57; // [sp+ACh] [bp-1068h]
  _DWORD v58[8]; // [sp+B0h] [bp-1064h] BYREF
  _DWORD v59[7]; // [sp+D0h] [bp-1044h] BYREF
  int v60; // [sp+ECh] [bp-1028h]
  _DWORD v61[8]; // [sp+F0h] [bp-1024h] BYREF
  char v62[4100]; // [sp+110h] [bp-1004h] BYREF

  v51 = a3;
  v55 = 0;
  v6 = *(_DWORD *)get_all_created_runtime(&v55);
  v48 = a3 + 32;
  v53 = v6;
  if ( v6 == a1 )
  {
    v54 = &fan_inited;
    if ( !fan_inited )
    {
      fan_init();
      *v54 = 1;
    }
    fan_num = platform_get_fan_num();
    if ( fan_num <= 0 )
    {
      v30 = *(_DWORD *)(v51 + 32);
      a2[23] = 0;
    }
    else
    {
      v40 = "update_fanspeed";
      v46 = &g_fan_zc;
      v41 = "%s";
      s = "fanid";
      v43 = "fanspeed";
      v45 = 0;
      v47 = &v37;
      v52 = a2;
      v8 = 0;
      do
      {
        realtime_speed = fan_get_realtime_speed(v8);
        v49 = realtime_speed;
        v50 = realtime_speed >> 31;
        V_LOCK();
        V_INT((int)v56, s, v8);
        V_INT((int)v58, v43, realtime_speed);
        v10 = v47;
        v11 = v58[1];
        v12 = v58[2];
        v13 = v58[3];
        v14 = v47;
        v39 = v40;
        v38 = v41;
        *(_DWORD *)v47 = v58[0];
        *((_DWORD *)v14 + 1) = v11;
        *((_DWORD *)v14 + 2) = v12;
        *((_DWORD *)v14 + 3) = v13;
        v14 += 16;
        v15 = v58[5];
        v16 = v58[6];
        v17 = v58[7];
        *(_DWORD *)v14 = v58[4];
        *((_DWORD *)v14 + 1) = v15;
        *((_DWORD *)v14 + 2) = v16;
        *((_DWORD *)v14 + 3) = v17;
        logfmt_raw(v62, 0x1000u, 0, v57, v56[0], v56[1], v56[2], v56[3], v56[4], v56[5], v56[6], v57);
        V_UNLOCK();
        zlog(
          *v46,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          190,
          "update_fanspeed",
          15,
          37,
          40,
          v62);
        if ( realtime_speed != -1 )
        {
          V_LOCK();
          V_INT((int)v59, s, v8);
          V_INT((int)v61, v43, realtime_speed);
          v18 = v61[1];
          v19 = v61[2];
          v20 = v61[3];
          v39 = v40;
          v38 = v41;
          *(_DWORD *)v10 = v61[0];
          *((_DWORD *)v10 + 1) = v18;
          *((_DWORD *)v10 + 2) = v19;
          *((_DWORD *)v10 + 3) = v20;
          v21 = v10 + 16;
          v22 = v61[5];
          v23 = v61[6];
          v24 = v61[7];
          *v21 = v61[4];
          v21[1] = v22;
          v21[2] = v23;
          v21[3] = v24;
          logfmt_raw(v62, 0x1000u, 0, v60, v59[0], v59[1], v59[2], v59[3], v59[4], v59[5], v59[6], v60);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            39,
            20,
            v62);
          v25 = v45;
          v26 = 4 * v45;
          v27 = v52[24];
          *(_DWORD *)(v52[25] + 4 * v45) = v8;
          *(_DWORD *)(v27 + v26) = realtime_speed;
          v45 = v25 + 1;
        }
        ++v8;
      }
      while ( fan_num > (int)v8 );
      v28 = v45;
      a2 = v52;
      v29 = v45 < fan_num;
      v52[23] = v45;
      if ( !v29 || (v30 = *(_DWORD *)(v51 + 32) | 2, *(_DWORD *)(v51 + 32) = v30, v28) )
      {
        v31 = 0;
        v32 = v51;
        do
        {
          while ( 1 )
          {
            v33 = *(_DWORD *)(a2[24] + 4 * v31);
            if ( v33 )
            {
              fan_max_speed = platform_get_fan_max_speed(v31);
              if ( v33 >= fan_pwm_get() * fan_max_speed / 150 )
                break;
            }
            ++v31;
            *(_DWORD *)(v32 + 32) |= 1u;
            if ( a2[23] <= v31 )
              goto LABEL_18;
          }
          ++v31;
        }
        while ( a2[23] > v31 );
LABEL_18:
        v30 = *(_DWORD *)(v51 + 32);
      }
    }
    if ( (v30 & 3) != 0 )
    {
      v35 = *((_DWORD *)v54 + 1) + 1;
      v36 = *((_DWORD *)v54 + 1) - 14 < 0;
      *((_DWORD *)v54 + 1) = v35;
      if ( !(v36 ^ __OFSUB__(v35, 15) | (v35 == 15)) )
      {
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, "fan_error_num: %d fan_num %d", *((_DWORD *)v54 + 1), a2[23]);
        V_UNLOCK();
        if ( !*(_BYTE *)(v53 + 230) )
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            58,
            20,
            v62);
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, "Sweep error string = %s.", "F:1");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          190,
          "update_fanspeed",
          15,
          59,
          100,
          v62);
        *(_DWORD *)(v51 + 32) |= 4u;
      }
    }
    else
    {
      *((_DWORD *)v54 + 1) = 0;
    }
  }
  return v48;
}
