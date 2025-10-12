// Decompiled: ntpdate_4bcbd20ab2cf6806


void _DT_INIT(void)

{
  FUN_00009b30();
  return;
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(&LAB_00009af0,param_2,&stack0x00000004,FUN_00016728,&DAT_0001678c,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x00009b44) */

void FUN_00009b30(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00009b6c) */
/* WARNING: Removing unreachable block (ram,0x00009b74) */
/* WARNING: Removing unreachable block (ram,0x00009b78) */

void FUN_00009b54(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00021f78 != '\0') {
    return;
  }
  FUN_00009b54();
  DAT_00021f78 = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00009bac) */
/* WARNING: Removing unreachable block (ram,0x00009bb4) */
/* WARNING: Removing unreachable block (ram,0x00009c14) */
/* WARNING: Removing unreachable block (ram,0x00009bb8) */

void _INIT_0(void)

{
  return;
}




void FUN_00009c40(sockaddr *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  socklen_t __addr_len;
  
  uVar5 = (uint)param_1->sa_family;
  if (uVar5 == DAT_00024068) {
    iVar1 = 0;
  }
  else {
    if (uVar5 != DAT_0002406c) goto LAB_00009c70;
    iVar1 = 1;
  }
  if ((&DAT_00024060)[iVar1] != -1) {
    if (uVar5 == 2) {
      __addr_len = 0x10;
    }
    else {
      __addr_len = 0x1c;
    }
    sVar2 = sendto((&DAT_00024060)[iVar1],param_2,param_3,0,param_1,__addr_len);
    if ((sVar2 == -1) && (piVar3 = __errno_location(), *piVar3 != 0x69 && *piVar3 != 0xb)) {
      uVar4 = FUN_0000ed9c(param_1);
      FUN_0000e15c(3,"sendto(%s): %m",uVar4);
      return;
    }
    return;
  }
LAB_00009c70:
  FUN_0000e15c(3,"cannot find family compatible socket to send ntp packet");
                    /* WARNING: Subroutine does not return */
  exit(1);
}




void FUN_00009d08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  byte local_64 [40];
  uint local_3c;
  uint local_38;
  uint local_34;
  
  if (DAT_00021f80 != 0) {
    uVar2 = FUN_0000eca8(param_1 + 4);
    printf("transmit(%s)\n",uVar2);
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0x4a);
  if ((uVar5 < *(ushort *)(param_1 + 0x44)) && (uVar5 < 8)) {
    iVar7 = param_1 + uVar5 * 8;
    *(undefined4 *)(param_1 + (uVar5 + 0x32) * 4 + 4) = 0;
    *(undefined4 *)(param_1 + (uVar5 + 0x12) * 4 + 4) = 0;
    *(undefined4 *)(param_1 + (uVar5 + 0x2a) * 4 + 4) = 0;
    iVar1 = DAT_000212d0;
    *(short *)(param_1 + 0x4a) = (short)(uVar5 + 1);
    *(undefined4 *)(iVar7 + 0x6c) = 0;
    *(undefined4 *)(iVar7 + 0x70) = 0;
    if (iVar1 <= (int)(uVar5 + 1 & 0xffff)) {
LAB_00009f38:
      *(undefined4 *)(param_1 + 0x3c) = 0;
      DAT_00021f84 = DAT_00021f84 + 1;
      return;
    }
  }
  else if (DAT_000212d0 <= (int)uVar5) goto LAB_00009f38;
  local_64[1] = 0;
  local_64[0xc] = 0;
  local_64[0xd] = 0;
  local_64[0xe] = 0;
  local_64[0xf] = 0;
  local_64[0x14] = 0;
  local_64[0x15] = 0;
  local_64[0x16] = 0;
  local_64[0x17] = 0;
  local_64[0] = ~(~(byte)((DAT_000212d4 & 7) << 3) & 0x3c);
  local_64[0x10] = 0;
  local_64[0x11] = 0;
  local_64[0x12] = 0;
  local_64[0x13] = 0;
  local_64[0x1c] = 0;
  local_64[0x1d] = 0;
  local_64[0x1e] = 0;
  local_64[0x1f] = 0;
  local_64[0x18] = 0;
  local_64[0x19] = 0;
  local_64[0x1a] = 0;
  local_64[0x1b] = 0;
  local_64[0x24] = 0;
  local_64[0x25] = 0;
  local_64[0x26] = 0;
  local_64[0x27] = 0;
  local_64[0x20] = 0;
  local_64[0x21] = 0;
  local_64[0x22] = 0;
  local_64[0x23] = 0;
  local_64[2] = 3;
  local_64[3] = 0xfa;
  local_64[4] = 0;
  local_64[5] = 1;
  local_64[6] = 0;
  local_64[7] = 0;
  local_64[8] = 0;
  local_64[9] = 1;
  local_64[10] = 0;
  local_64[0xb] = 0;
  if (DAT_00021f88 == 0) {
    FUN_0000c348(param_1 + 0xf4);
    uVar3 = *(uint *)(param_1 + 0xf4);
    uVar5 = *(uint *)(param_1 + 0xf8);
    local_38 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
    local_3c = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
    FUN_00009c40(param_1 + 4,local_64,0x30);
    if (1 < DAT_00021f80) {
      uVar2 = FUN_0000eca8(param_1 + 4);
      printf("transmit to %s\n",uVar2);
    }
  }
  else {
    local_34 = DAT_00021f8c << 0x18 | (DAT_00021f8c >> 8 & 0xff) << 0x10 | (DAT_00021f8c >> 0x10 & 0xff) << 8 |
               DAT_00021f8c >> 0x18;
    FUN_0000c348(param_1 + 0xf4);
    uVar5 = DAT_00021f8c;
    uVar4 = (*(uint *)(param_1 + 0xf8) & 0xffff) + (DAT_00021f90 & 0xffff);
    uVar6 = (*(uint *)(param_1 + 0xf8) >> 0x10) + (DAT_00021f90 >> 0x10);
    uVar3 = *(uint *)(param_1 + 0xf4);
    if ((uVar4 & 0x10000) != 0) {
      uVar6 = uVar6 + 1;
    }
    bVar8 = (uVar6 & 0x10000) != 0;
    if (bVar8) {
      uVar3 = uVar3 + 1;
    }
    if (bVar8) {
      *(uint *)(param_1 + 0xf4) = uVar3;
    }
    local_3c = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
    *(uint *)(param_1 + 0xf8) = uVar4 & 0xffff | uVar6 << 0x10;
    local_38 = uVar4 * 0x1000000 | ((uVar4 & 0xff00) >> 8) << 0x10 | (uVar6 & 0xff) << 8 | (uVar6 << 0x10) >> 0x18;
    iVar1 = FUN_0000d1b4(uVar5,local_64,0x30);
    FUN_00009c40(param_1 + 4,local_64,iVar1 + 0x30);
    if (1 < DAT_00021f80) {
      uVar2 = FUN_0000eca8(param_1 + 4);
      printf("transmit auth to %s\n",uVar2);
    }
  }
  iVar7 = DAT_00021f94;
  iVar1 = DAT_000212d8;
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
  *(int *)(param_1 + 0x3c) = iVar1 + iVar7;
  return;
}




void FUN_00009f7c(void)

{
  int *piVar1;
  
  DAT_00021f94 = DAT_00021f94 + 1;
  piVar1 = DAT_00024074;
  if (DAT_00024074 == (int *)0x0) {
    return;
  }
  do {
    while ((piVar1[0xf] != 0 && ((uint)piVar1[0xf] <= DAT_00021f94))) {
      FUN_00009d08(piVar1);
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}




void FUN_00009fe8(void)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  nfds_t nVar4;
  int __fd;
  socklen_t local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  pollfd local_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [104];
  
  __fd = 0;
  do {
    local_9c.fd = DAT_0002407c;
    local_9c._4_4_ = DAT_00024080;
    uStack_94 = DAT_00024084;
    uStack_90 = DAT_00024088;
    iVar1 = poll(&local_9c,DAT_0002408c,0);
    if (0 < (int)DAT_0002408c) {
      nVar4 = (uint)local_9c._4_4_ >> 0x10 & 1;
      if ((local_9c._4_4_ & 0x10000) == 0) {
        do {
          nVar4 = nVar4 + 1;
          if (nVar4 == DAT_0002408c) goto joined_r0x0000a05c;
        } while (((&local_9c)[nVar4].revents & 1U) == 0);
      }
      else {
        nVar4 = 0;
      }
      __fd = (&DAT_00024060)[nVar4];
    }
joined_r0x0000a05c:
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 == -1) {
      piVar3 = __errno_location();
      if (*piVar3 != 4) {
        FUN_0000e15c(3,"poll() error: %m");
      }
      return;
    }
    FUN_0000c348(&local_a4);
    if ((DAT_000212dc == 0) && (iVar1 = FUN_0000e994(), iVar1 != 0)) {
      iVar1 = FUN_0000eb48();
      local_a8 = 0x1c;
      sVar2 = recvfrom(__fd,(void *)(iVar1 + 0x5c),0x4c,0,(sockaddr *)(iVar1 + 8),&local_a8);
      *(ssize_t *)(iVar1 + 0x58) = sVar2;
      if (sVar2 == -1) {
        FUN_0000ea80(iVar1);
      }
      else {
        *(undefined4 *)(iVar1 + 0x4c) = local_a4;
        *(undefined4 *)(iVar1 + 0x50) = uStack_a0;
        FUN_0000eaec(iVar1);
      }
    }
    else {
      read(__fd,auStack_8c,100);
    }
  } while( true );
}




void FUN_0000c348(int *param_1)

{
  int iVar1;
  double dVar2;
  timespec local_18;
  
  clock_gettime(0,&local_18);
  *param_1 = local_18.tv_sec + -0x7c558180;
  if (0.0005 < DAT_00023fb8) {
    iVar1 = FUN_0000e5a8();
    dVar2 = ((double)(longlong)iVar1 + (double)(longlong)iVar1) * 2.3283064365386963e-10 * DAT_00023fb8 * 1000000000.0;
  }
  else if (DAT_00023fb8 <= 0.0) {
    dVar2 = 0.0;
  }
  else {
    iVar1 = FUN_0000e5a8();
    dVar2 = ((double)(longlong)iVar1 + (double)(longlong)iVar1) * 2.3283064365386963e-10;
  }
  dVar2 = ((double)(longlong)local_18.tv_nsec + dVar2) * 1e-09;
  if (dVar2 < 1.0) {
    if (dVar2 < 0.0) {
      dVar2 = dVar2 + 1.0;
      *param_1 = *param_1 + -1;
    }
  }
  else {
    dVar2 = dVar2 - 1.0;
    *param_1 = *param_1 + 1;
  }
  param_1[1] = (uint)(0.0 < dVar2 * 4294967296.0) * (int)(longlong)(dVar2 * 4294967296.0);
  return;
}




undefined4 FUN_0000c580(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  double in_d0;
  int iVar4;
  double dVar5;
  int local_330;
  int local_32c;
  timespec local_328;
  undefined1 auStack_320 [384];
  undefined1 auStack_1a0 [384];
  
  dVar5 = in_d0 + DAT_00023fc0;
  bVar1 = dVar5 < 0.0;
  if (bVar1) {
    dVar5 = -dVar5;
    iVar2 = (int)(longlong)dVar5;
  }
  else {
    iVar2 = (int)(longlong)dVar5;
  }
  dVar5 = (dVar5 - (double)(longlong)iVar2) * 1000000.0 + 0.5;
  iVar4 = (uint)(0.0 < dVar5) * (int)(longlong)dVar5;
  clock_gettime(0,&local_328);
  local_330 = local_328.tv_sec;
  local_32c = local_328.tv_nsec / 1000;
  if (DAT_00021f80 != 0) {
    printf("step_systime: step %.6f residual %.6f\n");
  }
  if (bVar1) {
    local_32c = local_32c - iVar4;
    local_330 = local_330 - iVar2;
    if (local_32c < 0) {
      local_330 = local_330 + -1;
      local_32c = local_32c + 1000000;
    }
  }
  else {
    iVar4 = iVar4 + local_32c;
    local_32c = iVar4;
    if (999999 < iVar4) {
      local_32c = iVar4 + -1000000;
    }
    local_330 = iVar2 + local_330;
    if (999999 < iVar4) {
      local_330 = local_330 + 1;
    }
  }
  iVar2 = FUN_0000db3c(&local_330,0);
  if (iVar2 == 0) {
    DAT_00023fc0._0_4_ = 0;
    DAT_00023fc0._4_4_ = 0;
    if (local_328.tv_sec == local_330) {
      uVar3 = 1;
    }
    else {
      memset(auStack_320,0,0x180);
      memset(auStack_1a0,0,0x180);
      uVar3 = 1;
    }
  }
  else {
    FUN_0000e15c(3,"step-systime: %m");
    uVar3 = 0;
  }
  return uVar3;
}




char * FUN_0000c740(byte *param_1,int *param_2)

{
  char *pcVar1;
  ushort uVar2;
  ushort **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  ushort uVar11;
  ushort *puVar12;
  char *pcVar13;
  
  if (param_1 == (byte *)0x0) {
    (*DAT_00021dcc)("atolfp.c",0x2a,0,"str != ((void *)0)");
  }
  ppuVar3 = __ctype_b_loc();
  puVar12 = *ppuVar3;
  do {
    pbVar8 = param_1;
    uVar6 = (uint)*pbVar8;
    uVar11 = puVar12[uVar6] & 0x2000;
    param_1 = pbVar8 + 1;
  } while ((puVar12[uVar6] & 0x2000) != 0);
  if (uVar6 == 0x2d) {
    uVar6 = (uint)pbVar8[1];
    uVar11 = 1;
    pbVar8 = pbVar8 + 1;
  }
  if (uVar6 == 0x2b) {
    uVar6 = (uint)pbVar8[1];
    pbVar8 = pbVar8 + 1;
  }
  if (uVar6 == 0x2e) {
LAB_0000c7d0:
    pcVar10 = (char *)0x0;
    do {
      pcVar4 = strchr("0123456789",uVar6);
      if (pcVar4 == (char *)0x0) {
        uVar6 = (uint)*pbVar8;
        if ((uVar6 != 0) && (pcVar4 = (char *)(puVar12[uVar6] & 0x2000), (puVar12[uVar6] & 0x2000) == 0)) {
          pbVar8 = pbVar8 + 1;
          pcVar13 = pcVar4;
          if (uVar6 != 0x2e) {
            return pcVar4;
          }
          goto LAB_0000c84c;
        }
        break;
      }
      uVar6 = (uint)pbVar8[1];
      pcVar10 = pcVar4 + (int)pcVar10 * 10 + -0x1711c;
      pbVar8 = pbVar8 + 1;
    } while (uVar6 != 0);
  }
  else {
    if ((puVar12[uVar6] & 0x800) == 0) {
      return (char *)(puVar12[uVar6] & 0x800);
    }
    if (uVar6 != 0) goto LAB_0000c7d0;
    pcVar10 = (char *)0x0;
  }
  if (uVar11 == 0) {
    *param_2 = (int)pcVar10;
    param_2[1] = 0;
    return (char *)0x1;
  }
  goto LAB_0000c934;
  while( true ) {
    pcVar5 = strchr("0123456789",uVar6);
    if (pcVar5 == (char *)0x0) goto LAB_0000c8a8;
    pcVar13 = pcVar13 + 1;
    pcVar4 = pcVar5 + (int)pcVar4 * 10 + -0x1711c;
    pbVar8 = pbVar7 + 1;
    if (pcVar13 == (char *)0x9) break;
LAB_0000c84c:
    pbVar7 = pbVar8;
    uVar6 = (uint)*pbVar7;
    if (uVar6 == 0) goto LAB_0000c8a8;
  }
  uVar6 = (uint)pbVar7[1];
  pbVar7 = pbVar7 + 1;
LAB_0000c8a8:
  uVar2 = puVar12[uVar6];
  while ((uVar2 & 0x800) != 0) {
    pbVar7 = pbVar7 + 1;
    uVar6 = (uint)*pbVar7;
    uVar2 = puVar12[uVar6];
  }
  if ((uVar6 != 0) && ((uVar2 & 0x2000) == 0)) {
    return (char *)(uVar2 & 0x2000);
  }
  if (pcVar13 != (char *)0x0) {
    iVar9 = 0x20;
    uVar6 = 0x80000000;
    pcVar5 = (char *)0x0;
    pcVar13 = *(char **)(&DAT_000170d4 + (int)pcVar13 * 4);
    do {
      pcVar4 = (char *)((int)pcVar4 * 2);
      if (pcVar13 <= pcVar4) {
        pcVar5 = (char *)((uint)pcVar5 | uVar6);
        pcVar4 = pcVar4 + -(int)pcVar13;
      }
      iVar9 = iVar9 + -1;
      uVar6 = uVar6 >> 1;
    } while (iVar9 != 0);
    pcVar1 = (char *)((int)pcVar4 << 1);
    pcVar4 = pcVar5;
    if (pcVar13 < pcVar1) {
      pcVar4 = pcVar5 + 1;
    }
  }
  if (uVar11 == 0) goto LAB_0000c93c;
  if (pcVar4 != (char *)0x0) {
    pcVar4 = (char *)-(int)pcVar4;
    pcVar10 = (char *)~(uint)pcVar10;
    goto LAB_0000c93c;
  }
LAB_0000c934:
  pcVar10 = (char *)-(int)pcVar10;
  pcVar4 = (char *)0x0;
LAB_0000c93c:
  *param_2 = (int)pcVar10;
  param_2[1] = (int)pcVar4;
  return (char *)0x1;
}




void FUN_0000c9b4(void)

{
  memset(&DAT_000240bc,0,0x100);
  return;
}




ushort FUN_0000ca64(uint param_1)

{
  ushort uVar1;
  int *piVar2;
  
  DAT_000240a8 = DAT_000240a8 + 1;
  if ((param_1 == 0) || (param_1 == DAT_000240a0)) {
    uVar1 = 1;
  }
  else {
    DAT_000241bc = DAT_000241bc + 1;
    for (piVar2 = (int *)(&DAT_000240bc)[param_1 & 0x3f]; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if (param_1 == piVar2[0x11]) {
        if (piVar2[0x12] != 0) {
          uVar1 = *(ushort *)(piVar2 + 0x13);
          if ((uVar1 & 1) != 0) {
            DAT_00024098 = piVar2[0x15];
            DAT_0002409c = uVar1;
            DAT_000240a0 = piVar2[0x11];
            DAT_000240b0 = piVar2[0x12];
            DAT_000241c4 = (int)(piVar2 + 1);
            return 1;
          }
          DAT_00024090 = DAT_00024090 + 1;
          return uVar1 & 1;
        }
        break;
      }
    }
    uVar1 = 0;
    DAT_000240a4 = DAT_000240a4 + 1;
  }
  return uVar1;
}




void FUN_0000cb80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)calloc(0xc,0x58);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar2 = puVar1;
  do {
    puVar3 = puVar2 + 0x16;
    *puVar2 = DAT_000241c0;
    DAT_000241c0 = puVar2;
    puVar2 = puVar3;
  } while (puVar3 != puVar1 + 0x108);
  DAT_000241c0 = puVar1 + 0xf2;
  DAT_000241c8 = DAT_000241c8 + 0xc;
  return;
}




void FUN_0000cbe4(uint param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  uVar8 = param_1 & 0x3f;
  piVar3 = (int *)(&DAT_000240bc)[uVar8];
  if (piVar3 != (int *)0x0) {
    uVar6 = piVar3[0x11];
    piVar7 = piVar3;
    while( true ) {
      if (uVar6 == param_1) {
        if (DAT_000240a0 == param_1) {
          DAT_000240a0 = 0;
          DAT_0002409c = 0;
        }
        if (param_2 == 0) {
          *(ushort *)(piVar7 + 0x13) = *(ushort *)(piVar7 + 0x13) & 0xfffe;
          if (piVar7 == piVar3) {
            (&DAT_000240bc)[uVar8] = *piVar7;
          }
          else {
            do {
              piVar4 = piVar3;
              piVar3 = (int *)*piVar4;
            } while (piVar3 != piVar7);
            *piVar4 = *piVar7;
          }
          DAT_000240ac = DAT_000240ac + -1;
          *piVar7 = (int)DAT_000241c0;
          DAT_000241c0 = piVar7;
          DAT_000241c8 = DAT_000241c8 + 1;
          return;
        }
        *(ushort *)(piVar7 + 0x13) = *(ushort *)(piVar7 + 0x13) | 1;
        if (param_2 < 2) {
          piVar7[0x14] = 0;
        }
        else {
          piVar7[0x14] = param_2 + DAT_00021f94;
        }
        return;
      }
      piVar7 = (int *)*piVar7;
      if (piVar7 == (int *)0x0) break;
      uVar6 = piVar7[0x11];
    }
  }
  if (param_2 == 0) {
    return;
  }
  if (DAT_000241c8 == 0) {
    iVar5 = FUN_0000cb80();
    if (iVar5 == 0) {
      return;
    }
    piVar3 = (int *)(&DAT_000240bc)[uVar8];
  }
  puVar2 = DAT_000241c0;
  DAT_000241c8 = DAT_000241c8 + -1;
  DAT_000240ac = DAT_000240ac + 1;
  DAT_000241c0[0x11] = param_1;
  puVar1 = (undefined2 *)(DAT_000241c0 + 0x13);
  DAT_000241c0 = (int *)*DAT_000241c0;
  *puVar1 = 1;
  *puVar2 = piVar3;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  (&DAT_000240bc)[uVar8] = puVar2;
  return;
}




ushort FUN_0000cd8c(uint param_1)

{
  int *piVar1;
  
  if (param_1 == DAT_000240a0) {
    return DAT_0002409c & 1;
  }
  piVar1 = (int *)(&DAT_000240bc)[param_1 & 0x3f];
  DAT_000241bc = DAT_000241bc + 1;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      DAT_000240a4 = DAT_000240a4 + 1;
      return 0;
    }
    if (piVar1[0x11] == param_1) break;
    piVar1 = (int *)*piVar1;
  }
  if ((*(ushort *)(piVar1 + 0x13) & 1) == 0) {
    DAT_000240a4 = DAT_000240a4 + 1;
    return *(ushort *)(piVar1 + 0x13) & 1;
  }
  return 1;
}




void FUN_0000ce40(uint param_1,int param_2,void *param_3,size_t param_4)

{
  byte *pbVar1;
  int *piVar2;
  void *__dest;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte local_3c [16];
  undefined1 local_2c;
  
  uVar5 = param_1 & 0x3f;
  piVar2 = (int *)(&DAT_000240bc)[uVar5];
  if (piVar2 == (int *)0x0) {
LAB_0000ce94:
    if ((DAT_000241c8 != 0) || (iVar4 = FUN_0000cb80(), iVar4 != 0)) {
      piVar2 = DAT_000241c0;
      if (0x3f < param_4) {
        param_4 = 0x40;
      }
      DAT_000241c8 = DAT_000241c8 + -1;
      __dest = DAT_000241c0 + 1;
      DAT_000241c0[0x11] = param_1;
      DAT_000241c0[0x12] = param_2;
      DAT_000241c0[0x15] = param_4;
      *(undefined2 *)(DAT_000241c0 + 0x13) = 0;
      DAT_000241c0[0x14] = 0;
      DAT_000241c0 = (int *)*DAT_000241c0;
      memcpy(__dest,param_3,param_4);
      iVar4 = DAT_00021f80;
      *piVar2 = (&DAT_000240bc)[uVar5];
      (&DAT_000240bc)[uVar5] = piVar2;
      if (1 < iVar4) {
        local_3c[0] = '0';
        local_3c[1] = '1';
        local_3c[2] = '2';
        local_3c[3] = '3';
        local_3c[4] = '4';
        local_3c[5] = '5';
        local_3c[6] = '6';
        local_3c[7] = '7';
        local_3c[8] = '8';
        local_3c[9] = '9';
        local_3c[10] = 'a';
        local_3c[0xb] = 'b';
        local_3c[0xc] = 'c';
        local_3c[0xd] = 'd';
        local_3c[0xe] = 'e';
        local_3c[0xf] = 'f';
        local_2c = 0;
        printf("auth_setkey: key %d type %d len %d ",piVar2[0x11],piVar2[0x12],piVar2[0x15]);
        if (0 < piVar2[0x15]) {
          iVar4 = 0;
          do {
            pbVar1 = (byte *)((int)param_3 + iVar4);
            iVar4 = iVar4 + 1;
            printf("%c%c",(uint)local_3c[*pbVar1 >> 4],(uint)local_3c[*pbVar1 & 0xf]);
          } while (iVar4 < piVar2[0x15]);
        }
        putchar(10);
      }
      DAT_000240ac = DAT_000240ac + 1;
    }
  }
  else {
    uVar3 = piVar2[0x11];
    while (uVar3 != param_1) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) goto LAB_0000ce94;
      uVar3 = piVar2[0x11];
    }
    if (0x3f < param_4) {
      param_4 = 0x40;
    }
    piVar2[0x12] = param_2;
    piVar2[0x15] = param_4;
    memcpy(piVar2 + 1,param_3,param_4);
    if (DAT_000240a0 == param_1) {
      DAT_000240a0 = 0;
      DAT_0002409c = 0;
    }
  }
  return;
}




