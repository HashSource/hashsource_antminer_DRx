// Decompiled: miner-monitor_6e8d0fa6a1becac0


int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = FUN_0000a2e8();
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00009fa0(int param_1)

{
  int iVar1;
  undefined1 auStack_1020 [4104];
  
  iVar1 = FUN_0000b088();
  if (iVar1 == 0) {
    puts("process exist!");
  }
  else {
    if (1 < param_1) {
      sleep(0x28);
    }
    FUN_0000afe8();
    FUN_0000e444(&DAT_0001b3a8,&DAT_0001d410);
    FUN_00010d34(DAT_0001d420);
    iVar1 = pthread_create(&DAT_0001d404,(pthread_attr_t *)0x0,FUN_0000a7f4,(void *)0x0);
    if (iVar1 == 0) {
      sleep(1);
      if (DAT_0001b394 == 1) {
        puts("Web  Switch is OFF!");
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      while (iVar1 = FUN_0000aa14(), iVar1 == -1) {
        sleep(0x1e);
      }
      iVar1 = FUN_0000a938();
      if (iVar1 == -1) {
        DAT_0001d434 = &LAB_00010cd4;
        DAT_0001d43c = &LAB_00010d04;
        puts("encrypt connect failed.");
        close(DAT_000258bc);
        FUN_0000aa14();
      }
      else {
        DAT_0001d434 = &LAB_00010c84;
        DAT_0001d43c = &LAB_00010cac;
      }
      FUN_0000ae1c(0x1e);
      signal(10,FUN_0000ad18);
      signal(0xc,FUN_0000ad18);
      signal(2,FUN_0000a3ec);
      signal(0xf,FUN_0000a3ec);
      DAT_0001b398 = pthread_create(&DAT_0001f464,(pthread_attr_t *)0x0,FUN_0000a680,(void *)0x0);
      if ((DAT_0001b398 == 0) &&
         (DAT_0001b398 = pthread_create(&DAT_0001c3cc,(pthread_attr_t *)0x0,FUN_0000a514,(void *)0x0), DAT_0001b398 == 0
         )) {
        while (DAT_0001b2ec != '\0') {
          if (((DAT_0001b3b0 + 1) % 0x14 == DAT_0001b3ac) || ((DAT_0001d418 + 1) % 0x14 == DAT_0001d414)) {
            puts("the queue is full");
            sleep(5);
          }
          else {
            iVar1 = FUN_0000adb0();
            if (iVar1 == -1) {
              puts("Bad Package REV!");
              sleep(1);
            }
            else if (DAT_0001e457 == 'f') {
              puts("this is respond ");
              memcpy(auStack_1020,&DAT_0001e460,0x1003);
              FUN_0000e598(&DAT_0001d410,_DAT_0001e454,DAT_0001e458,DAT_0001e45c);
            }
            else {
              puts("this is command");
              memcpy(auStack_1020,&DAT_0001e460,0x1003);
              FUN_0000e598(&DAT_0001b3a8,_DAT_0001e454,DAT_0001e458,DAT_0001e45c);
            }
          }
        }
        return 1;
      }
    }
    puts("Create pthread error!");
  }
  return 1;
}




void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(FUN_00009fa0,param_2,&stack0x00000004,FUN_00010fe0,&DAT_00011044,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Removing unreachable block (ram,0x0000a2fc) */

void FUN_0000a2e8(void)

{
  __gmon_start__();
  return;
}




/* WARNING: Removing unreachable block (ram,0x0000a324) */
/* WARNING: Removing unreachable block (ram,0x0000a32c) */
/* WARNING: Removing unreachable block (ram,0x0000a330) */

void FUN_0000a30c(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_0001b390 != '\0') {
    return;
  }
  FUN_0000a30c();
  DAT_0001b390 = 1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x0000a364) */
/* WARNING: Removing unreachable block (ram,0x0000a36c) */
/* WARNING: Removing unreachable block (ram,0x0000a3cc) */
/* WARNING: Removing unreachable block (ram,0x0000a370) */

void _INIT_0(void)

{
  return;
}




void FUN_0000a3ec(void)

{
  int iVar1;
  char *__s;
  _STACK *p_Var2;
  
  puts("oops! stop by ctrl+c or kill!!!----------------------------------------");
  iVar1 = fileno(DAT_0001c3c8);
  iVar1 = flock(iVar1,8);
  if (iVar1 == 0) {
    __s = "unlock fd_pid_conf succeed!";
  }
  else {
    __s = "unlock fd_pid_conf failed!";
  }
  puts(__s);
  fclose(DAT_0001c3c8);
  FUN_00010f48(DAT_0001d420);
  DAT_0001b2ec = 0;
  pthread_join(DAT_0001d404,(void **)0x0);
  pthread_join(DAT_0001f464,(void **)0x0);
  pthread_join(DAT_0001c3cc,(void **)0x0);
  FUN_0000e49c(&DAT_0001b3a8);
  FUN_0000e49c(&DAT_0001d410);
  SSL_shutdown(DAT_00026f98);
  SSL_free(DAT_00026f98);
  close(DAT_000258bc);
  SSL_CTX_free(DAT_00026f8c);
  CONF_modules_free();
  ERR_remove_state(0);
  ENGINE_cleanup();
  CONF_modules_unload(1);
  ERR_free_strings();
  EVP_cleanup();
  CRYPTO_cleanup_all_ex_data();
  p_Var2 = &SSL_COMP_get_compression_methods()->stack;
  sk_free(p_Var2);
                    /* WARNING: Subroutine does not return */
  exit(0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000a514(void)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_1020 [4100];
  
  do {
    if (DAT_0001b2ec == '\0') {
      return;
    }
    while (iVar1 = FUN_0000e7d8(&DAT_0001d410), iVar1 != 0) {
      DAT_0001d41c = 0;
      iVar1 = FUN_0000e62c(&DAT_0001d410,&DAT_0001b3b8);
      if (iVar1 == 0) {
        puts("respond queue  empty");
      }
      else {
        FUN_0000e698(DAT_0001d410,DAT_0001d414,DAT_0001d418,FUN_0000e75c);
        FUN_0000eb78();
        printf("response node:%s,%s----------\n",&DAT_0001b3bb,&DAT_0001c3c0);
        piVar2 = (int *)FUN_00010d90(&DAT_0001b3b8,DAT_0001d420);
        if (piVar2 == (int *)0x0) {
          puts("no cmd for responding!");
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        iVar1 = *piVar2;
        if (((*(char *)(iVar1 + 3) == '0') && (*(char *)(iVar1 + 4) == '1')) && (*(char *)(iVar1 + 5) == '\0')) {
          thunk_FUN_0000fa54(DAT_0001b2f0,&DAT_0001b3bb);
        }
        printf("Delete node:%s,%s----------\n",&DAT_0001b3bb,&DAT_0001c3c0);
        FUN_00010e24(&DAT_0001b3b8,DAT_0001d420);
        memcpy(auStack_1020,&DAT_0001b3c8,0xfff);
        FUN_0000e7f4(_DAT_0001b3b8,_DAT_0001b3bc,DAT_0001b3c0,DAT_0001b3c4);
      }
      DAT_0001b2f4 = 0;
      if (DAT_0001b2ec == '\0') {
        DAT_0001b2f4 = 0;
        return;
      }
    }
  } while( true );
}




void FUN_0000a680(void)

{
  int iVar1;
  undefined1 auStack_1020 [4100];
  
  while( true ) {
    if (DAT_0001b2ec == '\0') {
      return;
    }
    puts("next command!");
    if (DAT_0001b394 == 1) break;
    iVar1 = FUN_0000e62c(&DAT_0001b3a8,&DAT_0001d444);
    if (iVar1 == 0) {
      puts("queue empty1");
      sleep(1);
    }
    else {
      printf("get a command head:%s!\n",&DAT_0001d444);
      printf("get a command:%s!\n",0x1d447);
      FUN_0000e698(DAT_0001b3a8,DAT_0001b3ac,DAT_0001b3b0,FUN_0000e75c);
      memcpy(auStack_1020,&DAT_0001d454,0xfff);
      iVar1 = FUN_0000f854(DAT_0001d444,DAT_0001d448,DAT_0001d44c,DAT_0001d450);
      if (iVar1 != 0) {
        puts("after deal_cmd()");
        printf("get a command nonce:%s!\n",&DAT_0001e44c);
        DAT_0001b2f4 = 0;
        FUN_00010ec0(&DAT_0001d444,DAT_0001d420,DAT_0001d420);
        printf("new node:%s,%s==========\n",0x1d447,&DAT_0001e44c);
        memcpy(auStack_1020,&DAT_0001d454,0xfff);
        FUN_0000e7f4(DAT_0001d444,DAT_0001d448,DAT_0001d44c,DAT_0001d450);
      }
    }
  }
  puts("Web  Switch is OFF!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}




undefined4 FUN_0000a7f4(void)

{
  char *pcVar1;
  undefined1 auStack_20 [16];
  
  if (DAT_0001b2ec != '\0') {
    do {
      pcVar1 = (char *)FUN_0000f990(DAT_0001b2f0,"api-switch",auStack_20);
      if ((((*pcVar1 == 'o') && (pcVar1[1] == 'f')) && (pcVar1[2] == 'f')) && (pcVar1[3] == '\0')) {
        DAT_0001b394 = 1;
      }
      printf("key_switch = %s\n",auStack_20);
      sleep(0xf);
    } while (DAT_0001b2ec != '\0');
  }
  puts("will bi exited###################");
  return 0;
}




void FUN_0000a8a0(SSL *param_1)

{
  X509 *a;
  X509_NAME *pXVar1;
  char *pcVar2;
  
  a = SSL_get_peer_certificate(param_1);
  if (a != (X509 *)0x0) {
    puts("A digital certificate information:");
    pXVar1 = X509_get_subject_name(a);
    pcVar2 = X509_NAME_oneline(pXVar1,(char *)0x0,0);
    printf("certificate: %s\n",pcVar2);
    free(pcVar2);
    pXVar1 = X509_get_issuer_name(a);
    pcVar2 = X509_NAME_oneline(pXVar1,(char *)0x0,0);
    printf("Issued by the: %s\n",pcVar2);
    free(pcVar2);
    X509_free(a);
    return;
  }
  puts(&DAT_0001129c);
  return;
}




undefined4 FUN_0000a938(void)

{
  SSL_METHOD *meth;
  int iVar1;
  SSL_CIPHER *pSVar2;
  char *pcVar3;
  
  SSL_library_init();
  OPENSSL_add_all_algorithms_noconf();
  SSL_load_error_strings();
  meth = TLSv1_client_method();
  DAT_00026f8c = SSL_CTX_new(meth);
  if (DAT_00026f8c == (SSL_CTX *)0x0) {
    ERR_print_errors_fp(stdout);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  DAT_00026f98 = SSL_new(DAT_00026f8c);
  SSL_set_fd(DAT_00026f98,DAT_000258bc);
  iVar1 = SSL_connect(DAT_00026f98);
  if (iVar1 != -1) {
    pSVar2 = SSL_get_current_cipher(DAT_00026f98);
    pcVar3 = SSL_CIPHER_get_name(pSVar2);
    iVar1 = strcmp("(NONE)",pcVar3);
    if (iVar1 != 0) {
      pSVar2 = SSL_get_current_cipher(DAT_00026f98);
      pcVar3 = SSL_CIPHER_get_name(pSVar2);
      printf("Connected with %s encryption\n",pcVar3);
      FUN_0000a8a0(DAT_00026f98);
      return 1;
    }
  }
  ERR_print_errors_fp(stderr);
  return 0xffffffff;
}




int FUN_0000aa14(void)

{
  char *pcVar1;
  long lVar2;
  hostent *phVar3;
  int iVar4;
  sockaddr local_5c;
  char acStack_4c [60];
  
  if (DAT_0001b394 == 1) {
    puts("Web  Switch is OFF!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  memset(acStack_4c,0,0x3c);
  thunk_FUN_0000f990(DAT_0001b2f0,"ip_server",acStack_4c);
  pcVar1 = strchr(acStack_4c,0x3a);
  *pcVar1 = '\0';
  lVar2 = strtol(pcVar1 + 1,(char **)0x0,10);
  phVar3 = gethostbyname(acStack_4c);
  if (phVar3 != (hostent *)0x0) {
    DAT_000258bc = socket(2,1,0);
    if (DAT_000258bc != -1) {
      local_5c.sa_data._0_2_ = (ushort)(byte)((uint)lVar2 >> 8) | (ushort)(lVar2 << 8);
      local_5c.sa_family = 2;
      local_5c.sa_data._2_4_ = *(undefined4 *)*phVar3->h_addr_list;
      local_5c.sa_data[6] = '\0';
      local_5c.sa_data[7] = '\0';
      local_5c.sa_data[8] = '\0';
      local_5c.sa_data[9] = '\0';
      local_5c.sa_data[10] = '\0';
      local_5c.sa_data[0xb] = '\0';
      local_5c.sa_data[0xc] = '\0';
      local_5c.sa_data[0xd] = '\0';
      iVar4 = connect(DAT_000258bc,&local_5c,0x10);
      if (iVar4 == -1) {
        puts("connect failed");
        DAT_0001b380 = 0;
      }
      else {
        DAT_0001b380 = 1;
        puts("server connected");
      }
      return iVar4;
    }
    perror("socket");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  perror("gethostbyname");
                    /* WARNING: Subroutine does not return */
  exit(1);
}




void FUN_0000ace4(__time_t param_1,__time_t param_2)

{
  itimerval local_18;
  
  local_18.it_interval.tv_usec = 0;
  local_18.it_value.tv_usec = 0;
  local_18.it_interval.tv_sec = param_1;
  local_18.it_value.tv_sec = param_2;
  setitimer(ITIMER_REAL,&local_18,(itimerval *)0x0);
  return;
}




void FUN_0000ad18(int param_1)

{
  int iVar1;
  socklen_t sStack_7c;
  char acStack_78 [108];
  
  printf("receive signal :%d\n",param_1);
  if (param_1 == 10) {
    FUN_0000ace4(6000000,6000000);
    DAT_0001b380 = 0;
    close(DAT_000258bc);
    FUN_0000e4cc(&DAT_0001b3a8);
    FUN_0000e4cc(&DAT_0001d410);
    return;
  }
  if (param_1 != 0xc) {
    return;
  }
  FUN_0000e4cc(&DAT_0001b3a8);
  FUN_0000e4cc(&DAT_0001d410);
  FUN_0000ace4(0x1e,0x1e);
  sStack_7c = 0x68;
  if (DAT_0001b394 != 1) {
    getsockopt(DAT_000258bc,6,0xb,acStack_78,&sStack_7c);
    if (acStack_78[0] == '\x01') {
      puts("Connect to normal!!!");
    }
    else {
      puts("Off Line!!! in tcp_state()");
      DAT_0001b380 = 0;
      memcpy(&stack0xffffef80,&DAT_0001c3e4,0xfff);
      FUN_0000e7f4(DAT_0001c3d4,DAT_0001c3d8,DAT_0001c3dc,DAT_0001c3e0);
      memset(&DAT_00026d24,0,0x46);
      iVar1 = FUN_0000aa14();
      if (iVar1 == -1) {
        puts("tcp_state, sock_connect_server failed!");
      }
      else {
        iVar1 = FUN_0000a938();
        if (iVar1 == -1) {
          DAT_0001d434 = &LAB_00010cd4;
          DAT_0001d43c = &LAB_00010d04;
          close(DAT_000258bc);
          FUN_0000aa14();
          puts("encrypt connect failed.");
        }
        else {
          DAT_0001d434 = &LAB_00010c84;
          DAT_0001d43c = &LAB_00010cac;
        }
      }
    }
    return;
  }
  puts("Web  Switch is OFF!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}




undefined4 FUN_0000adb0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0000e8dc();
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 1;
    }
    return uVar2;
  }
  puts("OFF LINE !!!!Please Wait!!! in recv_serpkg_struct() in client");
  do {
    while (DAT_0001b380 != 0) {
      iVar1 = FUN_0000e8dc();
      if (0 < iVar1) {
        return 1;
      }
    }
    sleep(0x1e);
    iVar1 = FUN_0000e8dc();
  } while (iVar1 < 1);
  return 1;
}




void FUN_0000ae1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0000ace4(0x1e,0x1e,param_3,param_4,param_4);
  signal(0xe,(__sighandler_t)0xab74);
  signal(0xd,(__sighandler_t)&LAB_0000a3e0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000ae50(void)

{
  int iVar1;
  undefined1 auStack_1020 [4104];
  
  while (DAT_0001b2ec != '\0') {
    if (((DAT_0001b3b0 + 1) % 0x14 == DAT_0001b3ac) || ((DAT_0001d418 + 1) % 0x14 == DAT_0001d414)) {
      puts("the queue is full");
      sleep(5);
    }
    else {
      iVar1 = FUN_0000adb0();
      if (iVar1 == -1) {
        puts("Bad Package REV!");
        sleep(1);
      }
      else if (DAT_0001e457 == 'f') {
        puts("this is respond ");
        memcpy(auStack_1020,&DAT_0001e460,0x1003);
        FUN_0000e598(&DAT_0001d410,_DAT_0001e454,DAT_0001e458,DAT_0001e45c);
      }
      else {
        puts("this is command");
        memcpy(auStack_1020,&DAT_0001e460,0x1003);
        FUN_0000e598(&DAT_0001b3a8,_DAT_0001e454,DAT_0001e458,DAT_0001e45c);
      }
    }
  }
  return;
}




void FUN_0000afe8(void)

{
  sigset_t sStack_88;
  
  sigemptyset(&sStack_88);
  sigfillset(&sStack_88);
  sigdelset(&sStack_88,2);
  sigdelset(&sStack_88,0xd);
  return;
}




void FUN_0000b020(void)

{
  __pid_t _Var1;
  int __fd;
  int iVar2;
  
  _Var1 = fork();
  if (_Var1 < 0) {
LAB_0000b074:
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (_Var1 == 0) {
    setsid();
    _Var1 = fork();
    if (_Var1 < 1) {
      if (_Var1 == 0) {
        __fd = 0;
        do {
          iVar2 = __fd + 1;
          close(__fd);
          __fd = iVar2;
        } while (iVar2 != 0x100);
        chdir("/root/test");
        umask(0);
        return;
      }
      goto LAB_0000b074;
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}




undefined4 FUN_0000b088(void)

{
  int iVar1;
  size_t __size;
  char *__name;
  char *pcVar2;
  __pid_t _Var3;
  
  iVar1 = access(DAT_0001b2f8,0);
  pcVar2 = DAT_0001b2f8;
  if (iVar1 == 0) {
    DAT_0001c3c8 = fopen(DAT_0001b2f8,"w");
    if (DAT_0001c3c8 != (FILE *)0x0) {
      iVar1 = fileno(DAT_0001c3c8);
      iVar1 = flock(iVar1,6);
      if (iVar1 == 0) {
        _Var3 = getpid();
        fprintf(DAT_0001c3c8,"The thread executing miner-monitor:%d",_Var3);
        puts("exist,write and lock!");
        return 1;
      }
    }
    fclose(DAT_0001c3c8);
    return 0;
  }
  __size = strlen(DAT_0001b2f8);
  __name = (char *)malloc(__size);
  memcpy(__name,pcVar2,__size + 1);
  pcVar2 = __name;
  while (pcVar2 = strchr(pcVar2 + 1,0x2f), pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
    iVar1 = access(__name,0);
    if (iVar1 != 0) {
      mkdir(__name,0x1ff);
    }
    *pcVar2 = '/';
  }
  DAT_0001c3c8 = fopen(DAT_0001b2f8,"w");
  if ((DAT_0001c3c8 != (FILE *)0x0) && (puts("created!"), DAT_0001c3c8 != (FILE *)0x0)) {
    iVar1 = fileno(DAT_0001c3c8);
    iVar1 = flock(iVar1,2);
    if (iVar1 == 0) {
      _Var3 = getpid();
      fprintf(DAT_0001c3c8,"The thread executing miner-monitor:%d",_Var3);
      puts("locked!");
      return 1;
    }
  }
  return 1;
}




void FUN_0000b208(char *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  size_t sVar3;
  
  sVar3 = strlen(param_1);
  if (sVar3 == 0) {
    return;
  }
  param_1 = param_1 + sVar3;
  bVar2 = param_1[-1];
  if (bVar2 == param_2) {
    do {
      sVar3 = sVar3 - 1;
      param_1[-1] = '\0';
      if (sVar3 == 0) {
        return;
      }
      pbVar1 = (byte *)(param_1 + -2);
      param_1 = param_1 + -1;
    } while ((uint)*pbVar1 == (uint)bVar2);
    return;
  }
  return;
}




uint FUN_0000b250(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort **ppuVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)*param_1;
  if (pbVar6 != (byte *)0x0) {
    ppuVar2 = __ctype_b_loc();
    do {
      pbVar5 = pbVar6;
      pbVar6 = pbVar5 + 1;
    } while (((*ppuVar2)[*pbVar5] & 0x2000) != 0);
    if (*pbVar5 != 0) {
      *param_2 = pbVar5;
      do {
        pbVar5 = pbVar6;
        uVar4 = (uint)*pbVar5;
        if (uVar4 == 0) {
          return 0xffffffff;
        }
      } while ((((*ppuVar2)[uVar4] & 0x2000) == 0) && (pbVar6 = pbVar5 + 1, uVar4 != 0x3d));
      *pbVar5 = 0;
      while( true ) {
        uVar4 = (uint)pbVar5[1];
        if (uVar4 == 0) break;
        uVar1 = (*ppuVar2)[uVar4];
        if (((uVar1 & 0x2000) == 0) && (uVar4 != 0x3d)) {
          if (uVar4 != 0x22) {
            return 0xffffffff;
          }
          *param_3 = pbVar5 + 2;
          pcVar3 = strchr((char *)(pbVar5 + 2),0x22);
          if (pcVar3 == (char *)0x0) {
            return 0xffffffff;
          }
          *pcVar3 = '\0';
          return uVar1 & 0x2000;
        }
        pbVar5 = pbVar5 + 1;
      }
    }
  }
  return 0xffffffff;
}




uint FUN_0000b340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort **ppuVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  byte *pbVar7;
  ushort *puVar8;
  
  pbVar7 = (byte *)*param_1;
  if (pbVar7 != (byte *)0x0) {
    ppuVar2 = __ctype_b_loc();
    puVar8 = *ppuVar2;
    do {
      pbVar4 = pbVar7;
      pbVar7 = pbVar4 + 1;
    } while ((puVar8[*pbVar4] & 0x2000) != 0);
    if ((*pbVar4 != 0) && (iVar3 = strncmp((char *)pbVar4,"option",6), iVar3 == 0)) {
      uVar6 = (uint)pbVar4[6];
      pbVar7 = pbVar4 + 6;
      if ((puVar8[uVar6] & 0x2000) != 0) {
        pbVar4 = pbVar4 + 7;
        do {
          pbVar7 = pbVar4;
          uVar6 = (uint)*pbVar7;
          pbVar4 = pbVar7 + 1;
        } while ((puVar8[uVar6] & 0x2000) != 0);
      }
      if (uVar6 != 0) {
        *param_2 = pbVar7;
        do {
          pbVar4 = pbVar7;
          pbVar7 = pbVar4 + 1;
          if (*pbVar7 == 0) {
            return 0xffffffff;
          }
        } while (((*ppuVar2)[*pbVar7] & 0x2000) == 0);
        *pbVar7 = 0;
        pbVar7 = pbVar4 + 2;
        do {
          pbVar4 = pbVar7 + 1;
          uVar6 = (uint)*pbVar7;
          if (uVar6 == 0) {
            return 0xffffffff;
          }
          uVar1 = (*ppuVar2)[uVar6];
          pbVar7 = pbVar4;
        } while ((uVar1 & 0x2000) != 0);
        if (uVar6 == 0x27) {
          *param_3 = pbVar4;
          pcVar5 = strchr((char *)pbVar4,0x27);
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
            return uVar1 & 0x2000;
          }
        }
      }
    }
  }
  return 0xffffffff;
}




/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_0000b46c(char *param_1)

{
  char *pcVar1;
  FILE *__stream;
  char *pcVar2;
  size_t sVar3;
  ushort **ppuVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte *__s1;
  int iVar8;
  byte *local_338;
  char *local_334;
  char *local_330;
  byte abStack_32c [776];
  
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    piVar7 = __errno_location();
    pcVar2 = strerror(*piVar7);
    printf("can\'t open \'%s\' as config file: %s\n",param_1,pcVar2);
  }
  else {
    iVar8 = 0;
LAB_0000b494:
    pcVar2 = fgets((char *)abStack_32c,0x302,__stream);
    if (pcVar2 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      sVar3 = strlen((char *)abStack_32c);
      if (sVar3 < 0x301) {
        if (sVar3 != 0) {
          ppuVar4 = __ctype_b_loc();
          __s1 = abStack_32c;
          do {
            if (((*ppuVar4)[*__s1] & 0x2000) == 0) {
              if ((*__s1 != 0x23) && (iVar5 = strncmp((char *)__s1,"config",6), iVar5 != 0)) {
                memcpy(abStack_32c,__s1,sVar3);
                abStack_32c[sVar3] = 0;
                local_338 = abStack_32c;
                iVar6 = FUN_0000b340(&local_338,&local_334,&local_330);
                pcVar2 = local_334;
                iVar5 = DAT_0001b3a0;
                if (iVar6 == 0) {
                  if (DAT_0001b3a0 < 0x28) {
                    sVar3 = strlen(local_334);
                    pcVar1 = local_330;
                    if (sVar3 < 0x81) {
                      sVar3 = strlen(local_330);
                      if (sVar3 < 0x201) {
                        strncpy(&DAT_00024490 + iVar5 * 0x81,pcVar2,0x81);
                        FUN_0000b208(pcVar1,0x2f);
                        iVar5 = DAT_0001b3a0 + 1;
                        strncpy(&DAT_0001f468 + DAT_0001b3a0 * 0x201,local_330,0x201);
                        DAT_0001b3a0 = iVar5;
                      }
                      else {
                        printf("value to long %s, line %d:%d\n",param_1,iVar8,(int)local_338 - (int)abStack_32c);
                      }
                    }
                    else {
                      printf("var name to long %s, line %d:%d\n",param_1,iVar8,(int)local_338 - (int)abStack_32c);
                    }
                  }
                  else {
                    printf("too many vars in  %s, line %d:%d\n",param_1,iVar8,(int)local_338 - (int)abStack_32c);
                  }
                }
                else {
                  printf("error parsing %s, line %d:%d\n",param_1,iVar8,(int)local_338 - (int)abStack_32c);
                }
              }
              break;
            }
            sVar3 = sVar3 - 1;
            __s1 = __s1 + 1;
          } while (sVar3 != 0);
        }
      }
      else {
        printf("line too long, conf line skipped %s, line %d\n",param_1,iVar8);
      }
      goto LAB_0000b494;
    }
  }
  fclose(__stream);
  return DAT_0001b3a0;
}




/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_0000b6d4(char *param_1)

{
  char *pcVar1;
  FILE *__stream;
  char *pcVar2;
  size_t sVar3;
  ushort **ppuVar4;
  int iVar5;
  int *piVar6;
  byte *__src;
  int iVar7;
  int iVar8;
  byte *local_338;
  char *local_334;
  char *local_330;
  byte abStack_32c [776];
  
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    piVar6 = __errno_location();
    pcVar2 = strerror(*piVar6);
    printf("can\'t open \'%s\' as config file: %s\n",param_1,pcVar2);
  }
  else {
    iVar7 = 0;
LAB_0000b6fc:
    pcVar2 = fgets((char *)abStack_32c,0x302,__stream);
    if (pcVar2 != (char *)0x0) {
      iVar7 = iVar7 + 1;
      sVar3 = strlen((char *)abStack_32c);
      if (sVar3 < 0x301) {
        if (sVar3 != 0) {
          ppuVar4 = __ctype_b_loc();
          __src = abStack_32c;
          do {
            if (((*ppuVar4)[*__src] & 0x2000) == 0) {
              if (*__src != 0x23) {
                memcpy(abStack_32c,__src,sVar3);
                abStack_32c[sVar3] = 0;
                local_338 = abStack_32c;
                iVar5 = FUN_0000b250(&local_338,&local_334,&local_330);
                pcVar2 = local_334;
                iVar8 = DAT_0001b3a0;
                if (iVar5 == 0) {
                  if (DAT_0001b3a0 < 0x28) {
                    sVar3 = strlen(local_334);
                    pcVar1 = local_330;
                    if (sVar3 < 0x81) {
                      sVar3 = strlen(local_330);
                      if (sVar3 < 0x201) {
                        strncpy(&DAT_00024490 + iVar8 * 0x81,pcVar2,0x81);
                        FUN_0000b208(pcVar1,0x2f);
                        iVar8 = DAT_0001b3a0 + 1;
                        strncpy(&DAT_0001f468 + DAT_0001b3a0 * 0x201,local_330,0x201);
                        DAT_0001b3a0 = iVar8;
                      }
                      else {
                        printf("value to long %s, line %d:%d\n",param_1,iVar7,(int)local_338 - (int)abStack_32c);
                      }
                    }
                    else {
                      printf("var name to long %s, line %d:%d\n",param_1,iVar7,(int)local_338 - (int)abStack_32c);
                    }
                  }
                  else {
                    printf("too many vars in  %s, line %d:%d\n",param_1,iVar7,(int)local_338 - (int)abStack_32c);
                  }
                }
                else {
                  printf("error parsing %s, line %d:%d\n",param_1,iVar7,(int)local_338 - (int)abStack_32c);
                }
              }
              break;
            }
            sVar3 = sVar3 - 1;
            __src = __src + 1;
          } while (sVar3 != 0);
        }
      }
      else {
        printf("line too long, conf line skipped %s, line %d\n",param_1,iVar7);
      }
      goto LAB_0000b6fc;
    }
  }
  fclose(__stream);
  return DAT_0001b3a0;
}




void FUN_0000b9c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  printf("g_var_num == %d\n",DAT_0001b3a0,param_3,param_4,param_4);
  if (DAT_0001b3a0 < 1) {
    return;
  }
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 0x81;
    iVar2 = iVar3 * 0x201;
    iVar3 = iVar3 + 1;
    printf("%s = %s\n",&DAT_00024490 + iVar1,&DAT_0001f468 + iVar2,DAT_0001b3a0,param_4);
  } while (iVar3 < DAT_0001b3a0);
  return;
}




undefined * FUN_0000ba78(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0000b46c(DAT_0001c3d0);
  iVar1 = DAT_0001b3a0;
  if (0 < DAT_0001b3a0) {
    iVar3 = 0;
    do {
      iVar2 = strcasecmp(&DAT_00024490 + iVar3 * 0x81,param_1);
      if (iVar2 == 0) {
        DAT_0001b3a0 = 0;
        memset(&DAT_00024490,0,0x1428);
        return &DAT_0001f468 + iVar3 * 0x201;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  memset(&DAT_00024490,0,0x1428);
  DAT_0001b3a0 = 0;
  printf("get %s failed\n",param_1);
  return (undefined *)0x0;
}




size_t FUN_0000ba9c(char *param_1,int *param_2,int *param_3)

{
  FILE *__stream;
  size_t sVar1;
  void *__ptr;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  size_t unaff_r11;
  size_t local_30;
  
  __stream = fopen(param_1,"rb+");
  if (__stream == (FILE *)0x0) {
    puts("open error0");
    local_30 = 0;
  }
  else {
    fseek(__stream,0,2);
    sVar1 = ftell(__stream);
    if (sVar1 == 0) {
      local_30 = 0;
    }
    else {
      fseek(__stream,0,0);
      __ptr = malloc(sVar1 + 100);
      fread(__ptr,1,sVar1,__stream);
      fclose(__stream);
      uVar2 = FUN_0000d9d8(__ptr);
      local_30 = FUN_0000d9fc();
      sVar1 = local_30 << 2;
      pvVar3 = malloc(sVar1);
      *param_2 = (int)pvVar3;
      pvVar3 = malloc(sVar1);
      if (0 < (int)local_30) {
        unaff_r11 = 0;
        sVar1 = unaff_r11;
      }
      *param_3 = (int)pvVar3;
      if (0 < (int)local_30) {
        do {
          iVar4 = FUN_0000da28(uVar2,sVar1);
          sVar5 = strlen(*(char **)(iVar4 + 0x20));
          iVar4 = FUN_0000da28(uVar2,sVar1);
          sVar6 = strlen(*(char **)(iVar4 + 0x10));
          iVar4 = *param_2;
          pvVar3 = malloc(sVar5 + 1);
          *(void **)(iVar4 + sVar1 * 4) = pvVar3;
          iVar4 = *param_3;
          pvVar3 = malloc(sVar6 + 1);
          *(void **)(iVar4 + sVar1 * 4) = pvVar3;
          pcVar7 = *(char **)(*param_2 + sVar1 * 4);
          iVar4 = FUN_0000da28(uVar2,sVar1);
          strcpy(pcVar7,*(char **)(iVar4 + 0x20));
          pcVar7 = *(char **)(*param_3 + sVar1 * 4);
          iVar4 = FUN_0000da28(uVar2,sVar1);
          strcpy(pcVar7,*(char **)(iVar4 + 0x10));
          *(char *)(*(int *)(*param_2 + sVar1 * 4) + sVar5) = (char)unaff_r11;
          iVar4 = sVar1 * 4;
          sVar1 = sVar1 + 1;
          *(char *)(*(int *)(*param_3 + iVar4) + sVar6) = (char)unaff_r11;
        } while (sVar1 != local_30);
      }
      FUN_0000d864(uVar2);
      free(__ptr);
    }
  }
  return local_30;
}




char * FUN_0000bc44(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *__src;
  char *pcVar4;
  int iVar5;
  size_t sVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  char *__s;
  int iVar10;
  char acStack_98 [4];
  void *local_94;
  void *local_90;
  char acStack_8c [104];
  
  local_94 = (void *)0x0;
  local_90 = (void *)0x0;
  iVar2 = FUN_0000ba9c(param_1,&local_94,&local_90);
  printf("sum = %d\n",iVar2);
  memset(acStack_8c,0,100);
  pcVar3 = strchr(param_3,0x7c);
  __s = pcVar3;
  if (pcVar3 != (char *)0x0) {
    __s = pcVar3 + 1;
    *pcVar3 = '\0';
  }
  pcVar3 = strrchr(param_3,0x7c);
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  if (__s != (char *)0x0) {
    cVar1 = *__s;
joined_r0x0000bcc8:
    if (cVar1 != '\0') {
      pcVar3 = strchr(__s,0x2c);
      __src = strchr(__s,0x7c);
      uVar8 = 1 - (int)pcVar3;
      if ((char *)0x1 < pcVar3) {
        uVar8 = 0;
      }
      if (__src < pcVar3) {
        uVar8 = uVar8 | 1;
      }
      if (uVar8 == 0) {
        strncpy(acStack_98,pcVar3,1);
LAB_0000bd20:
        __src = pcVar3 + 1;
        *pcVar3 = '\0';
      }
      else {
        strncpy(acStack_98,__src,1);
        pcVar3 = __src;
        if (__src != (char *)0x0) goto LAB_0000bd20;
      }
      pcVar4 = strchr(__s,0x3d);
      pvVar7 = local_94;
      pcVar3 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        pcVar3 = pcVar4 + 1;
        *pcVar4 = '\0';
      }
      if (0 < iVar2) {
        iVar9 = 0;
        iVar10 = 0;
        do {
          iVar5 = strcmp(*(char **)((int)pvVar7 + iVar9),__s);
          iVar10 = iVar10 + 1;
          if (iVar5 == 0) {
            sprintf(acStack_8c,"%s=%s",*(undefined4 *)((int)local_90 + iVar9),pcVar3);
            strcat(param_2,acStack_8c);
            if ((__src == (char *)0x0) || (*__src == '\0')) goto LAB_0000bdac;
            strncat(param_2,acStack_98,1);
            cVar1 = *__src;
            __s = __src;
            goto joined_r0x0000bcc8;
          }
          iVar9 = iVar9 + 4;
        } while (iVar10 != iVar2);
      }
      if (__src == (char *)0x0) goto LAB_0000bdac;
      cVar1 = *__src;
      __s = __src;
      goto joined_r0x0000bcc8;
    }
  }
LAB_0000bdac:
  sVar6 = strlen(param_2);
  if (param_2[sVar6 - 1] == ',' || param_2[sVar6 - 1] == '|') {
    param_2[sVar6 - 1] = '\0';
  }
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      iVar10 = iVar9 * 4;
      pvVar7 = *(void **)((int)local_94 + iVar9 * 4);
      iVar9 = iVar9 + 1;
      if (pvVar7 != (void *)0x0) {
        free(pvVar7);
      }
      pvVar7 = *(void **)((int)local_90 + iVar10);
      if (pvVar7 != (void *)0x0) {
        free(pvVar7);
      }
    } while (iVar9 != iVar2);
  }
  if (local_94 != (void *)0x0) {
    free(local_94);
  }
  if (local_90 != (void *)0x0) {
    free(local_90);
  }
  printf("after format :%s\n\n",param_2);
  return param_2;
}




char * FUN_0000bea4(char *param_1,char *param_2,int param_3)

{
  char *__ptr;
  hostent *phVar1;
  int __fd;
  int iVar2;
  size_t sVar3;
  ssize_t sVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  sockaddr local_30;
  
  __ptr = (char *)malloc(0xffdd);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("buf","cgminer_api.c",0x8b,"callapi");
  }
  phVar1 = gethostbyname(param_2);
  if (phVar1 == (hostent *)0x0) {
    printf("Failed to resolve host %s\n",param_2);
    __ptr = (char *)0x0;
  }
  else {
    __fd = socket(2,1,0);
    if (__fd == -1) {
      piVar5 = __errno_location();
      __ptr = (char *)0x0;
      pcVar6 = strerror(*piVar5);
      printf("Socket initialisation failed: %s\n",pcVar6);
    }
    else {
      local_30.sa_data[6] = '\0';
      local_30.sa_data[7] = '\0';
      local_30.sa_data[8] = '\0';
      local_30.sa_data[9] = '\0';
      bVar7 = false;
      local_30.sa_data[10] = '\0';
      local_30.sa_data[0xb] = '\0';
      local_30.sa_data[0xc] = '\0';
      local_30.sa_data[0xd] = '\0';
      local_30.sa_data._2_4_ = *(undefined4 *)*phVar1->h_addr_list;
      local_30.sa_data._0_2_ = (ushort)(byte)((uint)param_3 >> 8) | (ushort)(param_3 << 8);
      local_30.sa_family = 2;
      while (iVar2 = connect(__fd,&local_30,0x10), iVar2 < 0) {
        if (!bVar7) {
          puts("Call API error.Disconnect with server!");
          raise(10);
        }
        bVar7 = true;
        puts("Call API Failed wait 5s !!");
        sleep(5);
      }
      if (bVar7) {
        __ptr = "";
        close(__fd);
        raise(0xc);
      }
      else {
        sVar3 = strlen(param_1);
        sVar4 = send(__fd,param_1,sVar3,0);
        if (sVar4 < 0) {
          piVar5 = __errno_location();
          pcVar6 = strerror(*piVar5);
          printf("Send failed: %s\n",pcVar6);
        }
        else {
          sVar3 = 0xffdc;
          puts("Send succed");
          *__ptr = '\0';
          iVar2 = 0;
          while( true ) {
            puts("begin to Recv");
            sVar4 = recv(__fd,__ptr + iVar2,0xffdc,0);
            printf("Recved n: %d\n",sVar4);
            if (sVar4 < 0) break;
            if (sVar4 == 0) goto LAB_0000c054;
            iVar2 = iVar2 + sVar4;
            __ptr[iVar2] = '\0';
            if (sVar3 < iVar2 + 0xffdcU) {
              sVar3 = sVar3 << 1;
              __ptr = (char *)realloc(__ptr,sVar3);
              if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("buf","cgminer_api.c",0xbb,"callapi");
              }
            }
          }
          piVar5 = __errno_location();
          pcVar6 = strerror(*piVar5);
          printf("Recv failed: %s\n",pcVar6);
        }
LAB_0000c054:
        close(__fd);
        printf("the result of callapi about %s: %s\n\n",param_1,__ptr);
      }
    }
  }
  return __ptr;
}




int FUN_0000c130(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*param_1;
  uVar1 = uVar2 - 0x30;
  if (9 < (uVar1 & 0xff)) {
    if (uVar2 - 0x41 < 6) {
      uVar1 = uVar2 - 0x37;
    }
    else {
      if (5 < uVar2 - 0x61) {
        return 0;
      }
      uVar1 = uVar2 - 0x57;
    }
  }
  uVar2 = (uint)param_1[1];
  iVar3 = uVar1 * 0x10;
  if ((uVar2 - 0x30 & 0xff) < 10) {
    iVar3 = (uVar2 - 0x30) + iVar3;
  }
  else if (uVar2 - 0x41 < 6) {
    iVar3 = (uVar2 - 0x37) + iVar3;
  }
  else {
    if (5 < uVar2 - 0x61) {
      return 0;
    }
    iVar3 = (uVar2 - 0x57) + iVar3;
  }
  uVar1 = (uint)param_1[2];
  uVar2 = uVar1 - 0x30;
  if (9 < (uVar2 & 0xff)) {
    if (uVar1 - 0x41 < 6) {
      uVar2 = uVar1 - 0x37;
    }
    else {
      if (5 < uVar1 - 0x61) {
        return 0;
      }
      uVar2 = uVar1 - 0x57;
    }
  }
  uVar1 = (uint)param_1[3];
  iVar3 = (uVar2 + iVar3 * 0x10) * 0x10;
  if ((uVar1 - 0x30 & 0xff) < 10) {
    return (uVar1 - 0x30) + iVar3;
  }
  if (uVar1 - 0x41 < 6) {
    return (uVar1 - 0x37) + iVar3;
  }
  if (5 < uVar1 - 0x61) {
    return 0;
  }
  return (uVar1 - 0x57) + iVar3;
}




char * FUN_0000c244(int param_1,char *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char *pcVar6;
  char cVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pcVar8 = param_2 + 1;
  if (*param_2 == '\"') {
    iVar1 = 0;
    for (pcVar6 = pcVar8; cVar7 = *pcVar6, cVar7 != '\0' && cVar7 != '\"'; pcVar6 = pcVar6 + 1) {
      while (iVar1 = iVar1 + 1, cVar7 == '\\') {
        pcVar6 = pcVar6 + 2;
        cVar7 = *pcVar6;
        if (cVar7 == '\0' || cVar7 == '\"') goto LAB_0000c2a0;
      }
    }
LAB_0000c2a0:
    pbVar2 = (byte *)(*DAT_0001b374)(iVar1 + 1);
    if (pbVar2 == (byte *)0x0) {
      pcVar8 = (char *)0x0;
    }
    else {
      bVar5 = param_2[1];
      pbVar9 = pbVar2;
      while (bVar5 != 0 && bVar5 != 0x22) {
        if (bVar5 == 0x5c) {
          pcVar6 = pcVar8 + 1;
          switch(pcVar8[1]) {
          case 'b':
            pbVar10 = pbVar9 + 1;
            *pbVar9 = 8;
            bVar5 = pcVar8[2];
            break;
          default:
            *pbVar9 = pcVar8[1];
            bVar5 = pcVar8[2];
            pbVar10 = pbVar9 + 1;
            break;
          case 'f':
            pbVar10 = pbVar9 + 1;
            *pbVar9 = 0xc;
            bVar5 = pcVar8[2];
            break;
          case 'n':
            pbVar10 = pbVar9 + 1;
            *pbVar9 = 10;
            bVar5 = pcVar8[2];
            break;
          case 'r':
            pbVar10 = pbVar9 + 1;
            *pbVar9 = 0xd;
            bVar5 = pcVar8[2];
            break;
          case 't':
            pbVar10 = pbVar9 + 1;
            *pbVar9 = 9;
            bVar5 = pcVar8[2];
            break;
          case 'u':
            uVar3 = FUN_0000c130(pcVar8 + 2);
            pcVar6 = pcVar8 + 5;
            pbVar10 = pbVar9;
            if (uVar3 == 0 || uVar3 - 0xdc00 < 0x400) {
              bVar5 = pcVar8[6];
            }
            else if (uVar3 - 0xd800 < 0x400) {
              bVar5 = pcVar8[6];
              if ((bVar5 == 0x5c) && (pcVar8[7] == 'u')) {
                uVar4 = FUN_0000c130(pcVar8 + 8);
                pcVar6 = pcVar8 + 0xb;
                if (uVar4 - 0xdc00 < 0x400) {
                  uVar3 = (uVar4 & 0x3ff | (uVar3 & 0x3ff) << 10) + 0x10000;
                  goto LAB_0000c478;
                }
                bVar5 = pcVar8[0xc];
              }
            }
            else {
LAB_0000c478:
              if (uVar3 < 0x80) {
                iVar1 = 1;
              }
              else {
                if (uVar3 < 0x800) {
                  iVar1 = 2;
                }
                else {
                  if (uVar3 < 0x10000) {
                    iVar1 = 3;
                  }
                  else {
                    bVar5 = (byte)uVar3;
                    iVar1 = 4;
                    uVar3 = uVar3 >> 6;
                    pbVar9[3] = bVar5 & 0x3f | 0x80;
                  }
                  bVar5 = (byte)uVar3;
                  uVar3 = uVar3 >> 6;
                  pbVar9[2] = bVar5 & 0x3f | 0x80;
                }
                bVar5 = (byte)uVar3;
                uVar3 = uVar3 >> 6;
                pbVar9[1] = bVar5 & 0x3f | 0x80;
              }
              *pbVar9 = (byte)uVar3 | (&UNK_0001190c)[iVar1];
              bVar5 = pcVar6[1];
              pbVar10 = pbVar9 + iVar1;
            }
          }
          pcVar8 = pcVar6 + 1;
          pbVar9 = pbVar10;
        }
        else {
          *pbVar9 = bVar5;
          bVar5 = pcVar8[1];
          pcVar8 = pcVar8 + 1;
          pbVar9 = pbVar9 + 1;
        }
      }
      *pbVar9 = 0;
      cVar7 = *pcVar8;
      *(byte **)(param_1 + 0x10) = pbVar2;
      if (cVar7 == '\"') {
        pcVar8 = pcVar8 + 1;
      }
      *(undefined4 *)(param_1 + 0xc) = 4;
    }
  }
  else {
    pcVar8 = (char *)0x0;
    DAT_0001b3a4 = param_2;
  }
  return pcVar8;
}




void * FUN_0000c540(void)

{
  void *__s;
  
  __s = (void *)(*DAT_0001b374)(0x28);
  if (__s != (void *)0x0) {
    memset(__s,0,0x28);
  }
  return __s;
}




void * FUN_0000c574(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (void *)(*DAT_0001b374)(sVar1 + 1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,sVar1 + 1);
  }
  return __dest;
}




void FUN_0000c5b4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar2 = (undefined4 *)FUN_0000c540();
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  puVar1 = puVar2;
  puVar5 = param_1;
  do {
    puVar4 = puVar5;
    puVar3 = puVar1;
    uVar7 = puVar4[1];
    uVar6 = puVar4[2];
    uVar8 = puVar4[3];
    puVar5 = puVar4 + 4;
    *puVar3 = *puVar4;
    puVar3[1] = uVar7;
    puVar3[2] = uVar6;
    puVar3[3] = uVar8;
    puVar1 = puVar3 + 4;
  } while (puVar5 != param_1 + 8);
  uVar6 = puVar4[5];
  puVar3[4] = *puVar5;
  puVar3[5] = uVar6;
  puVar2[8] = 0;
  puVar2[1] = 0;
  puVar2[3] = puVar2[3] | 0x100;
  *puVar2 = 0;
  return;
}




int FUN_0000c634(int param_1,int param_2)

{
  __int32_t **pp_Var1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      param_2 = 1;
    }
    return param_2;
  }
  if (param_2 != 0) {
    pp_Var1 = __ctype_tolower_loc();
    pbVar3 = (byte *)(param_1 + -1);
    pbVar2 = (byte *)(param_2 + -1);
    do {
      pbVar3 = pbVar3 + 1;
      pbVar2 = pbVar2 + 1;
      iVar4 = (*pp_Var1)[*pbVar3];
      iVar5 = (*pp_Var1)[*pbVar2];
      if (iVar4 != iVar5) {
        return iVar4 - iVar5;
      }
    } while (*pbVar3 != 0);
    return 0;
  }
  return 1;
}




