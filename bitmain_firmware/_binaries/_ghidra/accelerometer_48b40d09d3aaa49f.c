// Decompiled: accelerometer_48b40d09d3aaa49f


void _DT_INIT(void)

{
  FUN_000096a4();
  return;
}




void FUN_00009158(undefined4 param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  ssize_t sVar14;
  uint uVar15;
  undefined1 *puVar16;
  char *__file;
  double dVar17;
  int local_1480;
  int local_147c;
  undefined1 auStack_1474 [8];
  short local_146c [2];
  int aiStack_1468 [253];
  char acStack_1074 [64];
  undefined1 auStack_1034 [4096];
  int local_34;
  
  local_34 = __stack_chk_guard;
  iVar6 = udev_new();
  if (iVar6 == 0) {
    uVar8 = 1;
  }
  else {
    FUN_0000a9a8();
    udev_set_log_fn(iVar6,&LAB_0000979c);
    while (iVar7 = getopt_long(param_1,param_2,&DAT_0000b958,&DAT_0000b920), iVar7 != -1) {
      if (iVar7 != 100) {
        if (iVar7 == 0x68) {
          puts(
              "Usage: accelerometer [options] <device path>\n  --debug         debug to stderr\n  --help          print this help text\n"
              );
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_000091d8;
      }
      DAT_00016030 = 1;
      FUN_0000ae50(7);
      udev_set_log_priority(iVar6,7);
    }
    if (*(int *)(param_2 + optind * 4) == 0) {
      puts(
          "Usage: accelerometer [options] <device path>\n  --debug         debug to stderr\n  --help          print this help text\n"
          );
LAB_000091d8:
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    __snprintf_chk(auStack_1034,0x1000,1,0x1000);
    iVar7 = udev_device_new_from_syspath(iVar6,auStack_1034);
    if (iVar7 == 0) {
      __fprintf_chk(stderr,1,"unable to access \'%s\'\n",auStack_1034);
      uVar8 = 1;
    }
    else {
      __file = (char *)0x0;
      uVar8 = udev_enumerate_new(iVar6);
      udev_enumerate_add_match_parent(uVar8,iVar7);
      udev_enumerate_scan_devices(uVar8);
      for (iVar6 = udev_enumerate_get_list_entry(uVar8); iVar6 != 0; iVar6 = udev_list_entry_get_next(iVar6)) {
        uVar9 = udev_enumerate_get_udev(uVar8);
        uVar10 = udev_list_entry_get_name(iVar6);
        iVar11 = udev_device_new_from_syspath(uVar9,uVar10);
        if (iVar11 != 0) {
          if (((__file == (char *)0x0) && (pcVar12 = (char *)udev_device_get_devnode(), pcVar12 != (char *)0x0)) &&
             (pcVar13 = strstr(pcVar12,"/event"), pcVar13 != (char *)0x0)) {
            __file = (char *)__strdup(pcVar12);
          }
          udev_device_unref(iVar11);
        }
      }
      if (__file == (char *)0x0) {
        __fprintf_chk(stderr,1,"unable to get device node for \'%s\'\n",auStack_1034);
        uVar8 = 0;
      }
      else {
        FUN_0000ae0c(7,
                     "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/udev/accelerometer/accelerometer.c"
                     ,0x151,&DAT_0000b918);
        pcVar12 = (char *)udev_device_get_property_value(iVar7,"ID_INPUT_ACCELEROMETER_ORIENTATION");
        iVar6 = 0;
        if (pcVar12 != (char *)0x0) {
          while (((&PTR_s_undefined_0000bba0)[iVar6] != (char *)0x0 &&
                 (iVar7 = strcmp(pcVar12,(&PTR_s_undefined_0000bba0)[iVar6]), iVar7 != 0))) {
            iVar6 = iVar6 + 1;
          }
        }
        iVar6 = open64(__file,0);
        if (-1 < iVar6) {
          iVar7 = 0;
          local_147c = 0;
          bVar3 = false;
          bVar5 = false;
          bVar4 = false;
          bVar2 = false;
          local_1480 = 0;
          while (sVar14 = read(iVar6,auStack_1474,0x400), 0xf < sVar14) {
            puVar16 = auStack_1474;
            iVar11 = 0;
            do {
              if ((bVar2) && (*(short *)(puVar16 + 8) == 3)) {
                sVar1 = *(short *)(puVar16 + 10);
                if (sVar1 == 0) {
                  if (!bVar4) {
                    local_1480 = *(int *)(puVar16 + 0xc);
                    bVar4 = true;
                  }
                }
                else if (sVar1 == 1) {
                  if (!bVar5) {
                    local_147c = *(int *)(puVar16 + 0xc);
                    bVar5 = true;
                  }
                }
                else if ((sVar1 == 2) && (!bVar3)) {
                  iVar7 = *(int *)(puVar16 + 0xc);
                  bVar3 = true;
                }
              }
              else if ((*(short *)(puVar16 + 8) == 0) && (*(short *)(puVar16 + 10) == 0)) {
                bVar2 = true;
              }
              if (((bool)(bVar5 & bVar4)) && (bVar3)) {
                dVar17 = atan((double)(longlong)local_1480 /
                              SQRT((double)(longlong)(local_147c * local_147c + iVar7 * iVar7)));
                uVar15 = lround(dVar17 * 57.29577951308232);
                if ((int)((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f)) < 0x15) {
                  dVar17 = atan((double)(longlong)local_147c /
                                SQRT((double)(longlong)(local_1480 * local_1480 + iVar7 * iVar7)));
                  lround(dVar17 * 57.29577951308232);
                }
                __snprintf_chk(acStack_1074,0x40,1,0x40);
                puts(acStack_1074);
                goto LAB_000094d8;
              }
              iVar11 = iVar11 + 1;
              puVar16 = puVar16 + 0x10;
            } while (iVar11 < sVar14 >> 4);
          }
LAB_000094d8:
          FUN_00009868(iVar6);
        }
        free(__file);
        FUN_0000ad0c();
        uVar8 = 0;
      }
    }
  }
  if (local_34 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(FUN_00009158,param_2,&stack0x00000004,FUN_0000b8a8,&DAT_0000b90c,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x000096b8) */

void FUN_000096a4(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x000096e0) */
/* WARNING: Removing unreachable block (ram,0x000096e8) */
/* WARNING: Removing unreachable block (ram,0x000096ec) */

void FUN_000096c8(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_0001602c != '\0') {
    return;
  }
  FUN_000096c8();
  DAT_0001602c = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00009720) */
/* WARNING: Removing unreachable block (ram,0x00009728) */
/* WARNING: Removing unreachable block (ram,0x00009788) */
/* WARNING: Removing unreachable block (ram,0x0000972c) */
/* WARNING: Removing unreachable block (ram,0x0000977c) */

void _INIT_0(void)

{
  return;
}




int FUN_0000980c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0000ae34("fd >= 0",
                 "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/shared/util.c"
                 ,0x9d,"close_nointr",param_4);
  }
  iVar1 = close(param_1);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 4) {
      iVar1 = 0;
    }
    else {
      iVar1 = -*piVar2;
    }
    return iVar1;
  }
  return iVar1;
}