void FUN_0000d018(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *local_2c;
  
  iVar4 = 0;
  local_2c = &DAT_000240b8;
  do {
    local_2c = local_2c + 1;
    puVar1 = (undefined4 *)*local_2c;
    puVar3 = &DAT_000240bc + iVar4;
    while (puVar1 != (undefined4 *)0x0) {
      while( true ) {
        puVar2 = puVar1;
        if (0xffff < (uint)puVar2[0x11]) goto LAB_0000d0b0;
        if ((*(ushort *)(puVar2 + 0x13) & 1) != 0) break;
        *puVar3 = *puVar2;
        DAT_000240ac = DAT_000240ac + -1;
        DAT_000241c8 = DAT_000241c8 + 1;
        *puVar2 = DAT_000241c0;
        puVar1 = (undefined4 *)*puVar3;
        DAT_000241c0 = puVar2;
        if ((undefined4 *)*puVar3 == (undefined4 *)0x0) goto LAB_0000d0b0;
      }
      memset(puVar2 + 1,0,0x40);
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar3 = puVar2;
      puVar1 = (undefined4 *)*puVar2;
    }
LAB_0000d0b0:
    iVar4 = iVar4 + 1;
    if (iVar4 == 0x40) {
      return;
    }
  } while( true );
}




uint FUN_0000d1b4(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_68 [84];
  int local_14;
  
  iVar6 = param_3 + 3;
  if (-1 < param_3) {
    iVar6 = param_3;
  }
  bVar8 = param_1 != 0;
  uVar1 = param_1 >> 8;
  uVar2 = param_1 >> 0x10;
  uVar3 = param_1 >> 0x18;
  uVar4 = param_1 << 0x18;
  DAT_000240b8 = DAT_000240b8 + 1;
  if (!bVar8) {
    param_1 = 4;
  }
  *(uint *)(param_2 + (iVar6 >> 2) * 4) = uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3;
  if (bVar8) {
    local_14 = param_2;
    param_1 = FUN_0000ca64(param_1);
    iVar6 = local_14;
    uVar5 = DAT_000241c4;
    if (param_1 != 0) {
      FUN_00013354(auStack_68);
      FUN_0001339c(auStack_68,uVar5,DAT_00024098);
      FUN_0001339c(auStack_68,iVar6,param_3);
      FUN_000134b0(auStack_68,&local_a8);
      iVar7 = iVar6 + param_3 + 4;
      *(undefined4 *)(iVar6 + param_3 + 4) = local_a8;
      *(undefined4 *)(iVar7 + 4) = uStack_a4;
      *(undefined4 *)(iVar7 + 8) = uStack_a0;
      *(undefined4 *)(iVar7 + 0xc) = uStack_9c;
      return 0x14;
    }
  }
  return param_1;
}




undefined4 FUN_0000d240(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  DAT_000240b4 = DAT_000240b4 + 1;
  if (((param_1 == 0) || (iVar2 = FUN_0000ca64(), iVar2 == 0)) || (param_4 < 4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0000f90c(DAT_000240b0,DAT_000241c4,param_2,param_3,param_4);
  }
  return uVar1;
}




char * FUN_0000d2bc(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar1 = (char *)*param_1;
  cVar3 = *pcVar1;
  if (cVar3 == ' ' || cVar3 == '\t') {
    do {
      pcVar1 = pcVar1 + 1;
      cVar3 = *pcVar1;
    } while (cVar3 == ' ' || cVar3 == '\t');
  }
  if (((cVar3 != '\n' && cVar3 != '\0') && (cVar3 != '\t')) && (pcVar2 = pcVar1, cVar3 != '#')) {
    while( true ) {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
      cVar3 = *pcVar2;
      if ((cVar3 == '\n' || cVar3 == '\0') || (cVar3 == ' ')) break;
      if ((cVar3 == '\t') || (cVar3 == '#')) break;
    }
    if (pcVar2 != pcVar1) {
      if (cVar3 == ' ' || cVar3 == '\t') {
        pcVar4 = pcVar4 + 2;
        *pcVar2 = '\0';
      }
      else {
        *pcVar2 = '\0';
        pcVar4 = pcVar2;
      }
      *param_1 = pcVar4;
      return pcVar1;
    }
  }
  return (char *)0x0;
}




undefined4 FUN_0000d380(char *param_1)

{
  int iVar1;
  FILE *__stream;
  char *pcVar2;
  uint uVar3;
  byte *pbVar4;
  size_t sVar5;
  __int32_t **pp_Var6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *local_24c;
  char local_248 [4];
  char acStack_244 [4];
  char acStack_240 [4];
  char acStack_23c [4];
  undefined1 local_238;
  byte local_234 [20];
  char acStack_220 [512];
  
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    FUN_0000e15c(3,"authreadkeys: file %s: %m",param_1);
    uVar9 = 0;
  }
  else {
    FUN_0000d018();
    while (local_24c = fgets(acStack_220,0x200,__stream), local_24c != (char *)0x0) {
      pcVar2 = (char *)FUN_0000d2bc(&local_24c);
      if (pcVar2 != (char *)0x0) {
        uVar3 = strtol(pcVar2,(char **)0x0,10);
        if (uVar3 == 0) {
          FUN_0000e15c(3,"authreadkeys: cannot change key %s",pcVar2);
        }
        else if (uVar3 < 0x10000) {
          pbVar4 = (byte *)FUN_0000d2bc(&local_24c);
          if (pbVar4 == (byte *)0x0) {
            FUN_0000e15c(3,"authreadkeys: no key type for key %d",uVar3);
          }
          else if ((*pbVar4 & 0xdf) == 0x4d) {
            pcVar2 = (char *)FUN_0000d2bc(&local_24c);
            if (pcVar2 == (char *)0x0) {
              FUN_0000e15c(3,"authreadkeys: no key for key %d",uVar3);
            }
            else {
              sVar5 = strlen(pcVar2);
              if ((int)sVar5 < 0x15) {
                FUN_0000ce40(uVar3,4,pcVar2,sVar5);
              }
              else {
                if (0x27 < sVar5) {
                  sVar5 = 0x28;
                }
                local_248[0] = '0';
                local_248[1] = '1';
                local_248[2] = '2';
                local_248[3] = '3';
                acStack_244[0] = '4';
                acStack_244[1] = '5';
                acStack_244[2] = '6';
                acStack_244[3] = '7';
                acStack_240[0] = '8';
                acStack_240[1] = '9';
                acStack_240[2] = 'a';
                acStack_240[3] = 'b';
                acStack_23c[0] = 'c';
                acStack_23c[1] = 'd';
                acStack_23c[2] = 'e';
                acStack_23c[3] = 'f';
                local_238 = 0;
                if (0 < (int)sVar5) {
                  pp_Var6 = __ctype_tolower_loc();
                  uVar10 = 0;
                  do {
                    pcVar7 = strchr(local_248,(*pp_Var6)[(byte)pcVar2[uVar10]]);
                    iVar1 = (int)uVar10 >> 1;
                    uVar8 = (int)pcVar7 - (int)local_248;
                    if (pcVar7 == (char *)0x0) {
                      FUN_0000e15c(3,"authreadkeys: invalid hex digit for key %d",uVar3);
                    }
                    else if ((uVar10 & 1) == 0) {
                      local_234[iVar1] = (byte)((uVar8 & 0xff) << 4);
                    }
                    else {
                      local_234[iVar1] = (byte)uVar8 | local_234[iVar1];
                    }
                    uVar10 = uVar10 + 1;
                  } while (sVar5 != uVar10);
                }
                FUN_0000ce40(uVar3,4,local_234,(int)sVar5 / 2);
              }
            }
          }
          else {
            FUN_0000e15c(3,"authreadkeys: invalid type for key %d",uVar3);
          }
        }
        else {
          FUN_0000e15c(3,"authreadkeys: key %s > %d reserved for Autokey",pcVar2);
        }
      }
    }
    fclose(__stream);
    uVar9 = 1;
  }
  return uVar9;
}




char * FUN_0000d5b4(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *__s;
  char local_30 [12];
  
  if (DAT_00023fd0 == 0) {
    FUN_0000dae4();
  }
  iVar5 = DAT_000241dc;
  pcVar12 = local_30;
  iVar8 = DAT_000241dc + 1;
  if (199 < iVar8) {
    iVar8 = 0;
  }
  iVar1 = DAT_000241dc * 0x50;
  __s = &DAT_000241e0 + iVar1;
  DAT_000241dc = iVar8;
  memset(__s,0,0x50);
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  pcVar6 = pcVar12;
  pcVar10 = pcVar12;
  uVar4 = param_1 >> 0x10;
  while (pcVar11 = pcVar6, uVar4 != 0) {
    uVar2 = uVar4 / 10;
    *pcVar11 = (char)uVar4 - ((char)((uVar2 & 0xff) << 1) + (char)uVar2 * '\b');
    pcVar6 = pcVar11 + -1;
    pcVar10 = pcVar11;
    uVar4 = uVar2;
  }
  if (param_4 == 0) {
    pcVar6 = local_30 + 1;
    if (param_3 < 7) {
LAB_0000d7bc:
      pcVar9 = local_30 + 1;
      pcVar11 = pcVar9;
      if (param_3 < 1) goto LAB_0000d6cc;
    }
    else {
      param_3 = 6;
      pcVar11 = pcVar6;
    }
  }
  else {
    pcVar12 = local_30 + 3;
    pcVar6 = local_30 + 4;
    param_3 = (int)(short)((short)param_3 + 3);
    if (param_3 < 3) {
      param_3 = 3;
      pcVar11 = local_30 + 1;
    }
    else {
      if (param_3 < 7) goto LAB_0000d7bc;
      param_3 = 6;
      pcVar11 = local_30 + 1;
    }
  }
  do {
    param_3 = (int)(short)((short)param_3 + -1);
    param_1 = (param_1 & 0xffff) * 10;
    pcVar9 = pcVar11 + 1;
    *pcVar11 = (char)(param_1 >> 0x10);
    pcVar11 = pcVar9;
  } while (0 < param_3);
LAB_0000d6cc:
  if ((param_1 & 0x8000) != 0) {
    bVar7 = pcVar9[-1] + 1;
    pcVar9[-1] = bVar7;
    pcVar11 = pcVar9;
    while (9 < bVar7) {
      pcVar11[-1] = '\0';
      bVar7 = pcVar11[-2] + 1;
      pcVar11[-2] = bVar7;
      pcVar11 = pcVar11 + -1;
    }
  }
  if (pcVar10 < pcVar12) {
    cVar3 = *pcVar10;
    while ((cVar3 == '\0' && (pcVar10 = pcVar10 + 1, pcVar10 != pcVar12))) {
      cVar3 = *pcVar10;
    }
  }
  pcVar12 = __s;
  if (param_2 != 0) {
    (&DAT_000241e0)[iVar5 * 0x50] = 0x2d;
    pcVar12 = &DAT_000241e1 + iVar1;
  }
  if (pcVar10 < pcVar9) {
    do {
      pcVar13 = pcVar10 + 1;
      cVar3 = *pcVar10;
      pcVar11 = pcVar12;
      if (pcVar10 == pcVar6) {
        pcVar11 = pcVar12 + 1;
        *pcVar12 = '.';
      }
      pcVar12 = pcVar11 + 1;
      *pcVar11 = cVar3 + '0';
      pcVar10 = pcVar13;
    } while (pcVar13 != pcVar9);
  }
  *pcVar12 = '\0';
  return __s;
}




void * FUN_0000d7e8(void *param_1,uint param_2,uint param_3,int param_4)

{
  void *pvVar1;
  uint __size;
  int iVar2;
  
  __size = param_2;
  if (param_2 == 0) {
    __size = 1;
  }
  iVar2 = param_4;
  pvVar1 = realloc(param_1,__size);
  if (pvVar1 != (void *)0x0) {
    if (param_4 != 0 && param_3 < param_2) {
      memset((void *)((int)pvVar1 + param_3),0,param_2 - param_3);
    }
    return pvVar1;
  }
  DAT_00023fe4 = 1;
  FUN_0000e15c(3,"fatal out of memory (%lu bytes)",param_2,&DAT_00023fe4,iVar2);
                    /* WARNING: Subroutine does not return */
  exit(1);
}




void * FUN_0000d858(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_0000d7e8(0,sVar1 + 1,0,0);
  memcpy(__dest,param_1,sVar1 + 1);
  return __dest;
}




void FUN_0000d894(undefined4 param_1)

{
  FUN_0000d7e8(0,param_1,0,0);
  return;
}




void FUN_0000d8a8(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = param_1 < 0;
  if (bVar1) {
    param_1 = -param_1;
  }
  FUN_0000d5b4(param_1,bVar1,param_2,0);
  return;
}




void FUN_0000d8c4(char *param_1,int param_2)

{
  fputs(DAT_000212f0,stderr);
  fputs(param_1,stderr);
  _IO_putc(param_2,stderr);
  _IO_putc(10,stderr);
  return;
}




uint FUN_0000d914(int param_1,undefined4 *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  
  DAT_000212f0 = *param_2;
  DAT_000241d0 = (byte *)0x0;
  if (DAT_00023fc8 == 0) {
    DAT_00023fcc = (byte *)0x0;
    DAT_00023fc8 = 1;
  }
  else if ((DAT_00023fcc != (byte *)0x0) && (uVar2 = (uint)*DAT_00023fcc, pbVar4 = DAT_00023fcc, uVar2 != 0))
  goto LAB_0000d95c;
  if ((param_1 <= DAT_00023fc8) || ((pcVar3 = (char *)param_2[DAT_00023fc8], *pcVar3 != '-' || (pcVar3[1] == '\0')))) {
    return 0xffffffff;
  }
  DAT_00023fc8 = DAT_00023fc8 + 1;
  if ((pcVar3[1] == '-') && (pcVar3[2] == '\0')) {
    return 0xffffffff;
  }
  uVar2 = (uint)(byte)pcVar3[1];
  pbVar4 = (byte *)(pcVar3 + 1);
LAB_0000d95c:
  DAT_00023fcc = pbVar4 + 1;
  DAT_000241cc = uVar2;
  if ((param_3 != (byte *)0x0) && (*param_3 != 0)) {
    if (*param_3 != uVar2) {
      pbVar1 = param_3 + 1;
      do {
        param_3 = pbVar1;
        if (param_3 == (byte *)0x0) goto LAB_0000d9b4;
        if (*param_3 == 0) goto LAB_0000d9b4;
        pbVar1 = param_3 + 1;
      } while (*param_3 != uVar2);
    }
    if (uVar2 != 0x3a && uVar2 != 0x3f) {
      if (param_3[1] != 0x3a) {
        return uVar2;
      }
      if (pbVar4[1] != 0) {
        DAT_000241d0 = DAT_00023fcc;
        DAT_00023fcc = (byte *)0x0;
        return uVar2;
      }
      if (DAT_00023fc8 < param_1) {
        param_2 = param_2 + DAT_00023fc8;
        DAT_00023fc8 = DAT_00023fc8 + 1;
        DAT_000241d0 = (byte *)*param_2;
        return uVar2;
      }
      if (DAT_000212f4 == 0) {
        DAT_000241cc = uVar2;
        DAT_000241d0 = (byte *)0x0;
        return 0x3f;
      }
      FUN_0000d8c4(": option requires argument -",uVar2);
      return 0x3f;
    }
  }
LAB_0000d9b4:
  if (DAT_000212f4 == 0) {
    return 0x3f;
  }
  FUN_0000d8c4(": unknown option -",uVar2);
  return 0x3f;
}




void FUN_0000dae4(void)

{
  uint uVar1;
  
  DAT_000241dc = 0;
  uVar1 = FUN_0000f3a0();
  DAT_000241d8 = 1 - uVar1;
  if (1 < uVar1) {
    DAT_000241d8 = 0;
  }
  uVar1 = FUN_0000f3b8();
  DAT_00023fd0 = 1;
  DAT_000241d4 = 1 - uVar1;
  if (1 < uVar1) {
    DAT_000241d4 = 0;
  }
  return;
}




int FUN_0000db3c(timeval *param_1,timezone *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int __errnum;
  uint uVar6;
  __time_t local_3c;
  timespec local_38;
  timeval local_30;
  
  if (DAT_00021f80 != 0) {
    puts("In ntp_set_tod");
  }
  uVar5 = DAT_00023fd4;
  if (DAT_00023fd4 < 2) {
    local_38.tv_sec = param_1->tv_sec;
    local_38.tv_nsec = param_1->tv_usec * 1000;
    piVar1 = __errno_location();
    *piVar1 = 0;
    iVar3 = clock_settime(0,&local_38);
    __errnum = *piVar1;
    if (DAT_00021f80 != 0) {
      pcVar2 = strerror(__errnum);
      printf("ntp_set_tod: clock_settime: %d: %s\n",iVar3,pcVar2);
      uVar5 = DAT_00023fd4;
    }
    if (uVar5 == 0 && iVar3 == 0) {
      DAT_00023fd4 = 1;
      iVar3 = 0;
      goto LAB_0000db88;
    }
    if (iVar3 == 0) goto LAB_0000db88;
  }
  else {
    __errnum = 0;
    iVar3 = -1;
  }
  uVar5 = DAT_00023fd4;
  uVar6 = DAT_00023fd4 & 0xfffffffd;
  if (uVar6 == 0) {
    local_30.tv_sec = uVar6;
    local_30.tv_usec = uVar6;
    adjtime(&local_30,(timeval *)0x0);
    piVar1 = __errno_location();
    *piVar1 = 0;
    iVar3 = settimeofday(param_1,param_2);
    __errnum = *piVar1;
    if (DAT_00021f80 != 0) {
      pcVar2 = strerror(__errnum);
      printf("ntp_set_tod: settimeofday: %d: %s\n",iVar3,pcVar2);
      uVar5 = DAT_00023fd4;
    }
    if (uVar5 == 0 && iVar3 == 0) {
      DAT_00023fd4 = 2;
      iVar3 = 0;
      goto LAB_0000db88;
    }
    if ((iVar3 == 0) || (DAT_00023fd4 != 3 && DAT_00023fd4 != 0)) goto LAB_0000db88;
  }
  else if (DAT_00023fd4 != 3 && DAT_00023fd4 != 0) goto LAB_0000db88;
  uVar5 = DAT_00023fd4;
  local_3c = param_1->tv_sec;
  piVar1 = __errno_location();
  *piVar1 = 0;
  iVar3 = stime(&local_3c);
  __errnum = *piVar1;
  if (DAT_00021f80 != 0) {
    pcVar2 = strerror(__errnum);
    printf("ntp_set_tod: stime: %d: %s\n",iVar3,pcVar2);
    uVar5 = DAT_00023fd4;
  }
  if (uVar5 == 0 && iVar3 == 0) {
    DAT_00023fd4 = 3;
  }
LAB_0000db88:
  if (DAT_00021f80 != 0) {
    uVar4 = *(undefined4 *)(&DAT_000172fc + DAT_00023fd4 * 4);
    pcVar2 = strerror(__errnum);
    printf("ntp_set_tod: Final result: %s: %d: %s\n",uVar4,iVar3,pcVar2);
  }
  if (iVar3 == 0) {
    if (DAT_00023fd8 != (code *)0x0) {
      (*DAT_00023fd8)(*(undefined4 *)(&DAT_000172fc + DAT_00023fd4 * 4));
      DAT_00023fd8 = (code *)0x0;
    }
  }
  else {
    piVar1 = __errno_location();
    *piVar1 = __errnum;
  }
  return iVar3;
}




void FUN_0000ddb8(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((int)param_1 < 0) {
    uVar1 = 1;
    if (param_2 == 0) {
      param_1 = -param_1;
    }
    else {
      param_2 = -param_2;
      param_1 = ~param_1;
    }
  }
  else {
    uVar1 = 0;
  }
  FUN_0000f9f4(param_1,param_2,uVar1,param_3,0);
  return;
}




void FUN_0000ddf8(int param_1,char *param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  size_t sVar5;
  __pid_t _Var6;
  undefined4 *puVar7;
  int iVar8;
  FILE *pFVar9;
  undefined2 *puVar10;
  undefined1 local_28 [4];
  undefined2 local_24 [2];
  
  pcVar2 = DAT_0002405c;
  local_24[0] = 10;
  local_28[0] = 0;
  if (DAT_0002405c != DAT_00023fdc) {
    DAT_00023fdc = DAT_0002405c;
    pcVar3 = strrchr(DAT_0002405c,0x2f);
    if (pcVar3 == (char *)0x0) {
      DAT_00023fe0 = pcVar2;
    }
    else {
      DAT_00023fe0 = pcVar3 + 1;
    }
  }
  iVar8 = DAT_00023fe4;
  if (DAT_000212f8 == 0) {
    if (DAT_00028060 == (FILE *)0x0) {
      iVar8 = 1;
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
    syslog(param_1,"%s",param_2);
  }
  if (0 < DAT_00021f80) {
    iVar8 = 1;
  }
  if (iVar8 != 0 || bVar1) {
    uVar4 = FUN_0000fd48();
    sVar5 = strlen(param_2);
    pcVar2 = DAT_00023fe0;
    if (param_2[sVar5 - 1] == '\n') {
      puVar10 = (undefined2 *)local_28;
    }
    else {
      puVar10 = local_24;
    }
    if (iVar8 != 0) {
      if (param_1 < 4) {
        puVar7 = &stderr;
      }
      else {
        puVar7 = &stdout;
      }
      pFVar9 = (FILE *)*puVar7;
      _Var6 = getpid();
      fprintf(pFVar9,"%s %s[%d]: %s%s",uVar4,pcVar2,_Var6,param_2,puVar10);
      fflush(pFVar9);
    }
    pFVar9 = DAT_00028060;
    pcVar2 = DAT_00023fe0;
    if (bVar1) {
      _Var6 = getpid();
      fprintf(pFVar9,"%s %s[%d]: %s%s",uVar4,pcVar2,_Var6,param_2,puVar10);
      fflush(DAT_00028060);
    }
  }
  return;
}




void FUN_0000df84(char *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  char *__s;
  size_t __n;
  char *__dest;
  
  __dest = param_1;
  while( true ) {
    while( true ) {
      cVar1 = *param_3;
      while( true ) {
        if ((cVar1 == '\0') || (param_1 + param_2 + -1 <= __dest)) goto LAB_0000dfcc;
        if (cVar1 == '%') break;
        param_3 = param_3 + 1;
        *__dest = cVar1;
        cVar1 = *param_3;
        __dest = __dest + 1;
      }
      cVar1 = param_3[1];
      param_3 = param_3 + 2;
      if (cVar1 != 'm') break;
      __s = strerror(param_4);
      __n = strlen(__s);
      if (__dest + __n < param_1 + param_2 + -1) {
        memcpy(__dest,__s,__n);
        __dest = __dest + __n;
      }
    }
    *__dest = '%';
    if (cVar1 == '\0') break;
    __dest[1] = cVar1;
    __dest = __dest + 2;
  }
  __dest = __dest + 1;
LAB_0000dfcc:
  *__dest = '\0';
  return;
}




void FUN_0000e038(char *param_1,size_t param_2,undefined4 param_3,__gnuc_va_list param_4)

{
  int *piVar1;
  char acStack_118 [260];
  
  piVar1 = __errno_location();
  FUN_0000df84(acStack_118,0x100,param_3,*piVar1);
  vsnprintf(param_1,param_2,acStack_118,param_4);
  return;
}




void FUN_0000e084(FILE *param_1,undefined4 param_2,__gnuc_va_list param_3)

{
  int *piVar1;
  char acStack_110 [256];
  
  piVar1 = __errno_location();
  FUN_0000df84(acStack_110,0x100,param_2,*piVar1);
  vfprintf(param_1,acStack_110,param_3);
  return;
}




void FUN_0000e0c8(undefined4 param_1,undefined4 param_2)

{
  FUN_0000e084(param_1,param_2);
  return;
}




void FUN_0000e130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0000e038(param_1,param_2,param_3);
  return;
}




void FUN_0000e15c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_418 [1028];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0000e038(auStack_418,0x400,param_2,&uStack_8);
  FUN_0000ddf8(param_1,auStack_418);
  return;
}




