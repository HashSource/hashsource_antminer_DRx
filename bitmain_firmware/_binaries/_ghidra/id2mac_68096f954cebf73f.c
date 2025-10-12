// Decompiled: id2mac_68096f954cebf73f


void _DT_INIT(void)

{
  FUN_00008428();
  return;
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(FUN_00008a84,param_2,&stack0x00000004,FUN_00008acc,&DAT_00008b30,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x0000843c) */

void FUN_00008428(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008464) */
/* WARNING: Removing unreachable block (ram,0x0000846c) */
/* WARNING: Removing unreachable block (ram,0x00008470) */

void FUN_0000844c(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00011538 != '\0') {
    return;
  }
  FUN_0000844c();
  DAT_00011538 = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x000084a4) */
/* WARNING: Removing unreachable block (ram,0x000084ac) */
/* WARNING: Removing unreachable block (ram,0x0000850c) */
/* WARNING: Removing unreachable block (ram,0x000084b0) */

void _INIT_0(void)

{
  return;
}




ushort FUN_00008520(byte *param_1,int param_2)

{
  bool bVar1;
  int local_18;
  byte *local_14;
  ushort local_a;
  
  local_a = 0;
  local_18 = param_2;
  local_14 = param_1;
  while (bVar1 = 0 < local_18, local_18 = local_18 + -1, bVar1) {
    local_a = (ushort)*(undefined4 *)(&DAT_00011130 + ((uint)(local_a >> 8) ^ (uint)*local_14) * 4) ^ local_a << 8;
    local_14 = local_14 + 1;
  }
  return local_a;
}




uint FUN_000085cc(byte *param_1,int param_2,uint param_3)

{
  bool bVar1;
  int local_18;
  byte *local_14;
  uint local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  local_c = param_3;
  while (bVar1 = local_18 != 0, local_18 = local_18 + -1, bVar1) {
    local_c = local_c << 8 ^ *(uint *)(&DAT_00008b40 + (local_c >> 0x18 ^ (uint)*local_14) * 4);
    local_14 = local_14 + 1;
  }
  return local_c;
}




void FUN_0000866c(char *param_1,char *param_2)

{
  undefined2 uVar1;
  size_t sVar2;
  uint uVar3;
  byte local_a;
  byte bStack_9;
  
  sVar2 = strlen(param_1);
  uVar1 = FUN_00008520(param_1,sVar2);
  sVar2 = strlen(param_1);
  uVar3 = FUN_000085cc(param_1,sVar2,0xffffffff);
  local_a = (byte)uVar1;
  bStack_9 = (byte)((ushort)uVar1 >> 8);
  sprintf(param_2,"%02x:%02x:%02x:%02x:%02x:%02x",local_a & 0xfe,(uint)bStack_9,uVar3 & 0xff,uVar3 >> 8 & 0xff,
          uVar3 >> 0x10 & 0xff,uVar3 >> 0x18);
  return;
}




undefined8 FUN_00008754(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar5 = *(undefined8 *)param_1;
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  *param_1 = uVar2;
  param_1[1] = uVar4;
  uVar5 = VectorShiftLeft(uVar5,0x17,0x40,0);
  uVar1 = uVar1 ^ (uint)uVar5;
  uVar3 = uVar3 ^ (uint)((ulonglong)uVar5 >> 0x20);
  param_1[2] = (uVar2 >> 5 | uVar4 << 0x1b) ^ uVar1 ^ uVar2 ^ (uVar1 >> 0x12 | uVar3 << 0xe);
  param_1[3] = uVar4 >> 5 ^ uVar3 ^ uVar4 ^ uVar3 >> 0x12;
  return CONCAT44(uVar4 + param_1[3] + (uint)CARRY4(uVar2,param_1[2]),uVar2 + param_1[2]);
}




undefined4 FUN_0000881c(void)

{
  FILE *__stream;
  size_t sVar1;
  undefined4 uVar2;
  
  __stream = fopen("/dev/urandom","rb");
  if (__stream == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar1 = fread(&DAT_00011548,1,0x10,__stream);
    fclose(__stream);
    if (sVar1 == 0x10) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}




int FUN_000088a0(char *param_1)

{
  int iVar1;
  char *local_2c;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  char *local_c;
  
  if (DAT_00011540 == 0) {
    do {
      iVar1 = FUN_0000881c();
      if (iVar1 != 0) {
        return iVar1;
      }
    } while ((DAT_00011548 == 0 && DAT_0001154c == 0) && (local_14 = 0, DAT_00011550 == 0 && DAT_00011554 == 0));
    DAT_00011540 = 1;
    local_14 = 0;
  }
  local_28 = FUN_00008754(&DAT_00011548);
  local_20 = FUN_00008754(&DAT_00011548);
  local_10 = 0;
  local_2c = param_1;
  for (local_c = DAT_00011530; *local_c != '\0'; local_c = local_c + 1) {
    local_18 = (uint)*(byte *)((int)&local_28 + ((int)local_10 >> 1));
    if ((local_10 & 1) == 0) {
      local_18 = local_18 & 0xf;
    }
    else {
      local_18 = (int)local_18 >> 4;
    }
    if (*local_c == 'x') {
      *local_2c = *(char *)(DAT_00011534 + local_18);
      local_10 = local_10 + 1;
    }
    else if (*local_c == 'y') {
      *local_2c = *(char *)(DAT_00011534 + (local_18 & 3) + 8);
      local_10 = local_10 + 1;
    }
    else {
      *local_2c = *local_c;
    }
    local_2c = local_2c + 1;
  }
  *local_2c = '\0';
  return 0;
}




undefined4 FUN_00008a84(void)

{
  undefined1 auStack_44 [40];
  char acStack_1c [20];
  
  FUN_000088a0(auStack_44);
  FUN_0000866c(auStack_44,acStack_1c);
  puts(acStack_1c);
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00008af8) */

void FUN_00008acc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DT_INIT();
  puVar2 = (undefined4 *)0x10ffc;
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



