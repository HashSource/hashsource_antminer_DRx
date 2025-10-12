// Decompiled: FileParser_b9ceacc731141ba6


void _DT_INIT(void)

{
  FUN_000111ec();
  return;
}




void entry(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  __libc_start_main(&LAB_00010804,in_stack_00000000,&stack0x00000004,0x117b1,&DAT_000117ed,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x00011200) */

void FUN_000111ec(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00011224) */
/* WARNING: Removing unreachable block (ram,0x0001122e) */

void FUN_00011210(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00011250) */
/* WARNING: Removing unreachable block (ram,0x0001125a) */

void FUN_00011234(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00022834 == '\0') {
    FUN_00011210();
    DAT_00022834 = '\x01';
  }
  return;
}




undefined4 FUN_0001127c(char *param_1)

{
  size_t *psVar1;
  FILE *__stream;
  FILE *__s;
  undefined4 uVar2;
  char *__filename;
  undefined4 uStack_8018;
  undefined1 auStack_8014 [32764];
  
  uStack_8018 = 0;
  memset(auStack_8014,0,0x7ffc);
  __stream = fopen64(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    puts("Load Nand Image File Failed!");
    uVar2 = 1;
  }
  else {
    __filename = s__tmp_tmpNand_devicetree_dtb_sig_0002207c;
    do {
      fread(&uStack_8018,*(size_t *)(__filename + -4),1,__stream);
      __s = fopen64(__filename,"wb");
      if (__s == (FILE *)0x0) {
        printf("Try To Write To File \'%s\' Failed!\n",__filename);
        fclose(__stream);
        return 2;
      }
      psVar1 = (size_t *)(__filename + -4);
      __filename = __filename + 0x84;
      fwrite(&uStack_8018,*psVar1,1,__s);
      fclose(__s);
    } while (__filename != (char *)0x22838);
    fclose(__stream);
    uVar2 = 0;
  }
  return uVar2;
}




undefined4 FUN_0001136c(FILE *param_1,int param_2,undefined4 *param_3,undefined4 param_4,char param_5,byte param_6)

