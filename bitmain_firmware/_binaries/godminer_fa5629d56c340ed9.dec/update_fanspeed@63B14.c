int __fastcall update_fanspeed(int a1, const char *a2, int a3)
{
  int v6; // r3
  int v8; // r5
  unsigned int v9; // r9
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // r11
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v18; // r3
  int v19; // r2
  int v20; // r3
  int realtime_speed; // r6
  _DWORD *v22; // r11
  int v23; // r1
  int v24; // r2
  int v25; // r3
  _DWORD *v26; // r8
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r2
  int v32; // r3
  char *v33; // r11
  _DWORD *v34; // r8
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r3
  bool v39; // cc
  int v40; // r2
  int v41; // r5
  int v42; // r6
  int v43; // r3
  int v44; // r11
  int fan_max_speed; // r10
  int v46; // r0
  int v47; // r3
  bool v48; // nf
  int v49; // r9
  __int64 v50; // kr08_8
  int v51; // r7
  _DWORD *v52; // r6
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r1
  int v57; // r2
  int v58; // r3
  _DWORD *v59; // r12
  char *v60; // lr
  int v61; // r1
  int v62; // r2
  int v63; // r3
  int v64; // r1
  int v65; // r2
  int v66; // r3
  int v68; // r5
  int v69; // r4
  int v70; // r0
  int v71; // r2
  _BYTE v72[32]; // [sp+20h] [bp-11CCh] BYREF
  const char *v73; // [sp+40h] [bp-11ACh]
  const char *v74; // [sp+44h] [bp-11A8h]
  char *v75; // [sp+48h] [bp-11A4h]
  int v76; // [sp+54h] [bp-1198h]
  char *s; // [sp+58h] [bp-1194h]
  char *v78; // [sp+5Ch] [bp-1190h]
  char *v79; // [sp+60h] [bp-118Ch]
  const char *v80; // [sp+64h] [bp-1188h]
  __int64 v81; // [sp+68h] [bp-1184h]
  _DWORD *v82; // [sp+70h] [bp-117Ch]
  int v83; // [sp+74h] [bp-1178h]
  int fan_num; // [sp+78h] [bp-1174h]
  int *v85; // [sp+7Ch] [bp-1170h]
  int *v86; // [sp+80h] [bp-116Ch]
  int v87; // [sp+84h] [bp-1168h]
  const char *v88; // [sp+88h] [bp-1164h]
  int v89; // [sp+8Ch] [bp-1160h]
  int v90; // [sp+90h] [bp-115Ch]
  char *v91; // [sp+94h] [bp-1158h]
  int v92; // [sp+9Ch] [bp-1150h] BYREF
  _DWORD v93[2]; // [sp+A0h] [bp-114Ch] BYREF
  _DWORD v94[7]; // [sp+A8h] [bp-1144h] BYREF
  int v95; // [sp+C4h] [bp-1128h]
  _DWORD v96[8]; // [sp+C8h] [bp-1124h] BYREF
  _DWORD v97[7]; // [sp+E8h] [bp-1104h] BYREF
  int v98; // [sp+104h] [bp-10E8h]
  _DWORD v99[8]; // [sp+108h] [bp-10E4h] BYREF
  _DWORD v100[7]; // [sp+128h] [bp-10C4h] BYREF
  int v101; // [sp+144h] [bp-10A8h]
  _DWORD v102[8]; // [sp+148h] [bp-10A4h] BYREF
  _DWORD v103[7]; // [sp+168h] [bp-1084h] BYREF
  int v104; // [sp+184h] [bp-1068h]
  _DWORD v105[8]; // [sp+188h] [bp-1064h] BYREF
  _DWORD v106[7]; // [sp+1A8h] [bp-1044h] BYREF
  int v107; // [sp+1C4h] [bp-1028h]
  _DWORD v108[8]; // [sp+1C8h] [bp-1024h] BYREF
  char v109[4100]; // [sp+1E8h] [bp-1004h] BYREF

  v89 = a3;
  v92 = 0;
  v6 = *(_DWORD *)get_all_created_runtime(&v92);
  v87 = a3 + 32;
  v90 = v6;
  if ( v6 == a1 )
  {
    v91 = &fan_inited;
    if ( !fan_inited )
    {
      fan_init();
      *v91 = 1;
    }
    fan_num = platform_get_fan_num();
    v93[1] = 0;
    v93[0] = 0;
    if ( fan_num <= 0 )
    {
      v71 = *(_DWORD *)(v89 + 32);
      *((_DWORD *)a2 + 23) = 0;
      if ( (v71 & 3) == 0 )
      {
        *((_DWORD *)v91 + 1) = 0;
        return v87;
      }
    }
    else
    {
      v80 = "update_fanspeed";
      v8 = 0;
      v83 = 0;
      v9 = 0;
      v79 = "%s";
      v85 = &g_fan_zc;
      v86 = &g_zc;
      s = "fanid";
      v78 = "fanspeed";
      v82 = v72;
      v88 = a2;
      v76 = 0;
      do
      {
        realtime_speed = fan_get_realtime_speed(v8);
        V_LOCK();
        V_INT((int)v94, s, __SPAIR64__(v76, v9));
        v81 = realtime_speed;
        V_INT((int)v96, v78, realtime_speed);
        v22 = v82;
        v23 = v96[1];
        v24 = v96[2];
        v25 = v96[3];
        v26 = v82;
        v74 = v80;
        v73 = v79;
        *v82 = v96[0];
        v26[1] = v23;
        v26[2] = v24;
        v26[3] = v25;
        v26 += 4;
        v27 = v96[5];
        v28 = v96[6];
        v29 = v96[7];
        *v26 = v96[4];
        v26[1] = v27;
        v26[2] = v28;
        v26[3] = v29;
        logfmt_raw(v109, 0x1000u, 0, v95, v94[0], v94[1], v94[2], v94[3], v94[4], v94[5], v94[6], v95);
        V_UNLOCK();
        zlog(
          *v85,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          190,
          "update_fanspeed",
          15,
          37,
          40,
          v109);
        V_LOCK();
        if ( realtime_speed == -1 )
        {
          V_INT((int)v100, s, __SPAIR64__(v76, v9));
          V_INT((int)v102, v78, 0);
          v30 = v102[1];
          v31 = v102[2];
          v32 = v102[3];
          v33 = (&fan_name)[v8];
          v34 = v82;
          v73 = "%2d(corresponding to FAN%s on control board PCB)";
          v74 = (const char *)v8;
          v75 = v33;
          *v82 = v102[0];
          v34[1] = v30;
          v34[2] = v31;
          v34[3] = v32;
          v34 += 4;
          v35 = v102[5];
          v36 = v102[6];
          v37 = v102[7];
          *v34 = v102[4];
          v34[1] = v35;
          v34[2] = v36;
          v34[3] = v37;
          logfmt_raw(v109, 0x1000u, 0, v101, v100[0], v100[1], v100[2], v100[3], v100[4], v100[5], v100[6], v101);
          V_UNLOCK();
          zlog(
            *v86,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            45,
            100,
            v109);
          *((_BYTE *)v93 + v8) = 1;
        }
        else
        {
          V_INT((int)v97, s, __SPAIR64__(v76, v9));
          V_INT((int)v99, v78, v81);
          v10 = v99[1];
          v11 = v99[2];
          v12 = v99[3];
          v74 = v80;
          v73 = v79;
          *v22 = v99[0];
          v22[1] = v10;
          v22[2] = v11;
          v22[3] = v12;
          v13 = v22 + 4;
          v14 = v99[5];
          v15 = v99[6];
          v16 = v99[7];
          *v13 = v99[4];
          v13[1] = v14;
          v13[2] = v15;
          v13[3] = v16;
          logfmt_raw(v109, 0x1000u, 0, v98, v97[0], v97[1], v97[2], v97[3], v97[4], v97[5], v97[6], v98);
          V_UNLOCK();
          zlog(
            *v86,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            39,
            20,
            v109);
          v17 = v83;
          v18 = 4 * v83;
          v19 = *((_DWORD *)v88 + 24);
          *(_DWORD *)(*((_DWORD *)v88 + 25) + 4 * v83) = v8;
          *(_DWORD *)(v19 + v18) = realtime_speed;
          v83 = v17 + 1;
        }
        ++v8;
        v20 = (__PAIR64__(v76, v9++) + 1) >> 32;
        v76 = v20;
      }
      while ( fan_num != v8 );
      v38 = v83;
      a2 = v88;
      v39 = v83 < fan_num;
      *((_DWORD *)v88 + 23) = v83;
      if ( !v39 || (v40 = *(_DWORD *)(v89 + 32) | 2, *(_DWORD *)(v89 + 32) = v40, v38) )
      {
        v41 = 0;
        v42 = v89;
        v76 = 458129845;
        do
        {
          while ( 1 )
          {
            v44 = *(_DWORD *)(*((_DWORD *)a2 + 24) + 4 * v41);
            if ( v44 )
            {
              fan_max_speed = platform_get_fan_max_speed(v41);
              v46 = fan_pwm_get();
              if ( v44 >= ((int)((unsigned __int64)(v46 * fan_max_speed * (__int64)v76) >> 32) >> 4)
                        - ((v46 * fan_max_speed) >> 31) )
                break;
            }
            v43 = *(_DWORD *)(v42 + 32);
            *((_BYTE *)v93 + v41++) = 1;
            *(_DWORD *)(v42 + 32) = v43 | 1;
            if ( *((_DWORD *)a2 + 23) <= v41 )
              goto LABEL_19;
          }
          ++v41;
        }
        while ( *((_DWORD *)a2 + 23) > v41 );
LABEL_19:
        v40 = *(_DWORD *)(v89 + 32);
      }
      if ( (v40 & 3) == 0 )
      {
        v68 = fan_num;
        v69 = 0;
        *((_DWORD *)v91 + 1) = 0;
        do
        {
          v70 = v69++;
          set_miner_6060info_status_fan_err(v70, 0);
        }
        while ( v68 != v69 );
        return v87;
      }
    }
    v47 = *((_DWORD *)v91 + 1) + 1;
    v48 = *((_DWORD *)v91 + 1) - 14 < 0;
    *((_DWORD *)v91 + 1) = v47;
    if ( !(v48 ^ __OFSUB__(v47, 15) | (v47 == 15)) )
    {
      V_LOCK();
      logfmt_raw(v109, 0x1000u, 0, "fan_error_num: %d fan_num %d", *((_DWORD *)v91 + 1), *((_DWORD *)a2 + 23));
      V_UNLOCK();
      if ( !*(_BYTE *)(v90 + 267) )
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          190,
          "update_fanspeed",
          15,
          65,
          20,
          v109);
      if ( *((_DWORD *)v91 + 1) == 16 )
      {
        v39 = fan_num <= 0;
        *(_DWORD *)(v89 + 32) |= 4u;
        if ( !v39 )
        {
          v80 = "update_fanspeed";
          s = (char *)&unk_19549C;
          v79 = "%s";
          v76 = (int)&v92 + 3;
          v85 = &g_fan_zc;
          v86 = &g_zc;
          v49 = 0;
          v88 = "%2d(corresponding to FAN%s on control board PCB)";
          v78 = "fanid";
          LODWORD(v81) = "fanspeed";
          v83 = (int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/"
                     "godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c";
          v82 = v72;
          v50 = 0;
          do
          {
            v51 = fan_get_realtime_speed(v49);
            V_LOCK();
            V_INT((int)v103, v78, v50);
            v52 = v82;
            V_INT((int)v105, (char *)v81, v51);
            v74 = v80;
            v53 = v105[1];
            v54 = v105[2];
            v55 = v105[3];
            v73 = v79;
            *v52 = v105[0];
            v52[1] = v53;
            v52[2] = v54;
            v52[3] = v55;
            v52 += 4;
            v56 = v105[5];
            v57 = v105[6];
            v58 = v105[7];
            *v52 = v105[4];
            v52[1] = v56;
            v52[2] = v57;
            v52[3] = v58;
            logfmt_raw(v109, 0x1000u, 0, v104, v103[0], v103[1], v103[2], v103[3], v103[4], v103[5], v103[6], v104);
            V_UNLOCK();
            zlog(*v85, v83, 190, "update_fanspeed", 15, 72, 40, v109);
            V_LOCK();
            V_INT((int)v106, v78, v50);
            V_INT((int)v108, (char *)v81, v51 & ~(v51 >> 31));
            v59 = v82;
            v60 = (char *)*((_DWORD *)s + 1);
            s += 4;
            v61 = v108[1];
            v62 = v108[2];
            v63 = v108[3];
            v75 = v60;
            v74 = (const char *)v49;
            v73 = v88;
            *v82 = v108[0];
            v59[1] = v61;
            v59[2] = v62;
            v59[3] = v63;
            v64 = v108[5];
            v65 = v108[6];
            v66 = v108[7];
            *v52 = v108[4];
            v52[1] = v64;
            v52[2] = v65;
            v52[3] = v66;
            logfmt_raw(v109, 0x1000u, 0, v107, v106[0], v106[1], v106[2], v106[3], v106[4], v106[5], v106[6], v107);
            V_UNLOCK();
            zlog(*v86, v83, 190, "update_fanspeed", 15, 73, 100, v109);
            if ( *(unsigned __int8 *)++v76 )
              set_miner_6060info_status_fan_err(v49, 1);
            ++v49;
            ++v50;
          }
          while ( fan_num != v49 );
        }
      }
    }
  }
  return v87;
}
