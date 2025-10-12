// Decompiled: devmem2_09052d5ffdafdfed_debug


int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_gmon_start(ctx);
  return iVar1;
}




void _start(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  __libc_start_main(0x869d,in_stack_00000000,&stack0x00000004,0x8959,0x899d,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x0000860a) */

void call_gmon_start(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008622) */
/* WARNING: Removing unreachable block (ram,0x00008628) */

void deregister_tm_clones(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x0000864c) */
/* WARNING: Removing unreachable block (ram,0x00008652) */

void register_tm_clones(void)

{
  return;
}




void __do_global_dtors_aux(void)

{
  if (completed_8605 == '\0') {
    deregister_tm_clones();
    completed_8605 = '\x01';
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008688) */

void frame_dummy(void)

{
  register_tm_clones();
  return;
}




undefined4 main(int param_1,undefined4 *param_2)

{
  FILE *pFVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  void *__addr;
  int iVar6;
  ulong *puVar7;
  int local_18;
  ulong local_14;
  
  local_18 = 0x77;
  if (param_1 < 2) {
    fprintf(stderr,
            "\nUsage:\t%s { address } [ type [ data ] ]\n\taddress : memory address to act upon\n\ttype    : access operation type : [b]yte, [h]alfword, [w]ord\n\tdata    : data to be written\n\n"
            ,*param_2);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  uVar2 = strtoul((char *)param_2[1],(char **)0x0,0);
  if (2 < param_1) {
    local_18 = tolower((uint)*(byte *)param_2[2]);
  }
  iVar3 = open("/dev/mem",0x101002);
  pFVar1 = stderr;
  if (iVar3 == -1) {
    piVar4 = __errno_location();
    iVar3 = *piVar4;
    piVar4 = __errno_location();
    pcVar5 = strerror(*piVar4);
    fprintf(pFVar1,"Error at line %d, file %s (%d) [%s]\n",0x4f,"devmem2.c",iVar3,pcVar5);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  puts("/dev/mem opened.");
  fflush(stdout);
  __addr = mmap((void *)0x0,0x1000,3,1,iVar3,uVar2 & 0xfffff000);
  pFVar1 = stderr;
  if (__addr == (void *)0xffffffff) {
    piVar4 = __errno_location();
    iVar3 = *piVar4;
    piVar4 = __errno_location();
    pcVar5 = strerror(*piVar4);
    fprintf(pFVar1,"Error at line %d, file %s (%d) [%s]\n",0x55,"devmem2.c",iVar3,pcVar5);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printf("Memory mapped at address %p.\n",__addr);
  fflush(stdout);
  puVar7 = (ulong *)((int)__addr + (uVar2 & 0xfff));
  if (local_18 == 0x68) {
    local_14 = (ulong)(ushort)*puVar7;
  }
  else if (local_18 == 0x77) {
    local_14 = *puVar7;
  }
  else {
    if (local_18 != 0x62) {
      fprintf(stderr,"Illegal data type \'%c\'.\n",local_18);
                    /* WARNING: Subroutine does not return */
      exit(2);
    }
    local_14 = (ulong)(byte)*puVar7;
  }
  printf("Value at address 0x%X (%p): 0x%X\n",uVar2,puVar7,local_14);
  fflush(stdout);
  if (3 < param_1) {
    uVar2 = strtoul((char *)param_2[3],(char **)0x0,0);
    if (local_18 == 0x68) {
      *(ushort *)puVar7 = (ushort)uVar2;
      local_14 = (ulong)(ushort)*puVar7;
    }
    else if (local_18 == 0x77) {
      *puVar7 = uVar2;
      local_14 = *puVar7;
    }
    else if (local_18 == 0x62) {
      *(byte *)puVar7 = (byte)uVar2;
      local_14 = (ulong)(byte)*puVar7;
    }
    printf("Written 0x%X; readback 0x%X\n",uVar2,local_14);
    fflush(stdout);
  }
  iVar6 = munmap(__addr,0x1000);
  pFVar1 = stderr;
  if (iVar6 == -1) {
    piVar4 = __errno_location();
    iVar3 = *piVar4;
    piVar4 = __errno_location();
    pcVar5 = strerror(*piVar4);
    fprintf(pFVar1,"Error at line %d, file %s (%d) [%s]\n",0x7f,"devmem2.c",iVar3,pcVar5);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  close(iVar3);
  return 0;
}




void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _init(param_1);
  puVar2 = (undefined4 *)0x10b38;
  iVar1 = 0;
  do {
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 1;
    (*(code *)*puVar2)(param_1,param_2,param_3,(code *)*puVar2,param_4);
  } while (iVar1 != 1);
  return;
}




void __libc_csu_fini(void)

{
  return;
}




void _fini(void)

{
  return;
}



