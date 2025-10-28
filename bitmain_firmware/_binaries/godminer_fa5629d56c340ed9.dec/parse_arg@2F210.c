int __fastcall parse_arg(int result, char *s)
{
  int v3; // r5
  int v4; // r12
  int v5; // r2
  int v6; // r0
  int v7; // r1
  double *file; // r0
  double *v9; // r5
  int v10; // r2
  int v11; // lr
  int v12; // r5
  unsigned int v13; // r5
  int v14; // r5
  int v15; // r3
  char *v16; // r4
  const char *v17; // r7
  char **v18; // r8
  size_t v19; // r6
  int v20; // r5
  const char *v21; // t1
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  int v25[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v26[160]; // [sp+70h] [bp-10A0h] BYREF
  char v27[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 112 )
  {
    result = set_pass(s);
    v14 = result;
    if ( result )
    {
      V_LOCK();
      logfmt_raw(v27, 0x1000u, 0, "%s", v14);
      V_UNLOCK();
      v4 = 100;
      v5 = 243;
      v6 = g_zc;
      LOWORD(v7) = -29044;
      goto LABEL_22;
    }
    if ( *s )
    {
      v15 = (unsigned __int8)s[1];
      *s = 120;
      v16 = s + 1;
      if ( v15 )
      {
        do
          *v16++ = 0;
        while ( *v16 );
      }
    }
    return result;
  }
  if ( result > 112 )
  {
    if ( result > 1033 )
    {
      if ( result == 1035 )
      {
        v13 = strtol(s, 0, 10);
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "work mode: %d!", v13);
        V_UNLOCK();
        result = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/go"
                   "dminer-origin_godminer-new/god-miner.c",
                   139,
                   "parse_arg",
                   9,
                   306,
                   40,
                   v27);
        if ( v13 > 1 )
        {
          V_LOCK();
          logfmt_raw(v27, 0x1000u, 0, "power mode value error!");
          V_UNLOCK();
          return zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/go"
                   "dminer-origin_godminer-new/god-miner.c",
                   139,
                   "parse_arg",
                   9,
                   308,
                   100,
                   v27);
        }
        else
        {
          opt_custom_power_mode = v13;
        }
        return result;
      }
      if ( result < 1035 )
      {
        result = strtol(s, 0, 10);
        if ( (unsigned int)result <= 0x64 )
        {
          fan_pwm = result;
          return result;
        }
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "fan_pwm value error!");
        V_UNLOCK();
        v11 = 299;
LABEL_35:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "parse_arg",
          9,
          v11,
          100,
          v27);
        exit(1);
      }
      if ( result == 1036 )
        return result;
    }
    else
    {
      if ( result >= 1032 )
        return result;
      if ( result == 118 )
      {
        opt_version_path = (int)s;
        return result;
      }
      if ( result <= 118 )
      {
        if ( result == 117 )
        {
          result = set_user(s);
          v12 = result;
          if ( result )
          {
            V_LOCK();
            logfmt_raw(v27, 0x1000u, 0, "%s", v12);
            V_UNLOCK();
            v4 = 100;
            v5 = 256;
            v6 = g_zc;
            LOWORD(v7) = -29044;
            goto LABEL_22;
          }
          return result;
        }
      }
      else
      {
        if ( result == 122 )
        {
          if ( opt_zlog_conf_file )
            free((void *)opt_zlog_conf_file);
          result = (int)_strdup(s);
          opt_zlog_conf_file = result;
          return result;
        }
        if ( result == 1030 )
        {
          opt_api_remote = 1;
          return result;
        }
      }
    }