int FUN_0000e1b0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_1c;
  
  uVar1 = time((time_t *)0x0);
  iVar6 = (int)uVar1 >> 0x1f;
  uVar2 = (uVar1 & 0xffff) + 0xffff;
  if ((uVar2 & 0x10000) == 0) {
    uVar1 = (uVar1 >> 0x10) + 0x7fff;
  }
  else {
    uVar1 = (uVar1 >> 0x10) + 0x8000;
  }
  if ((uVar1 & 0x10000) != 0) {
    iVar6 = iVar6 + 1;
  }
  local_1c = param_1 + 0x7c558180;
  iVar4 = 0;
  if ((uVar2 & 0xffff | uVar1 << 0x10) < local_1c) {
    iVar6 = iVar6 + -1;
  }
  while (iVar5 = iVar4, iVar6 != (int)local_1c >> 0x1f) {
    while (-1 < iVar6) {
      iVar5 = iVar5 + 1;
      if (3 < iVar5) {
        return 0;
      }
      uVar1 = (local_1c & 0xffff) + 0x2380;
      if ((uVar1 & 0x10000) == 0) {
        uVar2 = (local_1c >> 0x10) + 0xcb55;
      }
      else {
        uVar2 = (local_1c >> 0x10) + 0xcb56;
      }
      local_1c = uVar1 & 0xffff | uVar2 << 0x10;
      if ((uVar2 & 0x10000) == 0) {
        iVar6 = iVar6 + -1;
      }
      if (iVar6 == (int)local_1c >> 0x1f) goto LAB_0000e264;
    }
    iVar4 = iVar5 + -1;
    if (iVar5 + 2 < 0 != SCARRY4(iVar4,3)) {
      return 0;
    }
    uVar1 = (local_1c & 0xffff) + 0xdc80;
    if ((uVar1 & 0x10000) == 0) {
      uVar2 = (local_1c >> 0x10) + 0x34aa;
    }
    else {
      uVar2 = (local_1c >> 0x10) + 0x34ab;
    }
    local_1c = uVar1 & 0xffff | uVar2 << 0x10;
    if ((uVar2 & 0x10000) != 0) {
      iVar6 = iVar6 + 1;
    }
  }
LAB_0000e264:
  do {
    while( true ) {
      pcVar3 = gmtime;
      if (param_2 != 0) {
        pcVar3 = localtime;
      }
      iVar6 = (*pcVar3)(&local_1c);
      if (iVar6 != 0) {
        if (iVar5 == 0) {
          return iVar6;
        }
        iVar4 = *(int *)(iVar6 + 0x14) + iVar5 * 0x1c;
        *(int *)(iVar6 + 0x14) = iVar4;
        if (0xc6 < iVar4 - 1U) {
          return 0;
        }
        return iVar6;
      }
      uVar1 = local_1c + 0xcb552380;
      if (-1 < (int)local_1c) break;
      iVar4 = iVar5 + -1;
      iVar6 = iVar5 + 2;
      local_1c = local_1c + 0x34aadc80;
      iVar5 = iVar4;
      if (iVar6 < 0 != SCARRY4(iVar4,3)) {
        return 0;
      }
    }
    if (3 < iVar5 + 1) {
      return 0;
    }
    iVar5 = iVar5 + 1;
    local_1c = uVar1;
  } while (-1 < (int)uVar1);
  return 0;
}




char * FUN_0000e49c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *__s;
  
  if (DAT_00023fd0 == 0) {
    FUN_0000dae4();
  }
  iVar2 = DAT_000241dc;
  iVar3 = DAT_000241dc + 1;
  iVar1 = DAT_000241dc + -0xc6;
  if (iVar3 < 200) {
    DAT_000241dc = iVar3;
  }
  __s = &DAT_000241e0 + iVar2 * 0x50;
  if (iVar3 != 199 && iVar1 < 0 == SBORROW4(iVar3,199)) {
    DAT_000241dc = 0;
  }
  memset(__s,0,0x50);
  uVar5 = param_1[1];
  puVar4 = (undefined4 *)FUN_0000e1b0(*param_1,1);
  if (puVar4 == (undefined4 *)0x0) {
    snprintf(__s,0x50,"%08lx.%08lx  --- --- -- ---- --:--:--",*param_1,param_1[1]);
  }
  else {
    snprintf(__s,0x50,"%08lx.%08lx  %s, %s %2d %4d %2d:%02d:%02d.%03lu",*param_1,param_1[1],
             (&PTR_DAT_000173f0)[puVar4[6]],(&PTR_DAT_00021300)[puVar4[4]],puVar4[3],puVar4[5] + 0x76c,puVar4[2],
             puVar4[1],*puVar4,uVar5 / 0x418937);
  }
  return __s;
}




uint FUN_0000e5a8(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar1 = DAT_00021348;
  if (DAT_00021334 == 0) {
    uVar2 = *DAT_00021330 * 0x41a7 + ((int)*DAT_00021330 / 0x1f31d) * -0x7fffffff;
    if ((int)uVar2 < 1) {
      uVar2 = uVar2 + 0x7fffffff;
    }
    uVar2 = uVar2 & 0x7fffffff;
    *DAT_00021330 = uVar2;
  }
  else {
    uVar4 = *DAT_00021344;
    uVar2 = *DAT_00021338;
    DAT_00021338 = DAT_00021338 + 1;
    puVar3 = DAT_00021344 + 1;
    *DAT_00021344 = uVar4 + uVar2;
    uVar2 = uVar4 + uVar2 >> 1;
    DAT_00021344 = DAT_00021330;
    if ((puVar3 < puVar1) && (DAT_00021344 = puVar3, puVar1 <= DAT_00021338)) {
      DAT_00021338 = DAT_00021330;
    }
  }
  return uVar2;
}




void FUN_0000e660(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = DAT_0002133c;
  puVar1 = DAT_00021330;
  if (DAT_00021334 == 0) {
    *DAT_00021330 = param_1;
    return;
  }
  *DAT_00021330 = param_1;
  if (1 < iVar2) {
    piVar3 = puVar1 + 1;
    do {
      iVar5 = piVar3[-1] * 0x41a7 + (piVar3[-1] / 0x1f31d) * -0x7fffffff;
      if (iVar5 < 1) {
        iVar5 = iVar5 + 0x7fffffff;
      }
      piVar4 = piVar3 + 1;
      *piVar3 = iVar5;
      piVar3 = piVar4;
    } while (piVar4 != puVar1 + iVar2);
  }
  DAT_00021338 = puVar1;
  DAT_00021344 = puVar1 + DAT_00021340;
  if (iVar2 * 10 < 1) {
    return;
  }
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 1;
    FUN_0000e5a8();
  } while (iVar5 != iVar2 * 10);
  return;
}




int FUN_0000e72c(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (int)DAT_00021330;
  iVar2 = DAT_00021334;
  if (DAT_00021334 != 0) {
    iVar2 = DAT_00021334 + (DAT_00021338 - (int)DAT_00021330 >> 2) * 5;
  }
  *(int *)((int)DAT_00021330 + -4) = iVar2;
  if (param_3 < 8) {
    fprintf(stderr,"random: not enough state (%ld bytes); ignored.\n");
    return 0;
  }
  if (param_3 < 0x20) {
    DAT_00021330 = param_2 + 1;
    DAT_00021334 = 0;
    DAT_0002133c = 0;
    DAT_00021340 = 0;
    DAT_00021348 = DAT_00021330;
    FUN_0000e660();
    *param_2 = 0;
    return iVar1 + -4;
  }
  if (param_3 < 0x40) {
    DAT_0002133c = 7;
    iVar2 = 0x1c;
    iVar4 = 1;
    DAT_00021334 = 1;
    DAT_00021340 = 3;
  }
  else if (param_3 < 0x80) {
    iVar4 = 2;
    DAT_0002133c = 0xf;
    DAT_00021334 = 2;
    iVar2 = 0x3c;
    DAT_00021340 = 1;
  }
  else if (param_3 < 0x100) {
    iVar4 = 3;
    DAT_00021334 = 3;
    DAT_00021340 = 3;
    iVar2 = 0x7c;
    DAT_0002133c = 0x1f;
  }
  else {
    iVar4 = 4;
    DAT_0002133c = 0x3f;
    DAT_00021334 = 4;
    iVar2 = 0xfc;
    DAT_00021340 = 1;
  }
  piVar3 = param_2 + 1;
  DAT_00021348 = (int *)((int)piVar3 + iVar2);
  DAT_00021330 = piVar3;
  FUN_0000e660();
  *param_2 = (DAT_00021338 - (int)piVar3 >> 2) * 5 + iVar4;
  return iVar1 + -4;
}




undefined4 FUN_0000e994(void)

{
  return DAT_00023ff4;
}




undefined4 FUN_0000e9a4(void)

{
  return DAT_00023ff8;
}




/* WARNING: Removing unreachable block (ram,0x000167ac) */

void FUN_0000e9d4(int param_1)

{
  void *__s;
  int iVar1;
  
  iVar1 = 0;
  DAT_00023fe8 = 0;
  param_1 = param_1 + DAT_00024004;
  DAT_00023fec = 0;
  DAT_00023ffc = 0;
  DAT_00023ff4 = 0;
  DAT_00024000 = 0;
  DAT_00023ff8 = 0;
  DAT_00024004 = 0;
  if (param_1 < 1) {
    DAT_00024000 = 1;
  }
  else {
    do {
      iVar1 = iVar1 + 1;
      __s = (void *)FUN_0000d894(0x448);
      memset(__s,0,0x448);
      DAT_00023ff4 = DAT_00023ff4 + 1;
      *(void **)((int)__s + 4) = DAT_00023ff0;
      DAT_00023ffc = DAT_00023ffc + 1;
      DAT_00023ff0 = __s;
    } while (param_1 != iVar1);
    DAT_00024000 = DAT_00024000 + 1;
  }
  __cxa_atexit(&LAB_0000e884,0,DAT_000212cc);
  return;
}




void FUN_0000ea80(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x444) + -1;
    *(int *)(param_1 + 0x444) = iVar1;
    if (iVar1 != 0) {
      FUN_0000e15c(3,"******** freerecvbuff non-zero usage: %d *******");
    }
    iVar1 = param_1;
    *(int *)(param_1 + 4) = DAT_00023ff0;
    DAT_00023ff0 = iVar1;
    DAT_00023ff4 = DAT_00023ff4 + 1;
    return;
  }
  FUN_0000e15c(3,"freerecvbuff received NULL buffer");
  return;
}




void FUN_0000eaec(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  if (param_1 != (int *)0x0) {
    param_1[1] = -1;
    *param_1 = -1;
    iVar2 = (int)DAT_00023fec;
    bVar4 = DAT_00023fec != (int *)0x0;
    piVar3 = param_1;
    if (bVar4) {
      puVar1 = (undefined4 *)((int)DAT_00023fec + 4);
      DAT_00023fec = param_1;
      *puVar1 = param_1;
      piVar3 = DAT_00023fec;
    }
    DAT_00023fec = piVar3;
    *param_1 = iVar2;
    if (!bVar4) {
      DAT_00023fe8 = param_1;
    }
    param_1[1] = 0;
    DAT_00023ff8 = DAT_00023ff8 + 1;
    return;
  }
  FUN_0000e15c(3,"add_full_recv_buffer received NULL buffer");
  return;
}




void * FUN_0000eb48(void)

{
  void *__s;
  undefined4 uVar1;
  
  __s = DAT_00023ff0;
  if (DAT_00023ff0 != (void *)0x0) {
    uVar1 = *(undefined4 *)((int)DAT_00023ff0 + 4);
    *(undefined4 *)((int)DAT_00023ff0 + 4) = 0;
    DAT_00023ff4 = DAT_00023ff4 + -1;
    DAT_00023ff0 = (void *)uVar1;
    memset(__s,0,0x448);
    *(undefined4 *)((int)__s + 0x444) = 1;
    return __s;
  }
  DAT_00024004 = DAT_00024004 + 1;
  return (void *)0x0;
}




undefined4 * FUN_0000ebb0(void)

{
  undefined4 *puVar1;
  undefined4 in_r3;
  undefined4 *puVar2;
  
  puVar1 = DAT_00023fe8;
  if (DAT_00023fe8 != (undefined4 *)0x0) {
    if ((undefined4 *)DAT_00023fe8[1] == (undefined4 *)0x0) {
      if (DAT_00023fec != DAT_00023fe8) {
        (*DAT_00021dcc)("recvbuff.c",0xfa,2,"(full_recv_list).tail == (rbuf)",in_r3);
      }
      puVar2 = (undefined4 *)*puVar1;
      DAT_00023fec = puVar2;
    }
    else {
      *(undefined4 *)DAT_00023fe8[1] = *DAT_00023fe8;
      puVar2 = (undefined4 *)*puVar1;
    }
    if (puVar2 == (undefined4 *)0x0) {
      if (DAT_00023fe8 != puVar1) {
        (*DAT_00021dcc)("recvbuff.c",0xfa,2,"(full_recv_list).head == (rbuf)");
      }
      DAT_00023fe8 = (undefined4 *)puVar1[1];
    }
    else {
      puVar2[1] = puVar1[1];
    }
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    DAT_00023ff8 = DAT_00023ff8 + -1;
    return puVar1;
  }
  DAT_00023ff8 = 0;
  return (undefined4 *)0x0;
}




char * FUN_0000eca8(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *__dest;
  
  if (DAT_00023fd0 == 0) {
    FUN_0000dae4();
  }
  iVar2 = DAT_000241dc;
  iVar3 = DAT_000241dc + 1;
  iVar1 = DAT_000241dc + -0xc6;
  if (iVar3 < 200) {
    DAT_000241dc = iVar3;
  }
  __dest = &DAT_000241e0 + iVar2 * 0x50;
  if (iVar3 != 199 && iVar1 < 0 == SBORROW4(iVar3,199)) {
    DAT_000241dc = 0;
  }
  memset(__dest,0,0x50);
  if (param_1 == (ushort *)0x0) {
    strncpy(__dest,"(null)",0x50);
  }
  else {
    uVar4 = (uint)*param_1;
    if (uVar4 != 2) {
      if (uVar4 == 10) {
        inet_ntop(10,param_1 + 4,__dest,0x50);
        return __dest;
      }
      if (uVar4 != 0) {
        snprintf(__dest,0x50,"(socktoa unknown family %d)",uVar4,param_4);
        return __dest;
      }
    }
    inet_ntop(2,param_1 + 2,__dest,0x50);
  }
  return __dest;
}




char * FUN_0000ed9c(sockaddr *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  socklen_t __salen;
  char *pcVar4;
  
  if (DAT_00023fd0 == 0) {
    FUN_0000dae4();
  }
  iVar1 = DAT_000241dc;
  iVar3 = DAT_000241dc + 1;
  iVar2 = DAT_000241dc + -0xc6;
  if (iVar3 < 200) {
    DAT_000241dc = iVar3;
  }
  pcVar4 = &DAT_000241e0 + iVar1 * 0x50;
  if (iVar3 != 199 && iVar2 < 0 == SBORROW4(iVar3,199)) {
    DAT_000241dc = 0;
  }
  memset(pcVar4,0,0x50);
  if (param_1->sa_family == 2) {
    __salen = 0x10;
  }
  else {
    __salen = 0x1c;
  }
  iVar2 = getnameinfo(param_1,__salen,pcVar4,0x50,(char *)0x0,0,0);
  if (iVar2 != 0) {
    pcVar4 = (char *)FUN_0000eca8(param_1);
    return pcVar4;
  }
  return pcVar4;
}




void FUN_0000ee58(int param_1,_union_1051 param_2)

{
  int iVar1;
  int *piVar2;
  _union_1051 local_130;
  sigset_t sStack_12c;
  undefined4 local_ac;
  sigaction sStack_a4;
  
  local_130 = param_2;
  sigemptyset(&sStack_12c);
  if (param_1 == 0x1d) {
    local_ac = 0x10000000;
  }
  else {
    local_ac = 0;
  }
  do {
    iVar1 = sigaction(param_1,(sigaction *)&local_130,&sStack_a4);
    if (iVar1 != -1) break;
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  if ((sStack_a4.sa_flags & 0xefffffffU) != 0) {
    FUN_0000e15c(7,"signal_no_reset: signal %d had flags %x",param_1);
  }
  if (iVar1 == -1) {
    perror("sigaction");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}




void FUN_0000ef08(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  FILE *__stream;
  undefined4 uVar1;
  undefined *puVar2;
  
  __stream = stderr;
  if (param_3 < 4) {
    puVar2 = (&PTR_s_REQUIRE_000176ac)[param_3];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  uVar1 = FUN_0000f118(DAT_0002400c,1,0x65,"failed");
  fprintf(__stream,"%s:%d: %s(%s) %s.\n",param_1,param_2,puVar2,param_4,uVar1);
  fflush(stderr);
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_0000efc4(void)

{
  if (DAT_00024008 != 0) {
    return;
  }
  FUN_0000eff8("libisc.cat",&DAT_0002400c);
  DAT_00024008 = 1;
  return;
}




void FUN_0000eff8(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    (*DAT_00021dcc)("./../lib/isc/nls/msgcat.c",0x40,0,"name != ((void *)0)");
  }
  if ((param_2 == (int *)0x0) || (*param_2 != 0)) {
    (*DAT_00021dcc)("./../lib/isc/nls/msgcat.c",0x41,0,"msgcatp != ((void *)0) && *msgcatp == ((void *)0)");
  }
  puVar1 = (undefined4 *)malloc(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x4d436174;
  }
  *param_2 = (int)puVar1;
  return;
}




void FUN_0000f084(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *__ptr;
  
  if (param_1 == (undefined4 *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/nls/msgcat.c",0x5e,0,"msgcatp != ((void *)0)",param_4);
  }
  __ptr = (int *)*param_1;
  if (__ptr != (int *)0x0) {
    if (*__ptr != 0x4d436174) {
      (*DAT_00021dcc)("./../lib/isc/nls/msgcat.c",0x60,0,
                      "(((msgcat) != ((void *)0)) && (((const isc__magic_t *)(msgcat))->magic == (((\'M\') << 24 | (\'C\') << 16 | (\'a\') << 8 | (\'t\'))))) || msgcat == ((void *)0)"
                     );
    }
    *__ptr = 0;
    free(__ptr);
  }
  *param_1 = 0;
  return;
}




int FUN_0000f118(int *param_1,int param_2,int param_3,int param_4)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0x4d436174)) {
    (*DAT_00021dcc)("./../lib/isc/nls/msgcat.c",0x77,0,
                    "(((msgcat) != ((void *)0)) && (((const isc__magic_t *)(msgcat))->magic == (((\'M\') << 24 | (\'C\') << 16 | (\'a\') << 8 | (\'t\'))))) || msgcat == ((void *)0)"
                   );
  }
  if (param_2 < 1) {
    (*DAT_00021dcc)("./../lib/isc/nls/msgcat.c",0x78,0,"set > 0");
  }
  if (param_3 < 1) {
    (*DAT_00021dcc)("./../lib/isc/nls/msgcat.c",0x79,0,"message > 0");
  }
  if (param_4 == 0) {
    (*DAT_00021dcc)("./../lib/isc/nls/msgcat.c",0x7a,0,"default_text != ((void *)0)");
    return 0;
  }
  return param_4;
}




undefined4 FUN_0000f204(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  socklen_t local_b0;
  sockaddr sStack_ac;
  undefined1 auStack_90 [128];
  
  iVar1 = socket(param_1,1,0);
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    if (((iVar1 != 0x5d) && (iVar1 != 0x61)) && (iVar1 != 0x16)) {
      FUN_0000f7ac(iVar1,auStack_90,0x80);
      uVar5 = FUN_0000f118(DAT_0002400c,1,0x65,"failed");
      FUN_0000ff48("./../lib/isc/unix/net.c",0x8f,"socket() %s: %s",uVar5,auStack_90);
      return 0x22;
    }
    return 0x17;
  }
  if (param_1 == 10) {
    local_b0 = 0x1c;
    iVar3 = getsockname(iVar1,&sStack_ac,&local_b0);
    if (iVar3 < 0) {
      pcVar4 = "retrieving the address of an IPv6 socket from the kernel failed.";
    }
    else {
      if (local_b0 == 0x1c) goto LAB_0000f230;
      pcVar4 = "IPv6 structures in kernel and user space do not match.";
    }
    uVar5 = 0x17;
    FUN_000122cc(DAT_00024034,&DAT_00021df0,&DAT_00021e00,0xfffffffc,pcVar4);
    FUN_000122cc(DAT_00024034,&DAT_00021df0,&DAT_00021e00,0xfffffffc,"IPv6 is not supported.");
  }
  else {
LAB_0000f230:
    uVar5 = 0;
  }
  close(iVar1);
  return uVar5;
}




void FUN_0000f35c(void)

{
  if (DAT_00024010 != 0) {
    return;
  }
  DAT_00021dd0 = FUN_0000f204(2);
  DAT_00021dd4 = FUN_0000f204(10);
  DAT_00024010 = 1;
  return;
}




undefined4 FUN_0000f3a0(void)

{
  FUN_0000f35c();
  return DAT_00021dd0;
}




undefined4 FUN_0000f3b8(void)

{
  FUN_0000f35c();
  return DAT_00021dd4;
}




undefined4 FUN_0000f3d0(void)

{
  FUN_0000f35c();
  return 0x17;
}




int FUN_0000f3e0(void)

{
  int __fd;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_a4;
  undefined1 auStack_a0 [128];
  
  if (DAT_00024014 != 0) {
    return DAT_00021dd8;
  }
  FUN_0000f35c();
  if (DAT_00021dd4 != 0) {
    DAT_00021dd8 = DAT_00021dd4;
    DAT_00024014 = 1;
    return DAT_00021dd4;
  }
  __fd = socket(10,1,0);
  if (__fd == -1) {
    piVar2 = __errno_location();
    FUN_0000f7ac(*piVar2,auStack_a0,0x80);
    uVar3 = FUN_0000f118(DAT_0002400c,1,0x65,"failed");
    uVar4 = 0x109;
LAB_0000f524:
    FUN_0000ff48("./../lib/isc/unix/net.c",uVar4,"socket() %s: %s",uVar3,auStack_a0);
    DAT_00021dd8 = 0x22;
  }
  else {
    local_a4 = 1;
    iVar1 = setsockopt(__fd,0x29,0x1a,&local_a4,4);
    if (iVar1 < 0) {
LAB_0000f4cc:
      DAT_00021dd8 = 0x17;
    }
    else {
      close(__fd);
      __fd = socket(10,2,0);
      if (__fd == -1) {
        piVar2 = __errno_location();
        FUN_0000f7ac(*piVar2,auStack_a0,0x80);
        uVar3 = FUN_0000f118(DAT_0002400c,1,0x65,"failed");
        uVar4 = 0x120;
        goto LAB_0000f524;
      }
      local_a4 = 1;
      iVar1 = setsockopt(__fd,0x29,0x1a,&local_a4,4);
      if (iVar1 < 0) goto LAB_0000f4cc;
      close(__fd);
      DAT_00021dd8 = 0;
    }
    close(__fd);
  }
  DAT_00024014 = 1;
  return DAT_00021dd8;
}




int FUN_0000f598(void)

{
  int __fd;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_9c;
  undefined1 auStack_98 [132];
  
  if (DAT_00024018 == 0) {
    FUN_0000f35c();
    if (DAT_00021dd4 == 0) {
      __fd = socket(10,2,0x11);
      if (__fd == -1) {
        piVar2 = __errno_location();
        FUN_0000f7ac(*piVar2,auStack_98,0x80);
        uVar3 = FUN_0000f118(DAT_0002400c,1,0x65,"failed");
        FUN_0000ff48("./../lib/isc/unix/net.c",0x153,"socket() %s: %s",uVar3,auStack_98);
        DAT_00021ddc = 0x22;
      }
      else {
        local_9c = 1;
        iVar1 = setsockopt(__fd,0x29,0x31,&local_9c,4);
        if (iVar1 < 0) {
          DAT_00021ddc = 0x17;
        }
        else {
          close(__fd);
          DAT_00021ddc = 0;
        }
        close(__fd);
      }
    }
    else {
      DAT_00021ddc = DAT_00021dd4;
    }
    DAT_00024018 = 1;
  }
  return DAT_00021ddc;
}




void FUN_0000f7ac(char *param_1,char *param_2,size_t param_3,undefined4 param_4)

{
  char *pcVar1;
  char *__format;
  bool bVar2;
  
  if (param_2 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/strerror.c",0x37,0,"buf != ((void *)0)");
  }
  if (DAT_0002401c == 0) {
    DAT_0002401c = 1;
    DAT_00024020 = 1;
  }
  else {
    bVar2 = DAT_00024020 != 0;
    DAT_00024020 = DAT_00024020 + 1;
    if (bVar2) {
      FUN_0000ffb4("./../lib/isc/unix/strerror.c",0x3b,"((*((&isc_strerror_lock)))++ == 0 ? 0 : 34) == 0");
    }
  }
  pcVar1 = strerror((int)param_1);
  if (pcVar1 == (char *)0x0) {
    __format = "Unknown error: %u";
  }
  else {
    __format = "%s";
    param_1 = pcVar1;
  }
  snprintf(param_2,param_3,__format,param_1);
  DAT_00024020 = DAT_00024020 + -1;
  if (DAT_00024020 != 0) {
    FUN_0000ffb4("./../lib/isc/unix/strerror.c",0x41,"(--(*((&isc_strerror_lock))) == 0 ? 0 : 34) == 0",param_4);
    return;
  }
  return;
}