undefined1 * FUN_0000c69c(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char *pcVar2;
  undefined1 *puVar3;
  uint __c;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (param_1 == (byte *)0x0) {
    puVar3 = (undefined1 *)FUN_0000c574("",param_2,param_3,param_4);
    return puVar3;
  }
  if (*param_1 == 0) {
    iVar5 = 3;
  }
  else {
    iVar5 = 0;
    __c = (uint)*param_1;
    pbVar6 = param_1;
    do {
      while (pcVar2 = strchr("\"\\\b\f\n\r\t",__c), pcVar2 == (char *)0x0) {
        pbVar6 = pbVar6 + 1;
        if (__c < 0x20) {
          iVar5 = iVar5 + 6;
        }
        else {
          iVar5 = iVar5 + 1;
        }
        __c = (uint)*pbVar6;
        if (*pbVar6 == 0) goto LAB_0000c6fc;
      }
      iVar5 = iVar5 + 2;
      pbVar6 = pbVar6 + 1;
      __c = (uint)*pbVar6;
    } while (__c != 0);
LAB_0000c6fc:
    iVar5 = iVar5 + 3;
  }
  puVar3 = (undefined1 *)(*DAT_0001b374)(iVar5);
  if (puVar3 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  pbVar6 = puVar3 + 1;
  *puVar3 = 0x22;
LAB_0000c734:
  bVar1 = *param_1;
  pbVar4 = pbVar6;
  pbVar6 = param_1;
  do {
    if (bVar1 == 0) {
      pbVar4[1] = 0;
      *pbVar4 = 0x22;
      return puVar3;
    }
    param_1 = pbVar6 + 1;
    bVar7 = 0x21 < bVar1;
    if (bVar1 != 0x22) {
      bVar7 = 0x1e < bVar1;
    }
    if ((bVar7 && (bVar1 != 0x22 && bVar1 != 0x1f)) && (bVar1 != 0x5c)) {
      pbVar6 = pbVar4 + 1;
      *pbVar4 = bVar1;
      goto LAB_0000c734;
    }
    *pbVar4 = 0x5c;
    bVar1 = *pbVar6;
    if (bVar1 == 0xc) {
      pbVar4[1] = 0x66;
      pbVar6 = pbVar4 + 2;
      goto LAB_0000c734;
    }
    if (bVar1 < 0xd) {
      if (bVar1 == 9) {
        pbVar4[1] = 0x74;
        pbVar6 = pbVar4 + 2;
        goto LAB_0000c734;
      }
      if (bVar1 == 10) {
        pbVar4[1] = 0x6e;
        pbVar6 = pbVar4 + 2;
        goto LAB_0000c734;
      }
      if (bVar1 == 8) break;
    }
    else {
      if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
        pbVar4[1] = bVar1;
        pbVar6 = pbVar4 + 2;
        goto LAB_0000c734;
      }
      if (bVar1 == 0xd) {
        pbVar4[1] = 0x72;
        pbVar6 = pbVar4 + 2;
        goto LAB_0000c734;
      }
    }
    sprintf((char *)(pbVar4 + 1),"u%04x");
    bVar1 = *param_1;
    pbVar4 = pbVar4 + 6;
    pbVar6 = param_1;
  } while( true );
  pbVar4[1] = 0x62;
  pbVar6 = pbVar4 + 2;
  goto LAB_0000c734;
}




