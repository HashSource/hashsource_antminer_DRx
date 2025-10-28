int __fastcall sub_5AAD0(_DWORD *a1)
{
  signed int *v1; // r0
  signed int v2; // r4
  _DWORD *v3; // r0
  _DWORD *v4; // r10
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r11
  _DWORD *v8; // r9
  _DWORD *v9; // r0
  int v10; // r7
  _DWORD *v11; // r0
  _DWORD *v12; // r4
  char *v13; // r9
  char *v14; // r2
  _DWORD *v15; // r0
  _DWORD *v16; // r10
  _DWORD *v17; // r0
  int v18; // r9
  int v19; // r0
  _DWORD *v20; // r0
  int v21; // r9
  int v22; // r0
  _DWORD *v23; // r0
  int v24; // r9
  int v25; // r0
  int v26; // r0
  int v27; // r3
  int v29; // r0
  int v30; // r12
  signed int *v31; // [sp+10h] [bp-100Ch]
  char v32[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = (signed int *)json_object_get(a1, "power");
  v31 = v1;
  if ( !v1 || (v2 = *v1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "get power failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_power",
      12,
      204,
      100,
      v32);
    return -1;
  }
  V_LOCK();
  logfmt_raw(v32, 0x1000u, 0, "power:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_power",
    12,
    207,
    20,
    v32);
  v3 = (_DWORD *)json_object_get(v31, "type");
  v4 = v3;
  if ( v3 && *v3 == 2 )
  {
    V_LOCK();
    v5 = json_string_value(v4);
    logfmt_raw(v32, 0x1000u, 0, "type: %s", v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_power",
      12,
      215,
      20,
      v32);
    v6 = (_DWORD *)json_object_get(v31, "version");
    v7 = v6;
    if ( v6 && *v6 == 1 )
    {
      v8 = json_array_size(v6);
      dword_18D8E4 = (int)v8;
      dword_18D8FC = (int)calloc((size_t)v8, 2u);
      if ( (int)v8 > 0 )
      {
        do
        {
          v9 = json_array_get(v7, v2);
          v10 = 2 * v2++;
          *(_WORD *)(dword_18D8FC + v10) = json_integer_value((int)v9);
          V_LOCK();
          logfmt_raw(v32, 0x1000u, 0, "psu version = 0x%x", *(unsigned __int16 *)(dword_18D8FC + v10));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_power",
            12,
            227,
            20,
            v32);
        }
        while ( dword_18D8E4 > v2 );
      }
      v11 = (_DWORD *)json_object_get(v31, "is_adjustable_power");
      v12 = v11;
      if ( v11 && (unsigned int)(*v11 - 5) <= 1 )
      {
        V_LOCK();
        v13 = "true";
        if ( *v12 == 5 )
          v14 = "true";
        else
          v14 = "false";
        logfmt_raw(v32, 0x1000u, 0, "is_adjustable_power: %s", v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_power",
          12,
          236,
          20,
          v32);
        byte_18D8E8 = *v12 == 5;
        v15 = (_DWORD *)json_object_get(v31, "check_asic_voltage_enable");
        v16 = v15;
        if ( v15 && (unsigned int)(*v15 - 5) <= 1 )
        {
          V_LOCK();
          if ( *v16 != 5 )
            v13 = "false";
          logfmt_raw(v32, 0x1000u, 0, "check_asic_voltage_enable: %s", v13);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_power",
            12,
            245,
            20,
            v32);
          byte_18D8E9 = *v16 == 5;
          v17 = (_DWORD *)json_object_get(v31, "check_asic_voltage");
          v18 = (int)v17;
          if ( v17 && *v17 == 3 )
          {
            V_LOCK();
            v19 = json_integer_value(v18);
            logfmt_raw(v32, 0x1000u, 0, "check_asic_voltage: %d", v19);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "_parse_power",
              12,
              254,
              20,
              v32);
            dword_18D8EC = json_integer_value(v18);
            v20 = (_DWORD *)json_object_get(v31, "i2c_addr");
            v21 = (int)v20;
            if ( v20 && *v20 == 3 )
            {
              V_LOCK();
              v22 = json_integer_value(v21);
              logfmt_raw(v32, 0x1000u, 0, "i2c_addr: %d", v22);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "_parse_power",
                12,
                263,
                20,
                v32);
              dword_18D8F0 = json_integer_value(v21);
              v23 = (_DWORD *)json_object_get(v31, "gpio");
              v24 = (int)v23;
              if ( v23 && *v23 == 3 )
              {
                V_LOCK();
                v25 = json_integer_value(v24);
                logfmt_raw(v32, 0x1000u, 0, "gpio: %d", v25);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/topol/topol.c",
                  149,
                  "_parse_power",
                  12,
                  272,
                  20,
                  v32);
                v26 = json_integer_value(v24);
                v27 = 0;
                dword_18D8F4 = v26;
                return v27;
              }
              V_LOCK();
              logfmt_raw(v32, 0x1000u, 0, "get gpio failed");
              V_UNLOCK();
              v29 = g_zc;
              v30 = 269;
            }
            else
            {
              V_LOCK();
              logfmt_raw(v32, 0x1000u, 0, "get i2c_addr failed");
              V_UNLOCK();
              v29 = g_zc;
              v30 = 260;
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v32, 0x1000u, 0, "get check_asic_voltage failed!");
            V_UNLOCK();
            v29 = g_zc;
            v30 = 251;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v32, 0x1000u, 0, "get check_asic_voltage_enable failed!");
          V_UNLOCK();
          v29 = g_zc;
          v30 = 242;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v32, 0x1000u, 0, "get is_adjustable_power failed!");
        V_UNLOCK();
        v29 = g_zc;
        v30 = 233;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v32, 0x1000u, 0, "get version array failed");
      V_UNLOCK();
      v29 = g_zc;
      v30 = 220;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "get type failed");
    V_UNLOCK();
    v29 = g_zc;
    v30 = 212;
  }
  zlog(
    v29,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_power",
    12,
    v30,
    100,
    v32);
  return -1;
}
