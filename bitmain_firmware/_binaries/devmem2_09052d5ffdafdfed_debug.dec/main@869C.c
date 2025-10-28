int __fastcall main(int argc, const char **argv, const char **envp)
{
  FILE *v3; // r4
  int v4; // r5
  int *v5; // r0
  char *v6; // r0
  FILE *v7; // r4
  int v8; // r5
  int *v9; // r0
  char *v10; // r0
  FILE *v11; // r4
  int v12; // r5
  int *v13; // r0
  char *v14; // r0
  unsigned int v18; // [sp+14h] [bp+Ch]
  unsigned __int8 *v19; // [sp+18h] [bp+10h]
  char *addr; // [sp+1Ch] [bp+14h]
  int fd; // [sp+20h] [bp+18h]
  unsigned int v22; // [sp+24h] [bp+1Ch]
  int v23; // [sp+28h] [bp+20h]

  v23 = 119;
  if ( argc <= 1 )
  {
    fprintf(
      (FILE *)stderr,
      "\n"
      "Usage:\t%s { address } [ type [ data ] ]\n"
      "\taddress : memory address to act upon\n"
      "\ttype    : access operation type : [b]yte, [h]alfword, [w]ord\n"
      "\tdata    : data to be written\n"
      "\n",
      *argv);
    exit(1);
  }
  v22 = strtoul(argv[1], 0, 0);
  if ( argc > 2 )
    v23 = tolower(*(unsigned __int8 *)argv[2]);
  fd = open("/dev/mem", 1052674);
  if ( fd == -1 )
  {
    v3 = (FILE *)stderr;
    v4 = *_errno_location();
    v5 = _errno_location();
    v6 = strerror(*v5);
    fprintf(v3, "Error at line %d, file %s (%d) [%s]\n", 79, "devmem2.c", v4, v6);
    exit(1);
  }
  puts("/dev/mem opened.");
  fflush((FILE *)stdout);
  addr = (char *)mmap(0, 0x1000u, 3, 1, fd, v22 & 0xFFFFF000);
  if ( addr == (char *)-1 )
  {
    v7 = (FILE *)stderr;
    v8 = *_errno_location();
    v9 = _errno_location();
    v10 = strerror(*v9);
    fprintf(v7, "Error at line %d, file %s (%d) [%s]\n", 85, "devmem2.c", v8, v10);
    exit(1);
  }
  printf("Memory mapped at address %p.\n", addr);
  fflush((FILE *)stdout);
  v19 = (unsigned __int8 *)&addr[v22 & 0xFFF];
  if ( v23 == 104 )
  {
    printf("Value at address 0x%X (%p): 0x%X\n", v22, v19, *(unsigned __int16 *)v19);
  }
  else if ( v23 == 119 )
  {
    printf("Value at address 0x%X (%p): 0x%X\n", v22, v19, *(_DWORD *)v19);
  }
  else
  {
    if ( v23 != 98 )
    {
      fprintf((FILE *)stderr, "Illegal data type '%c'.\n", v23);
      exit(2);
    }
    printf("Value at address 0x%X (%p): 0x%X\n", v22, v19, *v19);
  }
  fflush((FILE *)stdout);
  if ( argc > 3 )
  {
    v18 = strtoul(argv[3], 0, 0);
    if ( v23 == 104 )
    {
      *(_WORD *)v19 = v18;
      printf("Written 0x%X; readback 0x%X\n", v18, *(unsigned __int16 *)v19);
    }
    else if ( v23 == 119 )
    {
      *(_DWORD *)v19 = v18;
      printf("Written 0x%X; readback 0x%X\n", v18, *(_DWORD *)v19);
    }
    else
    {
      *v19 = v18;
      printf("Written 0x%X; readback 0x%X\n", v18, *v19);
    }
    fflush((FILE *)stdout);
  }
  if ( munmap(addr, 0x1000u) == -1 )
  {
    v11 = (FILE *)stderr;
    v12 = *_errno_location();
    v13 = _errno_location();
    v14 = strerror(*v13);
    fprintf(v11, "Error at line %d, file %s (%d) [%s]\n", 127, "devmem2.c", v12, v14);
    exit(1);
  }
  close(fd);
  return 0;
}