int FUN_0000f90c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [92];
  
  FUN_00013354(auStack_70);
  FUN_0001339c(auStack_70,param_2,DAT_00024098);
  FUN_0001339c(auStack_70,param_3,param_4);
  FUN_000134b0(auStack_70,auStack_b0);
  if (param_5 == 0x14) {
    uVar1 = memcmp(auStack_b0,(void *)(param_3 + param_4 + 4),0x10);
    iVar2 = 1 - uVar1;
    if (1 < uVar1) {
      iVar2 = 0;
    }
  }
  else {
    FUN_0000e15c(3,"MAC decrypt: MAC length error");
    iVar2 = 0;
  }
  return iVar2;
}




undefined4 FUN_0000f9a4(short *param_1)

{
  undefined4 local_74 [5];
  undefined1 auStack_60 [88];
  
  if (*param_1 == 2) {
    local_74[0] = *(undefined4 *)(param_1 + 2);
  }
  else {
    FUN_00013354(auStack_60);
    FUN_0001339c(auStack_60,param_1 + 4,0x10);
    FUN_000134b0(auStack_60,local_74);
  }
  return local_74[0];
}




char * FUN_0000f9f4(uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *extraout_r2;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  char *__s;
  bool bVar14;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  byte abStack_27 [3];
  
  local_44 = param_3;
  if (DAT_00023fd0 == 0) {
    FUN_0000dae4();
  }
  iVar2 = DAT_000241dc;
  iVar5 = DAT_000241dc + 1;
  if (199 < iVar5) {
    iVar5 = 0;
  }
  iVar1 = DAT_000241dc * 0x50;
  __s = &DAT_000241e0 + iVar1;
  DAT_000241dc = iVar5;
  memset(__s,0,0x50);
  bVar14 = param_1 >> 0x10 == 0;
  pbVar6 = extraout_r2;
  if (bVar14) {
    pbVar6 = (byte *)((int)&local_38 + 2);
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  if (!bVar14) {
    uVar10 = param_1 / 10;
    local_38 = (uint)(byte)((char)param_1 - ((char)(uVar10 << 3) + (char)uVar10 * '\x02')) << 8;
    uVar12 = param_1 / 0xa0000;
    pbVar6 = (byte *)((int)&local_38 + 1);
    param_1 = uVar10;
    pbVar4 = (byte *)&local_38;
    while (uVar12 != 0) {
      uVar10 = param_1 / 10;
      if (pbVar4 == (byte *)((int)&local_44 + 2)) goto LAB_0000fcc8;
      *pbVar4 = (char)param_1 - ((char)(uVar10 << 1) + (char)uVar10 * '\b');
      uVar12 = param_1 / 0xa0000;
      pbVar6 = pbVar4;
      param_1 = uVar10;
      pbVar4 = pbVar4 + -1;
    }
  }
  if (param_1 != 0) {
    pbVar4 = pbVar6;
    uVar10 = param_1 & 0xffff;
    do {
      uVar12 = uVar10 / 10;
      if (pbVar4 < &local_40) goto LAB_0000fcc8;
      pbVar6 = pbVar4 + -1;
      pbVar4[-1] = (char)uVar10 + (char)uVar12 * -10;
      pbVar4 = pbVar6;
      uVar10 = uVar12;
    } while (uVar12 != 0);
  }
  if (param_5 == 0) {
    if (-1 < param_4) {
      pbVar4 = (byte *)((int)&local_38 + 2);
      goto LAB_0000fc20;
    }
    pbVar4 = (byte *)((int)&local_38 + 2);
    param_4 = 0;
LAB_0000fb5c:
    if (param_2 != 0) {
      if (param_4 == 0) {
        pbVar13 = (byte *)((int)&local_38 + 2);
      }
      else {
LAB_0000fc44:
        pbVar7 = (byte *)((int)&local_38 + 2);
        do {
          uVar10 = param_2 << 1;
          param_4 = param_4 + -1;
          uVar12 = ((int)param_2 >> 0x1f) * -2;
          if ((int)uVar10 < 0) {
            uVar12 = uVar12 | 1;
          }
          bVar11 = (byte)(uVar12 << 1);
          uVar12 = (uVar10 >> 0x10) + ((param_2 << 3) >> 0x10);
          uVar10 = (param_2 << 3 & 0xffff) + (uVar10 & 0xffff);
          if ((int)(param_2 << 2) < 0) {
            bVar11 = bVar11 | 1;
          }
          bVar11 = bVar11 - (char)((int)param_2 >> 0x1f);
          if ((uVar10 & 0x10000) != 0) {
            uVar12 = uVar12 + 1;
          }
          param_2 = uVar10 & 0xffff | uVar12 << 0x10;
          if ((uVar12 & 0x10000) != 0) {
            bVar11 = bVar11 + 1;
          }
          pbVar13 = pbVar7 + 1;
          *pbVar7 = bVar11;
          if (param_2 == 0) {
            pbVar13 = pbVar13 + param_4;
            goto LAB_0000fb70;
          }
          if (pbVar13 == abStack_27) {
LAB_0000fcc8:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pbVar7 = pbVar13;
        } while (param_4 != 0);
      }
      if ((int)param_2 < 0) {
        bVar11 = pbVar13[-1];
        pbVar7 = pbVar13 + -1;
        pbVar13[-1] = bVar11 + 1;
        if (9 < (byte)(bVar11 + 1)) {
          pbVar3 = pbVar13 + -2;
          do {
            pbVar7 = pbVar3;
            bVar11 = *pbVar7;
            pbVar7[1] = 0;
            *pbVar7 = bVar11 + 1;
            pbVar3 = pbVar7 + -1;
          } while (9 < (byte)(bVar11 + 1));
        }
        if (pbVar7 <= pbVar6) {
          pbVar6 = pbVar7;
        }
      }
      goto LAB_0000fb70;
    }
  }
  else {
    param_4 = param_4 + 3;
    pbVar4 = (byte *)((int)&local_34 + 1);
    if (param_4 < 3) {
      param_4 = 3;
      goto LAB_0000fb5c;
    }
LAB_0000fc20:
    if (param_4 < 0xd) goto LAB_0000fb5c;
    param_4 = 0xc;
    if (param_2 != 0) goto LAB_0000fc44;
  }
  pbVar13 = (byte *)((int)&local_38 + param_4 + 2);
LAB_0000fb70:
  if (pbVar6 < pbVar4) {
    bVar11 = *pbVar6;
    while ((bVar11 == 0 && (pbVar6 = pbVar6 + 1, pbVar6 != pbVar4))) {
      bVar11 = *pbVar6;
    }
  }
  if (pbVar6 == pbVar4) {
    pbVar6 = pbVar6 + -1;
  }
  pcVar9 = __s;
  if (local_44 != 0) {
    (&DAT_000241e0)[iVar2 * 0x50] = 0x2d;
    pcVar9 = &DAT_000241e1 + iVar1;
  }
  if (pbVar6 < pbVar13) {
    do {
      pbVar7 = pbVar6 + 1;
      bVar11 = *pbVar6;
      pcVar8 = pcVar9;
      if (pbVar6 == pbVar4) {
        pcVar8 = pcVar9 + 1;
        *pcVar9 = '.';
      }
      pcVar9 = pcVar8 + 1;
      *pcVar8 = bVar11 + 0x30;
      pbVar6 = pbVar7;
    } while (pbVar7 != pbVar13);
  }
  *pcVar9 = '\0';
  return __s;
}




char * FUN_0000fd48(void)

{
  int iVar1;
  int iVar2;
  tm *ptVar3;
  int iVar4;
  char *__s;
  time_t local_14 [2];
  
  local_14[0] = time((time_t *)0x0);
  ptVar3 = localtime(local_14);
  if (ptVar3 == (tm *)0x0) {
    __s = "-- --- --:--:--";
  }
  else {
    if (DAT_00023fd0 == 0) {
      FUN_0000dae4();
    }
    iVar2 = DAT_000241dc;
    iVar4 = DAT_000241dc + 1;
    iVar1 = DAT_000241dc + -0xc6;
    if (iVar4 < 200) {
      DAT_000241dc = iVar4;
    }
    __s = &DAT_000241e0 + iVar2 * 0x50;
    if (iVar4 != 199 && iVar1 < 0 == SBORROW4(iVar4,199)) {
      DAT_000241dc = 0;
    }
    memset(__s,0,0x50);
    snprintf(__s,0x50,"%2d %s %02d:%02d:%02d",ptVar3->tm_mday,(&PTR_DAT_00021300)[ptVar3->tm_mon],ptVar3->tm_hour,
             ptVar3->tm_min,ptVar3->tm_sec);
  }
  return __s;
}




void FUN_0000fe28(undefined4 param_1,undefined4 param_2,char *param_3,__gnuc_va_list param_4)

{
  FILE *__stream;
  undefined4 uVar1;
  
  __stream = stderr;
  uVar1 = FUN_0000f118(DAT_0002400c,1,0x6e,"fatal error");
  fprintf(__stream,"%s:%d: %s: ",param_1,param_2,uVar1);
  vfprintf(stderr,param_3,param_4);
  fputc(10,stderr);
  fflush(stderr);
  return;
}




void FUN_0000feb4(undefined4 param_1,undefined4 param_2,char *param_3,__gnuc_va_list param_4)

{
  fprintf(stderr,"%s:%d: ",param_1,param_2);
  vfprintf(stderr,param_3,param_4);
  fputc(10,stderr);
  fflush(stderr);
  return;
}




void FUN_0000ff48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  (*DAT_00021de0)(param_1,param_2,param_3,&uStack_4);
  return;
}




void FUN_0000ff84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  (*DAT_00021de4)(param_1,param_2,param_3,&uStack_4);
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_0000ffb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0000f118(DAT_0002400c,1,0x65,"failed");
                    /* WARNING: Subroutine does not return */
  FUN_0000ff84(param_1,param_2,"RUNTIME_CHECK(%s) %s",param_3,uVar1);
}




int FUN_00010004(int param_1)

{
  char *pcVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  char *pcVar9;
  char *__s;
  char *pcStack_2034;
  char acStack_2030 [4100];
  char acStack_102c [1028];
  char acStack_c28 [256];
  uint local_b28;
  
  if (*(int *)(param_1 + 0x18) != -2) {
    pcVar9 = *(char **)(param_1 + 0x14);
    __s = pcVar9;
    if (*(int *)(param_1 + 4) != 3) {
      (*DAT_00021dcc)("./../lib/isc/log.c",0x484,0,"channel->type == 3");
      __s = *(char **)(param_1 + 0x14);
    }
    pcVar1 = strrchr(__s,0x2f);
    if (pcVar1 == (char *)0x0) {
      puVar8 = &DAT_00017a78;
    }
    else {
      __s = pcVar1 + 1;
      *pcVar1 = '\0';
      puVar8 = *(undefined **)(param_1 + 0x14);
    }
    __n = strlen(__s);
    FUN_000147bc(acStack_102c);
    iVar2 = FUN_00014814(acStack_102c,puVar8);
    if (__s != *(char **)(param_1 + 0x14)) {
      __s[-1] = '/';
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = -1;
    while( true ) {
      iVar3 = FUN_00014920(acStack_102c);
      if (iVar3 != 0) break;
      if ((((__n < local_b28) && (iVar3 = strncmp(acStack_c28,__s,__n), iVar3 == 0)) && (acStack_c28[__n] == '.')) &&
         ((lVar4 = strtol(acStack_c28 + __n + 1,&pcStack_2034,10), *pcStack_2034 == '\0' && (iVar2 < lVar4)))) {
        iVar2 = lVar4;
      }
    }
    iVar2 = iVar2 + 1;
    FUN_000149d0(acStack_102c);
    iVar3 = *(int *)(param_1 + 0x18);
    if ((iVar3 != -1) && (iVar3 <= iVar2)) {
      while (iVar2 = iVar2 + -1, iVar3 <= iVar2) {
        uVar5 = snprintf(acStack_2030,0x1001,"%s.%d",pcVar9,iVar2);
        iVar3 = 0x13;
        if ((0x1000 < uVar5) || (iVar3 = FUN_0001568c(acStack_2030), iVar3 != 0x26 && iVar3 != 0)) {
          uVar6 = FUN_000137a4(iVar3);
          syslog(3,"unable to remove log file \'%s.%d\': %s",pcVar9,iVar2,uVar6);
        }
        iVar3 = *(int *)(param_1 + 0x18);
      }
    }
    if (0 < iVar2) {
      do {
        iVar3 = iVar2 + -1;
        uVar5 = snprintf(acStack_2030,0x1001,"%s.%d",pcVar9,iVar3);
        if (uVar5 < 0x1001) {
          uVar5 = snprintf(acStack_102c,0x1001,"%s.%d",pcVar9,iVar2);
          if (0x1000 < uVar5) goto LAB_00010294;
          iVar7 = FUN_000156e4(acStack_2030,acStack_102c);
          if (iVar7 != 0x26 && iVar7 != 0) goto LAB_00010298;
        }
        else {
LAB_00010294:
          iVar7 = 0x13;
LAB_00010298:
          uVar6 = FUN_000137a4(iVar7);
          syslog(3,"unable to rename log file \'%s.%d\' to \'%s.%d\': %s",pcVar9,iVar3,pcVar9,iVar2,uVar6);
        }
        iVar2 = iVar3;
      } while (iVar3 != 0);
      iVar3 = *(int *)(param_1 + 0x18);
    }
    if (iVar3 != 0) {
      uVar5 = snprintf(acStack_102c,0x1001,"%s.0",pcVar9);
      if (uVar5 < 0x1001) {
        iVar2 = FUN_000156e4(pcVar9,acStack_102c);
        if (iVar2 == 0x26 || iVar2 == 0) {
          return 0;
        }
      }
      else {
        iVar2 = 0x13;
      }
      uVar6 = FUN_000137a4(iVar2);
      syslog(3,"unable to rename log file \'%s\' to \'%s.0\': %s",pcVar9,pcVar9,uVar6);
      return 0;
    }
    iVar2 = FUN_0001568c(pcVar9);
    if (iVar2 != 0x26 && iVar2 != 0) {
      uVar6 = FUN_000137a4();
      syslog(3,"unable to remove log file \'%s\': %s",pcVar9,uVar6);
      return 0;
    }
  }
  return 0;
}




void FUN_00010390(int *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,char *param_9,__gnuc_va_list param_10)

{
  uint uVar1;
  FILE *__stream;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *local_14c;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  char local_130 [24];
  char local_118 [64];
  stat sStack_d8;
  stat sStack_80;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x58d,0,
                    "lctx == ((void *)0) || (((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                   );
  }
  if (param_2 == (undefined4 *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x58e,0,"category != ((void *)0)");
  }
  if (param_3 == (undefined4 *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x58f,0,"module != ((void *)0)");
  }
  if (param_4 == 0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x590,0,"level != 0");
  }
  if (param_9 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x591,0,"format != ((void *)0)");
  }
  if (param_1 != (int *)0x0) {
    if ((uint)param_1[3] <= (uint)param_2[1]) {
      (*DAT_00021dcc)("./../lib/isc/log.c",0x59b,0,"category->id < lctx->category_count");
    }
    if ((uint)param_1[5] <= (uint)param_3[1]) {
      (*DAT_00021dcc)("./../lib/isc/log.c",0x59c,0,"module->id < lctx->module_count");
    }
    iVar12 = param_1[8];
    if ((iVar12 != 0) &&
       ((param_4 <= *(int *)(iVar12 + 0x1c) || ((*(int *)(iVar12 + 0x24) != 0 && (param_4 <= param_1[6])))))) {
      if (param_6 != 0) {
        param_9 = (char *)FUN_0000f118(param_6,param_7,param_8,param_9);
      }
      iVar12 = param_1[7];
      local_118[0] = '\0';
      local_130[0] = '\0';
      param_1[7] = iVar12 + 1;
      if (iVar12 != 0) {
        FUN_0000ffb4("./../lib/isc/log.c",0x5a9,"((*((&lctx->lock)))++ == 0 ? 0 : 34) == 0");
      }
      iVar12 = param_1[8];
      uVar6 = 0;
      *(undefined1 *)(param_1 + 9) = 0;
      puVar19 = *(undefined4 **)(*(int *)(iVar12 + 0x10) + param_2[1] * 8);
      uVar13 = (uint)(puVar19 == (undefined4 *)0x0);
      do {
        while( true ) {
          if ((uVar13 & (uVar6 ^ 1)) != 0) {
            puVar19 = (undefined4 *)**(undefined4 **)(iVar12 + 0x10);
            if ((undefined4 *)**(undefined4 **)(iVar12 + 0x10) == (undefined4 *)0x0) {
              puVar19 = &DAT_00024024;
            }
          }
          if (((undefined4 *)*puVar19 != (undefined4 *)0x0) && (param_3 != (undefined4 *)*puVar19)) break;
          iVar15 = puVar19[1];
          puVar19 = (undefined4 *)puVar19[3];
          uVar13 = *(uint *)(iVar15 + 0xc);
          if (((uVar13 & 0x1000) == 0) || (param_1[6] != 0)) {
            iVar9 = *(int *)(iVar15 + 8);
            if (iVar9 == 0) {
              iVar9 = param_1[6];
            }
            if (param_4 <= iVar9) {
              if (((uVar13 & 1) != 0) && (local_118[0] == '\0')) {
                iVar9 = FUN_00013cb8(auStack_140);
                if (iVar9 != 0) {
                  FUN_0000ffb4("./../lib/isc/log.c",0x5e8,"isc_time_now((&isctime)) == 0");
                }
                FUN_0001452c(auStack_140,local_118,0x40);
                uVar13 = *(uint *)(iVar15 + 0xc);
              }
              if (((uVar13 & 2) != 0) && (local_130[0] == '\0')) {
                if (param_4 + 5 < 0 == SCARRY4(param_4,5)) {
                  if (param_4 < 1) {
                    snprintf(local_130,0x18,"%s: ",(&PTR_s_debug_00017a48)[-param_4]);
                  }
                  else {
                    snprintf(local_130,0x18,"%s %d: ","debug",param_4);
                  }
                }
                else {
                  pcVar10 = (char *)FUN_0000f118(DAT_0002400c,10,0x322,"level %d: ");
                  snprintf(local_130,0x18,pcVar10,param_4);
                }
              }
              if ((char)param_1[9] == '\0') {
                piVar5 = param_1 + 9;
                vsnprintf((char *)piVar5,0x2000,param_9,param_10);
                if (param_5 != 0) {
                  FUN_00013a50(auStack_138,*(undefined4 *)(iVar12 + 0x18),0);
                  iVar9 = FUN_00013cb8(auStack_140);
                  if (iVar9 != 0) {
                    FUN_0000ffb4("./../lib/isc/log.c",0x616,"isc_time_now((&oldest)) == 0");
                  }
                  iVar9 = FUN_000141b8(auStack_140,auStack_138,auStack_140);
                  if (iVar9 == 0) {
                    puVar4 = (undefined4 *)param_1[0x809];
                    while (puVar4 != (undefined4 *)0x0) {
                      iVar9 = FUN_00013fc4(puVar4 + 1,auStack_140);
                      if (iVar9 < 0) {
                        puVar20 = (undefined4 *)puVar4[4];
                        if (puVar20 == (undefined4 *)0x0) {
                          if ((undefined4 *)param_1[0x80a] != puVar4) {
                            (*DAT_00021dcc)("./../lib/isc/log.c",0x634,2,"(lctx->messages).tail == (message)");
                          }
                          iVar9 = puVar4[3];
                          param_1[0x80a] = iVar9;
                        }
                        else {
                          puVar20[3] = puVar4[3];
                          iVar9 = puVar4[3];
                        }
                        if (iVar9 == 0) {
                          if ((undefined4 *)param_1[0x809] != puVar4) {
                            (*DAT_00021dcc)("./../lib/isc/log.c",0x634,2,"(lctx->messages).head == (message)");
                          }
                          param_1[0x809] = puVar4[4];
                        }
                        else {
                          *(undefined4 *)(iVar9 + 0x10) = puVar4[4];
                        }
                        puVar4[3] = 0xffffffff;
                        puVar4[4] = 0xffffffff;
                        free(puVar4);
                        puVar4 = puVar20;
                      }
                      else {
                        iVar9 = strcmp((char *)piVar5,(char *)*puVar4);
                        if (iVar9 == 0) {
                          iVar12 = param_1[7];
                          param_1[7] = iVar12 + -1;
                          if (iVar12 + -1 == 0) {
                            return;
                          }
                          FUN_0000ffb4("./../lib/isc/log.c",0x64a,"(--(*((&lctx->lock))) == 0 ? 0 : 34) == 0");
                          return;
                        }
                        puVar4 = (undefined4 *)puVar4[4];
                      }
                    }
                  }
                  sVar3 = strlen((char *)piVar5);
                  puVar4 = (undefined4 *)FUN_0000d894(sVar3 + 0x15);
                  if (puVar4 != (undefined4 *)0x0) {
                    *puVar4 = puVar4 + 5;
                    strcpy((char *)(puVar4 + 5),(char *)piVar5);
                    iVar9 = FUN_00013cb8(puVar4 + 1);
                    if (iVar9 != 0) {
                      FUN_0000ffb4("./../lib/isc/log.c",0x660,"isc_time_now((&new->time)) == 0");
                    }
                    iVar9 = param_1[0x80a];
                    if (iVar9 == 0) {
                      param_1[0x809] = (int)puVar4;
                    }
                    else {
                      *(undefined4 **)(iVar9 + 0x10) = puVar4;
                    }
                    puVar4[3] = iVar9;
                    puVar4[4] = 0;
                    param_1[0x80a] = (int)puVar4;
                  }
                }
              }
              uVar13 = *(uint *)(iVar15 + 0xc);
              uVar18 = uVar13 & 0x10;
              uVar6 = uVar13 & 1;
              if ((uVar18 != 0) && (uVar18 = *(uint *)(iVar12 + 0x20), uVar18 != 0)) {
                uVar18 = 1;
              }
              iVar9 = *(int *)(iVar15 + 4);
              if (iVar9 == 3) {
                if (*(int *)(iVar15 + 0x20) == 0) {
                  __stream = *(FILE **)(iVar15 + 0x10);
                  if (__stream != (FILE *)0x0) goto LAB_00010878;
                }
                else {
                  if ((*(int *)(iVar15 + 0x18) == -2) &&
                     (((iVar9 = __xstat(3,*(char **)(iVar15 + 0x14),&sStack_d8), iVar9 == 0 ||
                       (piVar5 = __errno_location(), *piVar5 != 2)) && (*(int *)(iVar15 + 0x1c) <= sStack_d8.st_size))))
                  goto LAB_0001060c;
                  fclose(*(FILE **)(iVar15 + 0x10));
                  *(undefined4 *)(iVar15 + 0x10) = 0;
                  *(undefined4 *)(iVar15 + 0x20) = 0;
                  if ((*(int *)(iVar15 + 4) != 3) &&
                     ((*DAT_00021dcc)("./../lib/isc/log.c",0x52d,0,"channel->type == 3"), *(int *)(iVar15 + 0x10) != 0))
                  {
                    (*DAT_00021dcc)("./../lib/isc/log.c",0x52e,0,"(channel->destination.file.stream) == ((void *)0)");
                  }
                }
                pcVar10 = *(char **)(iVar15 + 0x14);
                if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
                  (*DAT_00021dcc)("./../lib/isc/log.c",0x532,0,"path != ((void *)0) && *path != \'\\0\'");
                }
                iVar9 = __xstat(3,pcVar10,&sStack_80);
                if (iVar9 == 0) {
                  iVar9 = *(int *)(iVar15 + 0x1c);
                  if (iVar9 != 0) {
                    if ((0 < iVar9) && (iVar9 <= sStack_80.st_size)) goto LAB_00010a88;
                    goto LAB_00010df0;
                  }
                  if (*(int *)(iVar15 + 0x18) == -2) goto LAB_00010df0;
LAB_00010a88:
                  if ((sStack_80.st_mode & 0xf000) != 0x8000) goto LAB_00010df0;
                  if (*(int *)(iVar15 + 0x18) == -2) goto LAB_0001060c;
                  iVar9 = FUN_00010004(iVar15);
                  if (iVar9 == 0) goto LAB_00010df0;
                  uVar13 = *(uint *)(iVar15 + 0xc);
                  if ((uVar13 & 0x8000) == 0) {
                    uVar17 = *(undefined4 *)(iVar15 + 0x14);
                    uVar2 = FUN_000137a4();
                    syslog(3,"isc_log_open: roll_log \'%s\' failed: %s",uVar17,uVar2);
                    uVar13 = *(uint *)(iVar15 + 0xc) | 0x8000;
                    *(uint *)(iVar15 + 0xc) = uVar13;
                  }
                  if (iVar9 == 0x3a) goto LAB_0001060c;
                }
                else {
LAB_00010df0:
                  iVar9 = FUN_000138cc(pcVar10,&DAT_00017e30,iVar15 + 0x10);
                  iVar14 = iVar9;
                  if (iVar9 != 0) {
                    iVar14 = 1;
                  }
                  if (iVar9 == 0x3a || iVar9 == 0) {
                    if (iVar14 != 0) goto LAB_0001060c;
                    __stream = *(FILE **)(iVar15 + 0x10);
                    *(uint *)(iVar15 + 0xc) = *(uint *)(iVar15 + 0xc) & 0xffff7fff;
                    goto LAB_00010878;
                  }
                  uVar13 = *(uint *)(iVar15 + 0xc);
                }
                if ((uVar13 & 0x8000) == 0) {
                  uVar17 = *(undefined4 *)(iVar15 + 0x14);
                  uVar2 = FUN_000137a4(iVar9);
                  syslog(3,"isc_log_open \'%s\' failed: %s",uVar17,uVar2);
                  *(uint *)(iVar15 + 0xc) = *(uint *)(iVar15 + 0xc) | 0x8000;
                }
              }
              else {
                if (iVar9 != 4) {
                  if (iVar9 == 2) {
                    if (param_4 < 1) {
                      uVar1 = 2;
                      if (param_4 + 5 < 0 == SCARRY4(param_4,5)) {
                        uVar1 = *(uint *)(&DAT_00017a60 + param_4 * -4);
                      }
                    }
                    else {
                      uVar1 = 7;
                    }
                    if (uVar6 != 0) {
                      pcVar10 = local_118;
                    }
                    else {
                      pcVar10 = "";
                    }
                    pcVar11 = pcVar10;
                    if (uVar6 != 0) {
                      pcVar11 = " ";
                    }
                    if (uVar18 == 0) {
                      pcVar21 = "";
                      pcVar22 = pcVar21;
                    }
                    else {
                      pcVar21 = ": ";
                      pcVar22 = *(char **)(iVar12 + 0x20);
                    }
                    if ((int)(uVar13 << 0x1d) < 0) {
                      pcVar8 = (char *)*param_2;
                      pcVar7 = ": ";
                    }
                    else {
                      pcVar7 = "";
                      pcVar8 = pcVar7;
                    }
                    if ((int)(uVar13 << 0x1c) < 0) {
                      pcVar23 = ": ";
                      pcVar24 = (char *)*param_3;
                    }
                    else {
                      pcVar23 = "";
                      pcVar24 = pcVar23;
                    }
                    if ((int)(uVar13 << 0x1e) < 0) {
                      pcVar16 = local_130;
                    }
                    else {
                      pcVar16 = "";
                    }
                    syslog(uVar1 | *(uint *)(iVar15 + 0x10),"%s%s%s%s%s%s%s%s%s%s",pcVar10,pcVar11,pcVar22,pcVar21,
                           pcVar8,pcVar7,pcVar24,pcVar23,pcVar16,param_1 + 9);
                    uVar6 = 1;
                    goto LAB_000104dc;
                  }
                  goto LAB_0001060c;
                }
                __stream = *(FILE **)(iVar15 + 0x10);
LAB_00010878:
                if (uVar6 == 0) {
                  pcVar11 = "";
                  pcVar10 = pcVar11;
                }
                else {
                  pcVar11 = " ";
                  pcVar10 = local_118;
                }
                if (uVar18 == 0) {
                  pcVar22 = "";
                  local_14c = "";
                }
                else {
                  pcVar22 = *(char **)(iVar12 + 0x20);
                  local_14c = ": ";
                }
                if ((int)(uVar13 << 0x1d) < 0) {
                  pcVar8 = ": ";
                  pcVar21 = (char *)*param_2;
                }
                else {
                  pcVar8 = "";
                  pcVar21 = pcVar8;
                }
                if ((int)(uVar13 << 0x1c) < 0) {
                  pcVar24 = ": ";
                  pcVar7 = (char *)*param_3;
                }
                else {
                  pcVar24 = "";
                  pcVar7 = pcVar24;
                }
                if ((int)(uVar13 << 0x1e) < 0) {
                  pcVar23 = local_130;
                }
                else {
                  pcVar23 = "";
                }
                fprintf(__stream,"%s%s%s%s%s%s%s%s%s%s\n",pcVar10,pcVar11,pcVar22,local_14c,pcVar21,pcVar8,pcVar7,
                        pcVar24,pcVar23,param_1 + 9);
                fflush(*(FILE **)(iVar15 + 0x10));
                if (0 < *(int *)(iVar15 + 0x1c)) {
                  if (*(int *)(iVar15 + 4) != 3) {
                    (*DAT_00021dcc)("./../lib/isc/log.c",0x6b6,2,"channel->type == 3");
                  }
                  iVar9 = fileno(*(FILE **)(iVar15 + 0x10));
                  iVar9 = __fxstat(3,iVar9,&sStack_d8);
                  if ((-1 < iVar9) && (*(int *)(iVar15 + 0x1c) < sStack_d8.st_size)) {
                    uVar6 = 1;
                    *(undefined4 *)(iVar15 + 0x20) = 1;
                    goto LAB_000104dc;
                  }
                }
              }
            }
          }
LAB_0001060c:
          uVar6 = 1;
          uVar13 = 1 - (int)puVar19;
          if ((undefined4 *)0x1 < puVar19) {
            uVar13 = 0;
          }
          if ((uVar13 & 1) != 0) goto LAB_0001061c;
        }
        puVar19 = (undefined4 *)puVar19[3];
LAB_000104dc:
        uVar13 = 1 - (int)puVar19;
        if ((undefined4 *)0x1 < puVar19) {
          uVar13 = 0;
        }
      } while ((uVar13 & uVar6) == 0);
LAB_0001061c:
      iVar12 = param_1[7];
      param_1[7] = iVar12 + -1;
      if (iVar12 + -1 != 0) {
        FUN_0000ffb4("./../lib/isc/log.c",0x6e1,"(--(*((&lctx->lock))) == 0 ? 0 : 34) == 0");
      }
    }
  }
  return;
}