void FUN_00009868(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = __errno_location();
  iVar3 = *piVar1;
  iVar2 = FUN_0000980c(param_1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0000ae34("close_nointr(fd) == 0",
                 "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/shared/util.c"
                 ,0xb6,"close_nointr_nofail",param_4);
  }
  *piVar1 = iVar3;
  return;
}




int FUN_000098bc(char *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int __fd;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 & 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0000ae34("!(mode & 0100)",
                 "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/shared/util.c"
                 ,0x720,"open_terminal",param_4);
  }
  iVar2 = 0x15;
  while( true ) {
    __fd = open64(param_1,param_2,0);
    if (-1 < __fd) {
      iVar2 = isatty(__fd);
      if (iVar2 < 0) {
        FUN_00009868(__fd);
        piVar1 = __errno_location();
        iVar3 = -*piVar1;
      }
      else {
        iVar3 = __fd;
        if (iVar2 == 0) {
          iVar3 = -0x19;
          FUN_00009868(__fd);
        }
      }
      return iVar3;
    }
    piVar1 = __errno_location();
    if (*piVar1 != 5) break;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return -5;
    }
    usleep(50000);
  }
  return -*piVar1;
}




int FUN_0000998c(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint local_18;
  socklen_t local_14 [2];
  
  local_14[0] = 4;
  iVar1 = getsockopt(param_1,1,7,&local_18,local_14);
  if (((iVar1 < 0) || (local_14[0] != 4)) || (local_18 < param_2 << 1)) {
    local_18 = param_2;
    iVar1 = setsockopt(param_1,1,7,&local_18,4);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = -*piVar2;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}




longlong FUN_00009a24(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0000ae34(&DAT_0000cc7c,
                 "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/shared/time-util.c"
                 ,0x5e,"timespec_load");
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if ((uVar2 != 0xffffffff) || (uVar1 != 0xffffffff)) {
    lVar4 = FUN_0000afac(uVar1,(int)uVar1 >> 0x1f,1000,0);
    uVar5 = FUN_0000afac(~(uint)lVar4,~(uint)((ulonglong)lVar4 >> 0x20),1000000,0);
    uVar1 = (uint)((ulonglong)uVar5 >> 0x20);
    bVar3 = (uint)((int)uVar2 >> 0x1f) <= uVar1;
    if (uVar1 == (int)uVar2 >> 0x1f) {
      bVar3 = uVar2 <= (uint)uVar5;
    }
    if (bVar3) {
      return (longlong)(int)uVar2 * 1000000 + lVar4;
    }
  }
  return -1;
}




void FUN_00009ae0(clockid_t param_1)

{
  int iVar1;
  timespec tStack_10;
  
  iVar1 = clock_gettime(param_1,&tStack_10);
  if (iVar1 == 0) {
    FUN_00009a24(&tStack_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000ae34("clock_gettime(clock_id, &ts) == 0",
               "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/shared/time-util.c"
               ,0x1f,&DAT_0000cc78);
}




undefined4 * FUN_00009b34(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0000ae34(&DAT_0000cd60,
                 "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/shared/time-util.c"
                 ,0x8b,"timeval_store");
  }
  if (param_4 == -1 && param_3 == -1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  else {
    uVar1 = FUN_0000afac(param_3,param_4,1000000,0);
    *param_1 = uVar1;
    FUN_0000afac(param_3,param_4,1000000,0);
    param_1[1] = extraout_r2;
  }
  return param_1;
}




int FUN_00009bd4(void)

{
  int *piVar1;
  
  if (DAT_00016008 < 0) {
    DAT_00016008 = open64("/dev/kmsg",0x80101);
    if (DAT_00016008 < 0) {
      piVar1 = __errno_location();
      return -*piVar1;
    }
  }
  return 0;
}




uint FUN_00009c2c(void)

{
  __pid_t _Var1;
  
  if (-1 < (int)DAT_00016014) {
    return 0;
  }
  _Var1 = getpid();
  if (_Var1 != 1) {
    DAT_00016014 = 2;
    return 0;
  }
  DAT_00016014 = FUN_000098bc("/dev/console",0x80101);
  return DAT_00016014 & (int)DAT_00016014 >> 0x1f;
}




int FUN_00009c90(uint param_1)

{
  int __fd;
  int *piVar1;
  undefined4 extraout_r1;
  undefined1 auStack_10 [8];
  
  __fd = socket(1,param_1 | 0x80000,0);
  if (__fd < 0) {
    piVar1 = __errno_location();
    __fd = -*piVar1;
  }
  else {
    FUN_0000998c(__fd,0x800000);
    FUN_00009b34(auStack_10,extraout_r1,60000000,0);
    setsockopt(__fd,1,0x15,auStack_10,8);
  }
  return __fd;
}




undefined4 FUN_00009d04(int param_1,uint param_2,int param_3,int param_4,int param_5,char *param_6,int param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *local_3c;
  undefined4 local_2c;
  
  if (param_3 == 0) {
    pcVar3 = "";
    uVar2 = 0;
    local_3c = pcVar3;
  }
  else {
    uVar2 = 0x800;
    pcVar3 = "CODE_FILE=";
    local_3c = "\n";
  }
  if (param_4 != 0) {
    pcVar4 = "CODE_LINE=";
    pcVar1 = "\n";
  }
  else {
    pcVar4 = "";
    pcVar1 = pcVar4;
  }
  if (param_5 == 0) {
    pcVar6 = "";
    local_2c = 0;
    pcVar5 = pcVar6;
  }
  else {
    local_2c = 0x800;
    pcVar6 = "\n";
    pcVar5 = "CODE_FUNCTION=";
  }
  if (param_7 == 0) {
    pcVar7 = "";
    uVar8 = 0;
    param_6 = pcVar7;
  }
  else {
    uVar8 = 0x800;
    pcVar7 = "\n";
  }
  __snprintf_chk(param_1,0x800,1,0xffffffff,
                 "PRIORITY=%i\nSYSLOG_FACILITY=%i\n%s%.*s%s%s%.*i%s%s%.*s%s%s%.*s%sSYSLOG_IDENTIFIER=%s\n",param_2 & 7,
                 (param_2 << 0x16) >> 0x19,pcVar3,uVar2,param_3,local_3c,pcVar4,param_4 != 0,param_4,pcVar1,pcVar5,
                 local_2c,param_5,pcVar6,param_6,uVar8,param_7,pcVar7,program_invocation_short_name);
  *(undefined1 *)(param_1 + 0x7ff) = 0;
  return 0;
}




void FUN_00009ef0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,char *param_7)

{
  ssize_t sVar1;
  int *piVar2;
  msghdr local_860;
  iovec local_844;
  char *local_83c;
  undefined4 local_838;
  char *local_834;
  size_t local_830;
  undefined *local_82c;
  undefined4 local_828;
  char acStack_824 [2048];
  int local_24;
  
  local_24 = __stack_chk_guard;
  local_860.msg_namelen = 0;
  local_838 = 0;
  local_860.msg_iov = (iovec *)0x0;
  if (DAT_00016010 < 0) {
    param_1 = 0;
  }
  local_834 = (char *)0x0;
  local_860.msg_iovlen = 0;
  local_830 = 0;
  local_860.msg_control = (void *)0x0;
  local_82c = (undefined *)0x0;
  local_860.msg_controllen = 0;
  local_828 = 0;
  local_844.iov_base = (char *)0x0;
  local_844.iov_len = 0;
  local_83c = (char *)0x0;
  local_860.msg_name = (void *)0x0;
  local_860.msg_flags = 0;
  if (DAT_00016010 >= 0) {
    FUN_00009d04(acStack_824,param_1,param_2,param_3,param_4,param_5,param_6);
    local_844.iov_base = acStack_824;
    local_844.iov_len = strlen(acStack_824);
    local_834 = param_7;
    local_83c = "MESSAGE=";
    local_838 = 8;
    local_830 = strlen(param_7);
    local_82c = &DAT_0000c1c8;
    local_860.msg_iov = &local_844;
    local_828 = 1;
    local_860.msg_iovlen = 4;
    sVar1 = sendmsg(DAT_00016010,&local_860,0x4000);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      param_1 = -*piVar2;
    }
    else {
      param_1 = 1;
    }
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}




void FUN_0000a064(void)

{
  int iVar1;
  __pid_t _Var2;
  
  iVar1 = DAT_00016014;
  if (DAT_00016014 < 0) {
    return;
  }
  _Var2 = getpid();
  if (_Var2 != 1) {
    return;
  }
  if (2 < iVar1) {
    FUN_00009868(iVar1);
  }
  DAT_00016014 = 0xffffffff;
  return;
}




void FUN_0000a0b4(void)

{
  if (DAT_00016008 < 0) {
    return;
  }
  FUN_00009868();
  DAT_00016008 = 0xffffffff;
  return;
}




void FUN_0000a0e0(void)

{
  if (DAT_00016004 < 0) {
    return;
  }
  FUN_00009868();
  DAT_00016004 = 0xffffffff;
  return;
}




void FUN_0000a10c(void)

{
  if (DAT_00016010 < 0) {
    return;
  }
  FUN_00009868();
  DAT_00016010 = 0xffffffff;
  return;
}




void FUN_0000a138(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,char *param_7)

{
  iovec *piVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  ssize_t sVar6;
  int *piVar7;
  tm *__tp;
  uint uVar8;
  __pid_t _Var9;
  uint uVar10;
  iovec *piVar11;
  int iVar12;
  char *__s;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  undefined8 uVar18;
  time_t local_d4;
  msghdr mStack_d0;
  iovec local_b4;
  char *local_ac;
  size_t local_a8;
  char *local_a4;
  size_t local_a0;
  char *local_9c;
  size_t local_98;
  iovec local_94;
  char acStack_8c [15];
  undefined1 local_7d;
  char acStack_7c [15];
  undefined1 local_6d;
  char acStack_6c [15];
  undefined1 local_5d;
  undefined1 local_2d;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if (DAT_00016038 == 8) {
    iVar13 = 0;
  }
  else {
    if ((param_1 & 0x3f8) == 0) {
      param_1 = param_1 & 7 | DAT_0001600c;
    }
    iVar13 = 0;
    do {
      do {
        do {
          __s = param_7;
          param_7 = __s + 1;
          cVar2 = *__s;
        } while (cVar2 == '\n');
      } while (cVar2 == '\r');
      pcVar4 = __s;
      if (cVar2 == '\0') break;
      do {
        pcVar3 = param_7;
        if ((cVar2 == '\n') || (cVar2 == '\r')) {
          param_7 = pcVar4 + 1;
          *pcVar4 = '\0';
          goto LAB_0000a254;
        }
        cVar2 = *pcVar3;
        param_7 = pcVar3 + 1;
        pcVar4 = pcVar3;
      } while (cVar2 != '\0');
      param_7 = (char *)0x0;
LAB_0000a254:
      if ((DAT_00016038 == 6 || DAT_00016038 == 3) || (DAT_00016038 == 2)) {
        iVar12 = FUN_00009ef0(param_1,param_2,param_3,param_4,param_5,param_6,__s);
        if (iVar12 < 0) {
          if (iVar12 != -0xb) {
            FUN_0000a10c();
          }
          FUN_00009bd4();
          goto LAB_0000a274;
        }
        if (iVar12 == 0) goto LAB_0000a274;
        iVar13 = iVar13 + 1;
        if (DAT_00016038 - 4 < 2) goto LAB_0000a428;
        iVar14 = iVar13;
        if (iVar12 < 1) goto LAB_0000a284;
      }
      else {
LAB_0000a274:
        iVar14 = iVar13;
        if (DAT_00016038 - 4 < 2) {
LAB_0000a428:
          memset(&local_b4,0,0x28);
          memset(&mStack_d0,0,0x1c);
          mStack_d0.msg_iovlen = 5;
          iVar14 = iVar13;
          mStack_d0.msg_iov = &local_b4;
          if (DAT_00016004 < 0) goto LAB_0000a284;
          __snprintf_chk(acStack_8c,0x10,1,0x10,&DAT_0000d1fc,param_1);
          local_7d = 0;
          uVar18 = FUN_00009ae0(0);
          local_d4 = FUN_0000afac((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),1000000,0);
          __tp = localtime(&local_d4);
          if (__tp == (tm *)0x0) {
LAB_0000a8a0:
            FUN_0000a0e0();
LAB_0000a7e0:
            FUN_00009bd4();
            goto LAB_0000a284;
          }
          sVar5 = strftime(acStack_6c,0x40,"%h %e %T ",__tp);
          if (sVar5 == 0) goto LAB_0000a8a0;
          _Var9 = getpid();
          __snprintf_chk(acStack_7c,0x10,1,0x10,"[%lu]: ",_Var9);
          local_6d = 0;
          local_b4.iov_base = acStack_8c;
          local_b4.iov_len = strlen(acStack_8c);
          local_ac = acStack_6c;
          local_a8 = strlen(acStack_6c);
          local_a4 = program_invocation_short_name;
          local_a0 = strlen(program_invocation_short_name);
          local_9c = acStack_7c;
          local_98 = strlen(acStack_7c);
          local_94.iov_base = __s;
          local_94.iov_len = strlen(__s);
          if (DAT_00016034 != '\0') {
            local_94.iov_len = local_94.iov_len + 1;
          }
LAB_0000a5b0:
          uVar15 = sendmsg(DAT_00016004,&mStack_d0,0x4000);
          if (-1 < (int)uVar15) {
            if ((DAT_00016034 == '\0') ||
               (local_b4.iov_len + local_a8 + local_a0 + local_98 + local_94.iov_len <= uVar15)) goto LAB_0000a794;
            if (uVar15 != 0) {
              sVar5 = uVar15;
              if (local_b4.iov_len <= uVar15) {
                sVar5 = local_b4.iov_len;
              }
              local_b4.iov_len = local_b4.iov_len - sVar5;
              uVar15 = uVar15 - sVar5;
              local_b4.iov_base = (void *)((int)local_b4.iov_base + sVar5);
              piVar11 = &local_b4;
              do {
                if (uVar15 == 0) break;
                uVar8 = piVar11[1].iov_len;
                piVar1 = piVar11 + 1;
                uVar10 = uVar8;
                if (uVar15 <= uVar8) {
                  uVar10 = uVar15;
                }
                piVar11[1].iov_len = uVar8 - uVar10;
                uVar15 = uVar15 - uVar10;
                piVar11 = piVar11 + 1;
                piVar11->iov_base = (void *)((int)piVar1->iov_base + uVar10);
              } while (piVar11 != &local_94);
            }
            goto LAB_0000a5b0;
          }
          piVar7 = __errno_location();
          iVar12 = *piVar7;
          if (0 < iVar12) {
            if (iVar12 != 0xb) goto LAB_0000a8a0;
            goto LAB_0000a7e0;
          }
          if (iVar12 == 0) goto LAB_0000a284;
LAB_0000a794:
          iVar14 = iVar13 + 1;
        }
        else {
LAB_0000a284:
          bVar17 = 2 < DAT_00016038;
          if (DAT_00016038 != 3) {
            bVar17 = 1 < DAT_00016038 - 5;
          }
          if (((!bVar17 || (DAT_00016038 == 3 || DAT_00016038 - 5 == 2)) || (DAT_00016038 == 1)) &&
             (memset(&local_b4,0,0x28), -1 < DAT_00016008)) {
            __snprintf_chk(acStack_7c,0x10,1,0x10,&DAT_0000d1fc,param_1);
            local_6d = 0;
            _Var9 = getpid();
            __snprintf_chk(acStack_6c,0x10,1,0x10,"[%lu]: ",_Var9);
            local_5d = 0;
            local_b4.iov_base = acStack_7c;
            local_b4.iov_len = strlen(acStack_7c);
            local_ac = program_invocation_short_name;
            local_a8 = strlen(program_invocation_short_name);
            local_a4 = acStack_6c;
            local_a0 = strlen(acStack_6c);
            local_9c = __s;
            local_98 = strlen(__s);
            local_94.iov_base = "\n";
            local_94.iov_len = 1;
            sVar6 = writev(DAT_00016008,&local_b4,5);
            iVar13 = iVar14;
            if (-1 < sVar6) goto LAB_0000a794;
            piVar7 = __errno_location();
            if (-*piVar7 < 0) {
              FUN_0000a0b4();
              FUN_00009c2c();
            }
            else if (*piVar7 != 0) goto LAB_0000a794;
          }
          local_b4.iov_base = (char *)0x0;
          local_b4.iov_len = 0;
          local_ac = (char *)0x0;
          local_a8 = 0;
          local_a4 = (char *)0x0;
          local_a0 = 0;
          local_9c = (char *)0x0;
          local_98 = 0;
          local_94.iov_base = (char *)0x0;
          local_94.iov_len = 0;
          if (-1 < DAT_00016014) {
            bVar16 = 0;
            if ((param_1 & 7) < 4) {
              bVar16 = DAT_00016840;
            }
            uVar15 = (uint)DAT_00016035;
            if (uVar15 != 0) {
              __snprintf_chk(acStack_6c,0x40,1,0x40,"(%s:%u) ",param_2,param_3);
              local_2d = 0;
              local_b4.iov_base = acStack_6c;
              local_b4.iov_len = strlen(acStack_6c);
              uVar15 = 1;
            }
            if ((bVar16 & 1) == 0) {
              (&local_b4)[uVar15].iov_base = __s;
              sVar5 = strlen(__s);
              iVar13 = uVar15 + 1;
              (&local_b4)[uVar15].iov_len = sVar5;
            }
            else {
              (&local_b4)[uVar15].iov_base = &DAT_0000d224;
              (&local_b4)[uVar15].iov_len = 7;
              (&local_b4)[uVar15 + 1].iov_base = __s;
              sVar5 = strlen(__s);
              iVar13 = uVar15 + 3;
              (&local_b4)[uVar15 + 1].iov_len = sVar5;
              (&local_b4)[uVar15 + 2].iov_base = &DAT_0000c2fc;
              (&local_b4)[uVar15 + 2].iov_len = 4;
            }
            (&local_b4)[iVar13].iov_base = &DAT_0000c1c8;
            (&local_b4)[iVar13].iov_len = 1;
            sVar6 = writev(DAT_00016014,&local_b4,iVar13 + 1);
            if (sVar6 < 0) {
              piVar7 = __errno_location();
              iVar13 = -*piVar7;
              if (0 < *piVar7) break;
            }
          }
        }
      }
      iVar13 = iVar14;
    } while (param_7 != (char *)0x0);
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar13);
  }
  return;
}




void FUN_0000a920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  __snprintf_chk(&DAT_0001603c,0x800,1,0x800,param_5,param_1,param_2,param_3,param_4);
  DAT_0001683c = &DAT_0001603c;
  DAT_0001683b = 0;
  FUN_0000a138(2,param_2,param_3,param_4,0,0,&DAT_0001603c);
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_0000a9a8(void)

{
  int iVar1;
  __pid_t _Var2;
  size_t sVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  sockaddr local_9c;
  char local_8a [4];
  char local_86 [4];
  char local_82 [4];
  undefined1 auStack_7e [98];
  int local_1c;
  
  uVar6 = DAT_00016038;
  local_1c = __stack_chk_guard;
  if (DAT_00016038 == 8) {
    FUN_0000a10c();
    iVar1 = 0;
    FUN_0000a0e0();
    FUN_0000a064();
    goto LAB_0000aa40;
  }
  if (((DAT_00016038 - 6 < 2) && (_Var2 = getpid(), _Var2 != 1)) && (iVar1 = isatty(2), 0 < iVar1)) {
LAB_0000aa2c:
    FUN_0000a10c();
    FUN_0000a0e0();
    FUN_0000a064();
    iVar1 = FUN_00009c2c();
  }
  else {
    if ((uVar6 == 6 || uVar6 == 3) || (uVar6 == 2)) {
      memset(&local_9c,0,0x80);
      local_9c.sa_family = 1;
      local_9c.sa_data[0] = '/';
      local_9c.sa_data[1] = 'r';
      local_9c.sa_data[2] = 'u';
      local_9c.sa_data[3] = 'n';
      local_9c.sa_data[4] = '/';
      local_9c.sa_data[5] = 's';
      local_9c.sa_data[6] = 'y';
      local_9c.sa_data[7] = 's';
      local_9c.sa_data[8] = 't';
      local_9c.sa_data[9] = 'e';
      local_9c.sa_data[10] = 'm';
      local_9c.sa_data[0xb] = 'd';
      local_9c.sa_data[0xc] = '/';
      local_9c.sa_data[0xd] = 'j';
      register0x0000002e = 'o';
      register0x0000002f = 'u';
      local_8a[0] = 'r';
      local_8a[1] = 'n';
      local_8a[2] = 'a';
      local_8a[3] = 'l';
      local_86[0] = '/';
      local_86[1] = 's';
      local_86[2] = 'o';
      local_86[3] = 'c';
      local_82[0] = 'k';
      local_82[1] = 'e';
      local_82[2] = 't';
      local_82[3] = '\0';
      memset(auStack_7e,0,0x50);
      if (DAT_00016010 < 0) {
        iVar1 = FUN_00009c90(2);
        DAT_00016010 = iVar1;
        if (iVar1 < 0) {
          FUN_0000a10c();
          uVar6 = DAT_00016038;
          goto LAB_0000aa00;
        }
        sVar3 = strlen(local_9c.sa_data);
        iVar1 = connect(iVar1,&local_9c,sVar3 + 2);
        if (-1 < iVar1) goto LAB_0000aad8;
        piVar4 = __errno_location();
        iVar5 = *piVar4;
        FUN_0000a10c();
        iVar1 = -iVar5;
        uVar6 = DAT_00016038;
        if (0 < iVar5) goto LAB_0000aa00;
      }
      else {
LAB_0000aad8:
        iVar1 = 0;
      }
    }
    else {
LAB_0000aa00:
      if (uVar6 - 4 < 2) {
        memset(&local_9c,0,0x80);
        local_9c.sa_family = 1;
        local_9c.sa_data[0] = '/';
        local_9c.sa_data[1] = 'd';
        local_9c.sa_data[2] = 'e';
        local_9c.sa_data[3] = 'v';
        local_9c.sa_data[4] = '/';
        local_9c.sa_data[5] = 'l';
        local_9c.sa_data[6] = 'o';
        local_9c.sa_data[7] = 'g';
        local_9c.sa_data._8_4_ = local_9c.sa_data._8_4_ & 0xffffff00;
        memset(local_9c.sa_data + 9,0,99);
        if (DAT_00016004 < 0) {
          iVar1 = FUN_00009c90(2);
          DAT_00016004 = iVar1;
          if (iVar1 < 0) {
LAB_0000ac48:
            FUN_0000a0e0();
            uVar6 = DAT_00016038;
            goto LAB_0000aa0c;
          }
          sVar3 = strlen(local_9c.sa_data);
          iVar1 = connect(iVar1,&local_9c,sVar3 + 2);
          if (-1 < iVar1) {
            DAT_00016034 = 0;
            goto LAB_0000ab78;
          }
          FUN_00009868(DAT_00016004);
          iVar1 = FUN_00009c90(1);
          DAT_00016004 = iVar1;
          if (iVar1 < 0) goto LAB_0000ac48;
          sVar3 = strlen(local_9c.sa_data);
          iVar1 = connect(iVar1,&local_9c,sVar3 + 2);
          if (-1 < iVar1) {
            DAT_00016034 = 1;
            goto LAB_0000ab78;
          }
          piVar4 = __errno_location();
          iVar5 = *piVar4;
          FUN_0000a0e0();
          iVar1 = -iVar5;
          uVar6 = DAT_00016038;
          if (0 < iVar5) goto LAB_0000aa0c;
        }
        else {
LAB_0000ab78:
          iVar1 = 0;
        }
        FUN_0000a10c();
        FUN_0000a064();
        goto LAB_0000aa40;
      }
LAB_0000aa0c:
      bVar7 = 2 < uVar6;
      if (uVar6 != 3) {
        bVar7 = uVar6 != 6;
      }
      if ((((bVar7 && (uVar6 != 3 && uVar6 != 7)) && (uVar6 != 5)) && (uVar6 != 1)) ||
         (iVar1 = FUN_00009bd4(), iVar1 < 0)) goto LAB_0000aa2c;
      FUN_0000a10c();
    }
    FUN_0000a0e0();
    FUN_0000a064();
  }
LAB_0000aa40:
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}




void FUN_0000ad0c(void)

{
  FUN_0000a10c();
  FUN_0000a0e0();
  FUN_0000a0b4();
  FUN_0000a064();
  return;
}




void FUN_0000ad24(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_82c [2047];
  undefined1 local_2d;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  piVar1 = __errno_location();
  iVar3 = *piVar1;
  if (DAT_00016000 < (int)(param_1 & 7)) {
    uVar2 = 0;
  }
  else {
    __vsnprintf_chk(auStack_82c,0x800,1,0x800,param_5,param_6);
    local_2d = 0;
    uVar2 = FUN_0000a138(param_1,param_2,param_3,param_4,0,0,auStack_82c);
  }
  *piVar1 = iVar3;
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}




void FUN_0000ae0c(void)

{
  FUN_0000ad24();
  return;
}




void FUN_0000ae34(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0000a920();
}




void FUN_0000ae50(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == (param_1 & 7)) {
    DAT_00016000 = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000ae34("(level & 0x07) == level",
               "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/shared/log.c"
               ,299,"log_set_max_level",param_4);
}




ulonglong FUN_0000aea0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}




