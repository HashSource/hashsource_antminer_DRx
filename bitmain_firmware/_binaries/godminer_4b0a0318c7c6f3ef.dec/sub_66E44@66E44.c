int __fastcall sub_66E44(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r7
  _DWORD *v3; // r0
  _DWORD *v4; // r10
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  int v7; // r10
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r10
  int v11; // r0
  int v12; // r0
  int v13; // r3
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r10
  int v18; // r5
  _DWORD *v19; // r0
  int v20; // r7
  int v21; // r0
  int v22; // r0
  int v23; // r9
  _DWORD *v24; // r9
  _DWORD *v25; // r0
  _DWORD *v26; // r7
  _DWORD *v27; // r0
  const char *v28; // r7
  _DWORD *v29; // r0
  int v30; // r5
  int v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r5
  _DWORD *v34; // r0
  int v35; // r7
  char **v36; // r8
  const char *v37; // r0
  const char *v38; // r1
  const char *v39; // r11
  const char *v40; // t1
  int v41; // r5
  _DWORD *v42; // r0
  _DWORD *v43; // r7
  _DWORD *v44; // r0
  _DWORD *v45; // r0
  char **v46; // r7
  const char *v47; // r0
  const char *v48; // r1
  const char *v49; // r8
  const char *v50; // t1
  int v51; // r0
  int v52; // r2
  int v53; // r0
  int v54; // r2
  unsigned int i; // [sp+10h] [bp-1014h]
  _DWORD *v56; // [sp+14h] [bp-1010h]
  char v57[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "pic");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, "get pic failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_pic",
      16,
      715,
      100,
      v57);
    return -1;
  }
  V_LOCK();
  logfmt_raw(v57, 0x1000u, 0, "pic:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_pic",
    16,
    718,
    20,
    v57);
  v3 = (_DWORD *)json_object_get(v2, "type");
  v4 = v3;
  if ( !v3 || *v3 != 2 )
  {
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, "get type failed");
    V_UNLOCK();
    v51 = g_zc;
    v52 = 723;
