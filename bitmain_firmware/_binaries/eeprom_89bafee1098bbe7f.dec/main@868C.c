void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  const char *v3; // r5
  int v4; // r4
  int v7; // r6
  const char *v8; // r7
  int v9; // r0
  const char *v10; // r2
  int v11; // r10
  int v12; // r12
  int v13; // r12
  int v14; // r8
  ssize_t v15; // r0
  unsigned int v16; // r7
  char *v17; // r3
  int v18; // r7
  int i; // r7
  _BOOL4 v20; // r3
  _BYTE *v21; // r3
  int fd; // [sp+8h] [bp-118h]
  int v23; // [sp+Ch] [bp-114h]
  const char *v24; // [sp+14h] [bp-10Ch]
  int v25; // [sp+18h] [bp-108h] BYREF
  int v26; // [sp+1Ch] [bp-104h] BYREF
  char buf[255]; // [sp+20h] [bp-100h] BYREF
  _BYTE v28[5]; // [sp+11Fh] [bp-1h] BYREF

  v3 = "/dev/i2c-0";
  v4 = 0;
  v7 = 0;
  v8 = 0;
  v26 = 8;
  v25 = 80;
  while ( 1 )
  {
    v9 = getopt(a1, a2, "d:a:p:wyf:h");
    if ( v9 < 0 )
      break;
    switch ( v9 )
    {
      case 'a':
        if ( _isoc99_sscanf(optarg, "0x%x", &v25) != 1 )
        {
          fprintf((FILE *)stderr, "Cannot parse '%s' as addrs., example: 0xa0\n", (const char *)optarg);
          exit(1);
        }
        return;
      case 'd':
        v3 = (const char *)optarg;
        break;
      case 'f':
        v8 = (const char *)optarg;
        break;
      case 'h':
        fprintf((FILE *)stderr, "%s [-d dev] [-a adr] [-p pgs] [-w] [-y] [-f file]\n", *a2);
        fwrite("\tdev: device, e.g. /dev/i2c-0    (def)\n", 1u, 0x27u, (FILE *)stderr);
        fwrite("\tadr: base address of eeprom, eg 0xA0 (def)\n", 1u, 0x2Cu, (FILE *)stderr);
        fwrite("\tpgs: number of pages to read, eg 8 (def)\n", 1u, 0x2Au, (FILE *)stderr);
        fwrite("\t-w : write to eeprom (default is reading!)\n", 1u, 0x2Cu, (FILE *)stderr);
        fwrite("\t-y : suppress warning when writing (default is to warn!)\n", 1u, 0x3Au, (FILE *)stderr);
        fwrite("\t-f file: copy eeprom contents to/from file\n", 1u, 0x2Cu, (FILE *)stderr);
        fwrite("\t         (default for read is test only; for write is all zeros)\n", 1u, 0x42u, (FILE *)stderr);
        fwrite("Note on pages/addresses:\n", 1u, 0x19u, (FILE *)stderr);
        fwrite("\teeproms with more than 256 byte appear as if they\n", 1u, 0x33u, (FILE *)stderr);
        fwrite("\twere several eeproms with consecutive addresses on the bus\n", 1u, 0x3Cu, (FILE *)stderr);
        fwrite("\tso we might as well address several separate eeproms with\n", 1u, 0x3Bu, (FILE *)stderr);
        fwrite("\tincreasing addresses....\n\n", 1u, 0x1Bu, (FILE *)stderr);
        exit(1);
        return;
      case 'p':
        if ( _isoc99_sscanf(optarg, "%d", &v26) != 1 )
        {
          fprintf((FILE *)stderr, "Cannot parse '%s' as number of pages, example: 8\n", (const char *)optarg);
          exit(1);
        }
        return;
      case 'w':
        ++v7;
        break;
      case 'y':
        ++v4;
        break;
      default:
        continue;
    }
  }
  fprintf((FILE *)stderr, "base-address of eeproms       : 0x%02x\n", v25);
  fprintf((FILE *)stderr, "number of pages to read       : %d (0x%02x .. 0x%02x)\n", v26, v25, v25 - 1 + v26);
  if ( v8 )
  {
    if ( v7 )
      fd = open(v8, 0);
    else
      fd = open(v8, 65, 438);
    if ( fd < 0 )
    {
      fprintf((FILE *)stderr, "Could not open data-file %s for reading or writing\n", v8);
      goto LABEL_55;
    }
    v10 = "reading";
    if ( !v7 )
      v10 = "writing";
    fprintf((FILE *)stderr, "file opened for %7s       : %s\n", v10, v8);
    fprintf((FILE *)stderr, "            on filedescriptor : %d\n", fd);
  }
  else
  {
    fd = -1;
  }
  v11 = open(v3, 2);
  if ( v11 < 0 )
  {
    fprintf((FILE *)stderr, "Could not open i2c at %s\n", v3);
    perror(v3);
    exit(1);
  }
  v12 = v7;
  if ( v7 )
    v12 = 1;
  v23 = v12;
  fprintf((FILE *)stderr, "i2c-devicenode is             : %s\n", v3);
  fprintf((FILE *)stderr, "            on filedescriptor : %d\n\n", v11);
  if ( v4 )
    v13 = 0;
  else
    v13 = v23 & 1;
  if ( v13 )
  {
    fwrite("**WARNING**\n", 1u, 0xCu, (FILE *)stderr);
    fwrite(" - \tYou have chosen to WRITE to this eeprom.\n", 1u, 0x2Du, (FILE *)stderr);
    fwrite("\tMake sure that this tiny chip is *NOT* vital to the\n", 1u, 0x35u, (FILE *)stderr);
    fwrite("\toperation of your computer as you can easily corrupt\n", 1u, 0x36u, (FILE *)stderr);
    fwrite("\tthe configuration memory of your SDRAM-memory-module,\n", 1u, 0x37u, (FILE *)stderr);
    fwrite("\tyour IBM ThinkPad or whatnot...! Fixing these errors can be\n", 1u, 0x3Du, (FILE *)stderr);
    fwrite("\ta time-consuming and very costly process!\n\n", 1u, 0x2Cu, (FILE *)stderr);
    fwrite("Things to consider:\n", 1u, 0x14u, (FILE *)stderr);
    fwrite(" - \tYou can have more than one i2c-bus, check in /proc/bus/i2c\n", 1u, 0x3Fu, (FILE *)stderr);
    fwrite("\tand specify the correct one with -d\n", 1u, 0x25u, (FILE *)stderr);
    fprintf((FILE *)stderr, "\tright now you have chosen to use '%s'\n", v3);
    fwrite(" - \tA eeprom can occupy several i2c-addresses (one per page)\n", 1u, 0x3Du, (FILE *)stderr);
    fwrite("\tso please make sure that there is no vital eeprom in your computer\n", 1u, 0x44u, (FILE *)stderr);
    fprintf((FILE *)stderr, "\tsitting at addresses between 0x%02x and 0x%02x\n", v25, v25 - 1 + v26);
    fwrite("Enter 'yes' to continue:", 1u, 0x18u, (FILE *)stderr);
    fflush((FILE *)stderr);
    if ( !fgets(buf, 4, (FILE *)stdin) )
    {
      fwrite("\nCould not read confirmation from stdin!\n", 1u, 0x29u, (FILE *)stderr);
      exit(1);
    }
    if ( strncmp(buf, "yes", 3u) )
    {
      fwrite("\n** ABORTING WRITE! **, you did not answer 'yes'\n", 1u, 0x31u, (FILE *)stderr);
      exit(1);
    }
  }
  v14 = 0;
  v24 = v8;
  while ( 1 )
  {
    if ( v14 >= v26 )
    {
      if ( fd != -1 )
        close(fd);
      close(v11);
      exit(0);
    }
    if ( v23 )
      break;
    for ( i = 0; i != 256; i += 8 )
    {
      if ( sub_914C(v11, v14 + v25, i, &buf[i], 8) < 0 )
        goto LABEL_39;
    }
LABEL_45:
    if ( v7 )
      v20 = 0;
    else
      v20 = fd >= 0;
    if ( v20 && write(fd, buf, 0x100u) != 256 )
    {
      v8 = v24;
      fprintf((FILE *)stderr, "Cannot write to file '%s'\n", v24);
      goto LABEL_55;
    }
    ++v14;
  }
  if ( fd == -1 )
  {
    v21 = (char *)&v26 + 3;
    do
      *++v21 = 0;
    while ( v21 != v28 );
    goto LABEL_36;
  }
  v15 = read(fd, buf, 0x100u);
  v16 = v15;
  if ( v15 >= 0 )
  {
    if ( v15 != 256 )
    {
      fprintf((FILE *)stderr, "File '%s' is too small, padding eeprom with zeroes\n", v24);
      if ( v16 <= 0xFF )
      {
        v17 = &buf[v16 - 1];
        do
          *++v17 = 0;
        while ( v17 != v28 );
      }
    }
LABEL_36:
    v18 = 0;
    while ( sub_8FF0(v11, v14 + v25, v18, &buf[v18], 8) >= 0 )
    {
      v18 += 8;
      if ( v18 == 256 )
        goto LABEL_45;
    }
LABEL_39:
    exit(1);
  }
  v8 = v24;
  fprintf((FILE *)stderr, "Cannot read from file '%s'\n", v24);
LABEL_55:
  perror(v8);
  goto LABEL_39;
}