undefined4 FUN_00010ebc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *__s;
  int iVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c636667)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x457,0,
                    "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'f\') << 8 | (\'g\')))))"
                    ,param_4);
  }
  iVar2 = param_1[1];
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 == 0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x45b,0,"lctx->category_count != 0");
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (param_1[5] != iVar1) {
    __s = (void *)FUN_0000d894(iVar1 << 3);
    if (__s != (void *)0x0) {
      memset(__s,0,iVar1 << 3);
      if (param_1[5] != 0) {
        memcpy(__s,(void *)param_1[4],param_1[5] << 3);
        free((void *)param_1[4]);
      }
      iVar1 = *(int *)(iVar2 + 0xc);
      param_1[4] = (int)__s;
      param_1[5] = iVar1;
      return 0;
    }
    return 1;
  }
  return 0;
}




int FUN_00010fb0(int *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c636667)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x426,0,
                    "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'f\') << 8 | (\'g\')))))"
                   );
  }
  iVar4 = param_1[1];
  if (*(uint *)(iVar4 + 0xc) <= param_2) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x42a,0,"category_id < lctx->category_count");
  }
  if ((param_3 != 0) && (*(uint *)(iVar4 + 0x14) <= *(uint *)(param_3 + 4))) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x42b,0,"module == ((void *)0) || module->id < lctx->module_count");
  }
  if (param_4 == 0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x42c,0,"channel != ((void *)0)");
  }
  iVar4 = FUN_00010ebc(param_1);
  if (iVar4 == 0) {
    piVar1 = (int *)FUN_0000d894(0x10);
    if (piVar1 == (int *)0x0) {
      iVar4 = 1;
    }
    else {
      iVar3 = param_1[4];
      iVar5 = *(int *)(param_4 + 4);
      *piVar1 = param_3;
      piVar1[1] = param_4;
      iVar2 = *(int *)(iVar3 + param_2 * 8);
      if (iVar2 == 0) {
        *(int **)(iVar3 + param_2 * 8 + 4) = piVar1;
      }
      else {
        *(int **)(iVar2 + 8) = piVar1;
      }
      piVar1[3] = iVar2;
      piVar1[2] = 0;
      *(int **)(iVar3 + param_2 * 8) = piVar1;
      if (iVar5 != 1) {
        iVar4 = *(int *)(param_4 + 8);
        if (param_1[7] < iVar4) {
          param_1[7] = iVar4;
        }
        if (iVar4 == 0) {
          param_1[9] = 1;
        }
        return 0;
      }
    }
  }
  return iVar4;
}




int FUN_0001112c(int *param_1)

{
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x1a7,0,
                    "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                   );
  }
  if (param_1[8] != 0) {
    return param_1[8];
  }
  (*DAT_00021dcc)("./../lib/isc/log.c",0x1a9,1,"lctx->logconfig != ((void *)0)");
  return param_1[8];
}




void FUN_000111a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *__ptr;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *__ptr_00;
  void *__ptr_01;
  int *__ptr_02;
  uint uVar4;
  
  if (((param_1 == (undefined4 *)0x0) || (__ptr_02 = (int *)*param_1, __ptr_02 == (int *)0x0)) ||
     (*__ptr_02 != 0x4c636667)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x1fe,0,
                    "lcfgp != ((void *)0) && (((*lcfgp) != ((void *)0)) && (((const isc__magic_t *)(*lcfgp))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'f\') << 8 | (\'g\')))))"
                    ,param_4);
    __ptr_02 = (int *)*param_1;
  }
  if ((__ptr_02[1] == 0) || (*(int **)(__ptr_02[1] + 0x20) == __ptr_02)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x206,0,"lcfg->lctx != ((void *)0) && lcfg->lctx->logconfig != lcfg");
  }
  __ptr_00 = (undefined4 *)__ptr_02[2];
  do {
    if (__ptr_00 == (undefined4 *)0x0) {
      uVar1 = __ptr_02[5];
      if (uVar1 != 0) {
        __ptr = (void *)__ptr_02[4];
        uVar4 = 0;
        do {
          __ptr_01 = *(void **)((int)__ptr + uVar4 * 8);
          iVar3 = uVar4 * 8;
          if (__ptr_01 != (void *)0x0) {
            do {
              if (*(int *)((int)__ptr_01 + 0xc) == 0) {
                if (*(void **)((int)__ptr + iVar3 + 4) != __ptr_01) {
                  (*DAT_00021dcc)("./../lib/isc/log.c",0x221,2,"(lcfg->channellists[i]).tail == (item)");
                  __ptr = (void *)__ptr_02[4];
                }
                iVar2 = *(int *)((int)__ptr_01 + 8);
                *(int *)((int)__ptr + iVar3 + 4) = iVar2;
                if (iVar2 != 0) goto LAB_00011340;
LAB_000113b8:
                if (*(void **)((int)__ptr + iVar3) != __ptr_01) {
                  (*DAT_00021dcc)("./../lib/isc/log.c",0x221,2,"(lcfg->channellists[i]).head == (item)");
                  __ptr = (void *)__ptr_02[4];
                }
                *(undefined4 *)((int)__ptr + iVar3) = *(undefined4 *)((int)__ptr_01 + 0xc);
              }
              else {
                *(undefined4 *)(*(int *)((int)__ptr_01 + 0xc) + 8) = *(undefined4 *)((int)__ptr_01 + 8);
                iVar2 = *(int *)((int)__ptr_01 + 8);
                if (iVar2 == 0) goto LAB_000113b8;
LAB_00011340:
                *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)((int)__ptr_01 + 0xc);
              }
              *(undefined4 *)((int)__ptr_01 + 8) = 0xffffffff;
              *(undefined4 *)((int)__ptr_01 + 0xc) = 0xffffffff;
              free(__ptr_01);
              __ptr = (void *)__ptr_02[4];
              __ptr_01 = *(void **)((int)__ptr + iVar3);
            } while (__ptr_01 != (void *)0x0);
            uVar1 = __ptr_02[5];
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
        if (uVar1 != 0) {
          free(__ptr);
        }
      }
      __ptr_02[9] = 0;
      if ((void *)__ptr_02[8] != (void *)0x0) {
        free((void *)__ptr_02[8]);
      }
      __ptr_02[8] = 0;
      __ptr_02[7] = 0;
      __ptr_02[6] = 0;
      *__ptr_02 = 0;
      free(__ptr_02);
      *param_1 = 0;
      return;
    }
    if (__ptr_00[10] == 0) {
      if ((undefined4 *)__ptr_02[3] != __ptr_00) {
        (*DAT_00021dcc)("./../lib/isc/log.c",0x20b,2,"(lcfg->channels).tail == (channel)");
      }
      iVar3 = __ptr_00[9];
      __ptr_02[3] = iVar3;
      if (iVar3 != 0) goto LAB_00011234;
LAB_000112b0:
      if ((undefined4 *)__ptr_02[2] != __ptr_00) {
        (*DAT_00021dcc)("./../lib/isc/log.c",0x20b,2,"(lcfg->channels).head == (channel)");
      }
      __ptr_02[2] = __ptr_00[10];
    }
    else {
      *(undefined4 *)(__ptr_00[10] + 0x24) = __ptr_00[9];
      iVar3 = __ptr_00[9];
      if (iVar3 == 0) goto LAB_000112b0;
LAB_00011234:
      *(undefined4 *)(iVar3 + 0x28) = __ptr_00[10];
    }
    __ptr_00[9] = 0xffffffff;
    __ptr_00[10] = 0xffffffff;
    if (__ptr_00[1] == 3) {
      free((void *)__ptr_00[5]);
      if ((FILE *)__ptr_00[4] != (FILE *)0x0) {
        fclose((FILE *)__ptr_00[4]);
      }
    }
    free((void *)*__ptr_00);
    free(__ptr_00);
    __ptr_00 = (undefined4 *)__ptr_02[2];
  } while( true );
}




void FUN_00011490(undefined4 *param_1)

{
  int iVar1;
  void *__ptr;
  int *__ptr_00;
  
  if (((param_1 == (undefined4 *)0x0) || (__ptr_00 = (int *)*param_1, __ptr_00 == (int *)0x0)) ||
     (*__ptr_00 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x1d3,0,
                    "lctxp != ((void *)0) && (((*lctxp) != ((void *)0)) && (((const isc__magic_t *)(*lctxp))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                   );
    __ptr_00 = (int *)*param_1;
  }
  if (__ptr_00[8] != 0) {
    __ptr_00[8] = 0;
    FUN_000111a8();
  }
  if (__ptr_00[7] == 0) {
    __ptr_00[7] = -1;
  }
  else {
    FUN_0000ffb4("./../lib/isc/log.c",0x1de,"(*((&lctx->lock)) == 0 ? (*((&lctx->lock)) = -1, 0) : 34) == 0");
  }
  __ptr = (void *)__ptr_00[0x809];
  do {
    if (__ptr == (void *)0x0) {
      *(undefined1 *)(__ptr_00 + 9) = 0;
      __ptr_00[6] = 0;
      __ptr_00[2] = 0;
      __ptr_00[3] = 0;
      __ptr_00[4] = 0;
      __ptr_00[5] = 0;
      __ptr_00[1] = 0;
      *__ptr_00 = 0;
      free(__ptr_00);
      *param_1 = 0;
      return;
    }
    if (*(int *)((int)__ptr + 0x10) == 0) {
      if ((void *)__ptr_00[0x80a] != __ptr) {
        (*DAT_00021dcc)("./../lib/isc/log.c",0x1e1,2,"(lctx->messages).tail == (message)");
      }
      iVar1 = *(int *)((int)__ptr + 0xc);
      __ptr_00[0x80a] = iVar1;
      if (iVar1 != 0) goto LAB_00011544;
LAB_000115b0:
      if ((void *)__ptr_00[0x809] != __ptr) {
        (*DAT_00021dcc)("./../lib/isc/log.c",0x1e1,2,"(lctx->messages).head == (message)");
      }
      __ptr_00[0x809] = *(int *)((int)__ptr + 0x10);
    }
    else {
      *(undefined4 *)(*(int *)((int)__ptr + 0x10) + 0xc) = *(undefined4 *)((int)__ptr + 0xc);
      iVar1 = *(int *)((int)__ptr + 0xc);
      if (iVar1 == 0) goto LAB_000115b0;
LAB_00011544:
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)((int)__ptr + 0x10);
    }
    *(undefined4 *)((int)__ptr + 0xc) = 0xffffffff;
    *(undefined4 *)((int)__ptr + 0x10) = 0xffffffff;
    free(__ptr);
    __ptr = (void *)__ptr_00[0x809];
  } while( true );
}




int FUN_0001164c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x1b3,0,
                    "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                   );
  }
  if ((param_2 == (int *)0x0) || (*param_2 != 0x4c636667)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x1b4,0,
                    "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'f\') << 8 | (\'g\')))))"
                   );
  }
  if ((int *)param_2[1] != param_1) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x1b5,0,"lcfg->lctx == lctx");
  }
  iVar1 = FUN_00010ebc(param_2);
  if (iVar1 == 0) {
    iVar2 = param_1[7];
    iVar3 = iVar2 + 1;
    param_1[7] = iVar3;
    if (iVar2 != 0) {
      FUN_0000ffb4("./../lib/isc/log.c",0x1c0,"((*((&lctx->lock)))++ == 0 ? 0 : 34) == 0");
      iVar3 = param_1[7];
    }
    local_14 = param_1[8];
    param_1[7] = iVar3 + -1;
    param_1[8] = (int)param_2;
    if (iVar3 + -1 != 0) {
      FUN_0000ffb4("./../lib/isc/log.c",0x1c5,"(--(*((&lctx->lock))) == 0 ? 0 : 34) == 0");
    }
    FUN_000111a8(&local_14);
  }
  return iVar1;
}




void FUN_0001178c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x23b,0,
                    "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                    ,param_4);
  }
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x23c,0,"categories != ((void *)0) && categories[0].name != ((void *)0)");
    piVar4 = (int *)param_1[2];
  }
  else {
    piVar4 = (int *)param_1[2];
  }
  if (piVar4 == (int *)0x0) {
    param_1[2] = (int)param_2;
  }
  else {
    while (piVar2 = (int *)*piVar4, piVar2 != (int *)0x0) {
      piVar1 = piVar4 + 1;
      piVar4 = piVar4 + 2;
      if (*piVar1 == -1) {
        piVar4 = piVar2;
      }
    }
    *piVar4 = (int)param_2;
    piVar4[1] = -1;
  }
  if (*param_2 == 0) {
    return;
  }
  iVar5 = param_1[3];
  piVar4 = param_2 + 2;
  do {
    piVar4[-1] = iVar5;
    iVar5 = iVar5 + 1;
    iVar3 = *piVar4;
    piVar4 = piVar4 + 2;
  } while (iVar3 != 0);
  param_1[3] = iVar5;
  return;
}




char * FUN_00011888(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *__s1;
  char *pcVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x267,0,
                    "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                    ,param_4);
  }
  if (param_2 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x268,0,"name != ((void *)0)");
  }
  __s1 = (char *)param_1[2];
  while( true ) {
    do {
      pcVar2 = __s1;
      __s1 = *(char **)pcVar2;
      if (__s1 == (char *)0x0) {
        return (char *)0x0;
      }
    } while (*(int *)(pcVar2 + 4) == -1);
    iVar1 = strcmp(__s1,param_2);
    if (iVar1 == 0) break;
    __s1 = pcVar2 + 8;
  }
  return pcVar2;
}




void FUN_0001194c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x27e,0,
                    "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                    ,param_4);
  }
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x27f,0,"modules != ((void *)0) && modules[0].name != ((void *)0)");
    piVar4 = (int *)param_1[4];
  }
  else {
    piVar4 = (int *)param_1[4];
  }
  if (piVar4 == (int *)0x0) {
    param_1[4] = (int)param_2;
  }
  else {
    while (piVar2 = (int *)*piVar4, piVar2 != (int *)0x0) {
      piVar1 = piVar4 + 1;
      piVar4 = piVar4 + 2;
      if (*piVar1 == -1) {
        piVar4 = piVar2;
      }
    }
    *piVar4 = (int)param_2;
    piVar4[1] = -1;
  }
  if (*param_2 == 0) {
    return;
  }
  iVar5 = param_1[5];
  piVar4 = param_2 + 2;
  do {
    piVar4[-1] = iVar5;
    iVar5 = iVar5 + 1;
    iVar3 = *piVar4;
    piVar4 = piVar4 + 2;
  } while (iVar3 != 0);
  param_1[5] = iVar5;
  return;
}




char * FUN_00011a48(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *__s1;
  char *pcVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x2aa,0,
                    "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                    ,param_4);
  }
  if (param_2 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x2ab,0,"name != ((void *)0)");
  }
  __s1 = (char *)param_1[4];
  while( true ) {
    do {
      pcVar2 = __s1;
      __s1 = *(char **)pcVar2;
      if (__s1 == (char *)0x0) {
        return (char *)0x0;
      }
    } while (*(int *)(pcVar2 + 4) == -1);
    iVar1 = strcmp(__s1,param_2);
    if (iVar1 == 0) break;
    __s1 = pcVar2 + 8;
  }
  return pcVar2;
}




undefined4 FUN_00011b0c(int *param_1,char *param_2,int param_3,int param_4,undefined4 *param_5,uint param_6)

{
  undefined4 *__ptr;
  void *__ptr_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c636667)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x2c6,0,
                    "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'f\') << 8 | (\'g\')))))"
                    ,param_4);
  }
  if (param_2 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x2c7,0,"name != ((void *)0)");
  }
  if (3 < param_3 - 1U) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x2c9,0,"type == 2 || type == 3 || type == 4 || type == 1");
  }
  if (param_5 == (undefined4 *)0x0 && param_3 != 1) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x2ca,0,"destination != ((void *)0) || type == 1");
    if (param_4 + 5 < 0 == SCARRY4(param_4,5)) goto joined_r0x00011ba0;
  }
  else if (param_4 + 5 < 0 == SCARRY4(param_4,5)) goto joined_r0x00011ba0;
  (*DAT_00021dcc)("./../lib/isc/log.c",0x2cb,0,"level >= (-5)");
joined_r0x00011ba0:
  if ((param_6 & 0xffffefe0) == 0) {
    __ptr = (undefined4 *)FUN_0000d894(0x2c);
  }
  else {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x2cd,0,"(flags & (unsigned int)~(0x001F | 0x1000)) == 0");
    __ptr = (undefined4 *)FUN_0000d894(0x2c);
  }
  if (__ptr == (undefined4 *)0x0) {
    return 1;
  }
  __ptr_00 = (void *)FUN_0000d858(param_2);
  *__ptr = __ptr_00;
  if (__ptr_00 == (void *)0x0) {
    free(__ptr);
    return 1;
  }
  __ptr[1] = param_3;
  __ptr[2] = param_4;
  __ptr[3] = param_6;
  __ptr[9] = 0xffffffff;
  __ptr[10] = 0xffffffff;
  switch(param_3 - 1U) {
  case 0:
    break;
  case 1:
    __ptr[4] = *param_5;
    break;
  case 2:
    uVar1 = FUN_0000d858(param_5[1]);
    uVar2 = param_5[2];
    uVar3 = param_5[3];
    __ptr[4] = 0;
    __ptr[6] = uVar2;
    __ptr[7] = uVar3;
    __ptr[8] = 0;
    __ptr[5] = uVar1;
    break;
  case 3:
    uVar1 = *param_5;
    __ptr[5] = 0;
    __ptr[7] = 0;
    __ptr[4] = uVar1;
    __ptr[6] = 0xfffffffe;
    break;
  default:
    free(__ptr_00);
    free(__ptr);
    return 0x22;
  }
  iVar4 = param_1[2];
  if (iVar4 == 0) {
    param_1[3] = (int)__ptr;
  }
  else {
    *(undefined4 **)(iVar4 + 0x24) = __ptr;
  }
  __ptr[10] = iVar4;
  __ptr[9] = 0;
  param_1[2] = (int)__ptr;
  iVar4 = strcmp(param_2,"default_stderr");
  if (iVar4 != 0) {
    return 0;
  }
  DAT_00024028 = __ptr;
  return 0;
}




int FUN_00011da4(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  if ((param_2 == (int *)0x0) || (*param_2 != 0)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x150,0,"lcfgp != ((void *)0) && *lcfgp == ((void *)0)");
  }
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x151,0,
                    "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                   );
  }
  local_38 = (undefined4 *)FUN_0000d894(0x28);
  if (local_38 == (undefined4 *)0x0) {
    iVar1 = 1;
  }
  else {
    local_38[1] = param_1;
    local_38[7] = 0xffffffff;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    *local_38 = 0x4c636667;
    local_34 = 0x18;
    local_38[8] = 0;
    local_38[9] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    iVar1 = FUN_00011b0c(local_38,"default_syslog",2,0xffffffff,&local_34,0);
    if (iVar1 == 0) {
      local_34 = stderr;
      local_2c = 0xfffffffe;
      local_30 = iVar1;
      local_28 = iVar1;
      iVar1 = FUN_00011b0c(local_38,"default_stderr",4,0xffffffff,&local_34,1);
      if (iVar1 == 0) {
        local_34 = stderr;
        DAT_00024028 = local_38[2];
        local_2c = 0xfffffffe;
        local_30 = iVar1;
        local_28 = iVar1;
        iVar1 = FUN_00011b0c(local_38,"default_debug",4,0,&local_34,1);
        if ((iVar1 == 0) && (iVar1 = FUN_00011b0c(local_38,&DAT_00018400,1,0,0,0), iVar1 == 0)) {
          *param_2 = (int)local_38;
          return 0;
        }
      }
    }
    if (local_38 != (undefined4 *)0x0) {
      FUN_000111a8(&local_38);
    }
  }
  return iVar1;
}




