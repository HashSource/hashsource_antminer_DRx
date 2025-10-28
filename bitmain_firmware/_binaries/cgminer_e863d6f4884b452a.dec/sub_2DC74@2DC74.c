void __fastcall sub_2DC74(_DWORD *a1, char *a2, int a3)
{
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int *v11; // r7
  _DWORD *v12; // r5
  int v13; // r1
  int v14; // r2
  int v15; // r1
  int v16; // r3
  int v17; // r2
  int v18; // r1
  int v19; // r2
  int v20; // r3
  char v21; // r3
  char v22; // t1
  char v23; // t1
  _DWORD *v24; // r3
  char *v25; // r2
  char v26; // t1
  char v27; // r1
  _DWORD *v28; // r3
  unsigned int *v29; // r2
  char v30; // r1
  char v31; // t1
  char v32; // t1
  unsigned int *v33; // r3
  char *v34; // r2
  char v35; // r1
  char v36; // t1
  char v37; // t1
  char *v38; // r5
  char *v39; // r7
  char *v40; // r8
  char *v41; // r11
  char *v42; // r9
  int v43; // r3
  size_t v44; // r0
  int v45; // r4
  size_t v46; // r0
  unsigned __int64 v47; // r2
  int i; // r4
  size_t v49; // r0
  size_t v50; // r0
  size_t v51; // r0
  size_t v52; // r0
  char *ptr; // [sp+20h] [bp-CC4h]
  __int64 v55; // [sp+28h] [bp-CBCh] BYREF
  _DWORD v56[3]; // [sp+30h] [bp-CB4h] BYREF
  _DWORD v57[5]; // [sp+3Ch] [bp-CA8h] BYREF
  int v58; // [sp+50h] [bp-C94h] BYREF
  _DWORD v59[2]; // [sp+54h] [bp-C90h] BYREF
  _DWORD v60[4]; // [sp+5Ch] [bp-C88h] BYREF
  int v61; // [sp+6Ch] [bp-C78h] BYREF
  _DWORD v62[3]; // [sp+70h] [bp-C74h] BYREF
  _DWORD v63[4]; // [sp+7Ch] [bp-C68h] BYREF
  int v64; // [sp+8Ch] [bp-C58h] BYREF
  unsigned int dest[20]; // [sp+90h] [bp-C54h] BYREF
  char s[1024]; // [sp+E0h] [bp-C04h] BYREF
  char v67[2052]; // [sp+4E0h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  memset(v60, 0, sizeof(v60));
  v61 = 0;
  memset(dest, 0, sizeof(dest));
  v5 = a1[46];
  v6 = a1[47];
  v7 = a1[48];
  v56[0] = a1[45];
  v56[1] = v5;
  v56[2] = v6;
  v57[0] = v7;
  v8 = a1[50];
  v9 = a1[51];
  v10 = a1[52];
  v11 = &v58;
  v57[1] = a1[49];
  v57[2] = v8;
  v57[3] = v9;
  v57[4] = v10;
  v12 = (_DWORD *)((char *)&v55 + 7);
  v13 = a1[17];
  v14 = a1[18];
  v58 = a1[16];
  v59[0] = v13;
  v59[1] = v14;
  v15 = a1[62];
  v16 = a1[64];
  v17 = a1[63];
  v62[0] = a1[61];
  v62[1] = v15;
  v62[2] = v17;
  v63[0] = v16;
  v18 = a1[66];
  v19 = a1[67];
  v20 = a1[68];
  v63[1] = a1[65];
  v63[2] = v18;
  v63[3] = v19;
  v64 = v20;
  do
  {
    v22 = *((_BYTE *)v12 + 1);
    v12 = (_DWORD *)((char *)v12 + 1);
    v21 = v22;
    v23 = *((_BYTE *)v11 - 1);
    v11 = (int *)((char *)v11 - 1);
    *(_BYTE *)v12 = v23;
    *(_BYTE *)v11 = v21;
  }
  while ( (_DWORD *)((char *)v57 + 3) != v12 );
  v24 = v60;
  v25 = (char *)&v58;
  do
  {
    v26 = *((_BYTE *)v24 - 1);
    v24 = (_DWORD *)((char *)v24 - 1);
    v27 = *v25;
    *v25++ = v26;
    *(_BYTE *)v24 = v27;
  }
  while ( (_DWORD *)((char *)v59 + 2) != v24 );
  v28 = (int *)((char *)&v61 + 3);
  v29 = dest;
  do
  {
    v31 = *((_BYTE *)v28 + 1);
    v28 = (_DWORD *)((char *)v28 + 1);
    v30 = v31;
    v32 = *((_BYTE *)v29 - 1);
    v29 = (unsigned int *)((char *)v29 - 1);
    *(_BYTE *)v28 = v32;
    *(_BYTE *)v29 = v30;
  }
  while ( (_DWORD *)((char *)v63 + 3) != v28 );
  if ( byte_73D04 )
  {
    memcpy(dest, a1, sizeof(dest));
    v33 = (unsigned int *)((char *)&v64 + 3);
    v34 = s;
    do
    {
      v36 = *((_BYTE *)v33 + 1);
      v33 = (unsigned int *)((char *)v33 + 1);
      v35 = v36;
      v37 = *--v34;
      *(_BYTE *)v33 = v37;
      *v34 = v35;
    }
    while ( (unsigned int *)((char *)&dest[9] + 3) != v33 );
    dest[0] = bswap32(16 * bswap32(dest[0]));
    v38 = sub_2826C((int)dest, 80);
  }
  else
  {
    v38 = sub_2826C((int)a1, 128);
  }
  v39 = sub_2826C((int)v56, 32);
  v40 = sub_2826C((int)&v58, 12);
  v41 = sub_2826C((int)a2, 4);
  ptr = sub_2826C((int)a2, 5);
  v42 = sub_2826C((int)v62, 32);
  v55 = sub_1A264((int)a1);
  if ( !strcmp((const char *)dword_6D85C, "screen") )
  {
    if ( a3 )
    {
      sprintf(s, "work %s nonce %s", v38, v41);
      v51 = strlen(s);
      fwrite(s, v51, 1u, (FILE *)dword_6F5D0);
      fwrite(&word_585EC, 1u, 1u, (FILE *)dword_6F5D0);
      fflush((FILE *)dword_6F5D0);
    }
  }
  else if ( dword_6F5D0 )
  {
    v43 = a1[100];
    if ( a3 )
    {
      sprintf(
        s,
        "%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",
        "o",
        v43,
        v38,
        v39,
        v40,
        ptr,
        v42,
        v55);
      v44 = strlen(s);
      fwrite(s, v44, 1u, (FILE *)dword_6F5D0);
      fwrite(&word_585EC, 1u, 1u, (FILE *)dword_6F5D0);
      fflush((FILE *)dword_6F5D0);
      if ( dword_6F5CC == 1 )
      {
        sprintf(s, "midstate %s data %s nonce %s hash %s", v39, v40, v41, v42);
        v52 = strlen(s);
        fwrite(s, v52, 1u, (FILE *)dword_6F5D4[0]);
        fwrite(&word_585EC, 1u, 1u, (FILE *)dword_6F5D4[0]);
        fflush((FILE *)dword_6F5D4[0]);
      }
      else if ( ((dword_6F5CC - 32) & 0xFFFFFFDF) == 0 )
      {
        sprintf(s, "midstate %s data %s nonce %s hash %s", v39, v40, v41, v42);
        v45 = sub_2DB24(dword_6F5CC, *a2);
        v46 = strlen(s);
        fwrite(s, v46, 1u, (FILE *)dword_6F5D4[v45]);
        fwrite(&word_585EC, 1u, 1u, (FILE *)dword_6F5D4[v45]);
        fflush((FILE *)dword_6F5D4[v45]);
      }
      if ( byte_6F6D8 )
      {
        v47 = v55;
        for ( i = 0; i != 64; ++i )
        {
          v47 >>= 1;
          if ( !v47 )
            break;
        }
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf(v67, 0x800u, "work diff %lld diffnum %d", v55, i);
          sub_343C4(7, v67, 0);
        }
        sprintf(s, "midstate %s data %s nonce %s hash %s", v39, v40, v41, v42);
        v49 = strlen(s);
        fwrite(s, v49, 1u, *((FILE **)&unk_6F6DC + i));
        fwrite(&word_585EC, 1u, 1u, *((FILE **)&unk_6F6DC + i));
        fflush(*((FILE **)&unk_6F6DC + i));
      }
    }
    else
    {
      sprintf(
        s,
        "%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",
        "x",
        v43,
        v38,
        v39,
        v40,
        ptr,
        v42,
        v55);
      v50 = strlen(s);
      fwrite(s, v50, 1u, (FILE *)dword_6F5D0);
      fwrite(&word_585EC, 1u, 1u, (FILE *)dword_6F5D0);
      fflush((FILE *)dword_6F5D0);
    }
  }
  if ( v38 )
    free(v38);
  if ( v39 )
    free(v39);
  if ( v40 )
    free(v40);
  if ( v41 )
    free(v41);
  if ( ptr )
    free(ptr);
  if ( v42 )
    free(v42);
}
