int __fastcall sub_5C06C(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r8
  _DWORD *v3; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r11
  _DWORD *v8; // r0
  const char *v9; // r0
  int v10; // r11
  int v11; // r0
  int v12; // r3
  _DWORD *v13; // r0
  int v14; // r11
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r10
  int v18; // r0
  _DWORD *v19; // r0
  int v20; // r10
  int v21; // r0
  _DWORD *v22; // r0
  int v23; // r10
  int v24; // r0
  _DWORD *v25; // r0
  int v26; // r10
  int v27; // r0
  _DWORD *v28; // r0
  int v29; // r8
  int v30; // r0
  int v31; // r0
  int v32; // r3
  int v34; // r0
  int v35; // r2
  char v36[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "asic");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "get asic failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_asic",
      11,
      472,
      100,
      v36);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "asic:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_asic",
      11,
      475,
      20,
      v36);
    v3 = (_DWORD *)json_object_get(v2, "asic_id");
    v4 = v3;
    if ( v3 && *v3 == 2 )
    {
      V_LOCK();
      v5 = json_string_value(v4);
      logfmt_raw(v36, 0x1000u, 0, "asic_id: %s", v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_asic",
        11,
        483,
        20,
        v36);
      v6 = (_DWORD *)json_object_get(v2, "chip_type");
      v7 = v6;
      if ( v6 && *v6 == 2 )
      {
        V_LOCK();
        v8 = json_string_value(v7);
        logfmt_raw(v36, 0x1000u, 0, "chip_type : %s", v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_asic",
          11,
          491,
          20,
          v36);
        v9 = (const char *)json_string_value(v7);
        v10 = dword_18D8A8;
        v11 = strtol(v9, 0, 0);
        v12 = dword_18D8A8;
        *(_DWORD *)(v10 + 24) = v11;
        if ( !*(_DWORD *)(v12 + 24) )
        {
          V_LOCK();
          logfmt_raw(v36, 0x1000u, 0, "convert chip_type failed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_asic",
            11,
            496,
            100,
            v36);
          return -1;
        }
        V_LOCK();
        logfmt_raw(v36, 0x1000u, 0, "chip_type 0x%x", *(_DWORD *)(dword_18D8A8 + 24));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_asic",
          11,
          499,
          20,
          v36);
        v13 = (_DWORD *)json_object_get(v2, "cycle_cnt");
        v14 = (int)v13;
        if ( v13 && *v13 == 3 )
        {
          V_LOCK();
          v15 = json_integer_value(v14);
          logfmt_raw(v36, 0x1000u, 0, "cycle_cnt : %d", v15);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_asic",
            11,
            507,
            20,
            v36);
          *(_DWORD *)(dword_18D8A8 + 28) = json_integer_value(v14);
          v16 = (_DWORD *)json_object_get(v2, "asic_big_core_num");
          v17 = (int)v16;
          if ( v16 && *v16 == 3 )
          {
            V_LOCK();
            v18 = json_integer_value(v17);
            logfmt_raw(v36, 0x1000u, 0, "asic_big_core_num: %d", v18);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "_parse_asic",
              11,
              516,
              20,
              v36);
            *(_DWORD *)(dword_18D8A8 + 36) = json_integer_value(v17);
            v19 = (_DWORD *)json_object_get(v2, "asic_little_core_num");
            v20 = (int)v19;
            if ( v19 && *v19 == 3 )
            {
              V_LOCK();
              v21 = json_integer_value(v20);
              logfmt_raw(v36, 0x1000u, 0, "asic_little_core_num %d", v21);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "_parse_asic",
                11,
                525,
                20,
                v36);
              *(_DWORD *)(dword_18D8A8 + 40) = json_integer_value(v20);
              v22 = (_DWORD *)json_object_get(v2, "core_little_core_num");
              v23 = (int)v22;
              if ( v22 && *v22 == 3 )
              {
                V_LOCK();
                v24 = json_integer_value(v23);
                logfmt_raw(v36, 0x1000u, 0, "core_little_core_num: %d", v24);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/topol/topol.c",
                  149,
                  "_parse_asic",
                  11,
                  534,
                  20,
                  v36);
                *(_DWORD *)(dword_18D8A8 + 44) = json_integer_value(v23);
                v25 = (_DWORD *)json_object_get(v2, "asic_domain_num");
                v26 = (int)v25;
                if ( v25 && *v25 == 3 )
                {
                  V_LOCK();
                  v27 = json_integer_value(v26);
                  logfmt_raw(v36, 0x1000u, 0, "asic_domain_num : %d", v27);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/topol/topol.c",
                    149,
                    "_parse_asic",
                    11,
                    543,
                    20,
                    v36);
                  *(_DWORD *)(dword_18D8A8 + 48) = json_integer_value(v26);
                  v28 = (_DWORD *)json_object_get(v2, "asic_addr_interval");
                  v29 = (int)v28;
                  if ( v28 && *v28 == 3 )
                  {
                    V_LOCK();
                    v30 = json_integer_value(v29);
                    logfmt_raw(v36, 0x1000u, 0, "asic_addr_interval : %d", v30);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/topol/topol.c",
                      149,
                      "_parse_asic",
                      11,
                      552,
                      20,
                      v36);
                    v31 = json_integer_value(v29);
                    v32 = 0;
                    *(_DWORD *)(dword_18D8A8 + 52) = v31;
                    return v32;
                  }
                  V_LOCK();
                  logfmt_raw(v36, 0x1000u, 0, "get asic_addr_interval failed");
                  V_UNLOCK();
                  v34 = g_zc;
                  v35 = 549;
                }
                else
                {
                  V_LOCK();
                  logfmt_raw(v36, 0x1000u, 0, "get asic_domain_num failed");
                  V_UNLOCK();
                  v34 = g_zc;
                  v35 = 540;
                }
              }
              else
              {
                V_LOCK();
                logfmt_raw(v36, 0x1000u, 0, "get core_little_core_num failed");
                V_UNLOCK();
                v34 = g_zc;
                v35 = 531;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v36, 0x1000u, 0, "get asic_little_core_num failed");
              V_UNLOCK();
              v34 = g_zc;
              v35 = 522;
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v36, 0x1000u, 0, "get asic_big_core_num failed");
            V_UNLOCK();
            v34 = g_zc;
            v35 = 513;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v36, 0x1000u, 0, "get cycle_cnt failed");
          V_UNLOCK();
          v34 = g_zc;
          v35 = 504;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v36, 0x1000u, 0, "get chip_type failed");
        V_UNLOCK();
        v34 = g_zc;
        v35 = 488;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "get asic_id failed");
      V_UNLOCK();
      v34 = g_zc;
      v35 = 480;
    }
    zlog(
      v34,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_asic",
      11,
      v35,
      100,
      v36);
  }
  return -1;
}