void FUN_0000af48(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0000aea0();
    return;
  }
  raise(8);
  return;
}




void FUN_0000afac(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0000b034();
    return;
  }
  raise(8);
  return;
}




void FUN_0000aff8(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_0000b070();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = param_2 - ((int)((ulonglong)lVar2 >> 0x20) + (uint)(param_1 < uVar1));
  return;
}




void FUN_0000b034(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_0000b4c8();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = param_2 - ((int)((ulonglong)lVar2 >> 0x20) + (uint)(param_1 < uVar1));
  return;
}




undefined8 FUN_0000b070(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  if ((int)param_2 < 0) {
    uVar8 = -param_1;
    uVar11 = -(param_2 + (param_1 != 0));
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    uVar8 = param_1;
    uVar11 = param_2;
  }
  uVar5 = param_3;
  if ((int)param_4 < 0) {
    uVar5 = -param_3;
    param_4 = -(param_4 + (param_3 != 0));
    uVar6 = ~uVar6;
  }
  if (param_4 == 0) {
    if (uVar5 <= uVar11) {
      if (uVar5 == 0) {
        uVar5 = FUN_0000aea0(1,0);
      }
      iVar4 = LZCOUNT(uVar5);
      if (iVar4 == 0) {
        iVar4 = uVar11 - uVar5;
        uVar7 = 1;
      }
      else {
        uVar5 = uVar5 << iVar4;
        uVar12 = uVar11 >> (0x20U - iVar4 & 0xff);
        uVar7 = uVar5 >> 0x10;
        uVar9 = uVar8 >> (0x20U - iVar4 & 0xff) | uVar11 << iVar4;
        uVar8 = uVar8 << iVar4;
        FUN_0000af48(uVar12,uVar7);
        iVar4 = FUN_0000aea0(uVar12,uVar7);
        uVar12 = uVar9 >> 0x10 | extraout_r1_01 << 0x10;
        uVar11 = (uVar5 & 0xffff) * iVar4;
        iVar2 = iVar4;
        if (uVar12 < uVar11) {
          bVar14 = CARRY4(uVar12,uVar5);
          uVar12 = uVar12 + uVar5;
          iVar2 = iVar4 + -1;
          if ((!bVar14) && (uVar12 < uVar11)) {
            uVar12 = uVar12 + uVar5;
            iVar2 = iVar4 + -2;
          }
        }
        FUN_0000af48(uVar12 - uVar11,uVar7,uVar11,uVar12,param_1,param_2,param_3);
        param_1 = extraout_r1_02;
        uVar11 = FUN_0000aea0(uVar12 - uVar11,uVar7);
        uVar12 = uVar9 & 0xffff | param_1 << 0x10;
        uVar9 = (uVar5 & 0xffff) * uVar11;
        uVar7 = uVar11;
        if (uVar12 < uVar9) {
          bVar14 = CARRY4(uVar12,uVar5);
          uVar12 = uVar12 + uVar5;
          uVar7 = uVar11 - 1;
          if ((!bVar14) && (uVar12 < uVar9)) {
            uVar12 = uVar12 + uVar5;
            uVar7 = uVar11 - 2;
          }
        }
        iVar4 = uVar12 - uVar9;
        uVar7 = uVar7 | iVar2 << 0x10;
      }
      uVar11 = uVar5 >> 0x10;
      FUN_0000af48(iVar4,uVar11);
      iVar2 = FUN_0000aea0(iVar4,uVar11);
      uVar9 = uVar8 >> 0x10 | extraout_r1_03 << 0x10;
      uVar12 = (uVar5 & 0xffff) * iVar2;
      iVar4 = iVar2;
      if (uVar9 < uVar12) {
        bVar14 = CARRY4(uVar9,uVar5);
        uVar9 = uVar9 + uVar5;
        iVar4 = iVar2 + -1;
        if ((!bVar14) && (uVar9 < uVar12)) {
          uVar9 = uVar9 + uVar5;
          iVar4 = iVar2 + -2;
        }
      }
      FUN_0000af48(uVar9 - uVar12,uVar11,uVar12,uVar9,param_1,param_2,param_3);
      iVar2 = extraout_r1_04;
      uVar11 = FUN_0000aea0(uVar9 - uVar12,uVar11);
      uVar9 = uVar8 & 0xffff | iVar2 << 0x10;
      uVar12 = (uVar5 & 0xffff) * uVar11;
      uVar8 = uVar11;
      if (uVar9 < uVar12) {
        uVar8 = uVar11 - 1;
        if ((!CARRY4(uVar9,uVar5)) && (uVar9 + uVar5 < uVar12)) {
          uVar8 = uVar11 - 2;
        }
      }
      uVar11 = uVar8 | iVar4 << 0x10;
      goto LAB_0000b4a8;
    }
    iVar4 = LZCOUNT(uVar5);
    uVar7 = uVar5;
    if (iVar4 != 0) {
      uVar7 = uVar5 << iVar4;
      uVar5 = uVar8 >> (0x20U - iVar4 & 0xff);
      uVar8 = uVar8 << iVar4;
      uVar11 = uVar5 | uVar11 << iVar4;
    }
    uVar12 = uVar7 >> 0x10;
    FUN_0000af48(uVar11,uVar12,uVar5,iVar4,param_1,param_2,param_3);
    iVar2 = FUN_0000aea0(uVar11,uVar12);
    uVar5 = uVar8 >> 0x10 | extraout_r1 << 0x10;
    uVar11 = (uVar7 & 0xffff) * iVar2;
    iVar4 = iVar2;
    if (uVar5 < uVar11) {
      bVar14 = CARRY4(uVar5,uVar7);
      uVar5 = uVar5 + uVar7;
      iVar4 = iVar2 + -1;
      if ((!bVar14) && (uVar5 < uVar11)) {
        uVar5 = uVar5 + uVar7;
        iVar4 = iVar2 + -2;
      }
    }
    FUN_0000af48(uVar5 - uVar11,uVar12,uVar11,uVar5,param_1,param_2,param_3);
    uVar5 = FUN_0000aea0(uVar5 - uVar11,uVar12);
    uVar12 = uVar8 & 0xffff | extraout_r1_00 << 0x10;
    uVar8 = (uVar7 & 0xffff) * uVar5;
    uVar11 = uVar5;
    if (uVar12 < uVar8) {
      uVar11 = uVar5 - 1;
      if ((!CARRY4(uVar12,uVar7)) && (uVar12 + uVar7 < uVar8)) {
        uVar11 = uVar5 - 2;
      }
    }
    uVar11 = uVar11 | iVar4 << 0x10;
LAB_0000b498:
    uVar7 = 0;
  }
  else {
    if (param_4 <= uVar11) {
      iVar4 = LZCOUNT(param_4);
      if (iVar4 != 0) {
        uVar12 = 0x20 - iVar4;
        uVar7 = uVar11 >> (uVar12 & 0xff);
        uVar9 = uVar5 >> (uVar12 & 0xff) | param_4 << iVar4;
        uVar10 = uVar8 >> (uVar12 & 0xff) | uVar11 << iVar4;
        uVar11 = uVar9 >> 0x10;
        FUN_0000af48(uVar7,uVar11,uVar7,param_4,param_1,uVar7,param_3);
        iVar2 = extraout_r1_05;
        iVar3 = FUN_0000aea0(uVar7,uVar11);
        uVar7 = uVar10 >> 0x10 | iVar2 << 0x10;
        uVar12 = (uVar9 & 0xffff) * iVar3;
        iVar2 = iVar3;
        if (uVar7 < uVar12) {
          bVar14 = CARRY4(uVar7,uVar9);
          uVar7 = uVar7 + uVar9;
          iVar2 = iVar3 + -1;
          if ((!bVar14) && (uVar7 < uVar12)) {
            uVar7 = uVar7 + uVar9;
            iVar2 = iVar3 + -2;
          }
        }
        iVar13 = uVar7 - uVar12;
        FUN_0000af48(iVar13,uVar11);
        iVar3 = extraout_r1_06;
        uVar7 = FUN_0000aea0(iVar13,uVar11);
        uVar12 = uVar10 & 0xffff | iVar3 << 0x10;
        uVar10 = (uVar9 & 0xffff) * uVar7;
        uVar11 = uVar7;
        if (uVar12 < uVar10) {
          bVar14 = CARRY4(uVar12,uVar9);
          uVar12 = uVar12 + uVar9;
          uVar11 = uVar7 - 1;
          if ((!bVar14) && (uVar12 < uVar10)) {
            uVar12 = uVar12 + uVar9;
            uVar11 = uVar7 - 2;
          }
        }
        uVar11 = uVar11 | iVar2 << 0x10;
        lVar1 = (ulonglong)(uVar5 << iVar4) * (ulonglong)uVar11;
        uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
        if (uVar5 <= uVar12 - uVar10) {
          uVar7 = (uint)(uVar5 == uVar12 - uVar10);
          if ((uint)lVar1 <= uVar8 << iVar4) {
            uVar7 = 0;
          }
          if (uVar7 == 0) goto LAB_0000b4a8;
        }
        uVar11 = uVar11 - 1;
        goto LAB_0000b498;
      }
      bVar14 = param_4 <= uVar11;
      if (uVar11 <= param_4) {
        bVar14 = uVar5 <= uVar8;
      }
      if (bVar14) {
        uVar7 = 0;
        uVar11 = 1;
        goto LAB_0000b4a8;
      }
    }
    uVar7 = 0;
    uVar11 = uVar7;
  }
LAB_0000b4a8:
  if (uVar6 != 0) {
    bVar14 = uVar11 != 0;
    uVar11 = -uVar11;
    uVar7 = -(uVar7 + bVar14);
  }
  return CONCAT44(uVar7,uVar11);
}




