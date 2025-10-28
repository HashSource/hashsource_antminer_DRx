int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int v6; // r3
  char *v8; // r2
  _DWORD *v9; // r1
  _DWORD *v10; // r0
  char *v11; // r12
  char *v12; // lr
  int v13; // r5
  unsigned int v14; // r9
  int v15; // r1
  int v16; // r2
  int v17; // r3
  _DWORD *v18; // r11
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r0
  int v23; // r3
  int v24; // r2
  int v25; // r3
  int realtime_speed; // r6
  _DWORD *v27; // r11
  int v28; // r1
  int v29; // r2
  int v30; // r3
  _DWORD *v31; // r8
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r3
  char *v36; // r6
  int v37; // r8
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r11
  _DWORD *v42; // r8
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int v46; // r3
  bool v47; // cc
  int v48; // r2
  int v49; // r5
  int v50; // r6
  int v51; // r3
  int v52; // r11
  int fan_max_speed; // r10
  int v54; // r0
  int v55; // r3
  bool v56; // nf
  int v57; // r3
  _DWORD *v58; // r1
  _DWORD *v59; // r0
  _DWORD *v60; // r2
  char *v61; // r12
  int v62; // lr
  int v63; // r5
  int v64; // r9
  __int64 v65; // kr08_8
  int v66; // r7
  _DWORD *v67; // r6
  int v68; // r1
  int v69; // r2
  int v70; // r3
  int v71; // r1
  int v72; // r2
  int v73; // r3
  _DWORD *v74; // r12
  int v75; // lr
  int v76; // r1
  int v77; // r2
  int v78; // r3
  int v79; // r1
  int v80; // r2
  int v81; // r3
  int v83; // r5
  int v84; // r4
  int v85; // r0
  int v86; // r2
  int *v87; // r3
  int v88; // r0
  int v89; // r1
  _BYTE v90[32]; // [sp+20h] [bp-11CCh] BYREF
  char *v91; // [sp+40h] [bp-11ACh]
  const char *v92; // [sp+44h] [bp-11A8h]
  int v93; // [sp+48h] [bp-11A4h]
  int v94; // [sp+54h] [bp-1198h]
  char *s; // [sp+58h] [bp-1194h]
  char *v96; // [sp+5Ch] [bp-1190h]
  char *v97; // [sp+60h] [bp-118Ch]
  const char *v98; // [sp+64h] [bp-1188h]
  __int64 v99; // [sp+68h] [bp-1184h]
  _DWORD *v100; // [sp+70h] [bp-117Ch]
  int v101; // [sp+74h] [bp-1178h]
  int fan_num; // [sp+78h] [bp-1174h]
  _DWORD *v103; // [sp+7Ch] [bp-1170h]
  _DWORD *v104; // [sp+80h] [bp-116Ch]
  int v105; // [sp+84h] [bp-1168h]
  _DWORD *v106; // [sp+88h] [bp-1164h]
  int v107; // [sp+8Ch] [bp-1160h]
  int v108; // [sp+90h] [bp-115Ch]
  char *v109; // [sp+94h] [bp-1158h]
  int v110; // [sp+9Ch] [bp-1150h] BYREF
  _DWORD v111[2]; // [sp+A0h] [bp-114Ch] BYREF
  _DWORD v112[7]; // [sp+A8h] [bp-1144h] BYREF
  int v113; // [sp+C4h] [bp-1128h]
  _DWORD v114[8]; // [sp+C8h] [bp-1124h] BYREF
  _DWORD v115[7]; // [sp+E8h] [bp-1104h] BYREF
  int v116; // [sp+104h] [bp-10E8h]
  _DWORD v117[8]; // [sp+108h] [bp-10E4h] BYREF
  _DWORD v118[7]; // [sp+128h] [bp-10C4h] BYREF
  int v119; // [sp+144h] [bp-10A8h]
  _DWORD v120[8]; // [sp+148h] [bp-10A4h] BYREF
  _DWORD v121[7]; // [sp+168h] [bp-1084h] BYREF
  int v122; // [sp+184h] [bp-1068h]
  _DWORD v123[8]; // [sp+188h] [bp-1064h] BYREF
  _DWORD v124[7]; // [sp+1A8h] [bp-1044h] BYREF
  int v125; // [sp+1C4h] [bp-1028h]
  _DWORD v126[8]; // [sp+1C8h] [bp-1024h] BYREF
  char v127[4100]; // [sp+1E8h] [bp-1004h] BYREF

  v107 = a3;
  v110 = 0;
  v6 = *(_DWORD *)get_all_created_runtime(&v110);
  v105 = a3 + 32;
  v108 = v6;
  if ( v6 == a1 )
  {
    v109 = &fan_inited;
    if ( !fan_inited )
    {
      fan_init();
      *v109 = 1;
    }
    fan_num = platform_get_fan_num();
    v111[1] = 0;
    v111[0] = 0;
    if ( fan_num <= 0 )
    {
      v86 = *(_DWORD *)(v107 + 32);
      a2[23] = 0;
      if ( (v86 & 3) == 0 )
      {
        *((_DWORD *)v109 + 1) = 0;
        return v105;
      }
    }
    else
    {
      LOWORD(v8) = -31548;
      LOWORD(v9) = 20540;
      HIWORD(v8) = (unsigned int)"exceed limit! (%d)" >> 16;
      LOWORD(v10) = 20532;
      v98 = v8;
      LOWORD(v11) = 27404;
      LOWORD(v8) = -27680;
      LOWORD(v12) = 27412;
      v13 = 0;
      v101 = 0;
      HIWORD(v8) = (unsigned int)"space" >> 16;
      HIWORD(v9) = (unsigned int)&dword_1B5044 >> 16;
      HIWORD(v10) = (unsigned int)&g_fan_zc >> 16;
      HIWORD(v11) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c" >> 16;
      HIWORD(v12) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c" >> 16;
      v14 = 0;
      v97 = v8;
      v103 = v9;
      v104 = v10;
      s = v11;
      v96 = v12;
      v100 = v90;
      v106 = a2;
      v94 = 0;
      do
      {
        realtime_speed = fan_get_realtime_speed(v13);
        V_LOCK();
        V_INT((int)v112, s, __SPAIR64__(v94, v14));
        v99 = realtime_speed;
        V_INT((int)v114, v96, realtime_speed);
        v27 = v100;
        v28 = v114[1];
        v29 = v114[2];
        v30 = v114[3];
        v31 = v100;
        v92 = v98;
        v91 = v97;
        *v100 = v114[0];
        v31[1] = v28;
        v31[2] = v29;
        v31[3] = v30;
        v31 += 4;
        v32 = v114[5];
        v33 = v114[6];
        v34 = v114[7];
        *v31 = v114[4];
        v31[1] = v32;
        v31[2] = v33;
        v31[3] = v34;
        logfmt_raw(v127, 0x1000u, 0, v113, v112[0], v112[1], v112[2], v112[3], v112[4], v112[5], v112[6], v113);
        V_UNLOCK();
        LOWORD(v35) = -31548;
        HIWORD(v35) = (unsigned int)"exceed limit! (%d)" >> 16;
        zlog(
          *v103,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          190,
          v35,
          15,
          37,
          40,
          v127);
        V_LOCK();
        if ( realtime_speed == -1 )
        {
          LOWORD(v36) = 27424;
          V_INT((int)v118, s, __SPAIR64__(v94, v14));
          V_INT((int)v120, v96, 0);
          LOWORD(v37) = 17552;
          v38 = v120[1];
          v39 = v120[2];
          v40 = v120[3];
          HIWORD(v37) = (unsigned int)&off_194494 >> 16;
          HIWORD(v36) = (unsigned int)"r_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c" >> 16;
          v41 = *(_DWORD *)(v37 + 4 * v13);
          v42 = v100;
          v91 = v36;
          v92 = (const char *)v13;
          v93 = v41;
          *v100 = v120[0];
          v42[1] = v38;
          v42[2] = v39;
          v42[3] = v40;
          v42 += 4;
          v43 = v120[5];
          v44 = v120[6];
          v45 = v120[7];
          *v42 = v120[4];
          v42[1] = v43;
          v42[2] = v44;
          v42[3] = v45;
          logfmt_raw(v127, 0x1000u, 0, v119, v118[0], v118[1], v118[2], v118[3], v118[4], v118[5], v118[6], v119);
          V_UNLOCK();
          zlog(
            *v104,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            45,
            100,
            v127);
          *((_BYTE *)v111 + v13) = 1;
        }
        else
        {
          V_INT((int)v115, s, __SPAIR64__(v94, v14));
          V_INT((int)v117, v96, v99);
          v15 = v117[1];
          v16 = v117[2];
          v17 = v117[3];
          v92 = v98;
          v91 = v97;
          *v27 = v117[0];
          v27[1] = v15;
          v27[2] = v16;
          v27[3] = v17;
          v18 = v27 + 4;
          v19 = v117[5];
          v20 = v117[6];
          v21 = v117[7];
          *v18 = v117[4];
          v18[1] = v19;
          v18[2] = v20;
          v18[3] = v21;
          logfmt_raw(v127, 0x1000u, 0, v116, v115[0], v115[1], v115[2], v115[3], v115[4], v115[5], v115[6], v116);
          V_UNLOCK();
          zlog(
            *v104,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            39,
            20,
            v127);
          v22 = v101;
          v23 = 4 * v101;
          v24 = v106[24];
          *(_DWORD *)(v106[25] + 4 * v101) = v13;
          *(_DWORD *)(v24 + v23) = realtime_speed;
          v101 = v22 + 1;
        }
        ++v13;
        v25 = (__PAIR64__(v94, v14++) + 1) >> 32;
        v94 = v25;
      }
      while ( fan_num != v13 );
      v46 = v101;
      a2 = v106;
      v47 = v101 < fan_num;
      v106[23] = v101;
      if ( !v47 || (v48 = *(_DWORD *)(v107 + 32) | 2, *(_DWORD *)(v107 + 32) = v48, v46) )
      {
        v49 = 0;
        v50 = v107;
        v94 = 458129845;
        do
        {
          while ( 1 )
          {
            v52 = *(_DWORD *)(a2[24] + 4 * v49);
            if ( v52 )
            {
              fan_max_speed = platform_get_fan_max_speed(v49);
              v54 = fan_pwm_get();
              if ( v52 >= ((int)((unsigned __int64)(v54 * fan_max_speed * (__int64)v94) >> 32) >> 4)
                        - ((v54 * fan_max_speed) >> 31) )
                break;
            }
            v51 = *(_DWORD *)(v50 + 32);
            *((_BYTE *)v111 + v49++) = 1;
            *(_DWORD *)(v50 + 32) = v51 | 1;
            if ( a2[23] <= v49 )
              goto LABEL_19;
          }
          ++v49;
        }
        while ( a2[23] > v49 );
LABEL_19:
        v48 = *(_DWORD *)(v107 + 32);
      }
      if ( (v48 & 3) == 0 )
      {
        v83 = fan_num;
        v84 = 0;
        *((_DWORD *)v109 + 1) = 0;
        do
        {
          v85 = v84++;
          set_miner_6060info_status_fan_err(v85, 0);
        }
        while ( v83 != v84 );
        return v105;
      }
    }
    v55 = *((_DWORD *)v109 + 1) + 1;
    v56 = *((_DWORD *)v109 + 1) - 14 < 0;
    *((_DWORD *)v109 + 1) = v55;
    if ( !(v56 ^ __OFSUB__(v55, 15) | (v55 == 15)) )
    {
      V_LOCK();
      LOWORD(v57) = -31340;
      HIWORD(v57) = (unsigned int)" exceed limit (%d), min_pcb_temp = %d!" >> 16;
      logfmt_raw(v127, 0x1000u, 0, v57, *((_DWORD *)v109 + 1), a2[23]);
      V_UNLOCK();
      if ( !*(_BYTE *)(v108 + 265) )
      {
        LOWORD(v87) = 20532;
        HIWORD(v87) = (unsigned int)&g_fan_zc >> 16;
        v88 = *v87;
        LOWORD(v87) = -31548;
        LOWORD(v89) = -31532;
        HIWORD(v87) = (unsigned int)"exceed limit! (%d)" >> 16;
        HIWORD(v89) = (unsigned int)"d)" >> 16;
        zlog(v88, v89, 190, v87, 15, 65, 20, v127);
      }
      if ( *((_DWORD *)v109 + 1) == 16 )
      {
        v47 = fan_num <= 0;
        *(_DWORD *)(v107 + 32) |= 4u;
        if ( !v47 )
        {
          LOWORD(v58) = 20532;
          v98 = "update_fanspeed";
          s = (char *)&unk_19448C;
          LOWORD(v59) = 27424;
          LOWORD(v60) = 20540;
          LOWORD(v61) = 27404;
          LOWORD(v62) = 27412;
          LOWORD(v63) = -31532;
          v97 = "%s";
          HIWORD(v60) = (unsigned int)&dword_1B5044 >> 16;
          HIWORD(v58) = (unsigned int)&g_fan_zc >> 16;
          HIWORD(v59) = (unsigned int)"r_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c" >> 16;
          HIWORD(v61) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c" >> 16;
          HIWORD(v62) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c" >> 16;
          HIWORD(v63) = (unsigned int)"d)" >> 16;
          v94 = (int)&v110 + 3;
          v103 = v60;
          v104 = v58;
          v64 = 0;
          v106 = v59;
          v96 = v61;
          LODWORD(v99) = v62;
          v101 = v63;
          v100 = v90;
          v65 = 0;
          do
          {
            v66 = fan_get_realtime_speed(v64);
            V_LOCK();
            V_INT((int)v121, v96, v65);
            v67 = v100;
            V_INT((int)v123, (char *)v99, v66);
            v92 = v98;
            v68 = v123[1];
            v69 = v123[2];
            v70 = v123[3];
            v91 = v97;
            *v67 = v123[0];
            v67[1] = v68;
            v67[2] = v69;
            v67[3] = v70;
            v67 += 4;
            v71 = v123[5];
            v72 = v123[6];
            v73 = v123[7];
            *v67 = v123[4];
            v67[1] = v71;
            v67[2] = v72;
            v67[3] = v73;
            logfmt_raw(v127, 0x1000u, 0, v122, v121[0], v121[1], v121[2], v121[3], v121[4], v121[5], v121[6], v122);
            V_UNLOCK();
            zlog(*v103, v101, 190, "update_fanspeed", 15, 72, 40, v127);
            V_LOCK();
            V_INT((int)v124, v96, v65);
            V_INT((int)v126, (char *)v99, v66 & ~(v66 >> 31));
            v74 = v100;
            v75 = *((_DWORD *)s + 1);
            s += 4;
            v76 = v126[1];
            v77 = v126[2];
            v78 = v126[3];
            v93 = v75;
            v92 = (const char *)v64;
            v91 = (char *)v106;
            *v100 = v126[0];
            v74[1] = v76;
            v74[2] = v77;
            v74[3] = v78;
            v79 = v126[5];
            v80 = v126[6];
            v81 = v126[7];
            *v67 = v126[4];
            v67[1] = v79;
            v67[2] = v80;
            v67[3] = v81;
            logfmt_raw(v127, 0x1000u, 0, v125, v124[0], v124[1], v124[2], v124[3], v124[4], v124[5], v124[6], v125);
            V_UNLOCK();
            zlog(*v104, v101, 190, "update_fanspeed", 15, 73, 100, v127);
            if ( *(unsigned __int8 *)++v94 )
              set_miner_6060info_status_fan_err(v64, 1);
            ++v64;
            ++v65;
          }
          while ( fan_num != v64 );
        }
      }
    }
  }
  return v105;
}
