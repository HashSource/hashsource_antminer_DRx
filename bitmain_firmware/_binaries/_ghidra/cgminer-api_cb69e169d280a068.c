// Decompiled: cgminer-api_cb69e169d280a068


void _DT_INIT(void)

{
  FUN_000088f4();
  return;
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(&DAT_00008748,param_2,&stack0x00000004,FUN_00008de8,&DAT_00008e4c,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x00008908) */

void FUN_000088f4(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008930) */
/* WARNING: Removing unreachable block (ram,0x00008938) */
/* WARNING: Removing unreachable block (ram,0x0000893c) */

void FUN_00008918(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_0001116c != '\0') {
    return;
  }
  FUN_00008918();
  DAT_0001116c = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00008970) */
/* WARNING: Removing unreachable block (ram,0x00008978) */
/* WARNING: Removing unreachable block (ram,0x000089d8) */
/* WARNING: Removing unreachable block (ram,0x0000897c) */

void _INIT_0(void)

{
  return;
}




byte * FUN_000089ec(byte *param_1)

{
  ushort **ppuVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  ppuVar1 = __ctype_b_loc();
  do {
    pbVar3 = param_1;
    param_1 = pbVar3 + 1;
  } while (((*ppuVar1)[*pbVar3] & 0x2000) != 0);
  for (pbVar2 = (byte *)__rawmemchr(pbVar3,(*ppuVar1)[*pbVar3] & 0x2000); pbVar3 < pbVar2; pbVar2 = pbVar2 + -1) {
    if (((*ppuVar1)[pbVar2[-1]] & 0x2000) != 0) {
      pbVar2[-1] = 0;
    }
  }
  return pbVar3;
}




void FUN_00008a64(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  ushort **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  do {
    pcVar1 = strchr(param_1,0x7c);
    pcVar7 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      pcVar7 = pcVar1 + 1;
      *pcVar1 = '\0';
    }
    if (*param_1 != '\0') {
      iVar6 = 0;
      do {
        pcVar2 = strchr(param_1,0x2c);
        pcVar1 = pcVar2;
        if (pcVar2 != (char *)0x0) {
          pcVar1 = pcVar2 + 1;
          *pcVar2 = '\0';
        }
        if (*param_1 != '\0') {
          pcVar2 = strchr(param_1,0x3d);
          if (pcVar2 == (char *)0x0) {
            if (iVar6 == 0) {
              pcVar5 = (char *)0x0;
              pcVar4 = "";
              goto LAB_00008b18;
            }
          }
          else {
            pcVar5 = pcVar2 + 1;
            *pcVar2 = '\0';
            if (iVar6 == 0) {
              if (pcVar5 == (char *)0x0) {
                pcVar4 = "";
              }
              else {
                ppuVar3 = __ctype_b_loc();
                pcVar4 = pcVar5;
                if (((*ppuVar3)[(byte)pcVar2[1]] & 0x800) == 0) {
                  pcVar4 = "";
                }
              }
LAB_00008b18:
              printf("[%s%s] =>\n(\n",param_1,pcVar4);
            }
            if (pcVar5 != (char *)0x0) {
              printf("   [%s] => %s\n",param_1,pcVar5);
              goto LAB_00008b3c;
            }
          }
          printf("   [%d] => %s\n",iVar6,param_1);
        }
LAB_00008b3c:
        iVar6 = iVar6 + 1;
        param_1 = pcVar1;
      } while (pcVar1 != (char *)0x0);
      puts(")");
    }
    param_1 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      return;
    }
  } while( true );
}




undefined4 FUN_00008ba8(char *param_1,char *param_2,int param_3)

{
  hostent *phVar1;
  int __fd;
  int iVar2;
  size_t sVar3;
  ssize_t sVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  char *__buf;
  sockaddr local_28;
  
  phVar1 = gethostbyname(param_2);
  if (phVar1 == (hostent *)0x0) {
    printf("Couldn\'t get hostname: \'%s\'\n",param_2);
    uVar9 = 1;
  }
  else {
    __fd = socket(2,1,0);
    if (__fd == -1) {
      piVar6 = __errno_location();
      uVar9 = 1;
      pcVar5 = strerror(*piVar6);
      printf("Socket initialisation failed: %s\n",pcVar5);
    }
    else {
      iVar8 = 0;
      local_28.sa_data[6] = '\0';
      local_28.sa_data[7] = '\0';
      local_28.sa_data[8] = '\0';
      local_28.sa_data[9] = '\0';
      local_28.sa_data[10] = '\0';
      local_28.sa_data[0xb] = '\0';
      local_28.sa_data[0xc] = '\0';
      local_28.sa_data[0xd] = '\0';
      local_28.sa_data._2_4_ = *(undefined4 *)*phVar1->h_addr_list;
      local_28.sa_data._0_2_ = (ushort)(byte)((uint)param_3 >> 8) | (ushort)(param_3 << 8);
      local_28.sa_family = 2;
      iVar2 = connect(__fd,&local_28,0x10);
      if (iVar2 < 0) {
        piVar6 = __errno_location();
        uVar9 = 1;
        pcVar5 = strerror(*piVar6);
        printf("Socket connect failed: %s\n",pcVar5);
      }
      else {
        sVar3 = strlen(param_1);
        sVar4 = send(__fd,param_1,sVar3,0);
        if (sVar4 < 0) {
          piVar6 = __errno_location();
          uVar9 = 1;
          pcVar5 = strerror(*piVar6);
          printf("Send failed: %s\n",pcVar5);
LAB_00008cec:
          close(__fd);
        }
        else {
          pcVar5 = (char *)malloc(0x10000);
          if (pcVar5 == (char *)0x0) {
            printf("Err: OOM (%d)\n",0x10000);
            uVar9 = 1;
          }
          else {
            iVar2 = 0xffff;
            do {
              do {
                __buf = pcVar5 + iVar8;
                sVar4 = recv(__fd,__buf,iVar2 - iVar8,0);
                iVar8 = iVar8 + sVar4;
                if (sVar4 < 0) {
                  piVar6 = __errno_location();
                  uVar9 = 1;
                  pcVar7 = strerror(*piVar6);
                  printf("Recv failed: %s\n",pcVar7);
LAB_00008d1c:
                  *__buf = '\0';
                  if (DAT_00011170 == 0) {
                    printf("Reply was \'%s\'\n",pcVar5);
                    FUN_00008a64(pcVar5);
                  }
                  else {
                    puts(pcVar5);
                  }
                  goto LAB_00008cec;
                }
                if (sVar4 == 0) {
                  uVar9 = 0;
                  goto LAB_00008d1c;
                }
              } while (iVar2 != iVar8);
              sVar3 = iVar2 + 0x10000;
              iVar2 = iVar2 + 0xffff;
              pcVar5 = (char *)realloc(pcVar5,sVar3);
            } while (pcVar5 != (char *)0x0);
            printf("Err: OOM (%d)\n",sVar3);
            uVar9 = 1;
          }
        }
      }
    }
  }
  return uVar9;
}




/* WARNING: Removing unreachable block (ram,0x00008e14) */

void FUN_00008de8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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



