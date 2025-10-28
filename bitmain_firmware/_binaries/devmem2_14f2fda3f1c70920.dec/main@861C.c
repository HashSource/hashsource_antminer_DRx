int __fastcall main(int a1, char **a2, char **a3)
{
  __int32_t v3; // r6
  unsigned int v6; // r0
  unsigned int v7; // r5
  int fd; // r10
  char *v9; // r0
  char *v10; // r11
  unsigned int v11; // r7
  int v12; // r3
  unsigned int v14; // r0
  unsigned int v15; // r8
  FILE *v16; // r5
  int v17; // r4
  char *v18; // r0
  FILE *v19; // r5
  int v20; // r4
  char *v21; // r0
  FILE *v22; // r5
  int v23; // r4
  char *v24; // r0
  int v25; // [sp+8h] [bp-8Ch]
  unsigned int v26; // [sp+8h] [bp-8Ch]
  int v27; // [sp+Ch] [bp-88h]
  char s[132]; // [sp+10h] [bp-84h] BYREF

  if ( a1 <= 1 )
  {
    fprintf(
      (FILE *)stderr,
      "\n"
      "Usage:\t%s { address } [ type [ data ] ]\n"
      "\taddress : memory address to act upon\n"
      "\ttype    : access operation type : [b]yte, [h]alfword, [w]ord\n"
      "\tdata    : data to be written\n"
      "\n",
      *a2);
    exit(1);
  }
  v6 = strtoul(a2[1], 0, 0);
  if ( a1 == 2 )
    v3 = 119;
  v7 = v6;
  if ( a1 != 2 )
    v3 = (*_ctype_tolower_loc())[(unsigned __int8)*a2[2]];
  fd = open("/dev/mem", 1052674);
  if ( fd == -1 )
  {
    v16 = (FILE *)stderr;
    v17 = *_errno_location();
    v18 = strerror(v17);
    fprintf(v16, "Error at line %d, file %s (%d) [%s]\n", 73, "devmem2.c", v17, v18);
    goto LABEL_25;
  }
  puts("/dev/mem opened.");
  fflush((FILE *)stdout);
  v9 = (char *)mmap(0, 0x1000u, 3, 1, fd, v7 & 0xFFFFF000);
  v10 = v9;
  if ( v9 == (char *)-1 )
  {
    v19 = (FILE *)stderr;
    v20 = *_errno_location();
    v21 = strerror(v20);
    fprintf(v19, "Error at line %d, file %s (%d) [%s]\n", 79, "devmem2.c", v20, v21);
    goto LABEL_25;
  }
  printf("Memory mapped at address %p.\n", v9);
  fflush((FILE *)stdout);
  v11 = (unsigned int)&v10[v7 & 0xFFF];
  if ( v3 == 104 )
  {
    v11 &= ~1u;
    v12 = 2;
    v25 = *(unsigned __int16 *)v11;
  }
  else if ( v3 == 119 )
  {
    v11 &= 0xFFFFFFFC;
    v12 = 4;
    v25 = *(_DWORD *)v11;
  }
  else
  {
    if ( v3 != 98 )
    {
      fprintf((FILE *)stderr, "Illegal data type '%c'.\n", v3);
      exit(2);
    }
    v25 = (unsigned __int8)v10[v7 & 0xFFF];
    v12 = 1;
  }
  v27 = 2 * v12;
  sprintf(s, "Read at address  0x%%08lX (%%p): 0x%%0%dlX\n", 2 * v12);
  printf(s, v7, v11, v25);
  fflush((FILE *)stdout);
  if ( a1 > 3 )
  {
    v14 = strtoul(a2[3], 0, 0);
    v15 = v14;
    if ( v3 == 104 )
    {
      v11 &= ~1u;
      v26 = (unsigned __int16)v14;
      *(_WORD *)v11 = v14;
    }
    else if ( v3 == 119 )
    {
      v11 &= 0xFFFFFFFC;
      v26 = v14;
      *(_DWORD *)v11 = v14;
    }
    else
    {
      *(_BYTE *)v11 = v14;
      v26 = (unsigned __int8)v14;
    }
    sprintf(s, "Write at address 0x%%08lX (%%p): 0x%%0%dlX, readback 0x%%0%dlX\n", v27, v27);
    printf(s, v7, v11, v15, v26);
    fflush((FILE *)stdout);
  }
  if ( munmap(v10, 0x1000u) == -1 )
  {
    v22 = (FILE *)stderr;
    v23 = *_errno_location();
    v24 = strerror(v23);
    fprintf(v22, "Error at line %d, file %s (%d) [%s]\n", 134, "devmem2.c", v23, v24);
LABEL_25:
    exit(1);
  }
  close(fd);
  return 0;
}