char * FUN_0000c83c(int param_1,int param_2,int param_3)

{
  void *__s;
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  char extraout_r3;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  char *pcVar16;
  undefined4 *puVar17;
  bool bVar18;
  double dVar19;
  undefined4 uVar20;
  double __x;
  double dVar21;
  int *local_44;
  
  if (param_1 == 0) {
    return (char *)0x0;
  }
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 0:
    pcVar16 = (char *)FUN_0000c574("false");
    return pcVar16;
  case 1:
    pcVar16 = (char *)FUN_0000c574(&DAT_00011934);
    return pcVar16;
  case 2:
    pcVar16 = (char *)FUN_0000c574(&DAT_00011924);
    return pcVar16;
  case 3:
    __x = *(double *)(param_1 + 0x18);
    if (((2.220446049250313e-16 < ABS((double)(longlong)*(int *)(param_1 + 0x14) - __x)) || (2147483647.0 < __x)) ||
       (__x < -2147483648.0)) {
      pcVar16 = (char *)(*DAT_0001b374)(0x40);
      if (pcVar16 != (char *)0x0) {
        dVar19 = floor(__x);
        dVar21 = ABS(__x);
        uVar20 = SUB84(__x,0);
        uVar10 = (undefined4)((ulonglong)__x >> 0x20);
        if ((ABS(dVar19 - __x) <= 2.220446049250313e-16) && (dVar21 < 1e+60)) {
          sprintf(pcVar16,"%.0f",uVar20,uVar10);
          return pcVar16;
        }
        if ((1e-06 <= dVar21) && (dVar21 <= 1000000000.0)) {
          sprintf(pcVar16,"%f",uVar20,uVar10);
          return pcVar16;
        }
        sprintf(pcVar16,"%e",uVar20,uVar10);
        return pcVar16;
      }
    }
    else {
      pcVar16 = (char *)(*DAT_0001b374)(0x15);
      if (pcVar16 != (char *)0x0) {
        sprintf(pcVar16,"%d",*(undefined4 *)(param_1 + 0x14));
        return pcVar16;
      }
    }
    break;
  case 4:
    pcVar16 = (char *)FUN_0000c69c(*(undefined4 *)(param_1 + 0x10));
    return pcVar16;
  case 5:
    piVar15 = *(int **)(param_1 + 8);
    if (piVar15 == (int *)0x0) {
      pcVar16 = (char *)(*DAT_0001b374)(3);
      if (pcVar16 != (char *)0x0) {
        pcVar16[0] = '[';
        pcVar16[1] = ']';
        pcVar16[2] = '\0';
        return pcVar16;
      }
    }
    else {
      iVar11 = 0;
      do {
        iVar12 = iVar11;
        piVar15 = (int *)*piVar15;
        iVar11 = iVar12 + 1;
      } while (piVar15 != (int *)0x0);
      puVar1 = (undefined4 *)(*DAT_0001b374)(iVar11 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        memset(puVar1,0,iVar11 * 4);
        piVar15 = *(int **)(param_1 + 8);
        if (piVar15 == (int *)0x0) {
          iVar8 = 5;
        }
        else {
          iVar8 = 5;
          puVar14 = puVar1 + -1;
          do {
            pcVar16 = (char *)FUN_0000c83c(piVar15,param_2 + 1,param_3);
            puVar14 = puVar14 + 1;
            *puVar14 = pcVar16;
            if (pcVar16 == (char *)0x0) goto LAB_0000ca30;
            sVar4 = strlen(pcVar16);
            piVar15 = (int *)*piVar15;
            if (param_3 == 0) {
              iVar9 = 2;
            }
            else {
              iVar9 = 3;
            }
            iVar8 = iVar9 + iVar8 + sVar4;
          } while (piVar15 != (int *)0x0);
        }
        pcVar16 = (char *)(*DAT_0001b374)(iVar8);
        if (pcVar16 != (char *)0x0) {
          iVar8 = 0;
          pcVar2 = pcVar16 + 1;
          *pcVar16 = '[';
          pcVar16[1] = '\0';
          puVar14 = puVar1;
          do {
            strcpy(pcVar2,(char *)*puVar14);
            pcVar3 = (char *)*puVar14;
            sVar4 = strlen(pcVar3);
            pcVar2 = pcVar2 + sVar4;
            if (iVar12 != iVar8) {
              *pcVar2 = ',';
              if (param_3 == 0) {
                pcVar2 = pcVar2 + 1;
              }
              else {
                pcVar2[1] = ' ';
                pcVar2 = pcVar2 + 2;
              }
              *pcVar2 = '\0';
              pcVar3 = (char *)*puVar14;
            }
            iVar8 = iVar8 + 1;
            (*(code *)PTR_free_0001b378)(pcVar3);
            puVar14 = puVar14 + 1;
          } while (iVar8 < iVar11);
          (*(code *)PTR_free_0001b378)(puVar1);
          *pcVar2 = ']';
          pcVar2[1] = '\0';
          return pcVar16;
        }
LAB_0000ca30:
        local_44 = puVar1 + -1;
        iVar12 = 0;
        do {
          local_44 = local_44 + 1;
          iVar12 = iVar12 + 1;
          if (*local_44 != 0) {
            (*(code *)PTR_free_0001b378)();
          }
        } while (iVar12 < iVar11);
        (*(code *)PTR_free_0001b378)(puVar1);
        return (char *)0x0;
      }
    }
    break;
  case 6:
    piVar15 = *(int **)(param_1 + 8);
    if (piVar15 == (int *)0x0) {
      if (param_3 == 0) {
        iVar11 = 3;
      }
      else {
        iVar11 = param_2 + 4;
      }
      pcVar16 = (char *)(*DAT_0001b374)(iVar11);
      if (pcVar16 == (char *)0x0) {
        return (char *)0x0;
      }
      *pcVar16 = '{';
      if (param_3 == 0) {
        pcVar2 = pcVar16 + 1;
      }
      else {
        pcVar16[1] = '\n';
        pcVar2 = pcVar16 + 2;
        if (1 < param_2) {
          pcVar6 = pcVar2 + param_2 + -1;
          pcVar3 = pcVar2;
          do {
            pcVar2 = pcVar3 + 1;
            *pcVar3 = '\t';
            pcVar3 = pcVar2;
          } while (pcVar2 != pcVar6);
        }
      }
      *pcVar2 = '}';
      pcVar2[1] = '\0';
      return pcVar16;
    }
    iVar11 = 0;
    do {
      iVar12 = iVar11;
      piVar15 = (int *)*piVar15;
      iVar11 = iVar12 + 1;
    } while (piVar15 != (int *)0x0);
    sVar4 = iVar11 * 4;
    __s = (void *)(*DAT_0001b374)(sVar4);
    if (__s == (void *)0x0) {
      return (char *)0x0;
    }
    puVar1 = (undefined4 *)(*DAT_0001b374)(sVar4);
    if (puVar1 == (undefined4 *)0x0) {
      (*(code *)PTR_free_0001b378)(__s);
      return (char *)0x0;
    }
    iVar8 = param_2 + 1;
    memset(__s,0,sVar4);
    memset(puVar1,0,sVar4);
    piVar15 = *(int **)(param_1 + 8);
    if (param_3 == 0) {
      pcVar16 = (char *)0x7;
    }
    else {
      pcVar16 = (char *)(param_2 + 8);
    }
    if (piVar15 != (int *)0x0) {
      if (param_3 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = param_2 + 3;
      }
      iVar13 = 0;
      bVar18 = false;
      do {
        pcVar2 = (char *)FUN_0000c69c(piVar15[8]);
        *(char **)((int)puVar1 + iVar13) = pcVar2;
        pcVar3 = (char *)FUN_0000c83c(piVar15,iVar8,param_3);
        *(char **)((int)__s + iVar13) = pcVar3;
        if (pcVar3 == (char *)0x0 || pcVar2 == (char *)0x0) {
          bVar18 = true;
        }
        else {
          sVar4 = strlen(pcVar3);
          sVar5 = strlen(pcVar2);
          pcVar16 = pcVar16 + sVar5 + sVar4 + iVar9 + 2;
        }
        piVar15 = (int *)*piVar15;
        iVar13 = iVar13 + 4;
      } while (piVar15 != (int *)0x0);
      if (bVar18) goto LAB_0000cbcc;
    }
    pcVar2 = (char *)(*DAT_0001b374)(pcVar16);
    if (pcVar2 != (char *)0x0) {
      if (param_3 == 0) {
        pcVar16 = pcVar2 + 1;
      }
      *pcVar2 = '{';
      if (param_3 != 0) {
        pcVar16 = pcVar2 + 2;
        pcVar2[1] = '\n';
      }
      iVar9 = 0;
      puVar17 = (undefined4 *)((int)__s + -4);
      *pcVar16 = '\0';
      puVar14 = puVar1;
      do {
        if (param_3 == 0) {
          strcpy(pcVar16,(char *)*puVar14);
          sVar4 = strlen((char *)*puVar14);
          pcVar16[sVar4] = ':';
          pcVar3 = pcVar16 + sVar4 + 1;
        }
        else {
          if (0 < iVar8) {
            pcVar6 = pcVar16 + iVar8;
            pcVar3 = pcVar16;
            do {
              pcVar16 = pcVar3 + 1;
              *pcVar3 = '\t';
              pcVar3 = pcVar16;
            } while (pcVar16 != pcVar6);
          }
          strcpy(pcVar16,(char *)*puVar14);
          sVar4 = strlen((char *)*puVar14);
          pcVar16[sVar4] = ':';
          pcVar3 = pcVar16 + sVar4 + 2;
          pcVar16[sVar4 + 1] = '\t';
        }
        strcpy(pcVar3,(char *)puVar17[1]);
        sVar4 = strlen((char *)puVar17[1]);
        bVar18 = iVar12 != iVar9;
        iVar9 = iVar9 + 1;
        cVar7 = extraout_r3;
        if (bVar18) {
          cVar7 = ',';
        }
        pcVar6 = pcVar3 + sVar4;
        if (bVar18) {
          pcVar3[sVar4] = cVar7;
          pcVar6 = pcVar6 + 1;
        }
        pcVar16 = pcVar6;
        if (param_3 != 0) {
          pcVar16 = pcVar6 + 1;
          *pcVar6 = '\n';
        }
        *pcVar16 = '\0';
        (*(code *)PTR_free_0001b378)(*puVar14);
        puVar17 = puVar17 + 1;
        (*(code *)PTR_free_0001b378)(*puVar17);
        puVar14 = puVar14 + 1;
      } while (iVar9 < iVar11);
      (*(code *)PTR_free_0001b378)(puVar1);
      (*(code *)PTR_free_0001b378)(__s);
      if ((param_3 != 0) && (0 < param_2)) {
        pcVar6 = pcVar16 + param_2;
        pcVar3 = pcVar16;
        do {
          pcVar16 = pcVar3 + 1;
          *pcVar3 = '\t';
          pcVar3 = pcVar16;
        } while (pcVar16 != pcVar6);
      }
      *pcVar16 = '}';
      pcVar16[1] = '\0';
      return pcVar2;
    }
LAB_0000cbcc:
    iVar12 = 0;
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
      if (*(int *)((int)puVar1 + iVar12) != 0) {
        (*(code *)PTR_free_0001b378)();
      }
      piVar15 = (int *)((int)__s + iVar12);
      iVar12 = iVar12 + 4;
      if (*piVar15 != 0) {
        (*(code *)PTR_free_0001b378)();
      }
    } while (iVar8 < iVar11);
    (*(code *)PTR_free_0001b378)(puVar1);
    (*(code *)PTR_free_0001b378)(__s);
    return (char *)0x0;
  }
  return (char *)0x0;
}




