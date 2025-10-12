// Decompiled: led-blink_fa390f6ccf9235a1


void _DT_INIT(void)

{
  FUN_0000869c();
  return;
}




undefined4 FUN_0000854c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  local_14 = -1;
  iVar1 = access("/var/run/led-blink.run",0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  if (param_1 < 2) {
    iVar1 = 600;
  }
  else {
    __isoc99_sscanf(*(undefined4 *)(param_2 + 4),&DAT_000088a0,&local_14);
    if (local_14 < 2) {
      iVar1 = 2;
    }
    else {
      iVar1 = local_14;
      if (0x707 < local_14) {
        iVar1 = 0x708;
      }
    }
  }
  signal(9,(__sighandler_t)&LAB_00008794);
  signal(3,(__sighandler_t)&LAB_00008794);
  signal(0xf,(__sighandler_t)&LAB_00008794);
  signal(2,(__sighandler_t)&LAB_00008794);
  time(&local_18);
  iVar2 = iVar1 + local_18;
  FUN_000087c4(iVar1);
  daemon(0,0);
  while (local_18 <= iVar2) {
    FUN_000087ac();
    time(&local_18);
    FUN_000087c4(iVar2 - local_18);
  }
  unlink("/var/run/led-blink.run");
  return 0;
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(FUN_0000854c,param_2,&stack0x00000004,FUN_0000880c,&DAT_00008870,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x000086b0) */

void FUN_0000869c(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x000086d8) */
/* WARNING: Removing unreachable block (ram,0x000086e0) */
/* WARNING: Removing unreachable block (ram,0x000086e4) */

void FUN_000086c0(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_000109f4 != '\0') {
    return;
  }
  FUN_000086c0();
  DAT_000109f4 = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008718) */
/* WARNING: Removing unreachable block (ram,0x00008720) */
/* WARNING: Removing unreachable block (ram,0x00008780) */
/* WARNING: Removing unreachable block (ram,0x00008724) */

void _INIT_0(void)

{
  return;
}




void FUN_000087ac(void)

{
  sleep(1);
  sleep(1);
  return;
}




void FUN_000087c4(undefined4 param_1)

{
  FILE *__stream;
  
  __stream = fopen("/var/run/led-blink.run","w");
  if (__stream != (FILE *)0x0) {
    fprintf(__stream,"%d\n",param_1);
    fclose(__stream);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




/* WARNING: Removing unreachable block (ram,0x00008838) */

void FUN_0000880c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DT_INIT();
  puVar2 = (undefined4 *)0x108ac;
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