LABEL_34:
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "unknow config parameter!");
    V_UNLOCK();
    v11 = 329;
    goto LABEL_35;
  }
  if ( result == 99 )
  {
    file = json_load_file(s, 0, (char *)v25);
    v9 = file;
    if ( file && !*(_DWORD *)file )
    {
      parse_config(file);
      if ( *((_DWORD *)v9 + 1) != -1 )
      {
        v22 = (unsigned int *)v9 + 1;
        __dmb(0xBu);
        do
        {
          v23 = __ldrex(v22);
          v24 = v23 - 1;
        }
        while ( __strex(v24, v22) );
        if ( !v24 )
          json_delete(v9);
      }
    }
    else
    {
      if ( v25[0] < 0 )
      {
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "%s", v26);
        V_UNLOCK();
        v10 = 220;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "%s:%d: %s", s, v25[0], v26);
        V_UNLOCK();
        v10 = 222;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "parse_arg",
        9,
        v10,
        100,
        v27);
    }
    if ( default_config )
    {
      free((void *)default_config);
      default_config = 0;
    }
    result = (int)_strdup(s);
    default_config = result;
    return result;
  }
  if ( result <= 99 )
  {
    switch ( result )
    {
      case 'P':
        opt_protocol = 1;
        return result;
      case 'a':
        v17 = "ckb_2040";
        v18 = off_1487C8;
        v19 = 8;
        v20 = 0;
        while ( 1 )
        {
          if ( v19 )
          {
            result = strncasecmp(s, v17, v19);
            if ( !result && !s[v19] )
              break;
          }
          if ( ++v20 == 13 )
          {
            V_LOCK();
            logfmt_raw(v27, 0x1000u, 0, "Unknown algo parameter '%s'", s);
            V_UNLOCK();
            v4 = 100;
            v5 = 199;
            v6 = g_zc;
            LOWORD(v7) = -29044;
            goto LABEL_22;
          }
          v21 = v18[1];
          ++v18;
          v17 = v21;
          v19 = strlen(v21);
        }
        opt_algo = v20;
        return result;
      case 'F':
        fan_pwm_fixed = 1;
        return result;
    }
    goto LABEL_34;
  }
  if ( result == 105 )
  {
    asic_select_0 = strtol(s, 0, 10);
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "asic_select_0: %u", (unsigned __int8)asic_select_0);
    V_UNLOCK();
    v4 = 40;
    v5 = 237;
    v6 = g_zc;
    LOWORD(v7) = -29044;
    goto LABEL_22;
  }
  if ( result <= 105 )
  {
    if ( result == 104 )
    {
      V_LOCK();
      logfmt_raw(
        v27,
        0x1000u,
        0,
        "Usage: GODMINER [OPTIONS]\n"
        "Options:\n"
        "  -a, --algo=ALGO       specify the algorithm to use\n"
        "                          eth_1798         ethash\n"
        "                          ckb_2040         eaglesong\n"
        "                          ckb_2042         eaglesong\n"
        "                          kda_2110         blake2s\n"
        "                          dcr_1727         blaker14\n"
        "                          hns_2130         blake2s\n"
        "                          dash_1766        x11\n"
        "  -o, --url=URL         URL of mining server\n"
        "  -u, --user=USERNAME   username for mining server\n"
        "  -p, --pass=PASSWORD   password for mining server\n"
        "  -P, --protocol        verbose dump of protocol-level activities\n"
        "      --api-remote      Allow remote control\n"
        "  -c, --config=FILE     load a JSON-format configuration file\n"
        "  -v, --version         display version information and exit\n"
        "  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n"
        "      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n"
        "      --bitmain-freq=N  set working freq\n"
        "      --bitmain-voltage=N  set working power voltage\n"
        "  -z, --zlog=FILE       load a zlog configuration file\n"
        "  -h, --help            display this help text and exit\n");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "parse_arg",
        9,
        316,
        40,
        v27);
      exit(0);
    }
    goto LABEL_34;
  }
  if ( result == 108 )
  {
    case_select[0] = strtol(s, 0, 10);
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "case_select: %d", (unsigned __int8)case_select[0]);
    V_UNLOCK();
    v4 = 40;
    v5 = 210;
    v6 = g_zc;
    LOWORD(v7) = -29044;
    goto LABEL_22;
  }
  if ( result != 111 )
    goto LABEL_34;
  result = set_url(s);
  v3 = result;
  if ( result )
  {
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "%s", v3);
    V_UNLOCK();
    v4 = 100;
    v5 = 264;
    v6 = g_zc;
    LOWORD(v7) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/"
                                   "release/build/godminer-origin_godminer-new/god-miner.c";
LABEL_22:
    HIWORD(v7) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rele"
                               "ase/build/godminer-origin_godminer-new/god-miner.c" >> 16;
    return zlog(v6, v7, 139, "parse_arg", 9, v5, v4, v27);
  }
  return result;
}