{
  size_t sVar1;
  FILE *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  SHA256_CTX SStack_518;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined1 uStack_498;
  char cStack_497;
  undefined1 uStack_496;
  char cStack_495;
  undefined1 local_494;
  char cStack_493;
  undefined1 uStack_492;
  undefined1 uStack_491;
  undefined1 uStack_490;
  char cStack_48f;
  undefined1 uStack_48e;
  char cStack_48d;
  undefined4 local_48c;
  undefined4 local_428;
  undefined1 auStack_424 [1024];
  
  local_428 = 0;
  memset(auStack_424,0,0x3fc);
  SHA256_Init(&SStack_518);
  if (param_6 == 0) {
    __s = (FILE *)0x0;
    goto LAB_00011424;
  }
  local_4a8 = 0x706d742f;
  local_4a4 = 0x706d742f;
  local_4a0 = 0x2f7766;
  memset(&local_49c,0,0x74);
  switch(param_4) {
  case 0:
  case 7:
    cStack_495 = '\0';
    local_4a0 = CONCAT13(0x42,(undefined3)local_4a0);
    local_49c = 0x2e544f4f;
    uStack_498 = 0x62;
    cStack_497 = 'i';
    uStack_496 = 0x6e;
    goto joined_r0x000115bc;
  case 1:
    cStack_48f = '\0';
    local_4a0 = CONCAT13(100,(undefined3)local_4a0);
    local_49c = 0x63697665;
    uStack_498 = 0x65;
    cStack_497 = 't';
    uStack_496 = 0x72;
    cStack_495 = 'e';
    local_494 = 0x65;
    cStack_493 = '.';
    uStack_492 = 100;
    uStack_491 = 0x74;
    uStack_490 = 0x62;
    break;
  case 2:
    cStack_497 = '\0';
    local_4a0 = CONCAT13(0x75,(undefined3)local_4a0);
    local_49c = 0x67616d49;
    uStack_498 = 0x65;
    break;
  case 3:
    pcVar7 = "minerfs.image.gz";
    goto LAB_0001159c;
  case 4:
    local_4a0 = CONCAT13(0x75,(undefined3)local_4a0);
    local_49c = 0x74616470;
    uStack_498 = 0x65;
    cStack_497 = '.';
    uStack_496 = 0x69;
    cStack_495 = 'm';
    local_494 = 0x61;
    cStack_493 = 'g';
    uStack_492 = 0x65;
    uStack_491 = 0x2e;
    uStack_490 = 0x67;
    cStack_48f = 'z';
    uStack_48e = 0;
    break;
  case 5:
    cStack_493 = '\0';
    local_4a0 = CONCAT13(99,(undefined3)local_4a0);
    local_49c = 0x742e6c72;
    uStack_498 = 0x61;
    cStack_497 = 'r';
    uStack_496 = 0x2e;
    cStack_495 = 'g';
    local_494 = 0x7a;
    break;
  case 6:
    pcVar7 = "miner.btm.tar.gz";
LAB_0001159c:
    uVar2 = *(undefined4 *)(pcVar7 + 4);
    uVar3 = *(undefined4 *)(pcVar7 + 8);
    uVar5 = *(undefined4 *)(pcVar7 + 0xc);
    cStack_48d = pcVar7[0x10];
    local_4a0._3_1_ = (undefined1)*(undefined4 *)pcVar7;
    local_49c._3_1_ = (undefined1)uVar2;
    local_49c = CONCAT13(local_49c._3_1_,(int3)((uint)*(undefined4 *)pcVar7 >> 8));
    uStack_498 = (undefined1)((uint)uVar2 >> 8);
    cStack_497 = (char)((uint)uVar2 >> 0x10);
    uStack_496 = (undefined1)((uint)uVar2 >> 0x18);
    cStack_495 = (char)uVar3;
    local_494 = (undefined1)((uint)uVar3 >> 8);
    cStack_493 = (char)((uint)uVar3 >> 0x10);
    uStack_492 = (undefined1)((uint)uVar3 >> 0x18);
    uStack_491 = (undefined1)uVar5;
    uStack_490 = (undefined1)((uint)uVar5 >> 8);
    cStack_48f = (char)((uint)uVar5 >> 0x10);
    uStack_48e = (undefined1)((uint)uVar5 >> 0x18);
  }
joined_r0x000115bc:
  if (param_5 != '\0') {
    sVar1 = strlen((char *)&local_4a8);
    builtin_strncpy((char *)((int)&local_4a8 + sVar1),".sig",4);
    *(char *)((int)&local_4a4 + sVar1) = '\0';
  }
  printf("fileName:\'%s\', size:[%d]\r\n",&local_4a8,param_2);
  __s = fopen64((char *)&local_4a8,"wb");
  if (__s == (FILE *)0x0) {
    printf("Create File \'%s\' Failed!\r\n",&local_4a8);
  }
LAB_00011424:
  iVar6 = 0;
  while( true ) {
    if ((uint)(param_2 - iVar6) < 0x401) break;
    sVar1 = fread(&local_428,1,0x400,param_1);
    iVar6 = iVar6 + sVar1;
    SHA256_Update(&SStack_518,&local_428,0x400);
    bVar4 = param_6 & 1;
    if (__s == (FILE *)0x0) {
      bVar4 = 0;
    }
    if (bVar4 != 0) {
      fwrite(&local_428,1,0x400,__s);
    }
  }
  sVar1 = fread(&local_428,1,param_2 - iVar6,param_1);
  SHA256_Update(&SStack_518,&local_428,sVar1);
  if ((param_6 == 0) || (__s == (FILE *)0x0)) {
    local_4a8 = 0;
    local_4a4 = 0;
    local_4a0 = 0;
    local_49c = 0;
    cStack_495 = 0;
    uStack_496 = 0;
    cStack_497 = 0;
    uStack_498 = 0;
    uStack_491 = 0;
    uStack_492 = 0;
    cStack_493 = 0;
    local_494 = 0;
    cStack_48d = 0;
    uStack_48e = 0;
    cStack_48f = 0;
    uStack_490 = 0;
    local_48c = 0;
    SHA256_Final((uchar *)&local_4a8,&SStack_518);
  }
  else {
    fwrite(&local_428,1,sVar1,__s);
    local_4a8 = 0;
    local_4a4 = 0;
    local_4a0 = 0;
    local_49c = 0;
    cStack_495 = 0;
    uStack_496 = 0;
    cStack_497 = 0;
    uStack_498 = 0;
    uStack_491 = 0;
    uStack_492 = 0;
    cStack_493 = 0;
    local_494 = 0;
    cStack_48d = 0;
    uStack_48e = 0;
    cStack_48f = 0;
    uStack_490 = 0;
    local_48c = 0;
    SHA256_Final((uchar *)&local_4a8,&SStack_518);
    fclose(__s);
  }
  *param_3 = local_4a8;
  param_3[1] = local_4a4;
  param_3[2] = local_4a0;
  param_3[3] = local_49c;
  param_3[4] = CONCAT13(cStack_495,CONCAT12(uStack_496,CONCAT11(cStack_497,uStack_498)));
  param_3[5] = CONCAT13(uStack_491,CONCAT12(uStack_492,CONCAT11(cStack_493,local_494)));
  param_3[6] = CONCAT13(cStack_48d,CONCAT12(uStack_48e,CONCAT11(cStack_48f,uStack_490)));
  param_3[7] = local_48c;
  return 0;
}




void FUN_00011710(undefined4 param_1)

{
  puts("Useage:\r");
  printf("\t%s [option] [paramaters]\n\n",param_1);
  puts("\tOption:{-f} {-s} {-p} {-n} {-x} {-q}\n");
  puts("\t\t-f [minerType] [fileName] [rootPublicKeyFile]: \n\t\t\tOnly Check If Filename was Valided.\n");
  puts(
      "\t\t-s [minerType] [fileName] [rootPublicKeyFile]: \n\t\t\tCheck If Filename Was Valided, and Splite Bmu To \"/tmp/tmpfw/\"\n"
      );
  puts(
      "\t\t-p [minerType] [fileName] [rootPublicKeyFile]: \n\t\t\tCheck If Filename Was Valided, and Dump BmuComments\n"
      );
  puts("\t\t-x [minerType] [fileName] [rootPublicKeyFile]: \n\t\t\tCheck If Filename Was FullSize BMU\n");
  puts("\t\t-n [nandBinFile]: \n\t\t\tSplite SigImg To Single File To \"/tmp/tmpNand/\"\n");
  puts("\t\t-q: \n\t\t\tGenerate A 256Bytes 0xff File To \"/tmp/256BFF\"\n");
  puts("\tReturns:");
  puts("\t\t0: \n\t\t\tWell Done!\n");
  puts("\t\tOthers: \n\t\t\tSomething Wrong!\n");
  return;
}




void FUN_000117b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined **ppuVar2;
  
  _DT_INIT();
  iVar1 = 0;
  ppuVar2 = &__DT_INIT_ARRAY;
  do {
    iVar1 = iVar1 + 1;
    (*(code *)*ppuVar2)(param_1,param_2,param_3,*ppuVar2,param_4);
    ppuVar2 = ppuVar2 + 1;
  } while (iVar1 != 1);
  return;
}




void _DT_FINI(void)

{
  return;
}



