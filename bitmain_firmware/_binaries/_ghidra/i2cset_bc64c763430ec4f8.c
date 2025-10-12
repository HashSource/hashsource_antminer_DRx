// Decompiled: i2cset_bc64c763430ec4f8


void _DT_INIT(void)

{
  FUN_00009a70();
  return;
}




void FUN_00008b54(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 local_14;
  undefined1 local_13;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_5;
  local_14 = param_2;
  local_13 = param_3;
  local_10 = param_4;
  ioctl(param_1,0x720,&local_14);
  return;
}




uint FUN_00008b84(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  byte local_2c [40];
  
  iVar1 = FUN_00008b54(param_1,1,0,1,local_2c);
  if (iVar1 == 0) {
    uVar2 = (uint)local_2c[0];
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(&DAT_00008bb8,param_2,&stack0x00000004,FUN_0000a5e4,&DAT_0000a648,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x00009a84) */

void FUN_00009a70(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00009aac) */
/* WARNING: Removing unreachable block (ram,0x00009ab4) */
/* WARNING: Removing unreachable block (ram,0x00009ab8) */

void FUN_00009a94(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_000131dc != '\0') {
    return;
  }
  FUN_00009a94();
  DAT_000131dc = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00009aec) */
/* WARNING: Removing unreachable block (ram,0x00009af4) */
/* WARNING: Removing unreachable block (ram,0x00009b54) */
/* WARNING: Removing unreachable block (ram,0x00009af8) */

void _INIT_0(void)

{
  return;
}




void FUN_00009b68(void)

{
  fwrite("Usage: i2cset [-f] [-y] [-m MASK] I2CBUS CHIP-ADDRESS DATA-ADDRESS [VALUE] ... [MODE]\n  I2CBUS is an integer or an I2C bus name\n  ADDRESS is an integer (0x03 - 0x77)\n  MODE is one of:\n    c (byte, no value)\n    b (byte data, default)\n    w (word data)\n    i (I2C block data)\n    s (SMBus block data)\n    Append p for SMBus PEC\n"
         ,1,0x147,stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}




int FUN_00009b94(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  sVar2 = strlen(param_1);
  iVar5 = sVar2 - 1;
  if ((-1 < iVar5) && (param_1[iVar5] == ' ' || param_1[iVar5] == '\n')) {
    pcVar1 = param_1 + (sVar2 - 2);
    pcVar4 = param_1 + iVar5;
    do {
      pcVar3 = pcVar1;
      iVar5 = iVar5 + -1;
      *pcVar4 = '\0';
      if (iVar5 == -1) break;
      pcVar1 = pcVar3 + -1;
      pcVar4 = pcVar3;
    } while (*pcVar3 == ' ' || *pcVar3 == '\n');
  }
  return iVar5 + 2;
}




void FUN_00009bf8(void *param_1)

{
  void *pvVar1;
  void *__ptr;
  
  __ptr = *(void **)((int)param_1 + 4);
  pvVar1 = param_1;
  while (__ptr != (void *)0x0) {
    free(__ptr);
    __ptr = *(void **)((int)pvVar1 + 0x14);
    pvVar1 = (void *)((int)pvVar1 + 0x10);
  }
  free(param_1);
  return;
}




void * FUN_00009c30(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = realloc(param_1,(param_2 + 8) * 0x10);
  if (pvVar1 == (void *)0x0) {
    FUN_00009bf8(param_1);
  }
  else {
    memset((void *)((int)pvVar1 + param_2 * 0x10),0,0x80);
  }
  return pvVar1;
}




long FUN_00009c74(char *param_1)

{
  long lVar1;
  char *local_c;
  
  lVar1 = strtol(param_1,&local_c,0);
  if ((*local_c == '\0') && (*param_1 != '\0')) {
    if (0x74 < lVar1 - 3U) {
      fwrite("Error: Chip address out of range (0x03-0x77)!\n",1,0x2e,stderr);
      lVar1 = -2;
    }
  }
  else {
    fwrite("Error: Chip address is not a number!\n",1,0x25,stderr);
    lVar1 = -1;
  }
  return lVar1;
}




uint FUN_00009d08(undefined4 param_1,char *param_2,size_t param_3,uint param_4)

{
  FILE *__stream;
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  
  snprintf(param_2,param_3,"/dev/i2c/%d",param_1);
  param_2[param_3 - 1] = '\0';
  uVar1 = open(param_2,2);
  if ((int)uVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 2 || *piVar2 == 0x14) {
      sprintf(param_2,"/dev/i2c-%d",param_1);
      uVar1 = open(param_2,2);
    }
    __stream = stderr;
    uVar4 = 1 - param_4;
    if (1 < param_4) {
      uVar4 = 0;
    }
    if ((uVar4 & uVar1 >> 0x1f) != 0) {
      if (*piVar2 == 2) {
        pcVar3 = strerror(2);
        fprintf(__stream,"Error: Could not open file `/dev/i2c-%d\' or `/dev/i2c/%d\': %s\n",param_1,param_1,pcVar3);
      }
      else {
        pcVar3 = strerror(*piVar2);
        fprintf(__stream,"Error: Could not open file `%s\': %s\n",param_2,pcVar3);
        if (*piVar2 == 0xd) {
          fwrite("Run as root?\n",1,0xd,stderr);
        }
      }
    }
  }
  return uVar1;
}




void * FUN_00009e38(void)

{
  FILE *pFVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *__dest;
  char *pcVar7;
  int iVar8;
  size_t sVar9;
  DIR *__dirp;
  dirent *pdVar10;
  DIR *__dirp_00;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  void *local_3d0;
  undefined4 local_3bc;
  uint local_3b8;
  undefined1 auStack_3b4 [20];
  char acStack_3a0 [120];
  char acStack_328 [256];
  char acStack_228 [4];
  char acStack_224 [4];
  char acStack_220 [4];
  char acStack_21c [244];
  char acStack_128 [260];
  
  local_3d0 = calloc(8,0x10);
  if (local_3d0 != (void *)0x0) {
    pFVar1 = fopen("/proc/bus/i2c","r");
    if (pFVar1 == (FILE *)0x0) {
      pFVar1 = fopen("/proc/mounts","r");
      if (pFVar1 != (FILE *)0x0) {
        do {
          pcVar7 = fgets(acStack_128,0xff,pFVar1);
          if (pcVar7 == (char *)0x0) {
            fclose(pFVar1);
            return local_3d0;
          }
          __isoc99_sscanf(acStack_128,"%*[^ ] %[^ ] %[^ ] %*s\n",acStack_228,acStack_328);
          iVar8 = strcasecmp(acStack_328,"sysfs");
        } while (iVar8 != 0);
        fclose(pFVar1);
        sVar9 = strlen(acStack_228);
        builtin_strncpy(acStack_228 + sVar9,"/cla",4);
        (acStack_21c + sVar9)[0] = 'e';
        (acStack_21c + sVar9)[1] = 'v';
        builtin_strncpy(acStack_224 + sVar9,"ss/i",4);
        builtin_strncpy(acStack_220 + sVar9,"2c-d",4);
        acStack_21c[sVar9 + 2] = '\0';
        __dirp = opendir(acStack_228);
        if (__dirp != (DIR *)0x0) {
          uVar12 = 0;
LAB_0000a098:
          pdVar10 = readdir(__dirp);
          if (pdVar10 != (dirent *)0x0) {
            while( true ) {
              if ((pdVar10->d_name[0] == '.') &&
                 ((pdVar10->d_name[1] == '\0' || ((pdVar10->d_name[1] == '.' && (pdVar10->d_name[2] == '\0'))))))
              goto LAB_0000a098;
              pcVar7 = pdVar10->d_name;
              sprintf(acStack_128,"%s/%s/name",acStack_228,pcVar7);
              pFVar1 = fopen(acStack_128,"r");
              if (pFVar1 == (FILE *)0x0) {
                sprintf(acStack_128,"%s/%s/device/name",acStack_228,pcVar7);
                pFVar1 = fopen(acStack_128,"r");
                if (pFVar1 == (FILE *)0x0) {
                  sprintf(acStack_128,"%s/%s/device",acStack_228,pcVar7);
                  __dirp_00 = opendir(acStack_128);
                  if (__dirp_00 == (DIR *)0x0) goto LAB_0000a098;
                  do {
                    do {
                      pdVar10 = readdir(__dirp_00);
                      if (pdVar10 == (dirent *)0x0) goto LAB_0000a098;
                    } while (((pdVar10->d_name[0] == '.') &&
                             ((pdVar10->d_name[1] == '\0' ||
                              ((pdVar10->d_name[1] == '.' && (pdVar10->d_name[2] == '\0')))))) ||
                            (iVar8 = strncmp(pdVar10->d_name,"i2c-",4), iVar8 != 0));
                    sprintf(acStack_128,"%s/%s/device/%s/name",acStack_228,pcVar7,pdVar10->d_name);
                    pFVar1 = fopen(acStack_128,"r");
                  } while (pFVar1 == (FILE *)0x0);
                }
              }
              pcVar3 = fgets(acStack_3a0,0x78,pFVar1);
              fclose(pFVar1);
              if (pcVar3 == (char *)0x0) break;
              pcVar3 = strchr(acStack_3a0,10);
              if (pcVar3 != (char *)0x0) {
                *pcVar3 = '\0';
              }
              iVar8 = __isoc99_sscanf(pcVar7,"i2c-%d",&local_3bc);
              if (iVar8 == 0) goto LAB_0000a098;
              iVar8 = strncmp(acStack_3a0,"ISA ",4);
              if (iVar8 == 0) {
                iVar8 = 1;
              }
              else {
                iVar2 = FUN_00009d08(local_3bc,auStack_3b4,0x14,1);
                if (iVar2 < 0) {
                  iVar8 = 4;
                }
                else {
                  iVar8 = ioctl(iVar2,0x705,&local_3b8);
                  if (iVar8 < 0) {
                    iVar8 = 4;
                  }
                  else if ((local_3b8 & 1) == 0) {
                    if ((local_3b8 & 0x7e0000) == 0) {
                      iVar8 = 0;
                    }
                    else {
                      iVar8 = 3;
                    }
                  }
                  else {
                    iVar8 = 2;
                  }
                  close(iVar2);
                }
              }
              uVar13 = uVar12 + 1;
              if (((uVar13 & 7) == 0) && (local_3d0 = (void *)FUN_00009c30(local_3d0,uVar13), local_3d0 == (void *)0x0))
              {
                return (void *)0x0;
              }
              *(undefined4 *)((int)local_3d0 + uVar12 * 0x10) = local_3bc;
              iVar2 = __strdup(acStack_3a0);
              *(int *)((int)local_3d0 + uVar12 * 0x10 + 4) = iVar2;
              if (iVar2 == 0) {
                FUN_00009bf8(local_3d0);
                return (void *)0x0;
              }
              puVar11 = (&PTR_s_Dummy_bus_0000ad3c)[iVar8 * 2];
              *(undefined **)((int)local_3d0 + uVar12 * 0x10 + 8) = (&PTR_s_dummy_0000ad38)[iVar8 * 2];
              *(undefined **)((int)local_3d0 + uVar12 * 0x10 + 0xc) = puVar11;
              pdVar10 = readdir(__dirp);
              uVar12 = uVar13;
              if (pdVar10 == (dirent *)0x0) goto LAB_0000a1c4;
            }
            fprintf(stderr,"%s: read error\n",acStack_128);
            goto LAB_0000a098;
          }
LAB_0000a1c4:
          closedir(__dirp);
        }
      }
    }
    else {
      uVar12 = 0;
      iVar8 = 0;
      while( true ) {
        uVar12 = uVar12 + 1;
        pcVar7 = fgets(acStack_3a0,0x78,pFVar1);
        if (pcVar7 == (char *)0x0) break;
        pcVar7 = strrchr(acStack_3a0,9);
        *pcVar7 = '\0';
        iVar2 = FUN_00009b94(pcVar7 + 1);
        pcVar3 = strrchr(acStack_3a0,9);
        *pcVar3 = '\0';
        iVar4 = FUN_00009b94(pcVar3 + 1);
        pcVar5 = strrchr(acStack_3a0,9);
        *pcVar5 = '\0';
        iVar6 = FUN_00009b94(pcVar5 + 1);
        __isoc99_sscanf(acStack_3a0,"i2c-%d",&local_3bc);
        if (((uVar12 & 7) == 0) && (local_3d0 = (void *)FUN_00009c30(local_3d0,uVar12), local_3d0 == (void *)0x0)) {
          return (void *)0x0;
        }
        __dest = (char *)malloc(iVar4 + iVar6 + iVar2);
        if (__dest == (char *)0x0) {
          FUN_00009bf8(local_3d0);
          return (void *)0x0;
        }
        *(undefined4 *)((int)local_3d0 + iVar8) = local_3bc;
        pcVar3 = strcpy(__dest,pcVar3 + 1);
        *(char **)((int)local_3d0 + iVar8 + 4) = pcVar3;
        pcVar3 = strcpy(__dest + iVar4,pcVar5 + 1);
        *(char **)((int)local_3d0 + iVar8 + 8) = pcVar3;
        pcVar7 = strcpy(__dest + iVar4 + iVar6,pcVar7 + 1);
        *(char **)((int)local_3d0 + iVar8 + 0xc) = pcVar7;
        iVar8 = iVar8 + 0x10;
      }
      fclose(pFVar1);
    }
  }
  return local_3d0;
}




ulong FUN_0000a38c(char *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char *__s1;
  int iVar3;
  ulong *puVar4;
  char *local_1c;
  
  uVar1 = strtoul(param_1,&local_1c,0);
  if ((*local_1c == '\0') && (*param_1 != '\0')) {
    if (uVar1 < 0x100000) {
      return uVar1;
    }
    fwrite("Error: I2C bus out of range!\n",1,0x1d,stderr);
    return 0xfffffffe;
  }
  puVar2 = (ulong *)FUN_00009e38();
  if (puVar2 == (ulong *)0x0) {
    fwrite("Error: Out of memory!\n",1,0x16,stderr);
    return 0xfffffffd;
  }
  __s1 = (char *)puVar2[1];
  if (__s1 != (char *)0x0) {
    uVar1 = 0xffffffff;
    puVar4 = puVar2;
    do {
      iVar3 = strcmp(__s1,param_1);
      if (iVar3 == 0) {
        if (-1 < (int)uVar1) {
          uVar1 = 0xfffffffc;
          fwrite("Error: I2C bus name is not unique!\n",1,0x23,stderr);
          goto LAB_0000a434;
        }
        uVar1 = *puVar4;
      }
      __s1 = (char *)puVar4[5];
      puVar4 = puVar4 + 4;
    } while (__s1 != (char *)0x0);
    if (uVar1 != 0xffffffff) goto LAB_0000a434;
  }
  uVar1 = 0xffffffff;
  fwrite("Error: I2C bus name doesn\'t match any bus present!\n",1,0x33,stderr);
LAB_0000a434:
  FUN_00009bf8(puVar2);
  return uVar1;
}




int FUN_0000a4d4(int param_1,undefined4 param_2,int param_3)

{
  FILE *__stream;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  ulong __request;
  
  __request = 0x703;
  if (param_3 != 0) {
    __request = 0x706;
  }
  iVar1 = ioctl(param_1,__request,param_2);
  __stream = stderr;
  if (-1 < iVar1) {
    return 0;
  }
  piVar2 = __errno_location();
  pcVar3 = strerror(*piVar2);
  fprintf(__stream,"Error: Could not set address to 0x%02x: %s\n",param_2,pcVar3);
  return -*piVar2;
}




undefined4 FUN_0000a544(undefined4 param_1)

{
  char *pcVar1;
  uint uVar2;
  byte local_14 [8];
  
  pcVar1 = fgets((char *)local_14,2,stdin);
  if (pcVar1 == (char *)0x0) {
    return 0;
  }
  if (local_14[0] == 0x59) {
LAB_0000a5d0:
    param_1 = 1;
    goto LAB_0000a59c;
  }
  if (local_14[0] < 0x5a) {
    if (local_14[0] == 0x4e) {
LAB_0000a5d8:
      param_1 = 0;
      goto LAB_0000a59c;
    }
  }
  else {
    if (local_14[0] == 0x6e) goto LAB_0000a5d8;
    if (local_14[0] == 0x79) goto LAB_0000a5d0;
  }
  if (local_14[0] == 10) {
    return param_1;
  }
LAB_0000a59c:
  do {
    uVar2 = fgetc(stdin);
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    local_14[0] = (byte)uVar2;
  } while ((uVar2 & 0xff) != 10);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x0000a610) */

void FUN_0000a5e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DT_INIT();
  puVar2 = (undefined4 *)0x13020;
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



