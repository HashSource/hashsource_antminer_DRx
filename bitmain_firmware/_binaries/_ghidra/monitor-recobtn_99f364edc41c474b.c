// Decompiled: monitor-recobtn_99f364edc41c474b


void _DT_INIT(void)

{
  FUN_00008850();
  return;
}




void FUN_00008654(int param_1,int param_2)

{
  int iVar1;
  __pid_t _Var2;
  timeval local_28;
  timeval local_20;
  
  printf("monitor-recobtn compile %s--%s\n","Dec 11 2017","11:08:51");
  do {
    iVar1 = FUN_000089a0(0);
    while (iVar1 == 0) {
      gettimeofday(&local_28,(__timezone_ptr_t)0x0);
      FUN_00008948();
      puts("Detect recovery button push off");
LAB_000086a0:
      iVar1 = FUN_000089a0(0);
      if (iVar1 != 1) {
        while (gettimeofday(&local_20,(__timezone_ptr_t)0x0),
              3000000 < ((local_20.tv_sec - local_28.tv_sec) * 1000000 + local_20.tv_usec) - local_28.tv_usec) {
          puts("recovery button off over 3S, wait push on");
          while (iVar1 = FUN_000089a0(0), iVar1 == 0) {
            FUN_00008948();
            sleep(1);
            FUN_00008968();
            sleep(1);
          }
          puts("recovery button on");
          _Var2 = fork();
          if (_Var2 < 0) {
            puts("error occured.");
            goto LAB_000086a0;
          }
          if (_Var2 == 0) {
            FUN_00008968();
            if (param_1 < 2) {
              sleep(1);
            }
            else {
              execvp(*(char **)(param_2 + 4),(char **)(param_2 + 4));
            }
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          iVar1 = 100;
          wait((void *)0x0);
          puts("child complete");
          do {
            FUN_00008948();
            usleep(100000);
            FUN_00008968();
            usleep(100000);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          puts("recovery factory complete");
          iVar1 = FUN_000089a0(0);
          if (iVar1 == 1) goto LAB_00008788;
        }
        usleep(500000);
        goto LAB_000086a0;
      }
LAB_00008788:
      FUN_00008968();
      iVar1 = FUN_000089a0(0);
    }
    sleep(1);
  } while( true );
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(FUN_00008654,param_2,&stack0x00000004,FUN_00008a84,&DAT_00008ae8,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x00008864) */

void FUN_00008850(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x0000888c) */
/* WARNING: Removing unreachable block (ram,0x00008894) */
/* WARNING: Removing unreachable block (ram,0x00008898) */

void FUN_00008874(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00010e94 != '\0') {
    return;
  }
  FUN_00008874();
  DAT_00010e94 = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x000088cc) */
/* WARNING: Removing unreachable block (ram,0x000088d4) */
/* WARNING: Removing unreachable block (ram,0x00008934) */
/* WARNING: Removing unreachable block (ram,0x000088d8) */

void _INIT_0(void)

{
  return;
}




void FUN_00008948(void)

{
  system("echo low >/sys/class/gpio/gpio941/direction");
  system("echo low >/sys/class/gpio/gpio942/direction");
  return;
}




void FUN_00008968(void)

{
  system("echo high >/sys/class/gpio/gpio941/direction");
  system("echo high >/sys/class/gpio/gpio942/direction");
  return;
}




int FUN_00008988(char *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = access(param_1,0);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}




int FUN_000089a0(void)

{
  int iVar1;
  FILE *pFVar2;
  size_t sVar3;
  int local_c;
  
  iVar1 = FUN_00008988("/sys/class/gpio/gpio921");
  if (iVar1 == 0) {
    pFVar2 = fopen("/sys/class/gpio/export","w");
    if (pFVar2 == (FILE *)0x0) {
      puts("Open read gpio/export");
      local_c = -1;
    }
    else {
      sVar3 = fwrite("921",3,1,pFVar2);
      if (sVar3 != 1) {
        puts("File Write Error!");
      }
      fclose(pFVar2);
      local_c = -1;
    }
  }
  else {
    pFVar2 = fopen("/sys/class/gpio/gpio921/value","r");
    if (pFVar2 == (FILE *)0x0) {
      puts("Open read recovery button failure");
      local_c = -1;
    }
    else {
      __isoc99_fscanf(pFVar2,&DAT_00008c58,&local_c);
      close((int)pFVar2);
      if (local_c != 0) {
        local_c = 1;
      }
    }
  }
  return local_c;
}




/* WARNING: Removing unreachable block (ram,0x00008ab0) */

void FUN_00008a84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DT_INIT();
  puVar2 = (undefined4 *)0x10d38;
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