int FUN_00011f8c(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *local_18;
  int local_14;
  
  local_14 = 0;
  if (param_1 == 0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x110,0,"mctx != ((void *)0)");
  }
  if ((param_2 == (int *)0x0) || (*param_2 != 0)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x111,0,"lctxp != ((void *)0) && *lctxp == ((void *)0)");
  }
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x112,0,"lcfgp == ((void *)0) || *lcfgp == ((void *)0)");
  }
  local_18 = (undefined4 *)FUN_0000d894(0x202c);
  if (local_18 == (undefined4 *)0x0) {
    iVar1 = 1;
  }
  else {
    local_18[1] = param_1;
    local_18[0x80a] = 0;
    local_18[0x809] = 0;
    local_18[2] = 0;
    *local_18 = 0x4c637478;
    local_18[3] = 0;
    local_18[4] = 0;
    local_18[5] = 0;
    local_18[6] = 0;
    local_18[7] = 0;
    FUN_0001178c(local_18,&DAT_00021de8);
    FUN_0001194c(local_18,&DAT_00021e00);
    iVar1 = FUN_00011da4(local_18,&local_14);
    if ((iVar1 == 0) && (iVar1 = FUN_00010ebc(local_14), iVar1 == 0)) {
      local_18[8] = local_14;
      *param_2 = (int)local_18;
      if (param_3 == (int *)0x0) {
        return 0;
      }
      *param_3 = local_14;
      return 0;
    }
  }
  if (local_14 != 0) {
    FUN_000111a8(&local_14);
  }
  if (local_18 != (undefined4 *)0x0) {
    FUN_00011490(&local_18);
  }
  return iVar1;
}




int FUN_00012134(int *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c636667)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x31c,0,
                    "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'f\') << 8 | (\'g\')))))"
                   );
  }
  if (param_2 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x31d,0,"name != ((void *)0)");
  }
  iVar4 = param_1[1];
  if ((param_3 != 0) && (*(uint *)(iVar4 + 0xc) <= *(uint *)(param_3 + 4))) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x321,0,"category == ((void *)0) || category->id < lctx->category_count");
  }
  if ((param_4 != 0) && (*(uint *)(iVar4 + 0x14) <= *(uint *)(param_4 + 4))) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x322,0,"module == ((void *)0) || module->id < lctx->module_count");
  }
  puVar2 = (undefined4 *)param_1[2];
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0x17;
    }
    iVar1 = strcmp(param_2,(char *)*puVar2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)puVar2[10];
  }
  if (param_3 == 0) {
    if (*(int *)(iVar4 + 0xc) != 0) {
      uVar3 = 0;
      do {
        iVar1 = FUN_00010fb0(param_1,uVar3,param_4,puVar2);
        uVar3 = uVar3 + 1;
        if (iVar1 != 0) {
          return iVar1;
        }
      } while (uVar3 < *(uint *)(iVar4 + 0xc));
    }
    return 0;
  }
  iVar4 = FUN_00010fb0(param_1,*(undefined4 *)(param_3 + 4),param_4,puVar2);
  return iVar4;
}




void FUN_000122cc(void)

{
  FUN_00010390();
  return;
}




void FUN_00012308(void)

{
  FUN_00010390();
  return;
}




void FUN_00012340(void)

{
  FUN_00010390();
  return;
}




void FUN_00012380(void)

{
  FUN_00010390();
  return;
}




void FUN_000123bc(void)

{
  FUN_00010390();
  return;
}




void FUN_00012404(void)

{
  FUN_00010390();
  return;
}




void FUN_00012448(void)

{
  FUN_00010390();
  return;
}




void FUN_00012490(void)

{
  FUN_00010390();
  return;
}




void FUN_000124e4(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x3bc,0,
                    "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                   );
  }
  iVar1 = param_1[7];
  param_1[7] = iVar1 + 1;
  if (iVar1 != 0) {
    FUN_0000ffb4("./../lib/isc/log.c",0x3be,"((*((&lctx->lock)))++ == 0 ? 0 : 34) == 0");
  }
  param_1[6] = param_2;
  if (param_2 == 0) {
    for (iVar1 = *(int *)(param_1[8] + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
      if (((*(int *)(iVar1 + 4) == 3) && ((*(uint *)(iVar1 + 0xc) & 0x1000) != 0)) &&
         (*(FILE **)(iVar1 + 0x10) != (FILE *)0x0)) {
        fclose(*(FILE **)(iVar1 + 0x10));
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
    }
  }
  iVar1 = param_1[7];
  param_1[7] = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    FUN_0000ffb4("./../lib/isc/log.c",0x3ce,"(--(*((&lctx->lock))) == 0 ? 0 : 34) == 0");
    return;
  }
  return;
}




int FUN_000125e0(int *param_1)

{
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x3d3,0,
                    "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                   );
  }
  return param_1[6];
}




void FUN_00012630(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c636667)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x3da,0,
                    "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'f\') << 8 | (\'g\')))))"
                    ,param_4);
  }
  param_1[6] = param_2;
  return;
}




int FUN_00012684(int *param_1)

{
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c637478)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x3e1,0,
                    "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))"
                   );
  }
  return param_1[6];
}




int FUN_000126d4(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c636667)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",1000,0,
                    "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'f\') << 8 | (\'g\')))))"
                    ,param_4);
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    if ((void *)param_1[8] != (void *)0x0) {
      free((void *)param_1[8]);
    }
    uVar1 = FUN_0000d858(param_2);
    param_1[8] = uVar1;
    iVar2 = 1 - uVar1;
    if (1 < uVar1) {
      iVar2 = 0;
    }
    return iVar2;
  }
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
  }
  param_1[8] = 0;
  return 0;
}




int FUN_00012778(int *param_1)

{
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4c636667)) {
    (*DAT_00021dcc)("./../lib/isc/log.c",0x3fc,0,
                    "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == (((\'L\') << 24 | (\'c\') << 16 | (\'f\') << 8 | (\'g\')))))"
                   );
  }
  return param_1[8];
}




void FUN_00012904(undefined4 *param_1,int param_2)

{
  do {
    param_2 = param_2 + -1;
    *param_1 = *param_1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return;
}




void FUN_00012938(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  
  uVar5 = param_1[3];
  uVar11 = param_1[1];
  iVar10 = *param_2;
  iVar16 = param_2[1];
  uVar3 = *param_1 + -0x28955b88 + iVar10 + ((uVar5 ^ param_1[2]) & uVar11 ^ uVar5);
  uVar4 = uVar11 + (uVar3 >> 0x19 | uVar3 * 0x80);
  uVar3 = uVar5 + 0xe8c7b756 + iVar16 + (uVar4 & (param_1[2] ^ uVar11) ^ param_1[2]);
  iVar2 = param_2[2];
  uVar5 = uVar4 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar3 = param_1[2] + 0x242070dbU + iVar2 + (uVar5 & (uVar4 ^ uVar11) ^ uVar11);
  iVar8 = param_2[3];
  uVar22 = uVar5 + (uVar3 >> 0xf | uVar3 * 0x20000);
  iVar12 = param_2[4];
  uVar3 = uVar11 + 0xc1bdceee + iVar8 + (uVar22 & (uVar5 ^ uVar4) ^ uVar4);
  uVar3 = uVar22 + (uVar3 >> 10 | uVar3 * 0x400000);
  uVar4 = iVar12 + -0xa83f051 + uVar4 + (uVar3 & (uVar22 ^ uVar5) ^ uVar5);
  iVar14 = param_2[5];
  uVar4 = uVar3 + (uVar4 >> 0x19 | uVar4 * 0x80);
  uVar5 = iVar14 + 0x4787c62a + uVar5 + (uVar4 & (uVar3 ^ uVar22) ^ uVar22);
  iVar17 = param_2[6];
  uVar5 = uVar4 + (uVar5 >> 0x14 | uVar5 * 0x1000);
  uVar11 = iVar17 + -0x57cfb9ed + uVar22 + (uVar5 & (uVar4 ^ uVar3) ^ uVar3);
  iVar13 = param_2[7];
  uVar11 = uVar5 + (uVar11 >> 0xf | uVar11 * 0x20000);
  iVar20 = param_2[8];
  uVar3 = iVar13 + -0x2b96aff + uVar3 + (uVar11 & (uVar5 ^ uVar4) ^ uVar4);
  uVar3 = uVar11 + (uVar3 >> 10 | uVar3 * 0x400000);
  iVar6 = param_2[9];
  uVar4 = iVar20 + 0x698098d8 + uVar4 + (uVar3 & (uVar11 ^ uVar5) ^ uVar5);
  uVar4 = uVar3 + (uVar4 >> 0x19 | uVar4 * 0x80);
  uVar5 = iVar6 + -0x74bb0851 + uVar5 + (uVar4 & (uVar3 ^ uVar11) ^ uVar11);
  iVar18 = param_2[10];
  iVar7 = param_2[0xb];
  uVar22 = uVar4 + (uVar5 >> 0x14 | uVar5 * 0x1000);
  uVar5 = iVar18 + -0xa44f + uVar11 + (uVar22 & (uVar4 ^ uVar3) ^ uVar3);
  uVar11 = uVar22 + (uVar5 >> 0xf | uVar5 * 0x20000);
  iVar23 = param_2[0xc];
  uVar3 = iVar7 + -0x76a32842 + uVar3 + (uVar11 & (uVar22 ^ uVar4) ^ uVar4);
  uVar5 = uVar11 + (uVar3 >> 10 | uVar3 * 0x400000);
  iVar15 = param_2[0xd];
  uVar3 = iVar23 + 0x6b901122 + uVar4 + (uVar5 & (uVar11 ^ uVar22) ^ uVar22);
  uVar4 = uVar5 + (uVar3 >> 0x19 | uVar3 * 0x80);
  iVar9 = param_2[0xe];
  uVar3 = iVar15 + -0x2678e6d + uVar22 + (uVar4 & (uVar5 ^ uVar11) ^ uVar11);
  uVar22 = uVar4 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  iVar1 = param_2[0xf];
  uVar3 = iVar9 + -0x5986bc72 + uVar11 + (uVar22 & (uVar4 ^ uVar5) ^ uVar5);
  uVar11 = uVar22 + (uVar3 >> 0xf | uVar3 * 0x20000);
  uVar3 = iVar1 + 0x49b40821 + uVar5 + (uVar11 & (uVar22 ^ uVar4) ^ uVar4);
  uVar3 = uVar11 + (uVar3 >> 10 | uVar3 * 0x400000);
  uVar4 = iVar16 + -0x9e1da9e + uVar4 + ((uVar3 ^ uVar11) & uVar22 ^ uVar11);
  uVar19 = uVar3 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar4 = iVar17 + -0x3fbf4cc0 + uVar22 + ((uVar19 ^ uVar3) & uVar11 ^ uVar3);
  uVar4 = uVar19 + (uVar4 >> 0x17 | uVar4 * 0x200);
  uVar5 = iVar7 + 0x265e5a51 + uVar11 + ((uVar4 ^ uVar19) & uVar3 ^ uVar19);
  uVar21 = uVar4 + (uVar5 >> 0x12 | uVar5 * 0x4000);
  uVar3 = iVar10 + -0x16493856 + uVar3 + ((uVar21 ^ uVar4) & uVar19 ^ uVar4);
  uVar5 = uVar21 + (uVar3 >> 0xc | uVar3 * 0x100000);
  uVar3 = iVar14 + -0x29d0efa3 + uVar19 + ((uVar5 ^ uVar21) & uVar4 ^ uVar21);
  uVar22 = uVar5 + (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar3 = iVar18 + 0x2441453 + uVar4 + ((uVar22 ^ uVar5) & uVar21 ^ uVar5);
  uVar11 = uVar22 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar3 = iVar1 + -0x275e197f + uVar21 + ((uVar11 ^ uVar22) & uVar5 ^ uVar22);
  uVar3 = uVar11 + (uVar3 >> 0x12 | uVar3 * 0x4000);
  uVar4 = iVar12 + -0x182c0438 + uVar5 + ((uVar3 ^ uVar11) & uVar22 ^ uVar11);
  uVar4 = uVar3 + (uVar4 >> 0xc | uVar4 * 0x100000);
  uVar5 = iVar6 + 0x21e1cde6 + uVar22 + ((uVar4 ^ uVar3) & uVar11 ^ uVar3);
  uVar19 = uVar4 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar5 = iVar9 + -0x3cc8f82a + uVar11 + ((uVar19 ^ uVar4) & uVar3 ^ uVar4);
  uVar21 = uVar19 + (uVar5 >> 0x17 | uVar5 * 0x200);
  uVar3 = iVar8 + -0xb2af279 + uVar3 + ((uVar21 ^ uVar19) & uVar4 ^ uVar19);
  uVar5 = uVar21 + (uVar3 >> 0x12 | uVar3 * 0x4000);
  uVar3 = iVar20 + 0x455a14ed + uVar4 + ((uVar5 ^ uVar21) & uVar19 ^ uVar21);
  uVar22 = uVar5 + (uVar3 >> 0xc | uVar3 * 0x100000);
  uVar3 = iVar15 + -0x561c16fb + uVar19 + ((uVar22 ^ uVar5) & uVar21 ^ uVar5);
  uVar11 = uVar22 + (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar3 = iVar2 + -0x3105c08 + uVar21 + ((uVar11 ^ uVar22) & uVar5 ^ uVar22);
  uVar4 = uVar11 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar3 = iVar13 + 0x676f02d9 + uVar5 + ((uVar4 ^ uVar11) & uVar22 ^ uVar11);
  uVar3 = uVar4 + (uVar3 >> 0x12 | uVar3 * 0x4000);
  uVar5 = iVar23 + -0x72d5b376 + uVar22 + ((uVar3 ^ uVar4) & uVar11 ^ uVar4);
  uVar5 = uVar3 + (uVar5 >> 0xc | uVar5 * 0x100000);
  uVar11 = iVar14 + -0x5c6be + uVar11 + (uVar5 ^ uVar3 ^ uVar4);
  uVar22 = uVar5 + (uVar11 >> 0x1c | uVar11 * 0x10);
  uVar4 = iVar20 + -0x788e097f + uVar4 + (uVar5 ^ uVar3 ^ uVar22);
  uVar4 = uVar22 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar3 = iVar7 + 0x6d9d6122 + uVar3 + (uVar22 ^ uVar5 ^ uVar4);
  uVar11 = uVar4 + (uVar3 >> 0x10 | uVar3 * 0x10000);
  uVar3 = iVar9 + -0x21ac7f4 + uVar5 + (uVar4 ^ uVar22 ^ uVar11);
  uVar19 = uVar11 + (uVar3 >> 9 | uVar3 * 0x800000);
  uVar3 = iVar16 + -0x5b4115bc + uVar22 + (uVar11 ^ uVar4 ^ uVar19);
  uVar3 = uVar19 + (uVar3 >> 0x1c | uVar3 * 0x10);
  uVar4 = iVar12 + 0x4bdecfa9 + uVar4 + (uVar19 ^ uVar11 ^ uVar3);
  uVar5 = uVar3 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar4 = iVar13 + -0x944b4a0 + uVar11 + (uVar3 ^ uVar19 ^ uVar5);
  uVar22 = uVar5 + (uVar4 >> 0x10 | uVar4 * 0x10000);
  uVar4 = iVar18 + -0x41404390 + uVar19 + (uVar5 ^ uVar3 ^ uVar22);
  uVar4 = uVar22 + (uVar4 >> 9 | uVar4 * 0x800000);
  uVar3 = iVar15 + 0x289b7ec6 + uVar3 + (uVar22 ^ uVar5 ^ uVar4);
  uVar11 = uVar4 + (uVar3 >> 0x1c | uVar3 * 0x10);
  uVar3 = iVar10 + -0x155ed806 + uVar5 + (uVar4 ^ uVar22 ^ uVar11);
  uVar19 = uVar11 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar3 = iVar8 + -0x2b10cf7b + uVar22 + (uVar11 ^ uVar4 ^ uVar19);
  uVar3 = uVar19 + (uVar3 >> 0x10 | uVar3 * 0x10000);
  uVar4 = iVar17 + 0x4881d05 + uVar4 + (uVar19 ^ uVar11 ^ uVar3);
  uVar5 = uVar3 + (uVar4 >> 9 | uVar4 * 0x800000);
  uVar4 = iVar6 + -0x262b2fc7 + uVar11 + (uVar3 ^ uVar19 ^ uVar5);
  uVar22 = uVar5 + (uVar4 >> 0x1c | uVar4 * 0x10);
  uVar4 = iVar23 + -0x1924661b + uVar19 + (uVar5 ^ uVar3 ^ uVar22);
  uVar4 = uVar22 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar3 = iVar1 + 0x1fa27cf8 + uVar3 + (uVar22 ^ uVar5 ^ uVar4);
  uVar11 = uVar4 + (uVar3 >> 0x10 | uVar3 * 0x10000);
  uVar3 = iVar2 + -0x3b53a99b + uVar5 + (uVar4 ^ uVar22 ^ uVar11);
  uVar5 = uVar11 + (uVar3 >> 9 | uVar3 * 0x800000);
  uVar3 = iVar10 + -0xbd6ddbc + uVar22 + ((uVar5 | ~uVar4) ^ uVar11);
  uVar22 = uVar5 + (uVar3 >> 0x1a | uVar3 * 0x40);
  uVar3 = iVar13 + 0x432aff97 + uVar4 + ((uVar22 | ~uVar11) ^ uVar5);
  uVar3 = uVar22 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar4 = iVar9 + -0x546bdc59 + uVar11 + ((uVar3 | ~uVar5) ^ uVar22);
  uVar4 = uVar3 + (uVar4 >> 0x11 | uVar4 * 0x8000);
  uVar5 = iVar14 + -0x36c5fc7 + uVar5 + ((uVar4 | ~uVar22) ^ uVar3);
  uVar11 = uVar4 + (uVar5 >> 0xb | uVar5 * 0x200000);
  uVar5 = iVar23 + 0x655b59c3 + uVar22 + ((uVar11 | ~uVar3) ^ uVar4);
  uVar5 = uVar11 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = iVar8 + -0x70f3336e + uVar3 + ((uVar5 | ~uVar4) ^ uVar11);
  uVar19 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar3 = iVar18 + -0x100b83 + uVar4 + ((uVar19 | ~uVar11) ^ uVar5);
  uVar22 = uVar19 + (uVar3 >> 0x11 | uVar3 * 0x8000);
  uVar3 = iVar16 + -0x7a7ba22f + uVar11 + ((uVar22 | ~uVar5) ^ uVar19);
  uVar11 = uVar22 + (uVar3 >> 0xb | uVar3 * 0x200000);
  uVar3 = iVar20 + 0x6fa87e4f + uVar5 + ((uVar11 | ~uVar19) ^ uVar22);
  uVar4 = uVar11 + (uVar3 >> 0x1a | uVar3 * 0x40);
  uVar3 = iVar1 + -0x1d31920 + uVar19 + ((uVar4 | ~uVar22) ^ uVar11);
  uVar3 = uVar4 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar5 = iVar17 + -0x5cfebcec + uVar22 + ((uVar3 | ~uVar11) ^ uVar4);
  uVar5 = uVar3 + (uVar5 >> 0x11 | uVar5 * 0x8000);
  uVar11 = iVar15 + 0x4e0811a1 + uVar11 + ((uVar5 | ~uVar4) ^ uVar3);
  uVar11 = uVar5 + (uVar11 >> 0xb | uVar11 * 0x200000);
  uVar4 = iVar12 + -0x8ac817e + uVar4 + ((uVar11 | ~uVar3) ^ uVar5);
  uVar4 = uVar11 + (uVar4 >> 0x1a | uVar4 * 0x40);
  uVar3 = iVar7 + -0x42c50dcb + uVar3 + ((uVar4 | ~uVar5) ^ uVar11);
  *param_1 = uVar4 + *param_1;
  uVar3 = uVar4 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar5 = iVar2 + 0x2ad7d2bb + uVar5 + ((uVar3 | ~uVar11) ^ uVar4);
  param_1[3] = uVar3 + param_1[3];
  uVar5 = uVar3 + (uVar5 >> 0x11 | uVar5 * 0x8000);
  uVar3 = iVar6 + -0x14792c6f + uVar11 + ((uVar5 | ~uVar4) ^ uVar3);
  param_1[2] = uVar5 + param_1[2];
  param_1[1] = uVar5 + param_1[1] + (uVar3 >> 0xb | uVar3 * 0x200000);
  return;
}




void FUN_00013354(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}




void FUN_0001339c(int param_1,void *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  size_t __n;
  uint __n_00;
  undefined4 *__src;
  undefined4 *__dest;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = param_3 + uVar3;
  __n_00 = 0x40 - (uVar3 & 0x3f);
  if (param_3 + uVar3 < uVar3) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  if (__n_00 <= param_3) {
    __dest = (undefined4 *)(param_1 + 0x18);
    __n = param_3 - __n_00;
    memcpy((void *)((param_1 + 0x58) - __n_00),param_2,__n_00);
    __src = (undefined4 *)((int)param_2 + __n_00);
    FUN_00012904(__dest,0x10);
    FUN_00012938(param_1,__dest);
    puVar5 = __src;
    uVar3 = __n;
    if (0x3f < __n) {
      do {
        puVar7 = puVar5 + 0x10;
        puVar4 = __dest;
        do {
          uVar1 = *puVar5;
          uVar2 = puVar5[1];
          uVar6 = puVar5[2];
          uVar8 = puVar5[3];
          puVar5 = puVar5 + 4;
          *puVar4 = uVar1;
          puVar4[1] = uVar2;
          puVar4[2] = uVar6;
          puVar4[3] = uVar8;
          puVar4 = puVar4 + 4;
        } while (puVar5 != puVar7);
        FUN_00012904(__dest,0x10);
        uVar3 = uVar3 - 0x40;
        FUN_00012938(param_1,__dest);
      } while (0x3f < uVar3);
      uVar3 = __n - 0x40;
      __n = __n & 0x3f;
      __src = (undefined4 *)((int)__src + (uVar3 & 0xffffffc0) + 0x40);
    }
    memcpy(__dest,__src,__n);
    return;
  }
  memcpy((void *)((param_1 + 0x58) - __n_00),param_2,param_3);
  return;
}




void FUN_000134b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *__s;
  size_t __n;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar4 = param_1 + 6;
  uVar2 = param_1[4] & 0x3f;
  __n = 0x37 - uVar2;
  *(undefined1 *)((int)puVar4 + uVar2) = 0x80;
  __s = (undefined4 *)((int)puVar4 + uVar2 + 1);
  if ((int)__n < 0) {
    memset(__s,0,0x3f - uVar2);
    FUN_00012904(puVar4,0x10);
    FUN_00012938(param_1,puVar4);
    __n = 0x38;
    __s = puVar4;
  }
  memset(__s,0,__n);
  FUN_00012904(puVar4,0xe);
  uVar2 = param_1[5] << 3 | (uint)param_1[4] >> 0x1d;
  iVar1 = param_1[4] << 3;
  param_1[0x15] = uVar2;
  param_1[0x14] = iVar1;
  FUN_00012938(param_1,puVar4,uVar2,iVar1,param_4);
  FUN_00012904(param_1,4);
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar3;
  memset(param_1,0,0x58);
  return;
}




undefined4 FUN_0001358c(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  bool bVar2;
  
  if ((param_1 & 0xffff) != 0) {
    (*DAT_00021dcc)("./../lib/isc/result.c",0x78,0,"base % 65536 == 0",param_4);
  }
  if (0x10000 < param_2) {
    (*DAT_00021dcc)("./../lib/isc/result.c",0x79,0,"nresults <= 65536");
  }
  if (param_3 == 0) {
    (*DAT_00021dcc)("./../lib/isc/result.c",0x7a,0,"text != ((void *)0)");
  }
  puVar1 = (uint *)malloc(0x1c);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
    puVar1[2] = param_3;
    bVar2 = DAT_00024038 != 0;
    puVar1[1] = (param_1 - 1) + param_2;
    DAT_00024038 = DAT_00024038 + 1;
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0xffffffff;
    if (bVar2) {
      FUN_0000ffb4("./../lib/isc/result.c",0x8a,"((*((&lock)))++ == 0 ? 0 : 34) == 0");
    }
    DAT_00024038 = DAT_00024038 + -1;
    if (DAT_00024040 != (uint *)0x0) {
      *(uint **)((int)DAT_00024040 + 0x18) = puVar1;
    }
    puVar1[5] = (uint)DAT_00024040;
    if (DAT_00024040 == (uint *)0x0) {
      DAT_0002403c = puVar1;
    }
    bVar2 = DAT_00024038 == 0;
    DAT_00024040 = puVar1;
    puVar1[6] = 0;
    if (bVar2) {
      return 0;
    }
    FUN_0000ffb4("./../lib/isc/result.c",0x8e,"(--(*((&lock))) == 0 ? 0 : 34) == 0");
    return 0;
  }
  return 1;
}




void FUN_000136fc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0000efc4();
  if (DAT_00024044 == 0) {
    DAT_00024038 = 0;
    DAT_0002403c = 0;
    DAT_00024040 = 0;
    iVar1 = FUN_0001358c(0,0x3d,&PTR_s_success_00021e30,DAT_0002400c,2);
    if (iVar1 != 0) {
      uVar2 = FUN_0000f118(DAT_0002400c,1,0x65,"failed");
      FUN_0000ff48("./../lib/isc/result.c",0x9d,"register_table() %s: %u",uVar2,iVar1);
    }
    DAT_00024044 = 1;
  }
  return;
}




