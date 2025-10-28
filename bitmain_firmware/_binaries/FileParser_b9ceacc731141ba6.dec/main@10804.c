int __fastcall main(int a1, char **a2, char **a3)
{
  char *v4; // r7
  int i; // r4
  size_t v8; // r0
  size_t v9; // r0
  size_t v10; // r0
  int v11; // r4
  FILE *v12; // r0
  FILE *v13; // r10
  int v14; // r6
  int v15; // r5
  int v16; // r3
  int v17; // r8
  int v18; // r11
  _WORD *v19; // r6
  int v20; // r7
  unsigned int v21; // r2
  bool v22; // cc
  int v23; // r1
  FILE *v24; // r7
  unsigned int v25; // r11
  int v26; // r9
  int bio_RSA_PUBKEY; // r7
  unsigned __int16 v28; // r11
  int v29; // r0
  FILE *v30; // r0
  FILE *v31; // r7
  FILE *v32; // r7
  int v33; // r7
  char *j; // r4
  int v35; // r4
  int v36; // r6
  int v37; // r4
  int v38; // r5
  FILE *v39; // r4
  _DWORD *v40; // r3
  int error; // r0
  const char *v42; // r0
  int v43; // r0
  int v44; // r0
  const char *v45; // r0
  int v46; // r0
  const char *v47; // r0
  int v48; // r0
  const char *v49; // r0
  size_t size; // [sp+8h] [bp-14A4h]
  size_t sizea; // [sp+8h] [bp-14A4h]
  int v52; // [sp+Ch] [bp-14A0h]
  int v53; // [sp+10h] [bp-149Ch]
  unsigned int v54; // [sp+14h] [bp-1498h]
  _DWORD v55[8]; // [sp+18h] [bp-1494h] BYREF
  _BYTE v56[48]; // [sp+38h] [bp-1474h] BYREF
  int v57; // [sp+68h] [bp-1444h]
  _BYTE v58[112]; // [sp+A4h] [bp-1408h] BYREF
  _BYTE v59[112]; // [sp+114h] [bp-1398h] BYREF
  _DWORD dest[32]; // [sp+184h] [bp-1328h] BYREF
  _DWORD v61[32]; // [sp+204h] [bp-12A8h] BYREF
  _DWORD v62[64]; // [sp+284h] [bp-1228h] BYREF
  char v63[260]; // [sp+384h] [bp-1128h] BYREF
  _DWORD v64[256]; // [sp+488h] [bp-1024h] BYREF
  _DWORD v65[264]; // [sp+888h] [bp-C24h] BYREF
  _WORD v66[1026]; // [sp+CA8h] [bp-804h] BYREF

  if ( a1 <= 1 )
  {
    i = 1;
    sub_11710(*a2);
    return i;
  }
  v4 = a2[1];
  if ( *v4 != 45 )
  {
    i = 2;
    sub_11710(*a2);
    return i;
  }
  memset(dest, 0, sizeof(dest));
  memset(v61, 0, sizeof(v61));
  memset(v66, 0, 0x800u);
  if ( a1 == 5 )
  {
    v9 = strlen(a2[3]);
    if ( v9 <= 0x7F )
    {
      memcpy(dest, a2[3], v9 + 1);
      v10 = strlen(a2[4]);
      if ( v10 > 0x7F )
      {
        i = 4;
        puts("pemName Too Long!");
        return i;
      }
      memcpy(v61, a2[4], v10 + 1);
      goto LABEL_6;
    }
LABEL_15:
    i = 3;
    puts("fileName Too Long!");
    return i;
  }
  if ( a1 != 3 )
  {
    if ( a1 != 2 )
    {
      i = 3;
      puts("Param Err!");
      sub_11710(*a2);
      return i;
    }
    goto LABEL_6;
  }
  v8 = strlen(a2[2]);
  if ( v8 > 0x7F )
    goto LABEL_15;
  memcpy(dest, a2[2], v8 + 1);
LABEL_6:
  switch ( v4[1] )
  {
    case 'f':
      v11 = 0;
      v53 = 0;
      v52 = 0;
      goto LABEL_18;
    case 'n':
      return sub_1127C(dest);
    case 'p':
      v11 = 0;
      v53 = 1;
      v52 = 0;
      goto LABEL_18;
    case 'q':
      v39 = (FILE *)fopen64("/tmp/256BFF", "wb");
      if ( !v39 )
      {
        i = 1;
        puts("GenFile Failed!");
        return i;
      }
      memset(v65, 0, 256);
      v40 = (_DWORD *)((char *)&v64[255] + 3);
      do
      {
        *((_BYTE *)v40 + 1) = -1;
        v40 = (_DWORD *)((char *)v40 + 1);
      }
      while ( (_DWORD *)((char *)&v65[63] + 3) != v40 );
      fwrite(v65, 0x100u, 1u, v39);
      fclose(v39);
      return 0;
    case 's':
      v11 = 0;
      v52 = 1;
      v53 = 0;
      goto LABEL_18;
    case 'x':
      v11 = 1;
      v53 = 0;
      v52 = 1;
LABEL_18:
      _xstat64(3, dest, v56);
      size = v57;
      if ( v57 < 2048 )
      {
        printf("File '%s' Not Enough %d, Something Wrong!\n", (const char *)dest, 2048);
        return 6;
      }
      v12 = (FILE *)fopen64(dest, "rb");
      v13 = v12;
      if ( !v12 )
      {
        i = 7;
        printf("Read File '%s' Failed!\n", (const char *)dest);
        return i;
      }
      fread(v66, 0x800u, 1u, v12);
      if ( LOBYTE(v66[0]) != 38 )
      {
        i = 8;
        printf("'%s' Not A Btmu File!\n", (const char *)dest);
        fclose(v13);
        return i;
      }
      v14 = LOBYTE(v66[6]) | (HIBYTE(v66[5]) << 8);
      if ( v11 )
      {
        printf("content:%x\n", LOBYTE(v66[6]) | (HIBYTE(v66[5]) << 8));
        if ( (v14 & 0xFE00) != 0xFE00 )
        {
          i = 20;
          puts("This Package Was Not Full Package!");
          return i;
        }
      }
      v15 = 0;
      for ( i = 0; i != 16; ++i )
      {
        v16 = v14 >> i;
        if ( (v16 & 1) != 0 )
          v15 = (unsigned __int8)(v15 + 1);
      }
      v17 = LOBYTE(v66[652]);
      if ( LOBYTE(v66[652]) != v15 )
      {
        printf("Content Doesn't Match![%d][%d]\n", LOBYTE(v66[652]), v15);
        i = 9;
        fclose(v13);
        return i;
      }
      v18 = (v15 + 9) << 8;
      v19 = &v66[655];
      v54 = bswap32(*(unsigned int *)((char *)&v66[652] + 1));
      v20 = 0;
      while ( 1 )
      {
        v22 = v20 < v17;
        v23 = v20++;
        v19 = (_WORD *)((char *)v19 + 5);
        if ( !v22 )
          break;
        v21 = _byteswap_ulong(*(_DWORD *)((char *)v19 - 5));
        v18 += v21;
        printf("file[%d] size:[%d]\n", v23, v21);
      }
      if ( size != v18 )
      {
        printf(
          "Check FileSize Failed, FileSize Should Be [%d]Bytes, But It Was [%d] Bytes, And Total Says[%d]\n",
          v54,
          size,
          v18);
        i = 10;
        fclose(v13);
        return i;
      }
      v24 = (FILE *)fopen64(v61, "r");
      if ( !v24 )
      {
        i = 11;
        printf("Cannot Open Root PublicKey '%s'!\n", (const char *)v61);
        fclose(v13);
        return i;
      }
      memset(v64, 0, sizeof(v64));
      fread(v64, 0x400u, 1u, v24);
      fclose(v24);
      v25 = v66[11];
      v26 = BIO_new_mem_buf(v64, 1024);
      bio_RSA_PUBKEY = PEM_read_bio_RSA_PUBKEY(v26, 0, 0, 0);
      v28 = __rev16(v25);
      if ( !bio_RSA_PUBKEY )
      {
        v46 = ((int (*)(void))ERR_get_error)();
        i = 12;
        v47 = (const char *)ERR_error_string(v46, 0);
        printf("OpenSSL error: %s\n", v47);
        puts("Read Root PubK Failed!");
        goto LABEL_72;
      }
      SHA256_Init(v65);
      SHA256_Update(v65, &v66[12], v28);
      SHA256_Final(v63, v65);
      sizea = RSA_verify(672, v63, 32, &v66[524], 256, bio_RSA_PUBKEY);
      v29 = RSA_free(bio_RSA_PUBKEY);
      if ( v26 )
        v29 = BIO_free(v26);
      if ( sizea != 1 )
      {
        error = ERR_get_error(v29);
        i = 13;
        v42 = (const char *)ERR_error_string(error, 0);
        printf("OpenSSL error: %s\n", v42);
        puts("Check miner.pem Failed!");
LABEL_72:
        printf("Check pem payload failed! ret:[%d]\n", i);
        fclose(v13);
        return i;
      }
      if ( v52 )
      {
        v30 = (FILE *)fopen64("/tmp/tmpfw/miner.pem", "w");
        v31 = v30;
        if ( !v30 )
        {
          i = 15;
          puts("Dump Miner.pem Failed!\r");
          return i;
        }
        fwrite(&v66[12], 1u, v28, v30);
        fclose(v31);
        v32 = (FILE *)fopen64("/tmp/tmpfw/miner.pem.sig", "w");
        if ( !v32 )
        {
          puts("Dump Miner.pem.sig Failed!\r");
          return i;
        }
        fwrite(&v66[524], 1u, 0x100u, v32);
        fclose(v32);
      }
      v33 = 0;
      memset(v65, 0, sizeof(v65));
      SHA256_Init(v58);
      SHA256_Update(v58, v66, 2048);
      SHA256_Final(v65, v58);
      for ( j = (char *)&v66[654] + 1; ; sub_1136C(v13, _byteswap_ulong(*((_DWORD *)j - 1))) )
      {
        v22 = v17 <= v33++;
        j += 5;
        if ( v22 )
          break;
      }
      v35 = 0;
      while ( 1 )
      {
        v22 = v17 <= v35++;
        if ( v22 )
          break;
        sub_1136C(v13, 256);
      }
      memset(v62, 0, sizeof(v62));
      fseek(v13, -256, 2);
      fread(v62, 0x100u, 1u, v13);
      memset(v55, 0, sizeof(v55));
      SHA256_Init(v59);
      SHA256_Update(v59, v65, (v17 << 6) + 32);
      SHA256_Final(v55, v59);
      v36 = BIO_new_mem_buf(&v66[12], 1024);
      v37 = PEM_read_bio_RSA_PUBKEY(v36, 0, 0, 0);
      if ( v37 )
      {
        v38 = RSA_verify(672, v55, 32, v62, 256, v37);
        RSA_free(v37);
        if ( v36 )
          BIO_free(v36);
        if ( v38 == 1 )
        {
          fclose(v13);
          puts("All Done!\r");
          if ( v53 )
          {
            i = 0;
            puts("This Comment Of This Package:");
            memset(&v63[4], 0, 0xFDu);
            memcpy(v63, &v66[680], 0x100u);
            puts(v63);
          }
          else
          {
            return 0;
          }
        }
        else
        {
          i = 18;
          v43 = puts("Check File Sig failed!\r");
          v44 = ERR_get_error(v43);
          v45 = (const char *)ERR_error_string(v44, 0);
          printf("OpenSSL error: %s\n", v45);
        }
      }
      else
      {
        v48 = ERR_get_error(0);
        i = 17;
        v49 = (const char *)ERR_error_string(v48, 0);
        printf("OpenSSL error: %s\n", v49);
        puts("Load Pem Failed!");
      }
      return i;
    default:
      i = 5;
      puts("Command Not Support!");
      sub_11710(*a2);
      return i;
  }
}