undefined8 FUN_0000b4c8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      uVar3 = param_1;
      uVar12 = param_2;
      uVar10 = param_3;
      if (param_3 == 0) {
        param_3 = FUN_0000aea0(1,0);
      }
      iVar6 = LZCOUNT(param_3);
      if (iVar6 == 0) {
        iVar6 = param_2 - param_3;
        uVar9 = 1;
        uVar7 = param_1;
      }
      else {
        param_3 = param_3 << iVar6;
        uVar5 = param_2 >> (0x20U - iVar6 & 0xff);
        uVar7 = param_1 << iVar6;
        uVar9 = param_3 >> 0x10;
        uVar11 = param_1 >> (0x20U - iVar6 & 0xff) | param_2 << iVar6;
        FUN_0000af48(uVar5,uVar9);
        iVar6 = FUN_0000aea0(uVar5,uVar9);
        uVar8 = uVar11 >> 0x10 | extraout_r1_01 << 0x10;
        uVar5 = (param_3 & 0xffff) * iVar6;
        iVar2 = iVar6;
        if (uVar8 < uVar5) {
          bVar14 = CARRY4(uVar8,param_3);
          uVar8 = uVar8 + param_3;
          iVar2 = iVar6 + -1;
          if ((!bVar14) && (uVar8 < uVar5)) {
            uVar8 = uVar8 + param_3;
            iVar2 = iVar6 + -2;
          }
        }
        FUN_0000af48(uVar8 - uVar5,uVar9,uVar5,uVar8,uVar3,uVar12,uVar10);
        uVar5 = FUN_0000aea0(uVar8 - uVar5,uVar9);
        uVar8 = uVar11 & 0xffff | extraout_r1_02 << 0x10;
        uVar11 = (param_3 & 0xffff) * uVar5;
        uVar9 = uVar5;
        if (uVar8 < uVar11) {
          bVar14 = CARRY4(uVar8,param_3);
          uVar8 = uVar8 + param_3;
          uVar9 = uVar5 - 1;
          if ((!bVar14) && (uVar8 < uVar11)) {
            uVar8 = uVar8 + param_3;
            uVar9 = uVar5 - 2;
          }
        }
        iVar6 = uVar8 - uVar11;
        uVar9 = uVar9 | iVar2 << 0x10;
      }
      uVar5 = param_3 >> 0x10;
      FUN_0000af48(iVar6,uVar5);
      iVar2 = FUN_0000aea0(iVar6,uVar5);
      uVar11 = uVar7 >> 0x10 | extraout_r1_03 << 0x10;
      uVar8 = (param_3 & 0xffff) * iVar2;
      iVar6 = iVar2;
      if (uVar11 < uVar8) {
        bVar14 = CARRY4(uVar11,param_3);
        uVar11 = uVar11 + param_3;
        iVar6 = iVar2 + -1;
        if ((!bVar14) && (uVar11 < uVar8)) {
          uVar11 = uVar11 + param_3;
          iVar6 = iVar2 + -2;
        }
      }
      FUN_0000af48(uVar11 - uVar8,uVar5,uVar8,uVar11,uVar3,uVar12,uVar10);
      uVar12 = FUN_0000aea0(uVar11 - uVar8,uVar5);
      uVar10 = uVar7 & 0xffff | extraout_r1_04 << 0x10;
      uVar7 = (param_3 & 0xffff) * uVar12;
      uVar3 = uVar12;
      if (uVar10 < uVar7) {
        uVar3 = uVar12 - 1;
        if ((!CARRY4(uVar10,param_3)) && (uVar10 + param_3 < uVar7)) {
          uVar3 = uVar12 - 2;
        }
      }
      uVar3 = uVar3 | iVar6 << 0x10;
      goto LAB_0000b89c;
    }
    iVar6 = LZCOUNT(param_3);
    uVar12 = param_2;
    uVar9 = param_3;
    uVar3 = param_1;
    if (iVar6 != 0) {
      uVar9 = param_3 << iVar6;
      uVar3 = param_1 << iVar6;
      uVar12 = param_1 >> (0x20U - iVar6 & 0xff) | param_2 << iVar6;
    }
    uVar10 = uVar9 >> 0x10;
    FUN_0000af48(uVar12,uVar10,param_3,iVar6,param_1,param_2,param_3);
    iVar2 = FUN_0000aea0(uVar12,uVar10);
    uVar7 = uVar3 >> 0x10 | extraout_r1 << 0x10;
    uVar12 = (uVar9 & 0xffff) * iVar2;
    iVar6 = iVar2;
    if (uVar7 < uVar12) {
      bVar14 = CARRY4(uVar7,uVar9);
      uVar7 = uVar7 + uVar9;
      iVar6 = iVar2 + -1;
      if ((!bVar14) && (uVar7 < uVar12)) {
        uVar7 = uVar7 + uVar9;
        iVar6 = iVar2 + -2;
      }
    }
    FUN_0000af48(uVar7 - uVar12,uVar10,uVar12,uVar7,param_1,param_2,param_3);
    uVar12 = FUN_0000aea0(uVar7 - uVar12,uVar10);
    uVar10 = uVar3 & 0xffff | extraout_r1_00 << 0x10;
    uVar7 = (uVar9 & 0xffff) * uVar12;
    uVar3 = uVar12;
    if (uVar10 < uVar7) {
      uVar3 = uVar12 - 1;
      if ((!CARRY4(uVar10,uVar9)) && (uVar10 + uVar9 < uVar7)) {
        uVar3 = uVar12 - 2;
      }
    }
    uVar3 = uVar3 | iVar6 << 0x10;