int FUN_000137a4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_000136fc();
  bVar3 = DAT_00024038 != 0;
  DAT_00024038 = DAT_00024038 + 1;
  puVar1 = DAT_0002403c;
  if (bVar3) {
    FUN_0000ffb4("./../lib/isc/result.c",0xb2,"((*((&lock)))++ == 0 ? 0 : 34) == 0",DAT_00024038,param_4);
    puVar1 = DAT_0002403c;
  }
  do {
    if (puVar1 == (uint *)0x0) {
LAB_000137f8:
      iVar2 = FUN_0000f118(DAT_0002400c,3,1,"(result code text not available)");
LAB_00013814:
      DAT_00024038 = DAT_00024038 + -1;
      if (DAT_00024038 != 0) {
        FUN_0000ffb4("./../lib/isc/result.c",0xc9,"(--(*((&lock))) == 0 ? 0 : 34) == 0",DAT_00024038,param_4);
      }
      return iVar2;
    }
    if ((*puVar1 <= param_1) && (param_1 <= puVar1[1])) {
      iVar2 = param_1 - *puVar1;
      iVar2 = FUN_0000f118(puVar1[3],puVar1[4],iVar2 + 1,*(undefined4 *)(puVar1[2] + iVar2 * 4));
      if (iVar2 != 0) goto LAB_00013814;
      goto LAB_000137f8;
    }
    puVar1 = (uint *)puVar1[6];
  } while( true );
}




void FUN_00013894(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000136fc();
  FUN_0001358c(param_1,param_2,param_3,param_4);
  return;
}




undefined4 FUN_000138cc(char *param_1,char *param_2,undefined4 *param_3)

{
  FILE *pFVar1;
  int *piVar2;
  undefined4 uVar3;
  
  pFVar1 = fopen(param_1,param_2);
  if (pFVar1 != (FILE *)0x0) {
    *param_3 = pFVar1;
    return 0;
  }
  piVar2 = __errno_location();
  uVar3 = FUN_00014cc8(*piVar2);
  return uVar3;
}




void FUN_00013a0c(FILE *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  
  iVar1 = fflush(param_1);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  FUN_00014cc8(*piVar2,extraout_r1,extraout_r2,param_4);
  return;
}




void FUN_00013a50(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x5a,0,"i != ((void *)0)");
  }
  if (999999999 < param_3) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x5b,0,"nanoseconds < 1000000000");
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}




int FUN_00013acc(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",99,0,"i != ((void *)0)");
  }
  if (999999999 < (uint)param_1[1]) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",100,2,"i->nanoseconds < 1000000000");
  }
  if (*param_1 == 0) {
    iVar1 = 1 - param_1[1];
    if (1 < (uint)param_1[1]) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}




void FUN_00013b60(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x76,0,"t != ((void *)0)");
  }
  if (999999999 < param_3) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x77,0,"nanoseconds < 1000000000");
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}




void FUN_00013bdc(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x7f,0,"t != ((void *)0)");
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




int FUN_00013c24(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x87,0,"t != ((void *)0)");
  }
  if (999999999 < (uint)param_1[1]) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x88,2,"t->nanoseconds < 1000000000");
  }
  if (*param_1 == 0) {
    iVar1 = 1 - param_1[1];
    if (1 < (uint)param_1[1]) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}




void FUN_00013cb8(int *param_1)

{
  int iVar1;
  int *piVar2;
  timeval local_90;
  undefined1 auStack_88 [128];
  
  if (param_1 == (int *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x96,0,"t != ((void *)0)");
  }
  iVar1 = gettimeofday(&local_90,(__timezone_ptr_t)0x0);
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    FUN_0000f7ac(*piVar2,auStack_88,0x80);
    FUN_0000ff48("./../lib/isc/unix/time.c",0x9a,"%s",auStack_88);
    return;
  }
  if (local_90.tv_usec < 0) {
    do {
      local_90.tv_sec = local_90.tv_sec + -1;
      local_90.tv_usec = local_90.tv_usec + 1000000;
    } while (local_90.tv_usec < 0);
  }
  else {
    if (local_90.tv_usec < 1000000) goto LAB_00013d28;
    do {
      local_90.tv_sec = local_90.tv_sec + 1;
      local_90.tv_usec = local_90.tv_usec + -1000000;
    } while (999999 < local_90.tv_usec);
  }
  syslog(3,"gettimeofday returned bad tv_usec: corrected");
LAB_00013d28:
  if (-1 < local_90.tv_sec) {
    *param_1 = local_90.tv_sec;
    param_1[1] = local_90.tv_usec * 1000;
  }
  return;
}




void FUN_00013dd8(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  timeval local_a0;
  undefined1 auStack_98 [132];
  
  if (param_1 == (int *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0xc0,0,"t != ((void *)0)");
  }
  if (param_2 == (uint *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0xc1,0,"i != ((void *)0)");
  }
  if (999999999 < param_2[1]) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0xc2,2,"i->nanoseconds < 1000000000");
  }
  iVar1 = gettimeofday(&local_a0,(__timezone_ptr_t)0x0);
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    FUN_0000f7ac(*piVar2,auStack_98,0x80);
    FUN_0000ff48("./../lib/isc/unix/time.c",0xc6,"%s",auStack_98);
    return;
  }
  if (local_a0.tv_usec < 0) {
    do {
      local_a0.tv_sec = local_a0.tv_sec - 1;
      local_a0.tv_usec = local_a0.tv_usec + 1000000;
    } while (local_a0.tv_usec < 0);
  }
  else {
    if (local_a0.tv_usec < 1000000) goto LAB_00013e68;
    do {
      local_a0.tv_sec = local_a0.tv_sec + 1;
      local_a0.tv_usec = local_a0.tv_usec + -1000000;
    } while (999999 < local_a0.tv_usec);
  }
  syslog(3,"gettimeofday returned bad tv_usec: corrected");
LAB_00013e68:
  if ((-1 < local_a0.tv_sec) &&
     ((uVar4 = *param_2, -1 < (int)uVar4 || ((int)((local_a0.tv_sec >> 0x1f) + (uint)CARRY4(uVar4,local_a0.tv_sec)) < 1)
      ))) {
    uVar5 = param_2[1];
    *param_1 = local_a0.tv_sec + uVar4;
    uVar3 = local_a0.tv_usec * 1000 + uVar5;
    if (999999999 < uVar3) {
      *param_1 = local_a0.tv_sec + uVar4 + 1;
      uVar5 = 0xc4653600;
    }
    param_1[1] = uVar3;
    if (999999999 < uVar3) {
      param_1[1] = uVar3 + uVar5;
    }
  }
  return;
}




uint FUN_00013fc4(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == (uint *)0x0 || param_1 == (uint *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0xf0,0,"t1 != ((void *)0) && t2 != ((void *)0)",param_4);
  }
  if ((999999999 < param_1[1]) || (999999999 < param_2[1])) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0xf1,2,"t1->nanoseconds < 1000000000 && t2->nanoseconds < 1000000000");
  }
  if (*param_2 <= *param_1) {
    if (*param_2 < *param_1) {
      return 1;
    }
    if (param_2[1] <= param_1[1]) {
      return (uint)(param_2[1] < param_1[1]);
    }
  }
  return 0xffffffff;
}




undefined4 FUN_000141b8(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_2 == (uint *)0x0 || param_1 == (uint *)0x0) || (param_3 == (int *)0x0)) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x11c,0,"t != ((void *)0) && i != ((void *)0) && result != ((void *)0)");
  }
  if ((param_1[1] < 1000000000) && (param_2[1] < 1000000000)) {
    uVar3 = *param_1;
    uVar4 = *param_2;
    bVar5 = uVar3 == uVar4;
    if (uVar3 < uVar4) {
      return 0x29;
    }
  }
  else {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x11d,2,"t->nanoseconds < 1000000000 && i->nanoseconds < 1000000000");
    uVar3 = *param_1;
    uVar4 = *param_2;
    bVar5 = uVar3 == uVar4;
    if (uVar3 < uVar4) {
      return 0x29;
    }
  }
  uVar2 = param_1[1];
  if (bVar5) {
    uVar1 = param_2[1];
    if (uVar2 < uVar1) {
      return 0x29;
    }
    *param_3 = 0;
  }
  else {
    uVar1 = param_2[1];
    *param_3 = uVar3 - uVar4;
    if (uVar2 < uVar1) {
      *param_3 = (uVar3 - uVar4) + -1;
      param_3[1] = (uVar2 + 1000000000) - uVar1;
      return 0;
    }
  }
  param_3[1] = uVar2 - uVar1;
  return 0;
}




undefined4 FUN_000143b8(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x149,0,"t != ((void *)0)");
  }
  if (999999999 < (uint)param_1[1]) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x14a,2,"t->nanoseconds < 1000000000");
  }
  return *param_1;
}




undefined4 FUN_0001442c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x154,0,"t != ((void *)0)",param_4);
  }
  if (999999999 < (uint)param_1[1]) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x155,2,"t->nanoseconds < 1000000000");
  }
  if (*param_1 < 0) {
    uVar1 = 0x29;
  }
  else {
    *param_2 = *param_1;
    uVar1 = 0;
  }
  return uVar1;
}




uint FUN_000144b8(int param_1)

{
  if (param_1 == 0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x188,0,"t != ((void *)0)");
  }
  if (*(uint *)(param_1 + 4) < 1000000000) {
    return *(uint *)(param_1 + 4);
  }
  (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x18a,1,"t->nanoseconds < 1000000000");
  return *(uint *)(param_1 + 4);
}




void FUN_0001452c(time_t *param_1,char *param_2,size_t param_3)

{
  tm *ptVar1;
  size_t sVar2;
  time_t local_1c;
  
  if (param_3 == 0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x194,0,"len > 0");
    local_1c = *param_1;
    ptVar1 = localtime(&local_1c);
    sVar2 = strftime(param_2,0,"%d-%b-%Y %X",ptVar1);
  }
  else {
    local_1c = *param_1;
    ptVar1 = localtime(&local_1c);
    sVar2 = strftime(param_2,param_3,"%d-%b-%Y %X",ptVar1);
    if (sVar2 < param_3) goto LAB_00014574;
  }
  (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x198,2,"flen < len");
LAB_00014574:
  if (sVar2 == 0) {
    snprintf(param_2,param_3,"99-Bad-9999 99:99:99.999");
  }
  else {
    snprintf(param_2 + sVar2,param_3 - sVar2,".%03u",(uint)param_1[1] / 1000000);
  }
  return;
}




void FUN_0001463c(time_t *param_1,char *param_2,size_t param_3)

{
  tm *ptVar1;
  size_t sVar2;
  time_t local_1c [2];
  
  if (param_3 == 0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x1a5,0,"len > 0");
    local_1c[0] = *param_1;
    ptVar1 = gmtime(local_1c);
    strftime(param_2,0,"%a, %d %b %Y %H:%M:%S GMT",ptVar1);
  }
  else {
    local_1c[0] = *param_1;
    ptVar1 = gmtime(local_1c);
    sVar2 = strftime(param_2,param_3,"%a, %d %b %Y %H:%M:%S GMT",ptVar1);
    if (sVar2 < param_3) {
      return;
    }
  }
  (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x1a9,2,"flen < len");
  return;
}




void FUN_000146fc(time_t *param_1,char *param_2,size_t param_3)

{
  tm *ptVar1;
  size_t sVar2;
  time_t local_1c [2];
  
  if (param_3 == 0) {
    (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x1b1,0,"len > 0");
    local_1c[0] = *param_1;
    ptVar1 = gmtime(local_1c);
    strftime(param_2,0,"%Y-%m-%dT%H:%M:%SZ",ptVar1);
  }
  else {
    local_1c[0] = *param_1;
    ptVar1 = gmtime(local_1c);
    sVar2 = strftime(param_2,param_3,"%Y-%m-%dT%H:%M:%SZ",ptVar1);
    if (sVar2 < param_3) {
      return;
    }
  }
  (*DAT_00021dcc)("./../lib/isc/unix/time.c",0x1b5,2,"flen < len");
  return;
}




void FUN_000147bc(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/dir.c",0x2c,0,"dir != ((void *)0)");
  }
  *(undefined1 *)(param_1 + 0x101) = 0;
  param_1[0x141] = 0;
  *param_1 = 0x4449522a;
  param_1[0x142] = 0;
  return;
}




undefined4 FUN_00014814(int *param_1,char *param_2)

{
  size_t sVar1;
  DIR *pDVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4449522a)) {
    (*DAT_00021dcc)("./../lib/isc/unix/dir.c",0x3f,0,
                    "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == (((\'D\') << 24 | (\'I\') << 16 | (\'R\') << 8 | (\'*\')))))"
                   );
  }
  if (param_2 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/dir.c",0x40,0,"dirname != ((void *)0)");
  }
  sVar1 = strlen(param_2);
  if (0x400 < sVar1 + 3) {
    return 0x13;
  }
  memcpy(param_1 + 1,param_2,sVar1 + 1);
  piVar4 = (int *)((int)param_1 + sVar1 + 4);
  if ((param_1 + 1 < piVar4) && (*(char *)((int)param_1 + sVar1 + 3) != '/')) {
    piVar4 = (int *)((int)param_1 + sVar1 + 5);
    *(undefined1 *)((int)param_1 + sVar1 + 4) = 0x2f;
  }
  *(undefined1 *)piVar4 = 0x2a;
  *(undefined1 *)((int)piVar4 + 1) = 0;
  pDVar2 = opendir(param_2);
  param_1[0x142] = (int)pDVar2;
  if (pDVar2 == (DIR *)0x0) {
    piVar4 = __errno_location();
    uVar3 = FUN_00014cc8(*piVar4);
    return uVar3;
  }
  return 0;
}




undefined4 FUN_00014920(int *param_1)

{
  DIR *__dirp;
  dirent *pdVar1;
  size_t sVar2;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0x4449522a)) || (__dirp = (DIR *)param_1[0x142], __dirp == (DIR *)0x0)) {
    (*DAT_00021dcc)("./../lib/isc/unix/dir.c",0x6a,0,
                    "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == (((\'D\') << 24 | (\'I\') << 16 | (\'R\') << 8 | (\'*\'))))) && dir->handle != ((void *)0)"
                   );
    __dirp = (DIR *)param_1[0x142];
  }
  pdVar1 = readdir(__dirp);
  if (pdVar1 != (dirent *)0x0) {
    sVar2 = strlen(pdVar1->d_name);
    if (sVar2 < 0x100) {
      memcpy(param_1 + 0x101,pdVar1->d_name,sVar2 + 1);
      param_1[0x141] = sVar2;
      return 0;
    }
    return 0x22;
  }
  return 0x1d;
}




void FUN_000149d0(int *param_1)

{
  DIR *__dirp;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0x4449522a)) || (__dirp = (DIR *)param_1[0x142], __dirp == (DIR *)0x0)) {
    (*DAT_00021dcc)("./../lib/isc/unix/dir.c",0x89,0,
                    "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == (((\'D\') << 24 | (\'I\') << 16 | (\'R\') << 8 | (\'*\'))))) && dir->handle != ((void *)0)"
                   );
    __dirp = (DIR *)param_1[0x142];
  }
  closedir(__dirp);
  param_1[0x142] = 0;
  return;
}




undefined4 FUN_00014a3c(int *param_1)

{
  DIR *__dirp;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0x4449522a)) || (__dirp = (DIR *)param_1[0x142], __dirp == (DIR *)0x0)) {
    (*DAT_00021dcc)("./../lib/isc/unix/dir.c",0x94,0,
                    "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == (((\'D\') << 24 | (\'I\') << 16 | (\'R\') << 8 | (\'*\'))))) && dir->handle != ((void *)0)"
                   );
    __dirp = (DIR *)param_1[0x142];
  }
  rewinddir(__dirp);
  return 0;
}




undefined4 FUN_00014aa4(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/dir.c",0xa1,0,"dirname != ((void *)0)");
  }
  iVar1 = chdir(param_1);
  if (-1 < iVar1) {
    return 0;
  }
  piVar2 = __errno_location();
  uVar3 = FUN_00014cc8(*piVar2);
  return uVar3;
}




undefined4 FUN_00014b44(char *param_1)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  ushort **ppuVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/dir.c",0xc0,0,"templet != ((void *)0)");
    iVar1 = getpid();
    sVar2 = strlen((char *)0x0);
    pcVar9 = (char *)(sVar2 - 1);
    pcVar10 = pcVar9;
    if (*(char *)(sVar2 - 1) != 'X') goto LAB_00014bc8;
  }
  else {
    iVar1 = getpid();
    sVar2 = strlen(param_1);
    pcVar9 = param_1 + (sVar2 - 1);
    if ((param_1[sVar2 - 1] != 'X') || (pcVar10 = pcVar9, pcVar9 < param_1)) goto LAB_00014bc8;
  }
  do {
    pcVar6 = pcVar9 + -1;
    *pcVar9 = (char)iVar1 + (char)(iVar1 / 10) * -10 + '0';
    pcVar9 = pcVar6;
    if (pcVar10[-1] != 'X') break;
    iVar1 = iVar1 / 10;
    pcVar10 = pcVar10 + -1;
  } while (param_1 <= pcVar6);
LAB_00014bc8:
LAB_00014bd0:
  do {
    iVar1 = mkdir(param_1,0x1c0);
    if (iVar1 == 0) {
      return 0;
    }
    piVar3 = __errno_location();
    if (*piVar3 != 0x11) goto LAB_00014c44;
    uVar8 = (uint)(byte)pcVar9[1];
    if (uVar8 == 0) {
LAB_00014c3c:
      *piVar3 = 0x11;
LAB_00014c44:
      if (iVar1 != -1) {
        return 0;
      }
      uVar5 = FUN_00014cc8(*piVar3);
      return uVar5;
    }
    ppuVar4 = __ctype_b_loc();
    pbVar7 = (byte *)(pcVar9 + 1);
    while (((*ppuVar4)[uVar8] & 0x800) == 0) {
      if (uVar8 != 0x7a) {
        *pbVar7 = (byte)(uVar8 + 1);
        if ((uVar8 + 1 & 0xff) == 0) goto LAB_00014c3c;
        goto LAB_00014bd0;
      }
      *pbVar7 = 0x61;
      pbVar7 = pbVar7 + 1;
      uVar8 = (uint)*pbVar7;
      if (uVar8 == 0) goto LAB_00014c3c;
    }
    *pbVar7 = 0x61;
  } while( true );
}




undefined4 FUN_00014cc8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_90 [132];
  
  switch(param_1) {
  case 1:
  case 0xd:
    uVar1 = 6;
    break;
  case 2:
    uVar1 = 0x26;
    break;
  default:
    FUN_0000f7ac(param_1,auStack_90,0x80);
    FUN_0000ff48("./../lib/isc/unix/errno2result.c",0x6f,"unable to convert errno to isc_result: %d: %s",param_1,
                 auStack_90);
    uVar1 = 0x22;
    break;
  case 5:
    uVar1 = 0x1a;
    break;
  case 9:
  case 0x14:
  case 0x16:
  case 0x24:
  case 0x28:
    uVar1 = 0x1e;
    break;
  case 0xc:
    uVar1 = 1;
    break;
  case 0x11:
    uVar1 = 0x27;
    break;
  case 0x17:
  case 0x18:
    uVar1 = 0x32;
    break;
  case 0x20:
  case 0x67:
  case 0x68:
    uVar1 = 0x36;
    break;
  case 0x61:
    uVar1 = 0x30;
    break;
  case 0x62:
    uVar1 = 5;
    break;
  case 99:
    uVar1 = 4;
    break;
  case 100:
    uVar1 = 10;
    break;
  case 0x65:
    uVar1 = 8;
    break;
  case 0x69:
    uVar1 = 0xd;
    break;
  case 0x6b:
    uVar1 = 0x28;
    break;
  case 0x6e:
    uVar1 = 2;
    break;
  case 0x6f:
    uVar1 = 0xc;
    break;
  case 0x70:
    uVar1 = 0xb;
    break;
  case 0x71:
    uVar1 = 9;
  }
  return uVar1;
}




void FUN_00014f7c(char *param_1,stat *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x5a,0,"file != ((void *)0)");
  }
  if (param_2 == (stat *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x5b,0,"stats != ((void *)0)");
  }
  iVar1 = __xstat(3,param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  FUN_00014cc8(*piVar2);
  return;
}




int FUN_0001500c(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_68 [64];
  undefined4 local_28;
  
  if (param_1 == 0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x68,0,"file != ((void *)0)");
  }
  if (param_2 == 0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x69,0,"time != ((void *)0)");
  }
  iVar1 = FUN_00014f7c(param_1,auStack_68);
  if (iVar1 == 0) {
    FUN_00013b60(param_2,local_28,0);
  }
  return iVar1;
}




undefined4 FUN_00015164(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  size_t sVar2;
  
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0xac,0,"path != ((void *)0)");
  }
  if (param_2 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0xad,0,"templet != ((void *)0)");
  }
  if (param_3 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0xae,0,"buf != ((void *)0)");
  }
  pcVar1 = strrchr(param_2,0x2f);
  if (pcVar1 != (char *)0x0) {
    param_2 = pcVar1 + 1;
  }
  pcVar1 = strrchr(param_1,0x2f);
  if (pcVar1 == (char *)0x0) {
    sVar2 = strlen(param_2);
    if ((char *)(sVar2 + 1) <= param_4) {
      memcpy(param_3,param_2,sVar2 + 1);
      return 0;
    }
  }
  else {
    sVar2 = strlen(param_2);
    if (pcVar1 + sVar2 + (2 - (int)param_1) <= param_4) {
      strncpy(param_3,param_1,(size_t)(pcVar1 + (1 - (int)param_1)));
      param_3[(int)(pcVar1 + (1 - (int)param_1))] = '\0';
      strcat(param_3,param_2);
      return 0;
    }
  }
  return 0x13;
}




undefined4 FUN_000152b4(char *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  byte *extraout_r1;
  byte *extraout_r1_00;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_24 [2];
  
  pbVar8 = param_2;
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0xd0,0,"file != ((void *)0)");
    pbVar8 = extraout_r1;
  }
  if (param_2 == (byte *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0xd1,0,"templet != ((void *)0)");
    pbVar8 = extraout_r1_00;
  }
  pbVar7 = param_2;
  if (*param_2 != 0) {
    do {
      pbVar6 = pbVar7;
      pbVar7 = pbVar6 + 1;
    } while (pbVar6[1] != 0);
    if (param_2 != pbVar7) {
      if (param_2 <= pbVar6) {
        bVar1 = *pbVar6;
        while (bVar1 == 0x58) {
          FUN_00015b90(local_24,pbVar8);
          pbVar8 = (byte *)((local_24[0] >> 1) * -0x7bdef7bd);
          *pbVar6 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00021f2c[local_24[0] + ((local_24[0] >> 1) / 0x1f) * -0x3e];
          pbVar7 = pbVar6;
          if (pbVar6 == param_2) break;
          bVar1 = pbVar6[-1];
          pbVar6 = pbVar6 + -1;
        }
      }
      do {
        iVar2 = link(param_1,(char *)param_2);
        if (iVar2 != -1) {
          iVar2 = unlink(param_1);
          if ((-1 < iVar2) || (piVar3 = __errno_location(), *piVar3 == 2)) {
            return 0;
          }
LAB_00015434:
          uVar5 = FUN_00014cc8();
          return uVar5;
        }
        piVar3 = __errno_location();
        if (*piVar3 != 0x11) goto LAB_00015434;
        bVar1 = *pbVar7;
        pbVar8 = pbVar7;
        while( true ) {
          if (bVar1 == 0) {
            return 0x19;
          }
          pcVar4 = strchr(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00021f2c,(uint)bVar1);
          if ((pcVar4 != (char *)0x0) && (pcVar4[1] != 0)) break;
          *pbVar8 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00021f2c[0];
          pbVar8 = pbVar8 + 1;
          bVar1 = *pbVar8;
        }
        *pbVar8 = pcVar4[1];
      } while( true );
    }
  }
  return 0x19;
}




undefined4 FUN_00015468(byte *param_1,int *param_2)

