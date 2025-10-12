// Decompiled: eepromer_f36abfd0090adfce


void _DT_INIT(void)

{
  FUN_00008b5c();
  return;
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(&DAT_0000889c,param_2,&stack0x00000004,FUN_00009654,&DAT_000096b8,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x00008b70) */

void FUN_00008b5c(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008b98) */
/* WARNING: Removing unreachable block (ram,0x00008ba0) */
/* WARNING: Removing unreachable block (ram,0x00008ba4) */

void FUN_00008b80(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00011cb0 != '\0') {
    return;
  }
  FUN_00008b80();
  DAT_00011cb0 = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008bd8) */
/* WARNING: Removing unreachable block (ram,0x00008be0) */
/* WARNING: Removing unreachable block (ram,0x00008c40) */
/* WARNING: Removing unreachable block (ram,0x00008be4) */

void _INIT_0(void)

{
  return;
}




void FUN_00008c54(void)

{
  FILE *__stream;
  char *pcVar1;
  char acStack_74 [104];
  
  fwrite("Syntax: eepromer [-r|-w|-e|-p]  -f /dev/i2c-X  ADDRESS \n\n",1,0x39,stderr);
  fwrite("  ADDRESS is address of i2c device eg. 0x51\n",1,0x2c,stderr);
  __stream = fopen("/proc/bus/i2c","r");
  if (__stream != (FILE *)0x0) {
    fwrite("  Installed I2C busses:\n",1,0x18,stderr);
    while( true ) {
      pcVar1 = fgets(acStack_74,100,__stream);
      if (pcVar1 == (char *)0x0) break;
      fprintf(stderr,"    %s",acStack_74);
    }
    fclose(__stream);
  }
  return;
}




bool FUN_00008d08(int param_1,undefined2 param_2,int param_3,undefined4 param_4,int param_5)

{
  FILE *__stream;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  byte local_3c;
  undefined1 local_3b;
  undefined2 *local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  byte *local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined4 local_1c;
  
  if (0x40 < param_5) {
    fwrite("Error: Block too large:\n",1,0x18,stderr);
  }
  local_3b = (undefined1)param_3;
  local_3c = (byte)((uint)(param_3 << 0x11) >> 0x19);
  local_38 = &local_30;
  local_28 = &local_3c;
  local_20 = (undefined2)param_5;
  local_2e = 0;
  local_2c = 2;
  local_34 = 2;
  local_22 = 0x4000;
  local_30 = param_2;
  local_24 = param_2;
  local_1c = param_4;
  iVar1 = ioctl(param_1,0x707,&local_38);
  __stream = stderr;
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream,"Error: Transaction failed: %s\n",pcVar3);
  }
  return iVar1 < 0;
}




int FUN_00008df0(int param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte local_34;
  undefined1 local_33;
  undefined2 *local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  byte *local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined4 local_14;
  
  local_33 = (undefined1)param_3;
  local_34 = (byte)((uint)(param_3 << 0x11) >> 0x19);
  local_20 = &local_34;
  local_26 = 0;
  local_30 = &local_28;
  local_24 = 2;
  local_18 = 0x40;
  local_2c = 2;
  local_1a = 1;
  local_28 = param_2;
  local_1c = param_2;
  local_14 = param_4;
  iVar1 = ioctl(param_1,0x707,&local_30);
  if (iVar1 < 0) {
    fprintf(stderr,"Error: Read error:%d\n",iVar1);
  }
  return iVar1;
}




int FUN_00008e9c(char *param_1,undefined4 param_2)

