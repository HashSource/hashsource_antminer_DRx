// Decompiled: devmem2_14f2fda3f1c70920


void _DT_INIT(void)

{
  FUN_00008954();
  return;
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(&DAT_0000861c,param_2,&stack0x00000004,FUN_00008a4c,&DAT_00008ab0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x00008968) */

void FUN_00008954(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008990) */
/* WARNING: Removing unreachable block (ram,0x00008998) */
/* WARNING: Removing unreachable block (ram,0x0000899c) */

void FUN_00008978(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00010dd0 != '\0') {
    return;
  }
  FUN_00008978();
  DAT_00010dd0 = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x000089d0) */
/* WARNING: Removing unreachable block (ram,0x000089d8) */
/* WARNING: Removing unreachable block (ram,0x00008a38) */
/* WARNING: Removing unreachable block (ram,0x000089dc) */

void _INIT_0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008a78) */

void FUN_00008a4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DT_INIT();
  puVar2 = (undefined4 *)0x10c74;
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