{
  byte bVar1;
  int __fd;
  int *piVar2;
  char *pcVar3;
  FILE *pFVar4;
  int iVar5;
  undefined4 uVar6;
  int *extraout_r1;
  int *extraout_r1_00;
  byte *pbVar7;
  byte *pbVar8;
  uint local_24 [2];
  
  piVar2 = param_2;
  if (param_1 == (byte *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x100,0,"templet != ((void *)0)");
    piVar2 = extraout_r1_00;
  }
  if ((param_2 == (int *)0x0) || (*param_2 != 0)) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x101,0,"fp != ((void *)0) && *fp == ((void *)0)");
    piVar2 = extraout_r1;
  }
  pbVar7 = param_1;
  if (*param_1 != 0) {
    do {
      pbVar8 = pbVar7;
      pbVar7 = pbVar8 + 1;
    } while (pbVar8[1] != 0);
    if (param_1 != pbVar7) {
      if (param_1 <= pbVar8) {
        bVar1 = *pbVar8;
        while (bVar1 == 0x58) {
          FUN_00015b90(local_24,piVar2);
          piVar2 = (int *)((local_24[0] >> 1) * -0x7bdef7bd);
          *pbVar8 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00021f2c[local_24[0] + ((local_24[0] >> 1) / 0x1f) * -0x3e];
          pbVar7 = pbVar8;
          if (pbVar8 == param_1) break;
          bVar1 = pbVar8[-1];
          pbVar8 = pbVar8 + -1;
        }
      }
      while( true ) {
        __fd = open((char *)param_1,0xc2,0x1b6);
        if (__fd != -1) {
          pFVar4 = fdopen(__fd,"w+");
          if (pFVar4 != (FILE *)0x0) {
            *param_2 = (int)pFVar4;
            return 0;
          }
          piVar2 = __errno_location();
          uVar6 = FUN_00014cc8(*piVar2);
          iVar5 = remove((char *)param_1);
          if (iVar5 < 0) {
            FUN_000122cc(DAT_00024034,&DAT_00021df0,&DAT_00021e20,0xfffffffc,"remove \'%s\': failed",param_1);
          }
          close(__fd);
          return uVar6;
        }
        piVar2 = __errno_location();
        if (*piVar2 != 0x11) break;
        bVar1 = *pbVar7;
        pbVar8 = pbVar7;
        while( true ) {
          if (bVar1 == 0) {
            return 0x19;
          }
          pcVar3 = strchr(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00021f2c,(uint)bVar1);
          if ((pcVar3 != (char *)0x0) && (pcVar3[1] != 0)) break;
          *pbVar8 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00021f2c[0];
          pbVar8 = pbVar8 + 1;
          bVar1 = *pbVar8;
        }
        *pbVar8 = pcVar3[1];
      }
      uVar6 = FUN_00014cc8();
      return uVar6;
    }
  }
  return 0x19;
}




void FUN_0001568c(char *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x135,0,"filename != ((void *)0)");
  }
  iVar1 = unlink(param_1);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  FUN_00014cc8(*piVar2);
  return;
}




void FUN_000156e4(char *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x142,0,"oldname != ((void *)0)");
  }
  if (param_2 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x143,0,"newname != ((void *)0)");
  }
  iVar1 = rename(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  FUN_00014cc8(*piVar2);
  return;
}




int FUN_00015770(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_60 [88];
  
  if (param_1 == 0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x150,0,"pathname != ((void *)0)");
  }
  uVar1 = FUN_00014f7c(param_1,auStack_60);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}




bool FUN_000157c8(char *param_1)

{
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x157,0,"filename != ((void *)0)");
  }
  return *param_1 == '/';
}




int FUN_00015814(char *param_1)

{
  int iVar1;
  
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x15d,0,"filename != ((void *)0)");
  }
  if (*param_1 != '.') {
    return 0;
  }
  iVar1 = 1 - (uint)(byte)param_1[1];
  if (1 < (byte)param_1[1]) {
    iVar1 = 0;
  }
  return iVar1;
}




int FUN_00015870(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x163,0,"filename != ((void *)0)",param_4);
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x157,0,"filename != ((void *)0)");
  }
  if (*param_1 != '/') {
    iVar1 = FUN_00015814(param_1);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 1;
}




char * FUN_000158e8(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x16f,0,"filename != ((void *)0)");
  }
  pcVar1 = strrchr(param_1,0x2f);
  if (pcVar1 != (char *)0x0) {
    param_1 = pcVar1 + 1;
  }
  return param_1;
}




undefined4 FUN_0001593c(int param_1,void *param_2,uint param_3)

{
  char *__s;
  size_t sVar1;
  
  if (param_1 == 0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x17d,0,"filename != ((void *)0)");
  }
  if (param_2 == (void *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x17e,0,"buf != ((void *)0)");
  }
  __s = (char *)FUN_000158e8(param_1);
  sVar1 = strlen(__s);
  if (param_3 < sVar1 + 1) {
    return 0x13;
  }
  memcpy(param_2,__s,sVar1 + 1);
  return 0;
}




int FUN_000159e0(char *param_1,char *param_2,uint param_3,undefined4 param_4)

{
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == (char *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x195,0,"dirname != ((void *)0)",param_4);
  }
  if (param_3 == 0) {
    (*DAT_00021dcc)("./../lib/isc/unix/file.c",0x196,0,"length > 0U");
  }
  pcVar1 = getcwd(param_2,param_3);
  if (pcVar1 == (char *)0x0) {
    piVar4 = __errno_location();
    if (*piVar4 == 0x22) {
      return 0x13;
    }
    iVar5 = FUN_00014cc8();
    if (iVar5 != 0) {
      return iVar5;
    }
    sVar2 = strlen(param_2);
  }
  else {
    sVar2 = strlen(param_2);
    if (param_3 == sVar2 + 1) {
      return 0x13;
    }
    if (param_2[1] != '\0') {
      (param_2 + sVar2)[0] = '/';
      (param_2 + sVar2)[1] = '\0';
      sVar2 = strlen(param_2);
    }
  }
  sVar3 = strlen(param_1);
  if (param_3 < sVar3 + sVar2 + 1) {
    return 0x13;
  }
  memcpy(param_2 + sVar2,param_1,sVar3 + 1);
  return 0;
}




undefined4 FUN_00015b0c(char *param_1,__off_t param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = truncate(param_1,param_2);
  if (-1 < iVar1) {
    return 0;
  }
  piVar2 = __errno_location();
  uVar3 = FUN_00014cc8(*piVar2);
  return uVar3;
}




void FUN_00015b34(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = getpid();
  uVar2 = time((time_t *)0x0);
  srand(uVar2 ^ (uVar1 >> 0x10 | uVar1 << 0x10));
  return;
}




void FUN_00015b54(uint param_1)

{
  if (DAT_00024058 == 0) {
    FUN_00015b34();
    DAT_00024058 = 1;
  }
  srand(param_1);
  return;
}




void FUN_00015b90(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    (*DAT_00021dcc)("./../lib/isc/random.c",0x4e,0,"val != ((void *)0)",param_4);
  }
  if (DAT_00024058 == 0) {
    FUN_00015b34();
    DAT_00024058 = 1;
  }
  iVar1 = rand();
  uVar2 = rand();
  *param_1 = (uint)(iVar1 << 0xc) >> 0x10 | (uVar2 & 0xffff0) << 0xc;
  return;
}




ulonglong FUN_00015c68(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}




void FUN_00015d10(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00015c68();
    return;
  }
  raise(8);
  return;
}




void FUN_00015e78(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00015ef0();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = param_2 - ((int)((ulonglong)lVar2 >> 0x20) + (uint)(param_1 < uVar1));
  return;
}




void FUN_00015eb4(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00016348();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = param_2 - ((int)((ulonglong)lVar2 >> 0x20) + (uint)(param_1 < uVar1));
  return;
}




undefined8 FUN_00015ef0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  if ((int)param_2 < 0) {
    uVar8 = -param_1;
    uVar11 = -(param_2 + (param_1 != 0));
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    uVar8 = param_1;
    uVar11 = param_2;
  }
  uVar5 = param_3;
  if ((int)param_4 < 0) {
    uVar5 = -param_3;
    param_4 = -(param_4 + (param_3 != 0));
    uVar6 = ~uVar6;
  }
  if (param_4 == 0) {
    if (uVar5 <= uVar11) {
      if (uVar5 == 0) {
        uVar5 = FUN_00015c68(1,0);
      }
      iVar4 = LZCOUNT(uVar5);
      if (iVar4 == 0) {
        iVar4 = uVar11 - uVar5;
        uVar7 = 1;
      }
      else {
        uVar5 = uVar5 << iVar4;
        uVar12 = uVar11 >> (0x20U - iVar4 & 0xff);
        uVar7 = uVar5 >> 0x10;
        uVar9 = uVar8 >> (0x20U - iVar4 & 0xff) | uVar11 << iVar4;
        uVar8 = uVar8 << iVar4;
        FUN_00015d10(uVar12,uVar7);
        iVar4 = FUN_00015c68(uVar12,uVar7);
        uVar12 = uVar9 >> 0x10 | extraout_r1_01 << 0x10;
        uVar11 = (uVar5 & 0xffff) * iVar4;
        iVar2 = iVar4;
        if (uVar12 < uVar11) {
          bVar14 = CARRY4(uVar12,uVar5);
          uVar12 = uVar12 + uVar5;
          iVar2 = iVar4 + -1;
          if ((!bVar14) && (uVar12 < uVar11)) {
            uVar12 = uVar12 + uVar5;
            iVar2 = iVar4 + -2;
          }
        }
        FUN_00015d10(uVar12 - uVar11,uVar7,uVar11,uVar12,param_1,param_2,param_3);
        param_1 = extraout_r1_02;
        uVar11 = FUN_00015c68(uVar12 - uVar11,uVar7);
        uVar12 = uVar9 & 0xffff | param_1 << 0x10;
        uVar9 = (uVar5 & 0xffff) * uVar11;
        uVar7 = uVar11;
        if (uVar12 < uVar9) {
          bVar14 = CARRY4(uVar12,uVar5);
          uVar12 = uVar12 + uVar5;
          uVar7 = uVar11 - 1;
          if ((!bVar14) && (uVar12 < uVar9)) {
            uVar12 = uVar12 + uVar5;
            uVar7 = uVar11 - 2;
          }
        }
        iVar4 = uVar12 - uVar9;
        uVar7 = uVar7 | iVar2 << 0x10;
      }
      uVar11 = uVar5 >> 0x10;
      FUN_00015d10(iVar4,uVar11);
      iVar2 = FUN_00015c68(iVar4,uVar11);
      uVar9 = uVar8 >> 0x10 | extraout_r1_03 << 0x10;
      uVar12 = (uVar5 & 0xffff) * iVar2;
      iVar4 = iVar2;
      if (uVar9 < uVar12) {
        bVar14 = CARRY4(uVar9,uVar5);
        uVar9 = uVar9 + uVar5;
        iVar4 = iVar2 + -1;
        if ((!bVar14) && (uVar9 < uVar12)) {
          uVar9 = uVar9 + uVar5;
          iVar4 = iVar2 + -2;
        }
      }
      FUN_00015d10(uVar9 - uVar12,uVar11,uVar12,uVar9,param_1,param_2,param_3);
      iVar2 = extraout_r1_04;
      uVar11 = FUN_00015c68(uVar9 - uVar12,uVar11);
      uVar9 = uVar8 & 0xffff | iVar2 << 0x10;
      uVar12 = (uVar5 & 0xffff) * uVar11;
      uVar8 = uVar11;
      if (uVar9 < uVar12) {
        uVar8 = uVar11 - 1;
        if ((!CARRY4(uVar9,uVar5)) && (uVar9 + uVar5 < uVar12)) {
          uVar8 = uVar11 - 2;
        }
      }
      uVar11 = uVar8 | iVar4 << 0x10;
      goto LAB_00016328;
    }
    iVar4 = LZCOUNT(uVar5);
    uVar7 = uVar5;
    if (iVar4 != 0) {
      uVar7 = uVar5 << iVar4;
      uVar5 = uVar8 >> (0x20U - iVar4 & 0xff);
      uVar8 = uVar8 << iVar4;
      uVar11 = uVar5 | uVar11 << iVar4;
    }
    uVar12 = uVar7 >> 0x10;
    FUN_00015d10(uVar11,uVar12,uVar5,iVar4,param_1,param_2,param_3);
    iVar2 = FUN_00015c68(uVar11,uVar12);
    uVar5 = uVar8 >> 0x10 | extraout_r1 << 0x10;
    uVar11 = (uVar7 & 0xffff) * iVar2;
    iVar4 = iVar2;
    if (uVar5 < uVar11) {
      bVar14 = CARRY4(uVar5,uVar7);
      uVar5 = uVar5 + uVar7;
      iVar4 = iVar2 + -1;
      if ((!bVar14) && (uVar5 < uVar11)) {
        uVar5 = uVar5 + uVar7;
        iVar4 = iVar2 + -2;
      }
    }
    FUN_00015d10(uVar5 - uVar11,uVar12,uVar11,uVar5,param_1,param_2,param_3);
    uVar5 = FUN_00015c68(uVar5 - uVar11,uVar12);
    uVar12 = uVar8 & 0xffff | extraout_r1_00 << 0x10;
    uVar8 = (uVar7 & 0xffff) * uVar5;
    uVar11 = uVar5;
    if (uVar12 < uVar8) {
      uVar11 = uVar5 - 1;
      if ((!CARRY4(uVar12,uVar7)) && (uVar12 + uVar7 < uVar8)) {
        uVar11 = uVar5 - 2;
      }
    }
    uVar11 = uVar11 | iVar4 << 0x10;
LAB_00016318:
    uVar7 = 0;
  }
  else {
    if (param_4 <= uVar11) {
      iVar4 = LZCOUNT(param_4);
      if (iVar4 != 0) {
        uVar12 = 0x20 - iVar4;
        uVar7 = uVar11 >> (uVar12 & 0xff);
        uVar9 = uVar5 >> (uVar12 & 0xff) | param_4 << iVar4;
        uVar10 = uVar8 >> (uVar12 & 0xff) | uVar11 << iVar4;
        uVar11 = uVar9 >> 0x10;
        FUN_00015d10(uVar7,uVar11,uVar7,param_4,param_1,uVar7,param_3);
        iVar2 = extraout_r1_05;
        iVar3 = FUN_00015c68(uVar7,uVar11);
        uVar7 = uVar10 >> 0x10 | iVar2 << 0x10;
        uVar12 = (uVar9 & 0xffff) * iVar3;
        iVar2 = iVar3;
        if (uVar7 < uVar12) {
          bVar14 = CARRY4(uVar7,uVar9);
          uVar7 = uVar7 + uVar9;
          iVar2 = iVar3 + -1;
          if ((!bVar14) && (uVar7 < uVar12)) {
            uVar7 = uVar7 + uVar9;
            iVar2 = iVar3 + -2;
          }
        }
        iVar13 = uVar7 - uVar12;
        FUN_00015d10(iVar13,uVar11);
        iVar3 = extraout_r1_06;
        uVar7 = FUN_00015c68(iVar13,uVar11);
        uVar12 = uVar10 & 0xffff | iVar3 << 0x10;
        uVar10 = (uVar9 & 0xffff) * uVar7;
        uVar11 = uVar7;
        if (uVar12 < uVar10) {
          bVar14 = CARRY4(uVar12,uVar9);
          uVar12 = uVar12 + uVar9;
          uVar11 = uVar7 - 1;
          if ((!bVar14) && (uVar12 < uVar10)) {
            uVar12 = uVar12 + uVar9;
            uVar11 = uVar7 - 2;
          }
        }
        uVar11 = uVar11 | iVar2 << 0x10;
        lVar1 = (ulonglong)(uVar5 << iVar4) * (ulonglong)uVar11;
        uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
        if (uVar5 <= uVar12 - uVar10) {
          uVar7 = (uint)(uVar5 == uVar12 - uVar10);
          if ((uint)lVar1 <= uVar8 << iVar4) {
            uVar7 = 0;
          }
          if (uVar7 == 0) goto LAB_00016328;
        }
        uVar11 = uVar11 - 1;
        goto LAB_00016318;
      }
      bVar14 = param_4 <= uVar11;
      if (uVar11 <= param_4) {
        bVar14 = uVar5 <= uVar8;
      }
      if (bVar14) {
        uVar7 = 0;
        uVar11 = 1;
        goto LAB_00016328;
      }
    }
    uVar7 = 0;
    uVar11 = uVar7;
  }
LAB_00016328:
  if (uVar6 != 0) {
    bVar14 = uVar11 != 0;
    uVar11 = -uVar11;
    uVar7 = -(uVar7 + bVar14);
  }
  return CONCAT44(uVar7,uVar11);
}




undefined8 FUN_00016348(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      uVar3 = param_1;
      uVar12 = param_2;
      uVar10 = param_3;
      if (param_3 == 0) {
        param_3 = FUN_00015c68(1,0);
      }
      iVar6 = LZCOUNT(param_3);
      if (iVar6 == 0) {
        iVar6 = param_2 - param_3;
        uVar9 = 1;
        uVar7 = param_1;
      }
      else {
        param_3 = param_3 << iVar6;
        uVar5 = param_2 >> (0x20U - iVar6 & 0xff);
        uVar7 = param_1 << iVar6;
        uVar9 = param_3 >> 0x10;
        uVar11 = param_1 >> (0x20U - iVar6 & 0xff) | param_2 << iVar6;
        FUN_00015d10(uVar5,uVar9);
        iVar6 = FUN_00015c68(uVar5,uVar9);
        uVar8 = uVar11 >> 0x10 | extraout_r1_01 << 0x10;
        uVar5 = (param_3 & 0xffff) * iVar6;
        iVar2 = iVar6;
        if (uVar8 < uVar5) {
          bVar14 = CARRY4(uVar8,param_3);
          uVar8 = uVar8 + param_3;
          iVar2 = iVar6 + -1;
          if ((!bVar14) && (uVar8 < uVar5)) {
            uVar8 = uVar8 + param_3;
            iVar2 = iVar6 + -2;
          }
        }
        FUN_00015d10(uVar8 - uVar5,uVar9,uVar5,uVar8,uVar3,uVar12,uVar10);
        uVar5 = FUN_00015c68(uVar8 - uVar5,uVar9);
        uVar8 = uVar11 & 0xffff | extraout_r1_02 << 0x10;
        uVar11 = (param_3 & 0xffff) * uVar5;
        uVar9 = uVar5;
        if (uVar8 < uVar11) {
          bVar14 = CARRY4(uVar8,param_3);
          uVar8 = uVar8 + param_3;
          uVar9 = uVar5 - 1;
          if ((!bVar14) && (uVar8 < uVar11)) {
            uVar8 = uVar8 + param_3;
            uVar9 = uVar5 - 2;
          }
        }
        iVar6 = uVar8 - uVar11;
        uVar9 = uVar9 | iVar2 << 0x10;
      }
      uVar5 = param_3 >> 0x10;
      FUN_00015d10(iVar6,uVar5);
      iVar2 = FUN_00015c68(iVar6,uVar5);
      uVar11 = uVar7 >> 0x10 | extraout_r1_03 << 0x10;
      uVar8 = (param_3 & 0xffff) * iVar2;
      iVar6 = iVar2;
      if (uVar11 < uVar8) {
        bVar14 = CARRY4(uVar11,param_3);
        uVar11 = uVar11 + param_3;
        iVar6 = iVar2 + -1;
        if ((!bVar14) && (uVar11 < uVar8)) {
          uVar11 = uVar11 + param_3;
          iVar6 = iVar2 + -2;
        }
      }
      FUN_00015d10(uVar11 - uVar8,uVar5,uVar8,uVar11,uVar3,uVar12,uVar10);
      uVar12 = FUN_00015c68(uVar11 - uVar8,uVar5);
      uVar10 = uVar7 & 0xffff | extraout_r1_04 << 0x10;
      uVar7 = (param_3 & 0xffff) * uVar12;
      uVar3 = uVar12;
      if (uVar10 < uVar7) {
        uVar3 = uVar12 - 1;
        if ((!CARRY4(uVar10,param_3)) && (uVar10 + param_3 < uVar7)) {
          uVar3 = uVar12 - 2;
        }
      }
      uVar3 = uVar3 | iVar6 << 0x10;
      goto LAB_0001671c;
    }
    iVar6 = LZCOUNT(param_3);
    uVar12 = param_2;
    uVar9 = param_3;
    uVar3 = param_1;
    if (iVar6 != 0) {
      uVar9 = param_3 << iVar6;
      uVar3 = param_1 << iVar6;
      uVar12 = param_1 >> (0x20U - iVar6 & 0xff) | param_2 << iVar6;
    }
    uVar10 = uVar9 >> 0x10;
    FUN_00015d10(uVar12,uVar10,param_3,iVar6,param_1,param_2,param_3);
    iVar2 = FUN_00015c68(uVar12,uVar10);
    uVar7 = uVar3 >> 0x10 | extraout_r1 << 0x10;
    uVar12 = (uVar9 & 0xffff) * iVar2;
    iVar6 = iVar2;
    if (uVar7 < uVar12) {
      bVar14 = CARRY4(uVar7,uVar9);
      uVar7 = uVar7 + uVar9;
      iVar6 = iVar2 + -1;
      if ((!bVar14) && (uVar7 < uVar12)) {
        uVar7 = uVar7 + uVar9;
        iVar6 = iVar2 + -2;
      }
    }
    FUN_00015d10(uVar7 - uVar12,uVar10,uVar12,uVar7,param_1,param_2,param_3);
    uVar12 = FUN_00015c68(uVar7 - uVar12,uVar10);
    uVar10 = uVar3 & 0xffff | extraout_r1_00 << 0x10;
    uVar7 = (uVar9 & 0xffff) * uVar12;
    uVar3 = uVar12;
    if (uVar10 < uVar7) {
      uVar3 = uVar12 - 1;
      if ((!CARRY4(uVar10,uVar9)) && (uVar10 + uVar9 < uVar7)) {
        uVar3 = uVar12 - 2;
      }
    }
    uVar3 = uVar3 | iVar6 << 0x10;
LAB_0001670c:
    uVar9 = 0;
  }
  else {
    if (param_4 <= param_2) {
      iVar6 = LZCOUNT(param_4);
      if (iVar6 != 0) {
        uVar3 = 0x20 - iVar6;
        uVar9 = param_2 >> (uVar3 & 0xff);
        uVar12 = param_3 >> (uVar3 & 0xff) | param_4 << iVar6;
        uVar10 = param_1 >> (uVar3 & 0xff) | param_2 << iVar6;
        uVar3 = uVar12 >> 0x10;
        FUN_00015d10(uVar9,uVar3,param_3,param_4,param_1,param_2,param_3);
        iVar2 = extraout_r1_05;
        iVar4 = FUN_00015c68(uVar9,uVar3);
        uVar7 = uVar10 >> 0x10 | iVar2 << 0x10;
        uVar9 = (uVar12 & 0xffff) * iVar4;
        iVar2 = iVar4;
        if (uVar7 < uVar9) {
          bVar14 = CARRY4(uVar7,uVar12);
          uVar7 = uVar7 + uVar12;
          iVar2 = iVar4 + -1;
          if ((!bVar14) && (uVar7 < uVar9)) {
            uVar7 = uVar7 + uVar12;
            iVar2 = iVar4 + -2;
          }
        }
        iVar13 = uVar7 - uVar9;
        FUN_00015d10(iVar13,uVar3);
        iVar4 = extraout_r1_06;
        uVar9 = FUN_00015c68(iVar13,uVar3);
        uVar10 = uVar10 & 0xffff | iVar4 << 0x10;
        uVar7 = (uVar12 & 0xffff) * uVar9;
        uVar3 = uVar9;
        if (uVar10 < uVar7) {
          bVar14 = CARRY4(uVar10,uVar12);
          uVar10 = uVar10 + uVar12;
          uVar3 = uVar9 - 1;
          if ((!bVar14) && (uVar10 < uVar7)) {
            uVar10 = uVar10 + uVar12;
            uVar3 = uVar9 - 2;
          }
        }
        uVar3 = uVar3 | iVar2 << 0x10;
        lVar1 = (ulonglong)(param_3 << iVar6) * (ulonglong)uVar3;
        uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
        if (uVar9 <= uVar10 - uVar7) {
          uVar9 = (uint)(uVar9 == uVar10 - uVar7);
          if ((uint)lVar1 <= param_1 << iVar6) {
            uVar9 = 0;
          }
          if (uVar9 == 0) goto LAB_0001671c;
        }
        uVar3 = uVar3 - 1;
        goto LAB_0001670c;
      }
      bVar14 = param_4 <= param_2;
      if (param_2 <= param_4) {
        bVar14 = param_3 <= param_1;
      }
      if (bVar14) {
        uVar3 = 1;
        uVar9 = 0;
        goto LAB_0001671c;
      }
    }
    uVar3 = 0;
    uVar9 = uVar3;
  }
LAB_0001671c:
  return CONCAT44(uVar9,uVar3);
}




/* WARNING: Removing unreachable block (ram,0x00016754) */

void FUN_00016728(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DT_INIT();
  puVar2 = (undefined4 *)0x21018;
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