{
  FILE *pFVar1;
  int __fd;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 auStack_14 [4];
  
  __fd = open(param_1,2);
  if (__fd < 0) {
    __fd = 0;
    fprintf(stderr,"Error: Could not open file %s\n",param_1);
  }
  else {
    iVar2 = ioctl(__fd,0x705,auStack_14);
    pFVar1 = stderr;
    if (iVar2 < 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar1,"Error: Could not get the adapter functionality matrix: %s\n",pcVar4);
      close(__fd);
      __fd = 0;
    }
    else {
      iVar2 = ioctl(__fd,0x703,param_2);
      pFVar1 = stderr;
      if (iVar2 < 0) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        fprintf(pFVar1,"Error: Cannot communicate with slave: %s\n",pcVar4);
        close(__fd);
        __fd = 0;
      }
    }
  }
  return __fd;
}




void FUN_00008f88(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uStack_59;
  undefined1 local_58 [64];
  
  puVar2 = &uStack_59;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
  } while (puVar2 != local_58 + 0x3f);
  if (0 < param_3) {
    iVar1 = 0;
    do {
      iVar3 = iVar1 + 0x40;
      iVar1 = FUN_00008d08(param_1,param_2,iVar1,local_58,0x40);
      if (iVar1 != 0) {
        fwrite("Block write failed\n",1,0x13,stderr);
        return;
      }
      iVar1 = iVar3;
    } while (iVar3 != (param_3 - 1U & 0xffffffc0) + 0x40);
  }
  return;
}




void FUN_00009024(void)

{
  undefined *__ptr;
  
  if (0x46 < DAT_00011cb4) {
    DAT_00011cb4 = 1;
    return;
  }
  switch(DAT_00011cb4) {
  case 10:
  case 0x32:
    __ptr = &DAT_0000985c;
    break;
  default:
    goto switchD_00009044_caseD_b;
  case 0x14:
  case 0x3c:
    __ptr = &DAT_00009860;
    break;
  case 0x1e:
  case 0x46:
    __ptr = &DAT_00009864;
    break;
  case 0x28:
    __ptr = &DAT_00009868;
  }
  fwrite(__ptr,1,1,stderr);
  fflush(stderr);
  rewind(stderr);
switchD_00009044_caseD_b:
  DAT_00011cb4 = DAT_00011cb4 + 1;
  return;
}




bool FUN_000091cc(int param_1,undefined2 param_2,undefined4 param_3)

{
  FILE *__stream;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined2 *local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined1 *local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined4 *local_1c;
  
  DAT_00011cb8 = time((time_t *)0x0);
  local_1c = &DAT_00011cb8;
  local_28 = &local_3c;
  local_38 = &local_30;
  local_3b = 0;
  local_3c = 0;
  local_2e = 0;
  local_2c = 2;
  local_34 = 2;
  local_22 = 0x4000;
  local_20 = 0x40;
  local_30 = param_2;
  local_24 = param_2;
  DAT_00011cbc = param_3;
  iVar1 = ioctl(param_1,0x707,&local_38);
  __stream = stderr;
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream,"Error: Transaction failed: %s\n",pcVar3);
  }
  return iVar1 < 0;
}




int FUN_000092a0(undefined4 param_1,undefined4 param_2)

{
  size_t sVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int unaff_r7;
  int iVar5;
  undefined1 local_69;
  undefined1 local_68 [68];
  
  puVar3 = &local_69;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
  } while (puVar3 != local_68 + 0x3f);
  iVar5 = 0;
  iVar4 = 0x40;
  do {
    while (sVar1 = fread(&local_69,1,1,stdin), (int)sVar1 < 1) {
      unaff_r7 = 1;
      iVar2 = iVar5;
LAB_00009324:
      iVar2 = FUN_00008d08(param_1,param_2,iVar4,local_68,iVar2);
      if (iVar2 != 0) {
        fwrite("Block write failed\n",1,0x13,stderr);
        return 1;
      }
      iVar4 = iVar4 + iVar5;
      puVar3 = &local_69;
      if (sVar1 == 1) {
        iVar4 = iVar4 + 1;
      }
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = 0;
      } while (puVar3 != local_68 + 0x3f);
      if (unaff_r7 != 0) {
        iVar5 = FUN_000091cc(param_1,param_2,iVar4 + -0x40);
        if (iVar5 != 0) {
          fwrite("Inode write failed\n",1,0x13,stderr);
          iVar5 = 1;
        }
        return iVar5;
      }
      iVar5 = 0;
    }
    if (iVar5 == 0x3f) {
      unaff_r7 = 0;
    }
    local_68[iVar5] = local_69;
    if (iVar5 == 0x3f) {
      iVar2 = 0x40;
      goto LAB_00009324;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}