/* WARNING: Type propagation algorithm not settling */

byte * FUN_0000d05c(int param_1,byte *param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  iVar2 = strncmp((char *)param_2,"null",4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    return param_2 + 4;
  }
  iVar2 = strncmp((char *)param_2,"false",5);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return param_2 + 5;
  }
  iVar2 = strncmp((char *)param_2,"true",4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
    return param_2 + 4;
  }
  uVar8 = (uint)*param_2;
  if (uVar8 == 0x22) {
    pbVar10 = (byte *)FUN_0000c244(param_1,param_2);
    return pbVar10;
  }
  if (uVar8 - 0x30 < 10 || uVar8 == 0x2d) {
    if (uVar8 == 0x2d) {
      uVar8 = (uint)param_2[1];
      dVar11 = -1.0;
      param_2 = param_2 + 1;
    }
    else {
      dVar11 = 1.0;
    }
    if (uVar8 == 0x30) {
      uVar8 = (uint)param_2[1];
      param_2 = param_2 + 1;
    }
    if (uVar8 - 0x31 < 9) {
      uVar5 = uVar8 - 0x30;
      dVar12 = 0.0;
      do {
        param_2 = param_2 + 1;
        uVar8 = (uint)*param_2;
        lVar1 = (longlong)(int)uVar5;
        uVar5 = uVar8 - 0x30;
        dVar12 = (double)lVar1 + dVar12 * 10.0;
      } while ((uVar5 & 0xff) < 10);
    }
    else {
      dVar12 = 0.0;
    }
    if (uVar8 == 0x2e) {
      uVar8 = (uint)param_2[1];
      if ((uVar8 < 0x30) || (0x39 < uVar8)) {
        iVar2 = 0;
        dVar13 = 0.0;
        goto LAB_0000d280;
      }
      dVar13 = 0.0;
      pbVar10 = param_2 + 2;
      uVar5 = uVar8 - 0x30;
      do {
        pbVar9 = pbVar10;
        uVar8 = (uint)*pbVar9;
        dVar13 = dVar13 - 1.0;
        dVar12 = (double)(longlong)(int)uVar5 + dVar12 * 10.0;
        pbVar10 = pbVar9 + 1;
        uVar5 = uVar8 - 0x30;
      } while ((uVar8 - 0x30 & 0xff) < 10);
    }
    else {
      dVar13 = 0.0;
      pbVar9 = param_2;
    }
    param_2 = pbVar9;
    if ((uVar8 & 0xdf) == 0x45) {
      uVar8 = (uint)pbVar9[1];
      if (uVar8 == 0x2b) {
        param_2 = pbVar9 + 2;
        uVar8 = (uint)pbVar9[2];
        iVar2 = 1;
      }
      else if (uVar8 == 0x2d) {
        param_2 = pbVar9 + 2;
        uVar8 = (uint)pbVar9[2];
        iVar2 = -1;
      }
      else {
        param_2 = pbVar9 + 1;
        iVar2 = 1;
      }
      uVar8 = uVar8 - 0x30;
      if ((uVar8 & 0xff) < 10) {
        iVar6 = 0;
        do {
          param_2 = param_2 + 1;
          iVar6 = uVar8 + iVar6 * 10;
          uVar8 = *param_2 - 0x30;
        } while ((uVar8 & 0xff) < 10);
        iVar2 = iVar2 * iVar6;
        goto LAB_0000d280;
      }
    }
    iVar2 = 0;
LAB_0000d280:
    dVar13 = pow(10.0,(double)(longlong)iVar2 + dVar13);
    *(undefined4 *)(param_1 + 0xc) = 3;
    dVar13 = dVar11 * dVar12 * dVar13;
    *(double *)(param_1 + 0x18) = dVar13;
    *(int *)(param_1 + 0x14) = (int)(longlong)dVar13;
    return param_2;
  }
  if (uVar8 == 0x5b) {
    pbVar10 = param_2 + 1;
    *(undefined4 *)(param_1 + 0xc) = 5;
    bVar7 = param_2[1];
    if (pbVar10 == (byte *)0x0) {
LAB_0000d638:
      if (bVar7 == 0x5d) goto LAB_0000d154;
    }
    else if (bVar7 != 0) {
      if (bVar7 < 0x21) {
        pbVar9 = param_2 + 2;
        do {
          pbVar10 = pbVar9;
          bVar7 = bRam00000000;
          if (pbVar10 == (byte *)0x0) break;
          bVar7 = *pbVar10;
          if (bVar7 == 0) goto LAB_0000d640;
          pbVar9 = pbVar10 + 1;
        } while (bVar7 < 0x21);
      }
      goto LAB_0000d638;
    }
LAB_0000d640:
    piVar3 = (int *)FUN_0000c540();
    *(int **)(param_1 + 8) = piVar3;
    if (piVar3 == (int *)0x0) {
      return (byte *)0x0;
    }
    do {
      pbVar9 = pbVar10 + 1;
      if ((*pbVar10 == 0) || (0x20 < *pbVar10)) break;
      pbVar10 = pbVar9;
    } while (pbVar9 != (byte *)0x0);
    pbVar10 = (byte *)FUN_0000d05c(piVar3,pbVar10);
    if (pbVar10 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar7 = *pbVar10;
    while ((bVar7 != 0 && (bVar7 < 0x21))) {
      pbVar10 = pbVar10 + 1;
      if (pbVar10 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar7 = *pbVar10;
    }
    while (bVar7 == 0x2c) {
      piVar4 = (int *)FUN_0000c540();
      if (piVar4 == (int *)0x0) {
        return (byte *)0x0;
      }
      pbVar9 = pbVar10 + 1;
      *piVar3 = (int)piVar4;
      piVar4[1] = (int)piVar3;
      if (((pbVar9 != (byte *)0x0) && (pbVar10[1] != 0)) && (pbVar10[1] < 0x21)) {
        pbVar10 = pbVar10 + 2;
        while (pbVar9 = pbVar10, pbVar9 != (byte *)0x0) {
          if ((*pbVar9 == 0) || (pbVar10 = pbVar9 + 1, 0x20 < *pbVar9)) break;
        }
      }
      pbVar10 = (byte *)FUN_0000d05c(piVar4,pbVar9);
      if (pbVar10 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar7 = *pbVar10;
      while ((piVar3 = piVar4, bVar7 != 0 && (bVar7 < 0x21))) {
        pbVar10 = pbVar10 + 1;
        if (pbVar10 == (byte *)0x0) {
          return (byte *)0x0;
        }
        bVar7 = *pbVar10;
      }
    }
    if (bVar7 != 0x5d) {
      DAT_0001b3a4 = pbVar10;
      return (byte *)0x0;
    }
    goto LAB_0000d7bc;
  }
  if (uVar8 != 0x7b) {
    DAT_0001b3a4 = param_2;
    return (byte *)0x0;
  }
  pbVar10 = param_2 + 1;
  *(undefined4 *)(param_1 + 0xc) = 6;
  bVar7 = param_2[1];
  if (pbVar10 == (byte *)0x0) {
LAB_0000d14c:
    if (bVar7 == 0x7d) {
LAB_0000d154:
      return pbVar10 + 1;
    }
  }
  else if (bVar7 != 0) {
    if (bVar7 < 0x21) {
      pbVar9 = param_2 + 2;
      do {
        pbVar10 = pbVar9;
        bVar7 = bRam00000000;
        if (pbVar10 == (byte *)0x0) break;
        bVar7 = *pbVar10;
        if (bVar7 == 0) goto LAB_0000d2b0;
        pbVar9 = pbVar10 + 1;
      } while (bVar7 < 0x21);
    }
    goto LAB_0000d14c;
  }
LAB_0000d2b0:
  piVar3 = (int *)FUN_0000c540();
  *(int **)(param_1 + 8) = piVar3;
  if (piVar3 != (int *)0x0) {
    do {
      pbVar9 = pbVar10 + 1;
      if ((*pbVar10 == 0) || (0x20 < *pbVar10)) break;
      pbVar10 = pbVar9;
    } while (pbVar9 != (byte *)0x0);
    pbVar10 = (byte *)FUN_0000c244(piVar3,pbVar10);
    if (pbVar10 != (byte *)0x0) {
      bVar7 = *pbVar10;
      while ((bVar7 != 0 && (bVar7 < 0x21))) {
        pbVar10 = pbVar10 + 1;
        if (pbVar10 == (byte *)0x0) {
          return (byte *)0x0;
        }
        bVar7 = *pbVar10;
      }
      iVar2 = piVar3[4];
      piVar3[4] = 0;
      piVar3[8] = iVar2;
      if (*pbVar10 != 0x3a) {
        DAT_0001b3a4 = pbVar10;
        return (byte *)0x0;
      }
      pbVar9 = pbVar10 + 1;
      if (((pbVar9 != (byte *)0x0) && (pbVar10[1] != 0)) && (pbVar10[1] < 0x21)) {
        pbVar10 = pbVar10 + 2;
        while (pbVar9 = pbVar10, pbVar9 != (byte *)0x0) {
          if ((*pbVar9 == 0) || (pbVar10 = pbVar9 + 1, 0x20 < *pbVar9)) break;
        }
      }
      pbVar10 = (byte *)FUN_0000d05c(piVar3,pbVar9);
      if (pbVar10 != (byte *)0x0) {
        bVar7 = *pbVar10;
        while ((bVar7 != 0 && (bVar7 < 0x21))) {
          pbVar10 = pbVar10 + 1;
          if (pbVar10 == (byte *)0x0) {
            return (byte *)0x0;
          }
          bVar7 = *pbVar10;
        }
        while (bVar7 == 0x2c) {
          piVar4 = (int *)FUN_0000c540();
          if (piVar4 == (int *)0x0) {
            return (byte *)0x0;
          }
          pbVar9 = pbVar10 + 1;
          *piVar3 = (int)piVar4;
          piVar4[1] = (int)piVar3;
          if (((pbVar9 != (byte *)0x0) && (pbVar10[1] != 0)) && (pbVar10[1] < 0x21)) {
            pbVar10 = pbVar10 + 2;
            while (pbVar9 = pbVar10, pbVar9 != (byte *)0x0) {
              if ((*pbVar9 == 0) || (pbVar10 = pbVar9 + 1, 0x20 < *pbVar9)) break;
            }
          }
          pbVar10 = (byte *)FUN_0000c244(piVar4,pbVar9);
          if (pbVar10 == (byte *)0x0) {
            return (byte *)0x0;
          }
          bVar7 = *pbVar10;
          while ((bVar7 != 0 && (bVar7 < 0x21))) {
            pbVar10 = pbVar10 + 1;
            if (pbVar10 == (byte *)0x0) {
              return (byte *)0x0;
            }
            bVar7 = *pbVar10;
          }
          iVar2 = piVar4[4];
          piVar4[4] = 0;
          piVar4[8] = iVar2;
          if (*pbVar10 != 0x3a) {
            DAT_0001b3a4 = pbVar10;
            return (byte *)0x0;
          }
          pbVar9 = pbVar10 + 1;
          if (((pbVar9 != (byte *)0x0) && (pbVar10[1] != 0)) && (pbVar10[1] < 0x21)) {
            pbVar10 = pbVar10 + 2;
            while (pbVar9 = pbVar10, pbVar9 != (byte *)0x0) {
              if ((*pbVar9 == 0) || (pbVar10 = pbVar9 + 1, 0x20 < *pbVar9)) break;
            }
          }
          pbVar10 = (byte *)FUN_0000d05c(piVar4,pbVar9);
          if (pbVar10 == (byte *)0x0) {
            return (byte *)0x0;
          }
          bVar7 = *pbVar10;
          while ((piVar3 = piVar4, bVar7 != 0 && (bVar7 < 0x21))) {
            pbVar10 = pbVar10 + 1;
            if (pbVar10 == (byte *)0x0) {
              return (byte *)0x0;
            }
            bVar7 = *pbVar10;
          }
        }
        if (bVar7 != 0x7d) {
          DAT_0001b3a4 = pbVar10;
          return (byte *)0x0;
        }
LAB_0000d7bc:
        return pbVar10 + 1;
      }
    }
  }
  return (byte *)0x0;
}




void FUN_0000d864(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      piVar1 = (int *)*param_1;
      if (((param_1[3] & 0x100U) == 0) &&
         (((param_1[2] == 0 || (FUN_0000d864(), (param_1[3] & 0x100U) == 0)) && (param_1[4] != 0)))) {
        (*(code *)PTR_free_0001b378)();
      }
      if (param_1[8] != 0) {
        (*(code *)PTR_free_0001b378)();
      }
      (*(code *)PTR_free_0001b378)(param_1);
      param_1 = piVar1;
    } while (piVar1 != (int *)0x0);
    return;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x0000d970) */
/* WARNING: Removing unreachable block (ram,0x0000d984) */
/* WARNING: Removing unreachable block (ram,0x0000d98c) */
/* WARNING: Removing unreachable block (ram,0x0000d994) */
/* WARNING: Removing unreachable block (ram,0x0000d9b0) */
/* WARNING: Removing unreachable block (ram,0x0000d968) */
/* WARNING: Removing unreachable block (ram,0x0000d9a4) */

int FUN_0000d9d8(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0000c540();
  DAT_0001b3a4 = 0;
  if (iVar2 != 0) {
    if (((param_1 != (byte *)0x0) && (*param_1 != 0)) && (*param_1 < 0x21)) {
      pbVar1 = param_1 + 1;
      while (param_1 = pbVar1, param_1 != (byte *)0x0) {
        if ((*param_1 == 0) || (pbVar1 = param_1 + 1, 0x20 < *param_1)) break;
      }
    }
    iVar3 = FUN_0000d05c(iVar2,param_1);
    if (iVar3 == 0) {
      FUN_0000d864(iVar2);
      iVar2 = 0;
    }
  }
  return iVar2;
}




void FUN_0000d9e4(undefined4 param_1)

{
  FUN_0000c83c(param_1,0,1);
  return;
}




int FUN_0000d9fc(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    iVar1 = 0;
    do {
      piVar2 = (int *)*piVar2;
      iVar1 = iVar1 + 1;
    } while (piVar2 != (int *)0x0);
    return iVar1;
  }
  return 0;
}