LAB_0000b88c:
    uVar9 = 0;
  }
  else {
    if (param_4 <= param_2) {
      iVar6 = LZCOUNT(param_4);
      if (iVar6 != 0) {
        uVar3 = 0x20 - iVar6;
        uVar9 = param_2 >> (uVar3 & 0xff);
        uVar12 = param_3 >> (uVar3 & 0xff) | param_4 << iVar6;
        uVar10 = param_1 >> (uVar3 & 0xff) | param_2 << iVar6;
        uVar3 = uVar12 >> 0x10;
        FUN_0000af48(uVar9,uVar3,param_3,param_4,param_1,param_2,param_3);
        iVar2 = extraout_r1_05;
        iVar4 = FUN_0000aea0(uVar9,uVar3);
        uVar7 = uVar10 >> 0x10 | iVar2 << 0x10;
        uVar9 = (uVar12 & 0xffff) * iVar4;
        iVar2 = iVar4;
        if (uVar7 < uVar9) {
          bVar14 = CARRY4(uVar7,uVar12);
          uVar7 = uVar7 + uVar12;
          iVar2 = iVar4 + -1;
          if ((!bVar14) && (uVar7 < uVar9)) {
            uVar7 = uVar7 + uVar12;
            iVar2 = iVar4 + -2;
          }
        }
        iVar13 = uVar7 - uVar9;
        FUN_0000af48(iVar13,uVar3);
        iVar4 = extraout_r1_06;
        uVar9 = FUN_0000aea0(iVar13,uVar3);
        uVar10 = uVar10 & 0xffff | iVar4 << 0x10;
        uVar7 = (uVar12 & 0xffff) * uVar9;
        uVar3 = uVar9;
        if (uVar10 < uVar7) {
          bVar14 = CARRY4(uVar10,uVar12);
          uVar10 = uVar10 + uVar12;
          uVar3 = uVar9 - 1;
          if ((!bVar14) && (uVar10 < uVar7)) {
            uVar10 = uVar10 + uVar12;
            uVar3 = uVar9 - 2;
          }
        }
        uVar3 = uVar3 | iVar2 << 0x10;
        lVar1 = (ulonglong)(param_3 << iVar6) * (ulonglong)uVar3;
        uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
        if (uVar9 <= uVar10 - uVar7) {
          uVar9 = (uint)(uVar9 == uVar10 - uVar7);
          if ((uint)lVar1 <= param_1 << iVar6) {
            uVar9 = 0;
          }
          if (uVar9 == 0) goto LAB_0000b89c;
        }
        uVar3 = uVar3 - 1;
        goto LAB_0000b88c;
      }
      bVar14 = param_4 <= param_2;
      if (param_2 <= param_4) {
        bVar14 = param_3 <= param_1;
      }
      if (bVar14) {
        uVar3 = 1;
        uVar9 = 0;
        goto LAB_0000b89c;
      }
    }
    uVar3 = 0;
    uVar9 = uVar3;
  }
LAB_0000b89c:
  return CONCAT44(uVar9,uVar3);
}




/* WARNING: Removing unreachable block (ram,0x0000b8d4) */

void FUN_0000b8a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DT_INIT();
  puVar2 = (undefined4 *)0x15df4;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
    (*(code *)*puVar2)(param_1,param_2,param_3,(code *)*puVar2,param_4);
  } while (iVar1 != 1);
  return;
}




void _DT_FINI(void)

{
  return;
}



