int __fastcall main(int a1, char **a2, char **a3)
{
  int v5; // r5
  int v6; // r0
  int v8; // r10
  char *v9; // r6
  int v10; // r8
  int i; // r5
  int udev; // r7
  int name; // r0
  const char *devnode; // r0
  const char *v15; // r9
  const char *property_value; // r8
  const char *v17; // r1
  int v18; // r5
  int v19; // r11
  int v20; // r9
  int v21; // r10
  int v22; // r7
  ssize_t v23; // r0
  double v24; // r0
  _BYTE *v25; // r3
  int v26; // r2
  double v27; // r0
  double v28; // r0
  int v29; // r7
  int v30; // r3
  double v31; // r0
  int v32; // [sp+Ch] [bp-1458h]
  _BYTE buf[1012]; // [sp+1Ch] [bp-1448h] BYREF
  char v34[52]; // [sp+41Ch] [bp-1048h] BYREF
  char v35[4104]; // [sp+45Ch] [bp-1008h] BYREF

  v5 = udev_new(a1);
  if ( !v5 )
    return 1;
  sub_A9A8();
  udev_set_log_fn(v5, sub_979C);
  while ( 1 )
  {
    v6 = getopt_long(a1, a2, "dxh", &longopts, 0);
    if ( v6 == -1 )
      break;
    if ( v6 != 100 )
    {
      if ( v6 == 104 )
      {
        puts(
          "Usage: accelerometer [options] <device path>\n"
          "  --debug         debug to stderr\n"
          "  --help          print this help text\n");
        exit(0);
      }
LABEL_6:
      exit(1);
    }
    dword_16030 = 1;
    sub_AE50(7);
    udev_set_log_priority(v5, 7);
  }
  if ( !a2[optind] )
  {
    puts(
      "Usage: accelerometer [options] <device path>\n"
      "  --debug         debug to stderr\n"
      "  --help          print this help text\n");
    goto LABEL_6;
  }
  _snprintf_chk(v35, 4096, 1, 4096, "/sys/%s", a2[optind]);
  v8 = udev_device_new_from_syspath(v5, v35);
  if ( v8 )
  {
    v9 = 0;
    v10 = udev_enumerate_new(v5);
    udev_enumerate_add_match_parent(v10, v8);
    udev_enumerate_scan_devices(v10);
    for ( i = udev_enumerate_get_list_entry(v10); i; i = udev_list_entry_get_next(i) )
    {
      udev = udev_enumerate_get_udev(v10);
      name = udev_list_entry_get_name(i);
      if ( udev_device_new_from_syspath(udev, name) )
      {
        if ( !v9 )
        {
          devnode = (const char *)udev_device_get_devnode();
          v15 = devnode;
          if ( devnode )
          {
            if ( strstr(devnode, "/event") )
              v9 = _strdup(v15);
          }
        }
        udev_device_unref();
      }
    }
    if ( v9 )
    {
      sub_AE0C(
        7,
        "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-an"
        "gstrom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/udev/accelerometer/accelerometer.c",
        337,
        "main",
        "opening accelerometer device %s\n",
        v9);
      property_value = (const char *)udev_device_get_property_value(v8, "ID_INPUT_ACCELEROMETER_ORIENTATION");
      if ( property_value )
      {
        while ( 1 )
        {
          v17 = off_BBA0[i];
          if ( !v17 )
            break;
          if ( !strcmp(property_value, v17) )
            goto LABEL_51;
          ++i;
        }
        v32 = 0;
      }
      else
      {
LABEL_51:
        v32 = i;
      }
      v18 = open64(v9, 0);
      if ( v18 < 0 )
        goto LABEL_50;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
LABEL_31:
      v23 = read(v18, buf, 0x400u);
      if ( v23 <= 15 )
      {
LABEL_49:
        sub_9868(v18);
LABEL_50:
        free(v9);
        sub_AD0C();
        return 0;
      }
      LODWORD(v24) = v23 >> 4;
      v25 = buf;
      v26 = 0;
      while ( 1 )
      {
        if ( v22 && *((_WORD *)v25 + 4) == 3 )
        {
          HIDWORD(v24) = *((unsigned __int16 *)v25 + 5);
          if ( *((_WORD *)v25 + 5) )
          {
            if ( HIDWORD(v24) == 1 )
            {
              if ( !v20 )
              {
                v20 = *((unsigned __int16 *)v25 + 5);
                HIDWORD(v24) = *((_DWORD *)v25 + 3);
              }
            }
            else if ( HIDWORD(v24) == 2 && !v19 )
            {
              v19 = 1;
            }
          }
          else if ( !v21 )
          {
            HIDWORD(v24) = *((_DWORD *)v25 + 3);
            v21 = 1;
          }
        }
        else
        {
          HIDWORD(v24) = *((unsigned __int16 *)v25 + 4);
          if ( !*((_WORD *)v25 + 4) )
          {
            HIDWORD(v24) = *((unsigned __int16 *)v25 + 5);
            if ( !*((_WORD *)v25 + 5) )
              v22 = 1;
          }
        }
        if ( (v20 & v21) != 0 && v19 )
          break;
        ++v26;
        v25 += 16;
        if ( v26 >= SLODWORD(v24) )
          goto LABEL_31;
      }
      v27 = atan(v24);
      LODWORD(v28) = lround(LODWORD(v27), HIDWORD(v27));
      if ( (int)abs32(SLODWORD(v28)) <= 20 )
      {
        v31 = atan(v28);
        LODWORD(v28) = lround(LODWORD(v31), HIDWORD(v31));
        if ( (int)abs32(SLODWORD(v28)) <= 25 )
          goto LABEL_48;
        v29 = v32;
        if ( SLODWORD(v28) < 0 )
          v30 = 2;
        else
          v30 = 1;
        if ( (unsigned int)(v32 - 1) > 1 )
        {
LABEL_47:
          v32 = v30;
LABEL_48:
          _snprintf_chk(v34, 64, 1, 64, "ID_INPUT_ACCELEROMETER_ORIENTATION=%s", off_BBA0[v32]);
          puts(v34);
          goto LABEL_49;
        }
      }
      else
      {
        v29 = v32;
        if ( SLODWORD(v28) < 0 )
          v30 = 3;
        else
          v30 = 4;
        if ( (unsigned int)(v32 - 3) > 1 )
          goto LABEL_47;
      }
      if ( (unsigned int)(LODWORD(v28) + 4) > 8 )
        v29 = v30;
      v32 = v29;
      goto LABEL_48;
    }
    _fprintf_chk(stderr, 1, "unable to get device node for '%s'\n", v35);
    return 0;
  }
  else
  {
    _fprintf_chk(stderr, 1, "unable to access '%s'\n", v35);
    return 1;
  }
}