void FUN_0000da28(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  bVar3 = (int)piVar2 < 0;
  if (piVar2 != (int *)0x0) {
    bVar3 = param_2 < 0;
  }
  if ((piVar2 == (int *)0x0 || param_2 == 0) || bVar3) {
    return;
  }
  do {
    piVar2 = (int *)*piVar2;
    param_2 = param_2 + -1;
    piVar1 = piVar2;
    if (piVar2 != (int *)0x0) {
      piVar1 = (int *)param_2;
    }
  } while ((piVar2 != (int *)0x0 && param_2 != 0) && -1 < (int)piVar1);
  return;
}




int FUN_0000da50(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  while ((piVar2 != (int *)0x0 && (iVar1 = FUN_0000c634(piVar2[8],param_2), iVar1 != 0))) {
    piVar2 = (int *)*piVar2;
  }
  return (int)piVar2;
}




void FUN_0000da90(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    *(int *)(param_1 + 8) = param_2;
    return;
  }
  do {
    piVar2 = piVar1;
    piVar1 = (int *)*piVar2;
  } while ((int *)*piVar2 != (int *)0x0);
  *piVar2 = param_2;
  *(int **)(param_2 + 4) = piVar2;
  return;
}




void FUN_0000dac8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_3 == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x20) != 0) {
    (*(code *)PTR_free_0001b378)();
  }
  uVar1 = FUN_0000c574(param_2);
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 == (int *)0x0) {
    *(int *)(param_1 + 8) = param_3;
  }
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  if (piVar2 != (int *)0x0) {
    do {
      piVar3 = piVar2;
      piVar2 = (int *)*piVar3;
    } while ((int *)*piVar3 != (int *)0x0);
    *piVar3 = param_3;
    *(int **)(param_3 + 4) = piVar3;
    return;
  }
  return;
}




void FUN_0000db34(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_0000c5b4(param_2);
  if (iVar2 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    *(int *)(param_1 + 8) = iVar2;
    return;
  }
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
  } while ((int *)*piVar3 != (int *)0x0);
  *piVar3 = iVar2;
  *(int **)(iVar2 + 4) = piVar3;
  return;
}




void FUN_0000db7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0000c5b4(param_3);
  FUN_0000dac8(param_1,param_2,uVar1,param_4);
  return;
}




int * FUN_0000dba4(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  piVar2 = *(int **)(param_1 + 8);
  bVar5 = (int)piVar2 < 0;
  if (piVar2 != (int *)0x0) {
    bVar5 = (int)param_2 < 0;
  }
  piVar3 = piVar2;
  if ((piVar2 != (int *)0x0 && param_2 != (int *)0x0) && !bVar5) {
    do {
      piVar3 = (int *)*piVar3;
      param_2 = (int *)((int)param_2 + -1);
      piVar1 = piVar3;
      if (piVar3 != (int *)0x0) {
        piVar1 = param_2;
      }
    } while ((piVar3 != (int *)0x0 && param_2 != (int *)0x0) && -1 < (int)piVar1);
  }
  if (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[1];
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar3;
    }
    iVar4 = *piVar3;
    if (iVar4 != 0) {
      *(int **)(iVar4 + 4) = piVar1;
    }
    if (piVar3 == piVar2) {
      *(int *)(param_1 + 8) = iVar4;
    }
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  return piVar3;
}




void FUN_0000dc0c(void)

{
  FUN_0000dba4();
  FUN_0000d864();
  return;
}




undefined4 FUN_0000dc1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    iVar4 = 0;
    do {
      iVar1 = FUN_0000c634(piVar3[8],param_2);
      if (iVar1 == 0) {
        uVar2 = FUN_0000dba4(param_1,iVar4,extraout_r2,param_4);
        return uVar2;
      }
      piVar3 = (int *)*piVar3;
      iVar4 = iVar4 + 1;
    } while (piVar3 != (int *)0x0);
  }
  return 0;
}




void FUN_0000dc78(void)

{
  FUN_0000dc1c();
  FUN_0000d864();
  return;
}




void FUN_0000dcfc(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 == (int *)0x0) {
    return;
  }
  piVar5 = (int *)0x0;
  while (iVar1 = FUN_0000c634(piVar4[8],param_2), iVar1 != 0) {
    piVar4 = (int *)*piVar4;
    piVar5 = (int *)((int)piVar5 + 1);
    if (piVar4 == (int *)0x0) {
      return;
    }
  }
  iVar1 = FUN_0000c574(param_2);
  param_3[8] = iVar1;
  piVar6 = *(int **)(param_1 + 8);
  piVar4 = piVar6;
  if (piVar6 != (int *)0x0) {
    piVar4 = piVar5;
  }
  piVar2 = piVar6;
  if ((piVar6 != (int *)0x0 && piVar5 != (int *)0x0) && -1 < (int)piVar4) {
    do {
      piVar2 = (int *)*piVar2;
      piVar5 = (int *)((int)piVar5 + -1);
      piVar4 = piVar2;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar5;
      }
    } while ((piVar2 != (int *)0x0 && piVar5 != (int *)0x0) && -1 < (int)piVar4);
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar2;
  iVar3 = piVar2[1];
  *param_3 = iVar1;
  param_3[1] = iVar3;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_3;
  }
  if (piVar2 == piVar6) {
    *(int **)(param_1 + 8) = param_3;
  }
  else {
    *(int **)param_3[1] = param_3;
  }
  piVar2[1] = 0;
  *piVar2 = 0;
  FUN_0000d864(piVar2);
  return;
}




void FUN_0000dd68(void)

{
  int iVar1;
  
  iVar1 = FUN_0000c540();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 2;
  }
  return;
}




void FUN_0000dd80(void)

{
  int iVar1;
  
  iVar1 = FUN_0000c540();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 1;
  }
  return;
}




void FUN_0000dd98(void)

{
  int iVar1;
  
  iVar1 = FUN_0000c540();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  return;
}




void FUN_0000ddb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0000c540();
  if (iVar1 == 0) {
    return;
  }
  if (param_1 != 0) {
    param_1 = 1;
  }
  *(int *)(iVar1 + 0xc) = param_1;
  return;
}




void FUN_0000ddd4(void)

{
  int iVar1;
  double in_d0;
  undefined4 extraout_s15;
  undefined4 uVar2;
  
  iVar1 = FUN_0000c540();
  uVar2 = extraout_s15;
  if (iVar1 != 0) {
    *(double *)(iVar1 + 0x18) = in_d0;
    uVar2 = (undefined4)(longlong)in_d0;
    *(undefined4 *)(iVar1 + 0xc) = 3;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
  }
  return;
}




int FUN_0000de04(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0000c540();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 4;
    uVar2 = FUN_0000c574(param_1);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
  }
  return iVar1;
}




void FUN_0000de34(void)

{
  int iVar1;
  
  iVar1 = FUN_0000c540();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 5;
  }
  return;
}




void FUN_0000de4c(void)

{
  int iVar1;
  
  iVar1 = FUN_0000c540();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 6;
  }
  return;
}




int FUN_0000de64(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar1 = FUN_0000de34();
  bVar6 = iVar1 < 0;
  if (iVar1 != 0) {
    bVar6 = param_2 < 0;
  }
  if ((iVar1 != 0 && param_2 != 0) && !bVar6) {
    piVar5 = (int *)(param_1 + -4);
    iVar3 = 0;
    piVar4 = (int *)0x0;
    do {
      piVar5 = piVar5 + 1;
      piVar2 = (int *)FUN_0000ddd4(SUB84((double)(longlong)*piVar5,0));
      bVar6 = iVar3 == 0;
      iVar3 = iVar3 + 1;
      if (bVar6) {
        *(int **)(iVar1 + 8) = piVar2;
      }
      else {
        *piVar4 = (int)piVar2;
        piVar2[1] = (int)piVar4;
      }
      piVar4 = piVar2;
    } while (iVar3 < param_2);
  }
  return iVar1;
}




int FUN_0000dec8(float *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  float fVar6;
  
  iVar1 = FUN_0000de34();
  bVar5 = iVar1 < 0;
  if (iVar1 != 0) {
    bVar5 = param_2 < 0;
  }
  if ((iVar1 != 0 && param_2 != 0) && !bVar5) {
    iVar3 = 0;
    piVar4 = (int *)0x0;
    do {
      fVar6 = *param_1;
      param_1 = param_1 + 1;
      piVar2 = (int *)FUN_0000ddd4(SUB84((double)fVar6,0));
      bVar5 = iVar3 == 0;
      iVar3 = iVar3 + 1;
      if (bVar5) {
        *(int **)(iVar1 + 8) = piVar2;
      }
      else {
        *piVar4 = (int)piVar2;
        piVar2[1] = (int)piVar4;
      }
      piVar4 = piVar2;
    } while (iVar3 < param_2);
  }
  return iVar1;
}




int FUN_0000df24(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_0000de34();
  bVar5 = iVar1 < 0;
  if (iVar1 != 0) {
    bVar5 = param_2 < 0;
  }
  if ((iVar1 != 0 && param_2 != 0) && !bVar5) {
    iVar3 = 0;
    piVar4 = (int *)0x0;
    do {
      uVar6 = *param_1;
      param_1 = param_1 + 1;
      piVar2 = (int *)FUN_0000ddd4((int)uVar6);
      bVar5 = iVar3 == 0;
      iVar3 = iVar3 + 1;
      if (bVar5) {
        *(int **)(iVar1 + 8) = piVar2;
      }
      else {
        *piVar4 = (int)piVar2;
        piVar2[1] = (int)piVar4;
      }
      piVar4 = piVar2;
    } while (iVar3 < param_2);
  }
  return iVar1;
}




