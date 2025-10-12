// Decompiled: lcd_test_bee4005f73f00e57_debug


int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_gmon_start(ctx);
  return iVar1;
}




void _start(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  __libc_start_main(0x84f1,in_stack_00000000,&stack0x00000004,0x85ad,0x85f1,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x0000845e) */

void call_gmon_start(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008476) */
/* WARNING: Removing unreachable block (ram,0x0000847c) */

void deregister_tm_clones(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x000084a0) */
/* WARNING: Removing unreachable block (ram,0x000084a6) */

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




/* WARNING: Removing unreachable block (ram,0x000084dc) */

void frame_dummy(void)

{
  register_tm_clones();
  return;
}




undefined4 main(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_4c [64];
  int local_c;
  
  local_c = open("/dev/bitmain-lcd",0x101002,param_3,param_4,param_2,param_1);
  if (local_c < 0) {
    printf("/dev/bitmain-lcd open failed. fd = %d\n",local_c);
    perror("open");
    return 0xffffffff;
  }
  printf("/dev/bitmain-lcd opened. fd = %d\n",local_c);
  do {
    puts("\nclear lcd");
    memset(auStack_4c,0x20,0x40);
    write(local_c,auStack_4c,0x40);
    sleep(3);
    puts("\nwrite lcd");
    memset(auStack_4c,0x61,0x40);
    write(local_c,auStack_4c,0x40);
    sleep(3);
  } while( true );
}




void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _init(param_1);
  puVar2 = (undefined4 *)0x10688;
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



