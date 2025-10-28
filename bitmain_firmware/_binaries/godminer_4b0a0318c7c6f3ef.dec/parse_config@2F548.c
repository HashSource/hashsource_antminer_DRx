void __fastcall parse_config(_DWORD *a1)
{
  int v1; // s0
  int v2; // s1
  char **v3; // r4
  char *v4; // r9
  char *v6; // r10
  _DWORD *v7; // r8
  int v8; // r3
  int v9; // r1
  char *v10; // t1
  _DWORD *v11; // r0
  _DWORD *v12; // r5
  int v13; // r3
  const char *v14; // r0
  char *v15; // r5
  int v16; // r0
  const char *v17; // r1
  const char *v18; // r1
  int v19; // r11
  unsigned int i; // r10
  _DWORD *v21; // r0
  int v22; // r1
  char s[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v6) = 31680;
  v3 = &off_147750;
  LOWORD(v4) = -31180;
  LOWORD(v7) = 20532;
  HIWORD(v6) = (unsigned int)"OW" >> 16;
  HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
  while ( 1 )
  {
    v11 = (_DWORD *)json_object_get(a1, v6);
    v12 = v11;
    if ( !v11 )
      goto LABEL_7;
    v13 = *v11;
    if ( v3[1] )
      break;
    if ( v13 != 5 )
      goto LABEL_7;
    HIWORD(v4) = (unsigned int)"_reg" >> 16;
    parse_arg((int)v3[3], v4);
    if ( &unk_147870 == (_UNKNOWN *)v3 )
      return;
LABEL_8:
    v10 = v3[4];
    v3 += 4;
    v6 = v10;
    if ( !v10 )
      return;
  }
  if ( v13 != 2 )
  {
    switch ( v13 )
    {
      case 3:
        v16 = json_integer_value((int)v11);
        LOWORD(v17) = 27572;
        HIWORD(v17) = (unsigned int)" to port %d, failed (%s)" >> 16;
        sprintf(s, v17, v16);
        parse_arg((int)v3[3], s);
        break;
      case 4:
        json_real_value();
        LOWORD(v18) = -30912;
        HIWORD(v18) = (unsigned int)"/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/uart_debug_logger.c" >> 16;
        sprintf(s, v18, v1, v2);
        parse_arg((int)v3[3], s);
        break;
      case 1:
        LOWORD(v19) = 31688;
        for ( i = 0; (unsigned int)json_array_size(v12) > i; ++i )
        {
          v21 = json_array_get(v12, i);
          if ( !v21 )
            break;
          if ( *v21 )
          {
            V_LOCK();
            HIWORD(v19) = (unsigned int)"40 start_dag_gen!" >> 16;
            logfmt_raw(s, 0x1000u, 0, v19, *v3);
            V_UNLOCK();
            LOWORD(v22) = 31052;
            HIWORD(v22) = (unsigned int)"rror %d" >> 16;
            zlog(*v7, v22, 139, "parse_config", 12, 167, 100, s);
          }
          else
          {
            parse_config(v21);
          }
        }
        break;
      default:
        V_LOCK();
        LOWORD(v8) = 31716;
        HIWORD(v8) = (unsigned int)"atch signal!" >> 16;
        logfmt_raw(s, 0x1000u, 0, v8, v6);
        V_UNLOCK();
        LOWORD(v9) = 31052;
        HIWORD(v9) = (unsigned int)"rror %d" >> 16;
        zlog(*v7, v9, 139, "parse_config", 12, 175, 100, s);
        break;
    }
LABEL_7:
    if ( &unk_147870 == (_UNKNOWN *)v3 )
      return;
    goto LABEL_8;
  }
  v14 = (const char *)json_string_value(v11);
  v15 = _strdup(v14);
  if ( v15 )
  {
    parse_arg((int)v3[3], v15);
    free(v15);
    goto LABEL_7;
  }
}