int FUN_0000df7c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  iVar1 = FUN_0000de34();
  bVar6 = iVar1 < 0;
  if (iVar1 != 0) {
    bVar6 = param_2 < 0;
  }
  if ((iVar1 != 0 && param_2 != 0) && !bVar6) {
    puVar5 = (undefined4 *)(param_1 + -4);
    iVar3 = 0;
    piVar4 = (int *)0x0;
    do {
      puVar5 = puVar5 + 1;
      piVar2 = (int *)FUN_0000de04(*puVar5);
      bVar6 = iVar3 == 0;
      iVar3 = iVar3 + 1;
      if (bVar6) {
        *(int **)(iVar1 + 8) = piVar2;
      }
      else {
        *piVar4 = (int)piVar2;
        piVar2[1] = (int)piVar4;
      }
      piVar4 = piVar2;
    } while (iVar3 < param_2);
  }
  return iVar1;
}




int FUN_0000dfd8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  if ((param_1 == 0) || (iVar1 = FUN_0000c540(), iVar1 == 0)) {
    return 0;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x1c) = uVar5;
  uVar6 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x14) = uVar4;
  *(uint *)(iVar1 + 0xc) = uVar6 & 0xfffffeff;
  if (iVar2 == 0) {
LAB_0000e030:
    if (*(int *)(param_1 + 0x20) != 0) {
      piVar3 = (int *)FUN_0000c574();
      *(int **)(iVar1 + 0x20) = piVar3;
      if (piVar3 == (int *)0x0) goto LAB_0000e0a0;
    }
    if ((param_2 != 0) && (piVar7 = *(int **)(param_1 + 8), piVar7 != (int *)0x0)) {
      piVar8 = (int *)0x0;
      do {
        piVar3 = (int *)FUN_0000dfd8(piVar7,1);
        if (piVar3 == (int *)0x0) goto LAB_0000e0a0;
        if (piVar8 != (int *)0x0) {
          *piVar8 = (int)piVar3;
        }
        piVar7 = (int *)*piVar7;
        if (piVar8 != (int *)0x0) {
          piVar3[1] = (int)piVar8;
        }
        else {
          *(int **)(iVar1 + 8) = piVar3;
        }
        piVar8 = piVar3;
      } while (piVar7 != (int *)0x0);
    }
  }
  else {
    piVar3 = (int *)FUN_0000c574();
    *(int **)(iVar1 + 0x10) = piVar3;
    if (piVar3 != (int *)0x0) goto LAB_0000e030;
LAB_0000e0a0:
    FUN_0000d864(iVar1);
    iVar1 = (int)piVar3;
  }
  return iVar1;
}




char * FUN_0000e1f8(char *param_1)

{
  size_t sVar1;
  uint __n;
  char acStack_18 [8];
  timeval tStack_10;
  
  gettimeofday(&tStack_10,(__timezone_ptr_t)0x0);
  sprintf(acStack_18,"%ld",tStack_10.tv_usec);
  *param_1 = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  sVar1 = strlen(acStack_18);
  __n = 6 - sVar1 & 0xff;
  if (__n != 0) {
    memset(param_1,0x30,__n);
  }
  strcat(param_1,acStack_18);
  return param_1;
}




undefined4 FUN_0000e284(char *param_1,char *param_2)

{
  int __fd;
  int iVar1;
  char *__src;
  undefined4 uVar2;
  char acStack_30 [15];
  undefined1 local_21;
  in_addr iStack_1c;
  
  __fd = socket(2,2,0);
  if (__fd == -1) {
    perror("socket");
    uVar2 = 0xffffffff;
  }
  else {
    strncpy(acStack_30,param_1,0x14);
    local_21 = 0x30;
    iVar1 = ioctl(__fd,0x8915,acStack_30);
    if (iVar1 < 0) {
      printf(":No Such Device %s/n",param_1);
      uVar2 = 0xffffffff;
    }
    else {
      __src = inet_ntoa(iStack_1c);
      strcpy(param_2,__src);
      close(__fd);
      uVar2 = 1;
    }
  }
  return uVar2;
}




undefined4 * FUN_0000e340(undefined4 *param_1,char *param_2)

{
  char *__s;
  int __fd;
  int iVar1;
  char *pcVar2;
  char acStack_38 [18];
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  __s = (char *)calloc(0x28,1);
  __fd = socket(2,1,0);
  if (__fd < 0) {
    perror("socket");
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  strcpy(acStack_38,param_2);
  iVar1 = ioctl(__fd,0x8927,acStack_38);
  if (-1 < iVar1) {
    close(__fd);
    sprintf(__s,"%02X:%02X:%02X:%02X:%02X:%02X",(uint)local_26,(uint)local_25,(uint)local_24,(uint)local_23,
            (uint)local_22,(uint)local_21);
    *param_1 = 0x3d43414d;
    pcVar2 = stpcpy((char *)(param_1 + 1),__s);
    pcVar2[0] = ',';
    pcVar2[1] = '\0';
    free(__s);
    return param_1;
  }
  perror("ioctl");
                    /* WARNING: Subroutine does not return */
  exit(0);
}




undefined4 FUN_0000e444(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  
  pvVar1 = malloc(36999);
  *param_1 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    param_1[2] = 0;
    param_1[1] = 0;
    pvVar1 = malloc(36999);
    *param_2 = pvVar1;
    if (pvVar1 != (void *)0x0) {
      param_2[2] = 0;
      param_2[1] = 0;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}




undefined4 FUN_0000e49c(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return 1;
}




undefined4 FUN_0000e4cc(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return 1;
}




bool FUN_0000e54c(int param_1,int param_2,int param_3,void *param_4)

{
  if (param_3 != param_2) {
    memcpy(param_4,(void *)(param_1 + param_2 * 0x100f),0x100f);
  }
  return param_3 != param_2;
}




bool FUN_0000e598(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  bVar1 = (param_1[2] + 1) % 9 != param_1[1];
  if (bVar1) {
    local_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    memcpy((void *)(*param_1 + param_1[2] * 0x100f),&local_c,0x100f);
    param_1[2] = (param_1[2] + 1) % 9;
  }
  return bVar1;
}




undefined4 FUN_0000e62c(int *param_1,void *param_2)

{
  if (param_1[1] != param_1[2]) {
    memcpy(param_2,(void *)(*param_1 + param_1[1] * 0x100f),0x100f);
    param_1[1] = (param_1[1] + 1) % 9;
    return 1;
  }
  return 0;
}




undefined4 FUN_0000e698(int param_1,int param_2,int param_3,code *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_1038 [4096];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar1 = param_1;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  if (param_2 != param_3) {
    do {
      local_38 = iVar1;
      puVar6 = (undefined4 *)(local_38 + param_2 * 0x100f);
      uVar4 = *puVar6;
      uVar5 = puVar6[1];
      uVar3 = puVar6[2];
      uVar2 = puVar6[3];
      memcpy(auStack_1038,puVar6 + 4,0xfff);
      (*param_4)(uVar4,uVar5,uVar3,uVar2);
      param_2 = (param_2 + 1) % 9;
      iVar1 = local_38;
    } while (param_2 != param_3);
  }
  putchar(10);
  return 1;
}




void FUN_0000e75c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  printf("first_2byte=%s  ser_cmd=%s ser_len=%s body=%s\n",&local_10,(int)&local_10 + 3,(int)&uStack_c + 2,&uStack_8);
  return;
}




int FUN_0000e7d8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) - *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}




void FUN_0000e7f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  DAT_000258c0 = 0;
  DAT_000258c2 = 0;
  DAT_00026ab4 = 0;
  DAT_00026ab6 = 0;
  DAT_000258b8 = 0;
  uStack_8 = param_3;
  uStack_4 = param_4;
  memset(&DAT_00025ab4,0,0x1000);
  memset(&uStack_8,0,0x1000);
  DAT_00026abc = 0;
  DAT_00026ab8 = 0;
  DAT_00026ac0 = 0;
  DAT_00026ac4 = 0;
  DAT_00026ac8 = 0;
  DAT_00026acc = 0;
  DAT_00026ad0 = 0;
  DAT_00026ad4 = 0;
  DAT_00026ad8 = 0;
  DAT_00026adc = 0;
  return;
}




undefined4 FUN_0000e8dc(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_1090 [4096];
  byte local_90;
  byte local_8f;
  undefined1 auStack_8c [104];
  
  memset(auStack_8c,0,100);
  printf("r_connect = %d.\n",DAT_0001b380);
  DAT_00026f94 = (*DAT_0001d434)(DAT_00026f98,DAT_000258bc,&DAT_0001e454,2);
  if (DAT_00026f94 == -1) {
    puts("recv data failed1.");
    DAT_0001b380 = 0;
    memcpy(auStack_1090,&DAT_0001c3e4,0xfff);
    FUN_0000e7f4(DAT_0001c3d4,DAT_0001c3d8,DAT_0001c3dc,DAT_0001c3e0);
    FUN_0000e4cc(&DAT_0001b3a8);
    FUN_0000e4cc(&DAT_0001d410);
    return 0;
  }
  printf("recv package.pkg_head:%s.\n",&DAT_0001e454);
  bVar4 = DAT_00026f94 == 0;
  (&DAT_0001e454)[DAT_00026f94] = 0;
  cVar1 = DAT_0001e456;
  if (bVar4) {
    puts("the first two byte not 00   it is 0");
    return 0;
  }
  if (((DAT_0001e454 == '0') && (DAT_0001e455 == '0')) && (DAT_0001e456 == '\0')) {
    DAT_00026f94 = (*DAT_0001d434)(DAT_00026f98,DAT_000258bc,&DAT_0001e457,2);
    if (DAT_00026f94 == -1) {
      DAT_0001b380 = 0;
      return 0;
    }
    if (DAT_00026f94 == 0) {
      return 0;
    }
    if (DAT_00026f94 == 2) {
      DAT_0001e458._1_1_ = cVar1;
      printf("rev from server cmd = \n%s\n",&DAT_0001e457);
      DAT_00026f94 = (*DAT_0001d434)(DAT_00026f98,DAT_000258bc,&local_90,2);
      if (DAT_00026f94 == -1) {
        DAT_0001b380 = 0;
        return 0;
      }
      if (DAT_00026f94 == 0) {
        return 0;
      }
      if (DAT_00026f94 == 2) {
        iVar3 = (uint)local_8f + (uint)local_90 * 0x100;
        printf("rev from server sum=\n%d\n",iVar3);
        if (iVar3 == 0) {
          DAT_0001f45c = 0;
          return 1;
        }
        iVar2 = (*DAT_0001d434)(DAT_00026f98,DAT_000258bc,&DAT_0001f45c,iVar3);
        if (iVar2 == -1) {
          DAT_0001b380 = 0;
          DAT_00026f94 = iVar2;
          return 0;
        }
        DAT_00026f94 = iVar2;
        (&DAT_0001f45c)[iVar3] = 0;
        printf("recvbytes:%d,sum:%d,pkgnonce=%s\n",iVar2,iVar3,&DAT_0001f45c);
        if (DAT_00026f94 == 0) {
          DAT_0001b380 = 0;
          return 0;
        }
        if (iVar3 == DAT_00026f94) {
          return 1;
        }
        puts("PAKGE ERROR!!!!!");
      }
    }
  }
  return 0xffffffff;
}




void FUN_0000eb78(void)

