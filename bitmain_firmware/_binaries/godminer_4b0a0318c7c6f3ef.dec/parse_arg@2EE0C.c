int __fastcall parse_arg(int result, char *s)
{
  int v3; // r5
  int v4; // r3
  char *v5; // r4
  int v6; // lr
  double *file; // r0
  double *v8; // r5
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  int v12; // r2
  int v13; // r5
  int v14; // r12
  int v15; // r2
  int v16; // r0
  int v17; // r1
  unsigned int v18; // r5
  const char *v19; // r7
  char **v20; // r8
  size_t v21; // r6
  int v22; // r5
  const char *v23; // t1
  int v24; // r5
  int v25[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v26[160]; // [sp+70h] [bp-10A0h] BYREF
  char v27[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    v24 = result;
    if ( !result )
      return result;
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "%s", v24);
    V_UNLOCK();
    v14 = 100;
    v15 = 251;
    v16 = g_zc;
    LOWORD(v17) = 31052;
    goto LABEL_62;
  }
  if ( result > 117 )
  {
    if ( result > 1033 )
    {
      if ( result == 1035 )
      {
        v18 = strtol(s, 0, 10);
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "work mode: %d!", v18);
        V_UNLOCK();
        result = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/go"
                   "dminer-origin_godminer-new/god-miner.c",
                   139,
                   "parse_arg",
                   9,
                   301,
                   40,
                   v27);
        if ( v18 > 1 )
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
                   303,
                   100,
                   v27);
        }
        else
        {
          opt_custom_power_mode = v18;
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
        v6 = 294;
LABEL_20:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "parse_arg",
          9,
          v6,
          100,
          v27);
        exit(1);
      }
      if ( result == 1036 )
        return result;
LABEL_19:
      V_LOCK();
      logfmt_raw(v27, 0x1000u, 0, "unknow config parameter!");
      V_UNLOCK();
      v6 = 324;
      goto LABEL_20;
    }
    if ( result >= 1032 )
      return result;
    if ( result != 122 )
    {
      if ( result == 1030 )
      {
        opt_api_remote = 1;
        return result;
      }
      if ( result == 118 )
      {
        opt_version_path = (int)s;
        return result;
      }
      goto LABEL_19;
    }
    if ( opt_zlog_conf_file )
      free((void *)opt_zlog_conf_file);
    result = (int)_strdup(s);
    opt_zlog_conf_file = result;
  }
  else if ( result == 99 )
  {
    file = json_load_file(s, 0, (char *)v25);
    v8 = file;
    if ( !file || *(_DWORD *)file )
    {
      if ( v25[0] < 0 )
      {
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "%s", v26);
        V_UNLOCK();
        v12 = 219;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "%s:%d: %s", s, v25[0], v26);
        V_UNLOCK();
        v12 = 221;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "parse_arg",
        9,
        v12,
        100,
        v27);
    }
    else
    {
      parse_config(file);
      if ( *((_DWORD *)v8 + 1) != -1 )
      {
        v9 = (unsigned int *)v8 + 1;
        __dmb(0xBu);
        do
        {
          v10 = __ldrex(v9);
          v11 = v10 - 1;
        }
        while ( __strex(v11, v9) );
        if ( !v11 )
          json_delete(v8);
      }
    }
    if ( default_config )
    {
      free((void *)default_config);
      default_config = 0;
    }
    result = (int)_strdup(s);
    default_config = result;
  }
  else
  {
    if ( result > 99 )
    {
      if ( result == 108 )
      {
        case_select = strtol(s, 0, 10);
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "case_select: %d", (unsigned __int8)case_select);
        V_UNLOCK();
        v14 = 40;
        v15 = 209;
        v16 = g_zc;
        LOWORD(v17) = 31052;
        goto LABEL_62;
      }
      if ( result <= 108 )
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
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/god-miner.c",
            139,
            "parse_arg",
            9,
            311,
            40,
            v27);
          exit(0);
        }
      }
      else
      {
        if ( result == 111 )
        {
          result = set_url(s);
          v13 = result;
          if ( !result )
            return result;
          V_LOCK();
          logfmt_raw(v27, 0x1000u, 0, "%s", v13);
          V_UNLOCK();
          v14 = 100;
          v15 = 259;
          v16 = g_zc;
          LOWORD(v17) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildro"
                                          "ot/tmp/release/build/godminer-origin_godminer-new/god-miner.c";
          goto LABEL_62;
        }
        if ( result == 112 )
        {
          result = set_pass(s);
          v3 = result;
          if ( !result )
          {
            if ( *s )
            {
              v4 = (unsigned __int8)s[1];
              *s = 120;
              v5 = s + 1;
              if ( v4 )
              {
                do
                  *v5++ = 0;
                while ( *v5 );
              }
            }
            return result;
          }
          V_LOCK();
          logfmt_raw(v27, 0x1000u, 0, "%s", v3);
          V_UNLOCK();
          v14 = 100;
          v15 = 238;
          v16 = g_zc;
          LOWORD(v17) = 31052;
LABEL_62:
          HIWORD(v17) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/god-miner.c" >> 16;
          return zlog(v16, v17, 139, "parse_arg", 9, v15, v14, v27);
        }
      }
      goto LABEL_19;
    }
    if ( result == 80 )
    {
      opt_protocol = 1;
      return result;
    }
    if ( result != 97 )
    {
      if ( result == 70 )
      {
        fan_pwm_fixed = 1;
        return result;
      }
      goto LABEL_19;
    }
    v19 = "ckb_2040";
    v20 = off_147298;
    v21 = 8;
    v22 = 0;
    while ( 1 )
    {
      if ( v21 )
      {
        result = strncasecmp(s, v19, v21);
        if ( !result && !s[v21] )
          break;
      }
      if ( ++v22 == 13 )
      {
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "Unknown algo parameter '%s'", s);
        V_UNLOCK();
        v14 = 100;
        v15 = 198;
        v16 = g_zc;
        LOWORD(v17) = 31052;
        goto LABEL_62;
      }
      v23 = v20[1];
      ++v20;
      v19 = v23;
      v21 = strlen(v23);
    }
    opt_algo = v22;
  }
  return result;
}