LABEL_38:
    zlog(
      v51,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_pic",
      16,
      v52,
      100,
      v57);
    return -1;
  }
  V_LOCK();
  v5 = json_string_value(v4);
  logfmt_raw(v57, 0x1000u, 0, "type: %s", v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_pic",
    16,
    726,
    20,
    v57);
  v6 = (_DWORD *)json_object_get(v2, "i2c_addr");
  v7 = (int)v6;
  if ( !v6 || *v6 != 3 )
  {
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, "get i2c_addr failed");
    V_UNLOCK();
    v51 = g_zc;
    v52 = 731;
    goto LABEL_38;
  }
  V_LOCK();
  v8 = json_integer_value(v7);
  logfmt_raw(v57, 0x1000u, 0, "i2c_addr: %d", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_pic",
    16,
    734,
    20,
    v57);
  v9 = (_DWORD *)json_object_get(v2, "device_high");
  v10 = (int)v9;
  if ( !v9 || *v9 != 3 )
  {
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, "get device_high failed");
    V_UNLOCK();
    v51 = g_zc;
    v52 = 739;
    goto LABEL_38;
  }
  V_LOCK();
  v11 = json_integer_value(v10);
  logfmt_raw(v57, 0x1000u, 0, "device_high: %d", v11);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_pic",
    16,
    742,
    20,
    v57);
  v12 = json_integer_value(v10);
  v13 = *(_DWORD *)(dword_1B5930 + 88);
  *(_DWORD *)(dword_1B5930 + 64) = v12;
  if ( (unsigned int)(v13 - 1) > 1 )
    return 0;
  v15 = (_DWORD *)json_object_get(v2, "pic_sensor");
  v56 = v15;
  if ( v15 && *v15 == 1 )
  {
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, "pic sensor:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_pic_sensor",
      23,
      570,
      20,
      v57);
    for ( i = 0; i < (unsigned int)json_array_size(v56); ++i )
    {
      v16 = json_array_get(v56, i);
      v17 = v16;
      if ( !v16 || (v18 = *v16) != 0 )
      {
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, "get array %d failed", i);
        V_UNLOCK();
        v53 = g_zc;
        v54 = 577;
        goto LABEL_44;
      }
      v19 = (_DWORD *)json_object_get(v16, "index");
      v20 = (int)v19;
      if ( !v19 || *v19 != 3 )
      {
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, "get array %d index failed", i);
        V_UNLOCK();
        v53 = g_zc;
        v54 = 584;
        goto LABEL_44;
      }
      V_LOCK();
      v21 = json_integer_value(v20);
      logfmt_raw(v57, 0x1000u, 0, "index: %d", v21);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        587,
        20,
        v57);
      v22 = json_integer_value(v20);
      v23 = *(_DWORD *)(dword_1B5930 + 84);
      *(_DWORD *)(v23 + 24 * v22) = v22;
      v24 = (_DWORD *)(v23 + 24 * v22);
      v24[2] = 0;
      v25 = (_DWORD *)json_object_get(v17, "type");
      v26 = v25;
      if ( !v25 || *v25 != 2 )
      {
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, "get array %d type failed", i);
        V_UNLOCK();
        v53 = g_zc;
        v54 = 596;
        goto LABEL_44;
      }
      V_LOCK();
      v27 = json_string_value(v26);
      logfmt_raw(v57, 0x1000u, 0, "type: %s", v27);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        599,
        20,
        v57);
      v28 = (const char *)json_string_value(v26);
      if ( strcmp(v28, "TMP451") )
      {
        do
          ++v18;
        while ( v18 != 5 && strcmp(v28, off_168BD4[v18]) );
      }
      v24[1] = v18;
      v29 = (_DWORD *)json_object_get(v17, "iic");
      v30 = (int)v29;
      if ( !v29 || *v29 != 3 )
      {
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, "get array %d bind_asic failed", i);
        V_UNLOCK();
        v53 = g_zc;
        v54 = 605;
        goto LABEL_44;
      }
      V_LOCK();
      v31 = json_integer_value(v30);
      logfmt_raw(v57, 0x1000u, 0, "iic: %d", v31);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        608,
        20,
        v57);
      v24[5] = json_integer_value(v30);
      v32 = (_DWORD *)json_object_get(v17, "x");
      v33 = v32;
      if ( !v32 || *v32 != 2 )
      {
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, "get array %d x failed", i);
        V_UNLOCK();
        v53 = g_zc;
        v54 = 614;
        goto LABEL_44;
      }
      V_LOCK();
      v34 = json_string_value(v33);
      logfmt_raw(v57, 0x1000u, 0, "x: %s", v34);
      V_UNLOCK();
      v35 = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        617,
        20,
        v57);
      v36 = off_168C18;
      v37 = (const char *)json_string_value(v33);
      v38 = "air_in";
      v39 = v37;
      while ( strcmp(v39, v38) )
      {
        v40 = *v36++;
        v38 = v40;
        ++v35;
      }
      v24[3] = v35;
      v41 = 0;
      v42 = (_DWORD *)json_object_get(v17, "y");
      v43 = v42;
      if ( !v42 || *v42 != 2 )
      {
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, "get array %d y failed", i);
        V_UNLOCK();
        v53 = g_zc;
        v54 = 623;
        goto LABEL_44;
      }
      V_LOCK();
      v44 = json_string_value(v43);
      logfmt_raw(v57, 0x1000u, 0, "y: %s", v44);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        626,
        20,
        v57);
      v45 = v43;
      v46 = off_168C38;
      v47 = (const char *)json_string_value(v45);
      v48 = "top";
      v49 = v47;
      while ( strcmp(v49, v48) )
      {
        v50 = *v46++;
        v48 = v50;
        ++v41;
      }
      v24[4] = v41;
    }
    return 0;
  }
  V_LOCK();
  logfmt_raw(v57, 0x1000u, 0, "get pic sensor failed");
  V_UNLOCK();
  v53 = g_zc;
  v54 = 567;
LABEL_44:
  zlog(
    v53,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_pic_sensor",
    23,
    v54,
    100,
    v57);
  return -1;
}