{
  if (DAT_0001b3bb == 'f') {
    if (DAT_0001b3bc == '1') {
      if (DAT_0001b3bd == '\0') {
        puts("Server respond  F1\n");
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else if (DAT_0001b3bc == '2') {
      if (DAT_0001b3bd == '\0') {
        puts("Server respond  F2\n");
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else if (DAT_0001b3bc == '3') {
      if (DAT_0001b3bd == '\0') {
        puts("Server respond  F3\n");
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else if (DAT_0001b3bc == '4') {
      if (DAT_0001b3bd == '\0') {
        puts("Server respond  F4\n");
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else if (DAT_0001b3bc == '5') {
      if (DAT_0001b3bd == '\0') {
        puts("Server respond  F5\n");
        return;
      }
    }
    else if (DAT_0001b3bc == '6') {
      if (DAT_0001b3bd == '\0') {
        puts("Server respond  F6\n");
        puts("F6 exit!!!!!!");
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else if ((DAT_0001b3bc == '7') && (DAT_0001b3bd == '\0')) {
      puts("Server respond  F7\n");
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  }
  printf("respond rev : %s",&DAT_0001b3bb);
                    /* WARNING: Subroutine does not return */
  exit(0);
}




undefined4 FUN_0000ecd0(char *param_1,uint param_2)

{
  size_t sVar1;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_1a = (undefined1)(param_2 >> 8);
  printf("body_len1=%d\n",param_2 >> 8 & 0xff);
  local_19 = (undefined1)param_2;
  printf("body_len2=%d\n",param_2 & 0xff);
  DAT_00026f90 = (*DAT_0001d43c)(DAT_00026f98,DAT_000258bc,&DAT_00011b8c,2);
  if (DAT_00026f90 == -1) {
    perror("send head");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  sVar1 = strlen(param_1);
  DAT_00026f90 = (*DAT_0001d43c)(DAT_00026f98,DAT_000258bc,param_1,sVar1);
  if (DAT_00026f90 != -1) {
    DAT_00026f90 = (*DAT_0001d43c)(DAT_00026f98,DAT_000258bc,&local_1a,1);
    if (DAT_00026f90 != -1) {
      DAT_00026f90 = (*DAT_0001d43c)(DAT_00026f98,DAT_000258bc,&local_19,1);
      if (DAT_00026f90 != -1) {
        return 1;
      }
    }
  }
  perror("send");
                    /* WARNING: Subroutine does not return */
  exit(1);
}




void FUN_0000edfc(undefined4 param_1)

{
  char *__src;
  char *__s;
  char *__s_00;
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  uint uVar9;
  char local_98 [12];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [64];
  
  memset(auStack_64,0,0x3c);
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  __src = (char *)calloc(0x1e,1);
  __s = (char *)calloc(0x19,1);
  __s_00 = (char *)calloc(0x3c,1);
  iVar1 = FUN_0000e284(&DAT_00011ba4,&local_8c);
  if (iVar1 == 0) {
    puts("get ip error!");
  }
  sprintf(__s,"IP=%s,",&local_8c);
  builtin_strncpy(__s_00,"UID=",5);
  pcVar2 = (char *)thunk_FUN_0000f990(DAT_0001b2f0,"api-uid",auStack_64);
  sVar3 = strlen(__s_00);
  pcVar2 = stpcpy(__s_00 + sVar3,pcVar2);
  pcVar2[0] = ',';
  pcVar2[1] = '\0';
  sprintf(local_98,"TYPE=%d",7);
  pcVar2 = (char *)FUN_0000e1f8(&DAT_0001e44c);
  sVar3 = strlen(pcVar2);
  pcVar2 = (char *)FUN_0000e340(__src,&DAT_00011ba4);
  sVar4 = strlen(pcVar2);
  sVar5 = strlen(__s);
  sVar6 = strlen(__s_00);
  sVar7 = strlen(local_98);
  uVar9 = sVar4 + sVar3 + sVar5 + sVar6 + sVar7 & 0xff;
  FUN_0000ecd0(param_1,uVar9);
  pcVar2 = (char *)calloc(uVar9 + 4,1);
  pcVar8 = stpcpy(pcVar2,&DAT_0001e44c);
  pcVar8 = stpcpy(pcVar8,__src);
  pcVar8 = stpcpy(pcVar8,__s);
  pcVar8 = stpcpy(pcVar8,__s_00);
  strcpy(pcVar8,local_98);
  DAT_00026f90 = (*DAT_0001d43c)(DAT_00026f98,DAT_000258bc,pcVar2,uVar9);
  if (DAT_00026f90 == -1) {
    perror("send");
  }
  printf("send pakge str :%s\n",pcVar2);
  free(__src);
  free(__s);
  free(__s_00);
  if (pcVar2 != (char *)0x0) {
    free(pcVar2);
    return;
  }
  return;
}




undefined4 FUN_0000f064(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  
  sVar1 = strlen(&DAT_00025ab4);
  printf("02revbody_size=%d\n",sVar1);
  FUN_0000ecd0(param_1,sVar1);
  DAT_00026f90 = (*DAT_0001d43c)(DAT_00026f98,DAT_000258bc,&DAT_00025ab4,sVar1,param_4);
  if (DAT_00026f90 != -1) {
    printf("send what I rev:\n%s\n",&DAT_00025ab4);
    return 1;
  }
  perror("send");
                    /* WARNING: Subroutine does not return */
  exit(1);
}




/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 FUN_0000f108(char *param_1)

{
  undefined1 uVar1;
  int iVar2;
  void *__ptr;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  char *__s;
  size_t sVar6;
  int iVar7;
  undefined **ppuVar8;
  char *unaff_r6;
  char *unaff_r8;
  char *unaff_r10;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [44];
  
  ppuVar8 = &PTR_DAT_0001b330;
  iVar7 = 0;
  do {
    ppuVar8 = ppuVar8 + 1;
    iVar2 = strcmp(param_1,*ppuVar8);
    if (iVar2 == 0) {
      pcVar3 = (&PTR_s__0001b2fc)[iVar7];
      sVar4 = strlen(pcVar3);
      unaff_r8 = (char *)malloc(sVar4 + 1);
      memset(unaff_r8,0,sVar4 + 1);
      strcpy(unaff_r8,pcVar3);
      pcVar3 = (&PTR_DAT_0001b318)[iVar7];
      sVar4 = strlen(pcVar3);
      unaff_r6 = (char *)malloc(sVar4 + 1);
      memset(unaff_r6,0,sVar4 + 1);
      strcpy(unaff_r6,pcVar3);
      pcVar3 = (&PTR_DAT_0001b350)[iVar7];
      sVar4 = strlen(pcVar3);
      unaff_r10 = (char *)malloc(sVar4 + 1);
      memset(unaff_r10,0,sVar4 + 1);
      strcpy(unaff_r10,pcVar3);
      break;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 7);
  __ptr = calloc(0x1000,1);
  pcVar3 = (char *)FUN_0000e1f8(&DAT_0001e44c);
  sVar4 = strlen(pcVar3);
  pcVar3 = (char *)FUN_0000f990(DAT_0001b2f0,"port_local",auStack_5c);
  lVar5 = strtol(pcVar3,(char **)0x0,10);
  iVar7 = FUN_0000e284(&DAT_00011ba4,auStack_50);
  if (iVar7 == 0) {
    puts("get IP error");
  }
  pcVar3 = (char *)FUN_0000bea4(unaff_r6,auStack_50,(int)(short)lVar5);
  if (*pcVar3 == '\0') {
    printf("nothing returned form callapi\n\n\n ");
    uVar1 = 0;
  }
  else {
    printf("result of callapi:%s\n ",pcVar3);
    __s = (char *)FUN_0000bc44(unaff_r8,__ptr,pcVar3);
    sVar6 = strlen(__s);
    printf("state_len=%d\n",sVar6 + sVar4);
    FUN_0000ecd0(unaff_r10,sVar6 + sVar4);
    DAT_00026f90 = (*DAT_0001d43c)(DAT_00026f98,DAT_000258bc,&DAT_0001e44c,sVar4);
    if (DAT_00026f90 == -1) {
      perror("send");
    }
    DAT_00026f90 = (*DAT_0001d43c)(DAT_00026f98,DAT_000258bc,__ptr,sVar6);
    if (DAT_00026f90 == -1) {
      perror("send");
    }
    printf("sendbytes=%d\n",DAT_00026f90);
    printf("send pakge str :%s\n",__ptr);
    if (unaff_r10 != (char *)0x0) {
      free(unaff_r10);
    }
    if (unaff_r8 != (char *)0x0) {
      free(unaff_r8);
    }
    if (unaff_r6 != (char *)0x0) {
      free(unaff_r6);
    }
    free(pcVar3);
    free(__ptr);
    uVar1 = 1;
  }
  return uVar1;
}




undefined4 FUN_0000f410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_0000feb0(&uStack_8,&DAT_000258c4,param_3,param_4,param_4);
  uVar2 = FUN_00010004(PTR_s__config_cgminer_conf_0001b36c,&DAT_00026d6c);
  uVar1 = FUN_00010474(uVar1,uVar2);
  FUN_00010210(uVar1,PTR_s__config_cgminer_conf_0001b36c);
  return 1;
}




undefined4 FUN_0000f470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_0000feb0(&uStack_8,&DAT_000258c4);
  uVar2 = FUN_00010710(&DAT_00026ae0);
  FUN_000108b4(uVar1,uVar2);
  FUN_00010a34();
  return 1;
}




undefined4 FUN_0000f4c0(void)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  hostent *phVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_d4 [12];
  sockaddr local_c8;
  char acStack_b8 [40];
  sigset_t sStack_90;
  
  pcVar1 = (char *)FUN_0000f990(DAT_0001b2f0,"port_local",auStack_d4);
  lVar2 = strtol(pcVar1,(char **)0x0,10);
  iVar3 = FUN_0000e284(&DAT_00011ba4,acStack_b8);
  if (iVar3 == 0) {
    puts("get IP error");
  }
  sigemptyset(&sStack_90);
  sigaddset(&sStack_90,0xd);
  sigprocmask(0,&sStack_90,(sigset_t *)0x0);
  system("/etc/init.d/cgminer restart");
  sigprocmask(1,&sStack_90,(sigset_t *)0x0);
  sleep(5);
  phVar4 = gethostbyname(acStack_b8);
  if (phVar4 == (hostent *)0x0) {
    puts("Failed to resolve host ");
    uVar7 = 0;
  }
  else {
    iVar3 = socket(2,1,0);
    if (iVar3 == -1) {
      piVar5 = __errno_location();
      pcVar1 = strerror(*piVar5);
      printf("Socket initialisation failed: %s\n",pcVar1);
      uVar7 = 0;
    }
    else {
      local_c8.sa_data[6] = '\0';
      local_c8.sa_data[7] = '\0';
      local_c8.sa_data[8] = '\0';
      local_c8.sa_data[9] = '\0';
      local_c8.sa_data[10] = '\0';
      local_c8.sa_data[0xb] = '\0';
      local_c8.sa_data[0xc] = '\0';
      local_c8.sa_data[0xd] = '\0';
      iVar8 = 6;
      local_c8.sa_data._2_4_ = *(undefined4 *)*phVar4->h_addr_list;
      local_c8.sa_data._0_2_ = (ushort)(byte)((uint)lVar2 >> 8) | (ushort)(lVar2 << 8);
      local_c8.sa_family = 2;
      while (iVar6 = connect(iVar3,&local_c8,0x10), iVar6 < 0) {
        bVar9 = iVar8 == 0;
        iVar8 = iVar8 + -1;
        if (bVar9) {
          close(iVar3);
          goto LAB_0000f600;
        }
        piVar5 = __errno_location();
        pcVar1 = strerror(*piVar5);
        printf("Cgminer!Socket connect failed: %s\n",pcVar1);
        puts("restart not well!!\nwait next 5s......");
        sleep(5);
      }
      close(iVar3);
      if (iVar8 < 1) {
LAB_0000f600:
        puts("restart timeout!");
        uVar7 = 0xff;
      }
      else {
        puts("restart OK!");
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}




void FUN_0000f69c(undefined4 param_1,char *param_2)

{
  char *__dest;
  char *pcVar1;
  
  __dest = (char *)calloc(0x3c,1);
  pcVar1 = (char *)FUN_0000e1f8(&DAT_0001e44c);
  pcVar1 = stpcpy(__dest,pcVar1);
  builtin_strncpy(pcVar1,"ID=",4);
  pcVar1 = stpcpy(pcVar1 + 3,(char *)&DAT_00026ab8);
  builtin_strncpy(pcVar1,",result=",8);
  pcVar1 = stpcpy(pcVar1 + 8,param_2);
  FUN_0000ecd0(param_1,(int)pcVar1 - (int)__dest);
  DAT_00026f90 = (*DAT_0001d43c)(DAT_00026f98,DAT_000258bc,__dest,(int)pcVar1 - (int)__dest);
  if (DAT_00026f90 == -1) {
    perror("send");
  }
  printf("send cgminer state :%s\n",__dest);
  free(__dest);
  return;
}




undefined4 FUN_0000f854(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_1020 [4096];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10._3_1_ = (char)((uint)param_1 >> 0x18);
  local_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (local_10._3_1_ == '0') {
    local_c._1_1_ = (char)(param_2 >> 8);
    if ((param_2 & 0xff) == 0x31) {
      if (local_c._1_1_ == '\0') {
        FUN_0000edfc(&DAT_0001163c);
        goto LAB_0000f898;
      }
    }
    else if (((param_2 & 0xff) == 0x36) && (local_c._1_1_ == '\0')) {
      memcpy(auStack_1020,&stack0x00000000,0xfff);
      FUN_0000f410(local_10,local_c,uStack_8,uStack_4);
      iVar1 = FUN_0000f4c0();
      if (iVar1 != 1) {
        FUN_0000f69c(&DAT_00011650,&DAT_00011d94);
        puts("restart cgminer FAILD ");
        return 0;
      }
      FUN_0000f69c(&DAT_00011650,&DAT_00011d78);
      puts("restart cgminer OK OK ");
      goto LAB_0000f898;
    }
  }
  iVar1 = FUN_0000f108((int)&local_10 + 3);
  if (iVar1 == 0) {
    puts("after send_getstatus_res()");
    return 0;
  }
LAB_0000f898:
  memcpy(auStack_1020,&stack0x00000000,0xfff);
  FUN_0000e7f4(local_10,local_c,uStack_8,uStack_4);
  return 1;
}




char * FUN_0000f990(char *param_1,undefined4 param_2,char *param_3)

{
  FILE *__stream;
  size_t __n;
  void *__ptr;
  undefined4 uVar1;
  int iVar2;
  
  __stream = fopen(param_1,"rb+");
  if (__stream == (FILE *)0x0) {
    puts("open error1111");
  }
  fseek(__stream,0,2);
  __n = ftell(__stream);
  if (__n == 0) {
    param_3 = (char *)0x0;
  }
  else {
    fseek(__stream,0,0);
    __ptr = malloc(__n + 100);
    fread(__ptr,1,__n,__stream);
    fclose(__stream);
    uVar1 = FUN_0000d9d8(__ptr);
    iVar2 = FUN_0000da50(uVar1,param_2);
    strcpy(param_3,*(char **)(iVar2 + 0x10));
    FUN_0000d864(uVar1);
    free(__ptr);
  }
  return param_3;
}




undefined4 FUN_0000fa54(char *param_1,undefined4 param_2)

{
  FILE *pFVar1;
  size_t __n;
  void *__ptr;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *__s;
  char acStack_90 [12];
  char acStack_84 [12];
  char acStack_78 [16];
  char acStack_68 [20];
  char acStack_54 [60];
  
  pFVar1 = fopen(param_1,"rb+");
  if (pFVar1 == (FILE *)0x0) {
    puts("open error");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  fseek(pFVar1,0,2);
  __n = ftell(pFVar1);
  if (__n == 0) {
    uVar2 = 0;
  }
  else {
    fseek(pFVar1,0,0);
    __ptr = malloc(__n + 100);
    fread(__ptr,1,__n,pFVar1);
    fclose(pFVar1);
    uVar2 = FUN_0000d9d8(__ptr);
    iVar3 = FUN_0000da50(uVar2,"api-switch");
    strcpy(acStack_78,*(char **)(iVar3 + 0x10));
    iVar3 = FUN_0000da50(uVar2,"api-uid");
    strcpy(acStack_54,*(char **)(iVar3 + 0x10));
    iVar3 = FUN_0000da50(uVar2,"ip_server");
    strcpy(acStack_68,*(char **)(iVar3 + 0x10));
    iVar3 = FUN_0000da50(uVar2,"port_server");
    strcpy(acStack_90,*(char **)(iVar3 + 0x10));
    iVar3 = FUN_0000da50(uVar2,"port_local");
    strcpy(acStack_84,*(char **)(iVar3 + 0x10));
    FUN_0000d864(uVar2);
    pFVar1 = fopen(param_1,"w+");
    if (pFVar1 == (FILE *)0x0) {
      puts("open error");
    }
    uVar2 = FUN_0000de4c();
    uVar4 = FUN_0000de04(acStack_78);
    FUN_0000dac8(uVar2,"api-switch",uVar4);
    uVar4 = FUN_0000de04(acStack_54);
    FUN_0000dac8(uVar2,"api-uid",uVar4);
    uVar4 = FUN_0000de04(param_2);
    FUN_0000dac8(uVar2,&DAT_00011e08,uVar4);
    uVar4 = FUN_0000de04(acStack_68);
    FUN_0000dac8(uVar2,"ip_server",uVar4);
    uVar4 = FUN_0000de04(acStack_90);
    FUN_0000dac8(uVar2,"port_server",uVar4);
    uVar4 = FUN_0000de04(acStack_84);
    FUN_0000dac8(uVar2,"port_local",uVar4);
    __s = (char *)FUN_0000d9e4(uVar2);
    fputs(__s,pFVar1);
    fclose(pFVar1);
    FUN_0000d864(uVar2);
    free(__s);
    free(__ptr);
    uVar2 = 1;
  }
  return uVar2;
}




undefined4 FUN_0000fc84(char *param_1)

{
  FILE *pFVar1;
  size_t __n;
  void *__ptr;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *__s;
  char acStack_90 [12];
  char acStack_84 [12];
  char acStack_78 [16];
  char acStack_68 [20];
  char acStack_54 [64];
  
  pFVar1 = fopen(param_1,"rb+");
  if (pFVar1 == (FILE *)0x0) {
    puts("open error");
  }
  fseek(pFVar1,0,2);
  __n = ftell(pFVar1);
  if (__n == 0) {
    uVar2 = 0;
  }
  else {
    fseek(pFVar1,0,0);
    __ptr = malloc(__n + 100);
    fread(__ptr,1,__n,pFVar1);
    fclose(pFVar1);
    uVar2 = FUN_0000d9d8(__ptr);
    iVar3 = FUN_0000da50(uVar2,&DAT_00011e08);
    strcpy(acStack_78,*(char **)(iVar3 + 0x10));
    iVar3 = FUN_0000da50(uVar2,"api-uid");
    strcpy(acStack_54,*(char **)(iVar3 + 0x10));
    iVar3 = FUN_0000da50(uVar2,"ip_server");
    strcpy(acStack_68,*(char **)(iVar3 + 0x10));
    iVar3 = FUN_0000da50(uVar2,"port_server");
    strcpy(acStack_90,*(char **)(iVar3 + 0x10));
    iVar3 = FUN_0000da50(uVar2,"port_local");
    strcpy(acStack_84,*(char **)(iVar3 + 0x10));
    FUN_0000d864(uVar2);
    pFVar1 = fopen(param_1,"w+");
    if (pFVar1 == (FILE *)0x0) {
      puts("open error");
    }
    uVar2 = FUN_0000de4c();
    uVar4 = FUN_0000de04(&DAT_00011e10);
    FUN_0000dac8(uVar2,"api-switch",uVar4);
    uVar4 = FUN_0000de04(acStack_54);
    FUN_0000dac8(uVar2,"api-uid",uVar4);
    uVar4 = FUN_0000de04(acStack_78);
    FUN_0000dac8(uVar2,&DAT_00011e08,uVar4);
    uVar4 = FUN_0000de04(acStack_68);
    FUN_0000dac8(uVar2,"ip_server",uVar4);
    uVar4 = FUN_0000de04(acStack_90);
    FUN_0000dac8(uVar2,"port_server",uVar4);
    uVar4 = FUN_0000de04(acStack_84);
    FUN_0000dac8(uVar2,"port_local",uVar4);
    __s = (char *)FUN_0000d9e4(uVar2);
    fputs(__s,pFVar1);
    fclose(pFVar1);
    FUN_0000d864(uVar2);
    free(__s);
    free(__ptr);
    uVar2 = 1;
  }
  return uVar2;
}




int FUN_0000feb0(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  pcVar1 = strchr(param_1,0x3b);
  iVar7 = 0;
  uVar4 = 0;
  *pcVar1 = '\0';
  strcpy((char *)&DAT_00026ab8,param_1);
  pcVar1 = pcVar1 + 1;
  do {
    pcVar2 = strchr(pcVar1,0x3b);
    pcVar5 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      pcVar5 = pcVar2 + 1;
      *pcVar2 = '\0';
    }
    if (*pcVar1 != '\0') {
      iVar6 = iVar7 * 0xa4;
LAB_0000ff20:
      do {
        pcVar3 = strchr(pcVar1,0x2c);
        pcVar2 = pcVar3;
        if (pcVar3 != (char *)0x0) {
          pcVar2 = pcVar3 + 1;
          *pcVar3 = '\0';
        }
        if (*pcVar1 != '\0') {
          switch(uVar4) {
          case 0:
            strcpy((char *)(param_2 + iVar6),pcVar1);
            uVar4 = 1;
            *(int *)(param_2 + 0x1ec) = *(int *)(param_2 + 0x1ec) + 1;
            pcVar1 = pcVar2;
            if (pcVar2 == (char *)0x0) goto LAB_0000ffa0;
            goto LAB_0000ff20;
          case 1:
            uVar4 = 2;
            strcpy((char *)(param_2 + iVar6 + 4),pcVar1);
            break;
          case 2:
            uVar4 = 3;
            strcpy((char *)(param_2 + iVar6 + 0x54),pcVar1);
            break;
          case 3:
            strcpy((char *)(param_2 + iVar6 + 0x7c),pcVar1);
            uVar4 = 0;
            break;
          default:
            puts("Pools Config Data is Wrong");
          }
        }
        pcVar1 = pcVar2;
      } while (pcVar2 != (char *)0x0);
LAB_0000ffa0:
      iVar7 = iVar7 + 1;
    }
    pcVar1 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      return param_2;
    }
  } while( true );
}




int FUN_00010004(char *param_1,int param_2)

{
  FILE *__stream;
  size_t __n;
  void *__ptr;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  __stream = fopen(param_1,"rb+");
  if (__stream == (FILE *)0x0) {
    puts("open error");
  }
  fseek(__stream,0,2);
  __n = ftell(__stream);
  if (__n == 0) {
    param_2 = 0;
  }
  else {
    fseek(__stream,0,0);
    __ptr = malloc(__n + 100);
    fread(__ptr,1,__n,__stream);
    fclose(__stream);
    uVar1 = FUN_0000d9d8(__ptr);
    iVar2 = FUN_0000da50(uVar1,"pools");
    FUN_0000d9fc();
    piVar4 = *(int **)(iVar2 + 8);
    if (piVar4 != (int *)0x0) {
      iVar2 = 0;
      do {
        iVar3 = FUN_0000da50(piVar4,&DAT_00011ea0);
        iVar5 = iVar2 * 0xa4;
        iVar2 = iVar2 + 1;
        strcpy((char *)(param_2 + iVar5 + 4),*(char **)(iVar3 + 0x10));
        iVar3 = FUN_0000da50(piVar4,&DAT_00011ea4);
        strcpy((char *)(param_2 + iVar5 + 0x54),*(char **)(iVar3 + 0x10));
        iVar3 = FUN_0000da50(piVar4,&DAT_00011eac);
        strcpy((char *)(param_2 + iVar5 + 0x7c),*(char **)(iVar3 + 0x10));
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)0x0);
    }
    iVar2 = FUN_0000da50(uVar1,"api-listen");
    *(undefined4 *)(param_2 + 0x1ec) = *(undefined4 *)(iVar2 + 0x14);
    iVar2 = FUN_0000da50(uVar1,"api-network");
    *(undefined4 *)(param_2 + 0x1f0) = *(undefined4 *)(iVar2 + 0x14);
    iVar2 = FUN_0000da50(uVar1,"bitmain-nobeeper");
    *(undefined4 *)(param_2 + 500) = *(undefined4 *)(iVar2 + 0x14);
    iVar2 = FUN_0000da50(uVar1,"bitmain-notempoverctrl");
    *(undefined4 *)(param_2 + 0x1f8) = *(undefined4 *)(iVar2 + 0x14);
    iVar2 = FUN_0000da50(uVar1,"api-allow");
    strcpy((char *)(param_2 + 0x1fc),*(char **)(iVar2 + 0x10));
    iVar2 = FUN_0000da50(uVar1,"bitmain-freq");
    strcpy((char *)(param_2 + 0x206),*(char **)(iVar2 + 0x10));
    iVar2 = FUN_0000da50(uVar1,"bitmain-voltage");
    strcpy((char *)(param_2 + 0x215),*(char **)(iVar2 + 0x10));
    free(__ptr);
    FUN_0000d864(uVar1);
  }
  return param_2;
}




void FUN_00010210(int param_1,char *param_2)

{
  FILE *__stream;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *__s;
  int iVar5;
  int iVar6;
  
  __stream = fopen(param_2,"w+");
  if (__stream == (FILE *)0x0) {
    puts("open error");
  }
  uVar1 = FUN_0000de4c();
  iVar5 = 0;
  uVar2 = FUN_0000de34();
  FUN_0000dac8(uVar1,"pools",uVar2);
  do {
    uVar3 = FUN_0000de4c();
    iVar6 = iVar5 * 0xa4;
    iVar5 = iVar5 + 1;
    FUN_0000da90(uVar2,uVar3);
    uVar4 = FUN_0000de04(param_1 + iVar6 + 4);
    FUN_0000dac8(uVar3,&DAT_00011ea0,uVar4);
    uVar4 = FUN_0000de04(param_1 + iVar6 + 0x54);
    FUN_0000dac8(uVar3,&DAT_00011ea4,uVar4);
    uVar4 = FUN_0000de04(param_1 + iVar6 + 0x7c);
    FUN_0000dac8(uVar3,&DAT_00011eac,uVar4);
  } while (iVar5 != 3);
  if (*(int *)(param_1 + 0x1ec) == 1) {
    uVar2 = FUN_0000dd80();
    FUN_0000dac8(uVar1,"api-listen",uVar2);
  }
  else if (*(int *)(param_1 + 0x1ec) == 0) {
    uVar2 = FUN_0000dd98();
    FUN_0000dac8(uVar1,"api-listen",uVar2);
    iVar5 = *(int *)(param_1 + 0x1f0);
    goto joined_r0x000102e8;
  }
  iVar5 = *(int *)(param_1 + 0x1f0);
joined_r0x000102e8:
  if (iVar5 == 1) {
    uVar2 = FUN_0000dd80();
    FUN_0000dac8(uVar1,"api-network",uVar2);
    iVar5 = *(int *)(param_1 + 500);
  }
  else {
    if (iVar5 == 0) {
      uVar2 = FUN_0000dd98();
      FUN_0000dac8(uVar1,"api-network",uVar2);
    }
    iVar5 = *(int *)(param_1 + 500);
  }
  if (iVar5 == 1) {
    uVar2 = FUN_0000dd80();
    FUN_0000dac8(uVar1,"bitmain-nobeeper",uVar2);
    iVar5 = *(int *)(param_1 + 0x1f8);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1f8);
  }
  if (iVar5 == 1) {
    uVar2 = FUN_0000dd80();
    FUN_0000dac8(uVar1,"bitmain-notempoverctrl",uVar2);
  }
  uVar2 = FUN_0000de04(param_1 + 0x1fc);
  FUN_0000dac8(uVar1,"api-allow",uVar2);
  uVar2 = FUN_0000de04(param_1 + 0x206);
  FUN_0000dac8(uVar1,"bitmain-freq",uVar2);
  uVar2 = FUN_0000de04(param_1 + 0x215);
  FUN_0000dac8(uVar1,"bitmain-voltage",uVar2);
  __s = (char *)FUN_0000d9e4(uVar1);
  fputs(__s,__stream);
  fclose(__stream);
  FUN_0000d864(uVar1);
  free(__s);
  return;
}




int FUN_00010474(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  printf("change->pools_count = %d\n",*(undefined4 *)(param_1 + 0x1ec),param_3,param_4,param_4);
  iVar3 = *(int *)(param_1 + 0x1ec);
  if (iVar3 == 1) {
    lVar1 = strtol(param_1,(char **)0x0,10);
    if (lVar1 == 1) {
      strcpy((char *)(param_2 + 0xa8),param_1 + 4);
      strcpy((char *)(param_2 + 0xf8),param_1 + 0x54);
      strcpy((char *)(param_2 + 0x120),param_1 + 0x7c);
    }
    else if (lVar1 == 2) {
      strcpy((char *)(param_2 + 0x14c),param_1 + 4);
      strcpy((char *)(param_2 + 0x19c),param_1 + 0x54);
      strcpy((char *)(param_2 + 0x1c4),param_1 + 0x7c);
    }
    else if (lVar1 == 0) {
      strcpy((char *)(param_2 + 4),param_1 + 4);
      strcpy((char *)(param_2 + 0x54),param_1 + 0x54);
      strcpy((char *)(param_2 + 0x7c),param_1 + 0x7c);
    }
  }
  else if (iVar3 == 2) {
    lVar1 = strtol(param_1,(char **)0x0,10);
    lVar2 = strtol(param_1 + 0xa4,(char **)0x0,10);
    if (lVar1 == 1) {
      strcpy((char *)(param_2 + 0xa8),param_1 + 4);
      strcpy((char *)(param_2 + 0xf8),param_1 + 0x54);
      strcpy((char *)(param_2 + 0x120),param_1 + 0x7c);
    }
    else if (lVar1 == 2) {
      strcpy((char *)(param_2 + 0x14c),param_1 + 4);
      strcpy((char *)(param_2 + 0x19c),param_1 + 0x54);
      strcpy((char *)(param_2 + 0x1c4),param_1 + 0x7c);
    }
    else if (lVar1 == 0) {
      strcpy((char *)(param_2 + 4),param_1 + 4);
      strcpy((char *)(param_2 + 0x54),param_1 + 0x54);
      strcpy((char *)(param_2 + 0x7c),param_1 + 0x7c);
    }
    if (lVar2 == 1) {
      strcpy((char *)(param_2 + 0xa8),param_1 + 0xa8);
      strcpy((char *)(param_2 + 0xf8),param_1 + 0xf8);
      strcpy((char *)(param_2 + 0x120),param_1 + 0x120);
    }
    else if (lVar2 == 2) {
      strcpy((char *)(param_2 + 0x14c),param_1 + 0xa8);
      strcpy((char *)(param_2 + 0x19c),param_1 + 0xf8);
      strcpy((char *)(param_2 + 0x1c4),param_1 + 0x120);
    }
    else if (lVar2 == 0) {
      strcpy((char *)(param_2 + 4),param_1 + 0xa8);
      strcpy((char *)(param_2 + 0x54),param_1 + 0xf8);
      strcpy((char *)(param_2 + 0x7c),param_1 + 0x120);
    }
  }
  else if (iVar3 == 3) {
    strcpy((char *)(param_2 + 4),param_1 + 4);
    strcpy((char *)(param_2 + 0x54),param_1 + 0x54);
    strcpy((char *)(param_2 + 0x7c),param_1 + 0x7c);
    strcpy((char *)(param_2 + 0xa8),param_1 + 0xa8);
    strcpy((char *)(param_2 + 0xf8),param_1 + 0xf8);
    strcpy((char *)(param_2 + 0x120),param_1 + 0x120);
    strcpy((char *)(param_2 + 0x14c),param_1 + 0x14c);
    strcpy((char *)(param_2 + 0x19c),param_1 + 0x19c);
    strcpy((char *)(param_2 + 0x1c4),param_1 + 0x1c4);
    return param_2;
  }
  return param_2;
}




int FUN_00010710(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0000ba78("pool1url");
  strcpy((char *)(param_1 + 4),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("pool1user");
  strcpy((char *)(param_1 + 0x54),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("pool1pw");
  strcpy((char *)(param_1 + 0x7c),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("pool2url");
  strcpy((char *)(param_1 + 0xa8),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("pool2user");
  strcpy((char *)(param_1 + 0xf8),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("pool2pw");
  strcpy((char *)(param_1 + 0x120),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("pool3url");
  strcpy((char *)(param_1 + 0x14c),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("pool3user");
  strcpy((char *)(param_1 + 0x19c),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("pool3pw");
  strcpy((char *)(param_1 + 0x1c4),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("api_allow");
  strcpy((char *)(param_1 + 0x1ec),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("more_options");
  strcpy((char *)(param_1 + 0x200),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("freq");
  strcpy((char *)(param_1 + 0x20a),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("voltage");
  strcpy((char *)(param_1 + 0x219),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("pool_balance");
  strcpy((char *)(param_1 + 0x223),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("bitmain_nobeeper");
  strcpy((char *)(param_1 + 0x22d),pcVar1);
  pcVar1 = (char *)FUN_0000ba78("bitmain_notempoverctrl");
  strcpy((char *)(param_1 + 0x237),pcVar1);
  return param_1;
}




int FUN_000108b4(char *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x1ec);
  if (iVar3 == 1) {
    lVar1 = strtol(param_1,(char **)0x0,10);
    iVar3 = lVar1 * 0xa4;
    strcpy((char *)(param_2 + iVar3 + 4),param_1 + 4);
    strcpy((char *)(param_2 + iVar3 + 0x54),param_1 + 0x54);
    strcpy((char *)(param_2 + iVar3 + 0x7c),param_1 + 0x7c);
  }
  else if (iVar3 == 2) {
    lVar1 = strtol(param_1,(char **)0x0,10);
    lVar2 = strtol(param_1 + 0xa4,(char **)0x0,10);
    iVar4 = lVar1 * 0xa4;
    iVar3 = lVar2 * 0xa4;
    strcpy((char *)(param_2 + iVar4 + 4),param_1 + 4);
    strcpy((char *)(param_2 + iVar4 + 0x54),param_1 + 0x54);
    strcpy((char *)(param_2 + iVar4 + 0x7c),param_1 + 0x7c);
    strcpy((char *)(param_2 + iVar3 + 4),param_1 + 0xa8);
    strcpy((char *)(param_2 + iVar3 + 0x54),param_1 + 0xf8);
    strcpy((char *)(param_2 + iVar3 + 0x7c),param_1 + 0x120);
  }
  else if (iVar3 == 3) {
    strcpy((char *)(param_2 + 4),param_1 + 4);
    strcpy((char *)(param_2 + 0x54),param_1 + 0x54);
    strcpy((char *)(param_2 + 0x7c),param_1 + 0x7c);
    strcpy((char *)(param_2 + 0xa8),param_1 + 0xa8);
    strcpy((char *)(param_2 + 0xf8),param_1 + 0xf8);
    strcpy((char *)(param_2 + 0x120),param_1 + 0x120);
    strcpy((char *)(param_2 + 0x14c),param_1 + 0x14c);
    strcpy((char *)(param_2 + 0x19c),param_1 + 0x19c);
    strcpy((char *)(param_2 + 0x1c4),param_1 + 0x1c4);
    return param_2;
  }
  return param_2;
}




void FUN_00010a34(int param_1)

{
  FILE *__s;
  
  __s = fopen(DAT_0001c3d0,"rb+");
  if (__s == (FILE *)0x0) {
    puts("open error");
  }
  fwrite("config cgminer \'default\'\n",1,0x19,__s);
  fprintf(__s,"  option pool1url  \'%s\'\n",param_1 + 4);
  fprintf(__s,"\toption pool1user \'%s\'\n",param_1 + 0x54);
  fprintf(__s,"\toption pool1pw   \'%s\'\n",param_1 + 0x7c);
  fprintf(__s,"\toption pool2url  \'%s\'\n",param_1 + 0xa8);
  fprintf(__s,"\toption pool2user \'%s\'\n",param_1 + 0xf8);
  fprintf(__s,"\toption pool2pw   \'%s\'\n",param_1 + 0x120);
  fprintf(__s,"\toption pool3url  \'%s\'\n",param_1 + 0x14c);
  fprintf(__s,"\toption pool3user \'%s\'\n",param_1 + 0x19c);
  fprintf(__s,"\toption pool3pw   \'%s\'\n",param_1 + 0x1c4);
  fprintf(__s,"\toption api_allow  \'%s\'\n",param_1 + 0x1ec);
  fprintf(__s,"\toption more_options \'%s\'\n",param_1 + 0x200);
  fprintf(__s,"\toption freq   \'%s\'\n",param_1 + 0x20a);
  fprintf(__s,"\toption voltage   \'%s\'\n",param_1 + 0x219);
  fprintf(__s,"\toption pool_balance \'%s\'\n",param_1 + 0x223);
  fprintf(__s,"\toption bitmain_nobeeper   \'%s\'\n",param_1 + 0x22d);
  fprintf(__s,"\toption bitmain_notempoverctrl \'%s\'\n",param_1 + 0x237);
  fwrite("\t           ",1,0xc,__s);
  fclose(__s);
  return;
}




undefined4 FUN_00010bfc(char *param_1)

{
  FILE *__s;
  
  __s = fopen("/etc/config/auth_tmp.txt","w+");
  if (__s != (FILE *)0x0) {
    if (((*param_1 == 'f') && (param_1[1] == '5')) && (param_1[2] == '\0')) {
      fputs(param_1,__s);
    }
    else {
      fwrite(&DAT_0001217c,1,2,__s);
    }
    fclose(__s);
    return 1;
  }
  return 0xffffffff;
}




void FUN_00010d34(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    DAT_0001d440 = 0;
    DAT_0001d420 = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}




int * FUN_00010d90(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 4);
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = strcmp((char *)(*piVar2 + 0x1008),(char *)(param_1 + 0x1008));
      if (iVar1 == 0) {
        return piVar2;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  return piVar2;
}




int * FUN_00010ddc(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  do {
    piVar2 = param_2;
    param_2 = (int *)piVar2[1];
    if (param_2 == (int *)0x0) {
      return piVar2;
    }
    iVar1 = strcmp((char *)(*param_2 + 0x1008),(char *)(param_1 + 0x1008));
  } while (iVar1 != 0);
  return piVar2;
}




void FUN_00010e24(void)

{
  int iVar1;
  int iVar2;
  int *__ptr;
  
  iVar1 = FUN_00010ddc();
  __ptr = *(int **)(iVar1 + 4);
  if (__ptr != (int *)0x0) {
    iVar2 = *__ptr;
    *(int *)(iVar1 + 4) = __ptr[1];
    printf("delete one cmd:%s,nonce:%s.\n",iVar2 + 3,iVar2 + 0x1008);
    free((void *)*__ptr);
    free(__ptr);
    DAT_0001d440 = DAT_0001d440 + -1;
    return;
  }
  puts("there is no cmd for this response.");
  return;
}




void FUN_00010ec0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  pvVar2 = malloc(0x100f);
  strcpy((char *)((int)pvVar2 + 3),(char *)(param_1 + 3));
  strcpy((char *)((int)pvVar2 + 0x1008),(char *)(param_1 + 0x1008));
  uVar3 = *(undefined4 *)(param_3 + 4);
  *puVar1 = pvVar2;
  puVar1[1] = uVar3;
  DAT_0001d440 = DAT_0001d440 + 1;
  *(undefined4 **)(param_3 + 4) = puVar1;
  if (DAT_0001d440 < 0x15) {
    return;
  }
  puts("L_cmd is full!");
  return;
}




void FUN_00010f48(void *param_1)

{
  undefined4 *__ptr;
  undefined4 *puVar1;
  
  __ptr = *(undefined4 **)((int)param_1 + 4);
  *(undefined4 *)((int)param_1 + 4) = 0;
  while (__ptr != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)__ptr[1];
    free((void *)*__ptr);
    free(__ptr);
    __ptr = puVar1;
  }
  free(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x0001100c) */

void FUN_00010fe0(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  _init(param_1);
  puVar2 = (undefined4 *)0x1affc;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
    (*(code *)*puVar2)(param_1,param_2,param_3,(code *)*puVar2,param_4);
  } while (iVar1 != 1);
  return;
}




void _fini(void)

{
  return;
}



