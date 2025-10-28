int __fastcall sub_1136C(FILE *a1, int a2, int a3, int a4, char a5, char a6)
{
  FILE *v10; // r6
  int v11; // r5
  int v12; // r3
  size_t v13; // r5
  int v14; // r1
  __int64 v15; // r2
  int v16; // r1
  __int64 v17; // r2
  _DWORD *v19; // r12
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  char v24; // r12
  _BYTE v25[112]; // [sp+8h] [bp-4F4h] BYREF
  _BYTE v26[128]; // [sp+78h] [bp-484h] BYREF
  _DWORD ptr[257]; // [sp+F8h] [bp-404h] BYREF

  memset(ptr, 0, 1024);
  SHA256_Init(v25);
  if ( a6 )
  {
    strcpy(v26, "/tmp/tmpfw/");
    memset(&v26[12], 0, 0x74u);
    switch ( a4 )
    {
      case 0:
      case 7:
        strcpy(&v26[11], "BOOT.bin");
        if ( a5 )
          goto LABEL_21;
        goto LABEL_19;
      case 1:
        strcpy(&v26[11], "devicetree.dtb");
        break;
      case 2:
        strcpy(&v26[11], "uImage");
        break;
      case 3:
        v19 = &unk_118EC;
        goto LABEL_17;
      case 4:
        strcpy(&v26[11], "update.image.gz");
        break;
      case 5:
        strcpy(&v26[11], "crl.tar.gz");
        break;
      case 6:
        v19 = &unk_1191C;
LABEL_17:
        v20 = *v19;
        v21 = v19[1];
        v22 = v19[2];
        v23 = v19[3];
        v24 = *((_BYTE *)v19 + 16);
        *(_DWORD *)&v26[11] = v20;
        *(_DWORD *)&v26[15] = v21;
        v26[27] = v24;
        *(_DWORD *)&v26[19] = v22;
        *(_DWORD *)&v26[23] = v23;
        break;
      default:
        break;
    }
    if ( a5 )
LABEL_21:
      strcat(v26, ".sig");
LABEL_19:
    printf("fileName:'%s', size:[%d]\r\n", v26, a2);
    v10 = (FILE *)fopen64(v26, "wb");
    if ( !v10 )
      printf("Create File '%s' Failed!\r\n", v26);
  }
  else
  {
    v10 = 0;
  }
  v11 = 0;
  while ( (unsigned int)(a2 - v11) > 0x400 )
  {
    v11 += fread(ptr, 1u, 0x400u, a1);
    SHA256_Update(v25, ptr, 1024);
    if ( v10 )
      v12 = a6 & 1;
    else
      v12 = 0;
    if ( v12 )
      fwrite(ptr, 1u, 0x400u, v10);
  }
  v13 = fread(ptr, 1u, a2 - v11, a1);
  SHA256_Update(v25, ptr, v13);
  if ( a6 && v10 )
  {
    fwrite(ptr, 1u, v13, v10);
    memset(v26, 0, 32);
    SHA256_Final(v26, v25);
    fclose(v10);
  }
  else
  {
    memset(v26, 0, 32);
    SHA256_Final(v26, v25);
  }
  v14 = *(_DWORD *)&v26[4];
  v15 = *(_QWORD *)&v26[8];
  *(_DWORD *)a3 = *(_DWORD *)v26;
  *(_DWORD *)(a3 + 4) = v14;
  *(_QWORD *)(a3 + 8) = v15;
  v16 = *(_DWORD *)&v26[20];
  v17 = *(_QWORD *)&v26[24];
  *(_DWORD *)(a3 + 16) = *(_DWORD *)&v26[16];
  *(_DWORD *)(a3 + 20) = v16;
  *(_QWORD *)(a3 + 24) = v17;
  return 0;
}
