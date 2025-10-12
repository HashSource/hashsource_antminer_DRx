// Decompiled: monitor-recobtn_27037fd753413eed


void _DT_INIT(void)

{
  FUN_00008824();
  return;
}




void FUN_00008628(int param_1,int param_2)

{
  int iVar1;
  __pid_t _Var2;
  timeval local_28;
  timeval local_20;
  
  printf("monitor-recobtn compile %s--%s\n","Dec 13 2018","20:07:04");
  do {
    iVar1 = FUN_00008974(0);
    while (iVar1 == 0) {
      gettimeofday(&local_28,(__timezone_ptr_t)0x0);
      FUN_0000891c();
      puts("Detect recovery button push off");
LAB_00008674:
      iVar1 = FUN_00008974(0);
      if (iVar1 != 1) {
        while (gettimeofday(&local_20,(__timezone_ptr_t)0x0),
              3000000 < ((local_20.tv_sec - local_28.tv_sec) * 1000000 + local_20.tv_usec) - local_28.tv_usec) {
          puts("recovery button off over 3S, wait push on");
          while (iVar1 = FUN_00008974(0), iVar1 == 0) {
            FUN_0000891c();
            sleep(1);
            FUN_0000893c();
            sleep(1);
          }
          puts("recovery button on");
          _Var2 = fork();
          if (_Var2 < 0) {
            puts("error occured.");
            goto LAB_00008674;
          }
          if (_Var2 == 0) {
            FUN_0000893c();
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
            FUN_0000891c();
            usleep(100000);
            FUN_0000893c();
            usleep(100000);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          puts("recovery factory complete");
          iVar1 = FUN_00008974(0);
          if (iVar1 == 1) goto LAB_0000875c;
        }
        usleep(500000);
        goto LAB_00008674;
      }
LAB_0000875c:
      FUN_0000893c();
      iVar1 = FUN_00008974(0);
    }
    sleep(1);
  } while( true );
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(FUN_00008628,param_2,&stack0x00000004,FUN_00008a58,&DAT_00008abc,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x00008838) */

void FUN_00008824(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008860) */
/* WARNING: Removing unreachable block (ram,0x00008868) */
/* WARNING: Removing unreachable block (ram,0x0000886c) */

void FUN_00008848(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00010e64 != '\0') {
    return;
  }
  FUN_00008848();
  DAT_00010e64 = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x000088a0) */
/* WARNING: Removing unreachable block (ram,0x000088a8) */
/* WARNING: Removing unreachable block (ram,0x00008908) */
/* WARNING: Removing unreachable block (ram,0x000088ac) */

void _INIT_0(void)

{
  return;
}




void FUN_0000891c(void)

{
  system("echo low >/sys/class/gpio/gpio941/direction");
  system("echo low >/sys/class/gpio/gpio942/direction");
  return;
}




void FUN_0000893c(void)

{
  system("echo high >/sys/class/gpio/gpio941/direction");
  system("echo high >/sys/class/gpio/gpio942/direction");
  return;
}




int FUN_0000895c(char *param_1)

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




int FUN_00008974(void)

{
  int iVar1;
  FILE *pFVar2;
  size_t sVar3;
  int local_c;
  
  iVar1 = FUN_0000895c("/sys/class/gpio/gpio921");
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
      __isoc99_fscanf(pFVar2,&DAT_00008c2c,&local_c);
      fclose(pFVar2);
      if (local_c != 0) {
        local_c = 1;
      }
    }
  }
  return local_c;
}




/* WARNING: Removing unreachable block (ram,0x00008a84) */

void FUN_00008a58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DT_INIT();
  puVar2 = (undefined4 *)0x10d0c;
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