int FUN_000093dc(int param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_34;
  undefined1 local_33;
  undefined2 *local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined1 *local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined4 local_14;
  
  local_33 = 0;
  local_34 = 0;
  local_26 = 0;
  local_20 = &local_34;
  local_30 = &local_28;
  local_1a = 1;
  local_24 = 2;
  local_2c = 2;
  local_18 = 0x40;
  local_28 = param_2;
  local_1c = param_2;
  local_14 = param_3;
  iVar1 = ioctl(param_1,0x707,&local_30);
  if (iVar1 < 0) {
    fprintf(stderr,"Error: Read error:%d\n",iVar1);
  }
  return iVar1;
}




undefined4 FUN_00009470(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte local_60 [64];
  
  FUN_000093dc(param_1,param_2,DAT_00011cf8);
  if (0x3f < *(int *)(DAT_00011cf8 + 4) + 0x40U) {
    uVar5 = 0x40;
    do {
      iVar2 = FUN_00008df0(param_1,param_2,uVar5,local_60);
      if (iVar2 != 0) {
        fwrite("Block read failed\n",1,0x12,stderr);
        return 1;
      }
      uVar3 = *(int *)(DAT_00011cf8 + 4) + 0x40;
      uVar4 = uVar3 - uVar5;
      if (uVar4 < 0x40) {
        if (uVar4 != 0) goto LAB_000094e4;
      }
      else {
        uVar4 = 0x40;
LAB_000094e4:
        iVar2 = 0;
        do {
          pbVar1 = local_60 + iVar2;
          iVar2 = iVar2 + 1;
          _IO_putc((uint)*pbVar1,stdout);
        } while (iVar2 < (int)uVar4);
        uVar3 = *(int *)(DAT_00011cf8 + 4) + 0x40;
      }
      uVar5 = uVar5 + 0x40;
    } while (uVar5 <= uVar3);
  }
  return 0;
}




void FUN_00009564(undefined4 param_1,undefined4 param_2)

{
  time_t *ptVar1;
  tm *__tp;
  char acStack_18 [16];
  
  FUN_000093dc(param_1,param_2,DAT_00011cf8);
  ptVar1 = DAT_00011cf8;
  __tp = localtime(DAT_00011cf8);
  strftime(acStack_18,0xf,"%Y%m%d%H%M%S",__tp);
  printf("LEN=%d,TIME=%s\n",ptVar1[1],acStack_18);
  return;
}




void warn(void)

{
  fwrite("\n\n!!!!!!!!!!!!!!!!!!!!!WARNING!!!!!!!!!!!!!!!!!!!!!\n",1,0x34,stderr);
  fwrite("This program is intended for use on eeproms\nusing external busses such as i2c-pport.\n",1,0x55,stderr);
  fwrite("Do not use this on your SDRAM DIMM EEPROMS\nunless you REALLY REALLY know what you are\ndoing!!! Doing so will render your SDRAM\nUSELESS and leave your system UNBOOTABLE!!!\n"
         ,1,0xab,stderr);
  fwrite("To disable this warning use -force\n",1,0x23,stderr);
  fwrite("\n\nPress  ENTER  to continue or hit Control-C NOW !!!!\n\n\n",1,0x38,stderr);
  _IO_getc(stdin);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00009680) */

void FUN_00009654(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DT_INIT();
  puVar2 = (undefined4 *)0x11b24;
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



