int __fastcall parse_arg(int result, char *s)
{
  int v3; // lr
  double *file; // r0
  double *v5; // r5
  int v6; // r2
  int v7; // r5
  int v8; // r2
  int v9; // r0
  int v10; // r1
  const char *v11; // r7
  char **v12; // r8
  size_t v13; // r6
  int v14; // r5
  const char *v15; // t1
  int v16; // r5
  int v17; // r3
  char *v18; // r4
  int v19; // r5
  unsigned int v20; // r5
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  int v24[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v25[160]; // [sp+70h] [bp-10A0h] BYREF
  char v26[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    v19 = result;
    if ( !result )
      return result;
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "%s", v19);
    V_UNLOCK();
    v8 = 419;
    v9 = g_zc;
    LOWORD(v10) = 424;
    goto LABEL_48;
  }
  if ( result <= 117 )
  {
    if ( result == 99 )
    {
      file = json_load_file(s, 0, (char *)v24);
      v5 = file;
      if ( file && !*(_DWORD *)file )
      {
        parse_config(file);
        if ( *((_DWORD *)v5 + 1) != -1 )
        {
          v21 = (unsigned int *)v5 + 1;
          __dmb(0xBu);
          do
          {
            v22 = __ldrex(v21);
            v23 = v22 - 1;
          }
          while ( __strex(v23, v21) );
          if ( !v23 )
            json_delete(v5);
        }
      }
      else
      {
        if ( v24[0] < 0 )
        {
          V_LOCK();
          logfmt_raw(v26, 0x1000u, 0, "%s", v25);
          V_UNLOCK();
          v6 = 387;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v26, 0x1000u, 0, "%s:%d: %s", s, v24[0], v25);
          V_UNLOCK();
          v6 = 389;
        }
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "parse_arg",
          9,
          v6,
          100,
          v26);
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
          break;
        case 'a':
          v11 = "ckb_2040";
          v12 = off_12FAE0;
          v13 = 8;
          v14 = 0;
          while ( 1 )
          {
            if ( v13 )
            {
              result = strncasecmp(s, v11, v13);
              if ( !result && !s[v13] )
                break;
            }
            if ( ++v14 == 12 )
            {
              V_LOCK();
              logfmt_raw(v26, 0x1000u, 0, "Unknown algo parameter '%s'", s);
              V_UNLOCK();
              v8 = 370;
              v9 = g_zc;
              LOWORD(v10) = 424;
              goto LABEL_48;
            }
            v15 = v12[1];
            ++v12;
            v11 = v15;
            v13 = strlen(v15);
          }
          opt_algo = v14;
          break;
        case 'F':
          fan_pwm_fixed = 1;
          break;
        default:
LABEL_8:
          V_LOCK();
          logfmt_raw(v26, 0x1000u, 0, "unknow config parameter!");
          V_UNLOCK();
          v3 = 492;
          goto LABEL_9;
      }
      return result;
    }
    if ( result == 111 )
    {
      result = set_url(s);
      v7 = result;
      if ( !result )
        return result;
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, "%s", v7);
      V_UNLOCK();
      v8 = 427;
      v9 = g_zc;
      LOWORD(v10) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/god-miner.c";
    }
    else
    {
      if ( result != 112 )
      {
        if ( result == 104 )
        {
          V_LOCK();
          logfmt_raw(
            v26,
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
            479,
            40,
            v26);
          exit(0);
        }
        goto LABEL_8;
      }
      result = set_pass(s);
      v16 = result;
      if ( !result )
      {
        if ( *s )
        {
          v17 = (unsigned __int8)s[1];
          *s = 120;
          v18 = s + 1;
          if ( v17 )
          {
            do
              *v18++ = 0;
            while ( *v18 );
          }
        }
        return result;
      }
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, "%s", v16);
      V_UNLOCK();
      v8 = 406;
      v9 = g_zc;
      LOWORD(v10) = 424;
    }
LABEL_48:
    HIWORD(v10) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/god-miner.c" >> 16;
    return zlog(v9, v10, 139, "parse_arg", 9, v8, 100, v26);
  }
  if ( result > 1033 )
  {
    if ( result == 1035 )
    {
      v20 = strtol(s, 0, 10);
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, "work mode: %d!", v20);
      V_UNLOCK();
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godm"
                 "iner-origin_godminer-new/god-miner.c",
                 139,
                 "parse_arg",
                 9,
                 469,
                 40,
                 v26);
      if ( v20 > 1 )
      {
        V_LOCK();
        logfmt_raw(v26, 0x1000u, 0, "power mode value error!");
        V_UNLOCK();
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godm"
                 "iner-origin_godminer-new/god-miner.c",
                 139,
                 "parse_arg",
                 9,
                 471,
                 100,
                 v26);
      }
      else
      {
        opt_custom_power_mode = v20;
      }
    }
    else if ( result >= 1035 )
    {
      if ( result != 1036 )
        goto LABEL_8;
    }
    else
    {
      result = strtol(s, 0, 10);
      if ( (unsigned int)result > 0x64 )
      {
        V_LOCK();
        logfmt_raw(v26, 0x1000u, 0, "fan_pwm value error!");
        V_UNLOCK();
        v3 = 462;
LABEL_9:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "parse_arg",
          9,
          v3,
          100,
          v26);
        exit(1);
      }
      fan_pwm = result;
    }
  }
  else if ( result < 1032 )
  {
    switch ( result )
    {
      case 122:
        if ( opt_zlog_conf_file )
          free((void *)opt_zlog_conf_file);
        result = (int)_strdup(s);
        opt_zlog_conf_file = result;
        break;
      case 1030:
        opt_api_remote = 1;
        break;
      case 118:
        opt_version_path = (int)s;
        break;
      default:
        goto LABEL_8;
    }
  }
  return result;
}
