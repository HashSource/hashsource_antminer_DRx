void __fastcall sub_2F884(_DWORD *a1, char *a2, int a3)
{
  int v4; // r12
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // lr
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  char v20; // r3
  _DWORD *v21; // r2
  int i; // r3
  char v23; // r1
  _DWORD *v24; // r2
  int j; // r3
  char v26; // r1
  unsigned int *v27; // r2
  int k; // r3
  char v29; // r1
  char *v30; // r8
  char *v31; // r5
  char *v32; // r4
  char *v33; // r10
  char *v34; // r7
  char *v35; // r6
  __int64 v36; // kr00_8
  size_t v37; // r0
  bool v38; // zf
  unsigned __int64 v39; // r2
  int m; // r11
  size_t v41; // r0
  size_t v42; // r0
  size_t v43; // r0
  int v44; // r11
  size_t v45; // r0
  size_t v46; // r0
  _DWORD v49[8]; // [sp+30h] [bp-CB4h] BYREF
  _DWORD v50[2]; // [sp+50h] [bp-C94h] BYREF
  int v51; // [sp+58h] [bp-C8Ch]
  int v52; // [sp+5Ch] [bp-C88h]
  int v53; // [sp+60h] [bp-C84h]
  int v54; // [sp+64h] [bp-C80h]
  int v55; // [sp+68h] [bp-C7Ch]
  int v56; // [sp+6Ch] [bp-C78h]
  _DWORD v57[8]; // [sp+70h] [bp-C74h] BYREF
  unsigned int v58[20]; // [sp+90h] [bp-C54h] BYREF
  char s[1024]; // [sp+E0h] [bp-C04h] BYREF
  char v60[2052]; // [sp+4E0h] [bp-804h] BYREF

  if ( dword_60E98 )
  {
    memset(s, 0, sizeof(s));
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    memset(v58, 0, sizeof(v58));
    v4 = 0;
    v5 = a1[33];
    v6 = a1[34];
    v7 = a1[35];
    v49[0] = a1[32];
    v49[1] = v5;
    v49[2] = v6;
    v49[3] = v7;
    v8 = a1[37];
    v9 = a1[38];
    v10 = a1[39];
    v49[4] = a1[36];
    v49[5] = v8;
    v49[6] = v9;
    v49[7] = v10;
    v11 = v49;
    v12 = a1[17];
    v13 = a1[18];
    v50[0] = a1[16];
    v50[1] = v12;
    v51 = v13;
    v14 = a1[49];
    v15 = a1[50];
    v16 = a1[51];
    v57[0] = a1[48];
    v57[1] = v14;
    v57[2] = v15;
    v57[3] = v16;
    v17 = a1[53];
    v18 = a1[54];
    v19 = a1[55];
    v57[4] = a1[52];
    v57[5] = v17;
    v57[6] = v18;
    v57[7] = v19;
    do
    {
      v20 = *((_BYTE *)v49 + v4);
      *((_BYTE *)v49 + v4++) = *((_BYTE *)v11 + 31);
      *((_BYTE *)v11 + 31) = v20;
      v11 = (_DWORD *)((char *)v11 - 1);
    }
    while ( v4 != 16 );
    v21 = v50;
    for ( i = 0; i != 6; ++i )
    {
      v23 = *((_BYTE *)v50 + i);
      *((_BYTE *)v50 + i) = *((_BYTE *)v21 + 11);
      *((_BYTE *)v21 + 11) = v23;
      v21 = (_DWORD *)((char *)v21 - 1);
    }
    v24 = v57;
    for ( j = 0; j != 16; ++j )
    {
      v26 = *((_BYTE *)v57 + j);
      *((_BYTE *)v57 + j) = *((_BYTE *)v24 + 31);
      *((_BYTE *)v24 + 31) = v26;
      v24 = (_DWORD *)((char *)v24 - 1);
    }
    if ( byte_63DF9 )
    {
      memcpy(v58, a1, sizeof(v58));
      v27 = v58;
      for ( k = 0; k != 40; ++k )
      {
        v29 = *((_BYTE *)v58 + k);
        *((_BYTE *)v58 + k) = *((_BYTE *)v27 + 79);
        *((_BYTE *)v27 + 79) = v29;
        v27 = (unsigned int *)((char *)v27 - 1);
      }
      v58[0] = bswap32(16 * bswap32(v58[0]));
      v30 = sub_294B8((int)v58, 80);
    }
    else
    {
      v30 = sub_294B8((int)a1, 128);
    }
    v31 = sub_294B8((int)v49, 32);
    v32 = sub_294B8((int)v50, 12);
    v33 = sub_294B8((int)a2, 4);
    v34 = sub_294B8((int)a2, 5);
    v35 = sub_294B8((int)v57, 32);
    v36 = sub_1541C((int)a1);
    if ( !strcmp((const char *)dword_60E98, "screen") )
    {
      if ( a3 )
      {
        sprintf(s, "work %s nonce %s", v30, v33);
        if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
        {
          snprintf(v60, 0x800u, s);
          sub_38438(3, v60, 0);
        }
        v43 = strlen(s);
        fwrite(s, v43, 1u, (FILE *)dword_62C10);
        fwrite(ptr, 1u, 1u, (FILE *)dword_62C10);
        fflush((FILE *)dword_62C10);
      }
    }
    else
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        snprintf(v60, 0x800u, s);
        sub_38438(3, v60, 0);
      }
      if ( dword_62C10 )
      {
        if ( a3 )
        {
          sprintf(
            s,
            "%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",
            "o",
            a1[85],
            v30,
            v31,
            v32,
            v34,
            v35,
            v36);
          v37 = strlen(s);
          fwrite(s, v37, 1u, (FILE *)dword_62C10);
          fwrite(ptr, 1u, 1u, (FILE *)dword_62C10);
          fflush((FILE *)dword_62C10);
          if ( dword_62C0C == 1 )
          {
            sprintf(s, "midstate %s data %s nonce %s hash %s", v31, v32, v33, v35);
            v46 = strlen(s);
            fwrite(s, v46, 1u, (FILE *)dword_62C14[0]);
            fwrite(ptr, 1u, 1u, (FILE *)dword_62C14[0]);
            fflush((FILE *)dword_62C14[0]);
          }
          else
          {
            v38 = dword_62C0C == 32;
            if ( dword_62C0C != 32 )
              v38 = dword_62C0C == 64;
            if ( v38 )
            {
              sprintf(s, "midstate %s data %s nonce %s hash %s", v31, v32, v33, v35);
              v44 = sub_2F59C(dword_62C0C, *a2);
              v45 = strlen(s);
              fwrite(s, v45, 1u, (FILE *)dword_62C14[v44]);
              fwrite(ptr, 1u, 1u, (FILE *)dword_62C14[v44]);
              fflush((FILE *)dword_62C14[v44]);
            }
          }
          if ( byte_62D18 )
          {
            v39 = v36;
            for ( m = 0; m != 64; ++m )
            {
              v39 >>= 1;
              if ( !v39 )
                break;
            }
            if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
            {
              snprintf(v60, 0x800u, "work diff %lld diffnum %d", v36, m);
              sub_38438(7, v60, 0);
            }
            sprintf(s, "midstate %s data %s nonce %s hash %s", v31, v32, v33, v35);
            v41 = strlen(s);
            fwrite(s, v41, 1u, *((FILE **)&unk_62D1C + m));
            fwrite(ptr, 1u, 1u, *((FILE **)&unk_62D1C + m));
            fflush(*((FILE **)&unk_62D1C + m));
          }
        }
        else
        {
          sprintf(
            s,
            "%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",
            "x",
            a1[85],
            v30,
            v31,
            v32,
            v34,
            v35,
            v36);
          v42 = strlen(s);
          fwrite(s, v42, 1u, (FILE *)dword_62C10);
          fwrite(ptr, 1u, 1u, (FILE *)dword_62C10);
          fflush((FILE *)dword_62C10);
        }
      }
    }
    if ( v30 )
      free(v30);
    if ( v31 )
      free(v31);
    if ( v32 )
      free(v32);
    if ( v33 )
      free(v33);
    if ( v34 )
      free(v34);
    if ( v35 )
      free(v35);
  }
}
