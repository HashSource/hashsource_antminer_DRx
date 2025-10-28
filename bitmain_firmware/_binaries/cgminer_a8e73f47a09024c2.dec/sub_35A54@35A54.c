void __fastcall sub_35A54(_DWORD *a1, char *a2, int a3)
{
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  char *v19; // r10
  char *v20; // r6
  char *v21; // r7
  char *v22; // r11
  char *v23; // r9
  char *v24; // r8
  size_t v25; // r0
  size_t v26; // r0
  bool v27; // zf
  int v28; // r5
  size_t v29; // r0
  unsigned __int64 v30; // r2
  int i; // r4
  size_t v32; // r0
  size_t v33; // r0
  size_t v34; // r0
  __int64 v36; // [sp+28h] [bp-CC4h]
  _DWORD v37[8]; // [sp+38h] [bp-CB4h] BYREF
  _DWORD v38[2]; // [sp+58h] [bp-C94h] BYREF
  int v39; // [sp+60h] [bp-C8Ch]
  int v40; // [sp+64h] [bp-C88h]
  int v41; // [sp+68h] [bp-C84h]
  int v42; // [sp+6Ch] [bp-C80h]
  int v43; // [sp+70h] [bp-C7Ch]
  int v44; // [sp+74h] [bp-C78h]
  _DWORD v45[8]; // [sp+78h] [bp-C74h] BYREF
  unsigned int dest[20]; // [sp+98h] [bp-C54h] BYREF
  char s[1024]; // [sp+E8h] [bp-C04h] BYREF
  char v48[2052]; // [sp+4E8h] [bp-804h] BYREF

  if ( dword_7AA38 )
  {
    memset(s, 0, sizeof(s));
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    memset(dest, 0, sizeof(dest));
    v5 = a1[46];
    v6 = a1[47];
    v7 = a1[48];
    v37[0] = a1[45];
    v37[1] = v5;
    v37[2] = v6;
    v37[3] = v7;
    v8 = a1[50];
    v9 = a1[51];
    v10 = a1[52];
    v37[4] = a1[49];
    v37[5] = v8;
    v37[6] = v9;
    v37[7] = v10;
    v11 = a1[17];
    v12 = a1[18];
    v38[0] = a1[16];
    v38[1] = v11;
    v39 = v12;
    v13 = a1[62];
    v14 = a1[63];
    v15 = a1[64];
    v45[0] = a1[61];
    v45[1] = v13;
    v45[2] = v14;
    v45[3] = v15;
    v16 = a1[66];
    v17 = a1[67];
    v18 = a1[68];
    v45[4] = a1[65];
    v45[5] = v16;
    v45[6] = v17;
    v45[7] = v18;
    sub_34C40((char *)v37, 32);
    sub_34C40((char *)v38, 12);
    sub_34C40((char *)v45, 32);
    if ( byte_80A01 )
    {
      memcpy(dest, a1, sizeof(dest));
      sub_34C40((char *)dest, 80);
      dest[0] = bswap32(16 * bswap32(dest[0]));
      v19 = sub_2D0B4((char *)dest, 80);
    }
    else
    {
      v19 = sub_2D0B4((char *)a1, 128);
    }
    v20 = sub_2D0B4((char *)v37, 32);
    v21 = sub_2D0B4((char *)v38, 12);
    v22 = sub_2D0B4(a2, 4);
    v23 = sub_2D0B4(a2, 5);
    v24 = sub_2D0B4((char *)v45, 32);
    v36 = sub_121E0((int)a1);
    if ( !strcmp((const char *)dword_7AA38, "screen") )
    {
      if ( a3 )
      {
        sprintf(s, "work %s nonce %s", v19, v22);
        v25 = strlen(s);
        fwrite(s, v25, 1u, (FILE *)dword_7C7B4);
        fwrite(&word_6E448, 1u, 1u, (FILE *)dword_7C7B4);
        fflush((FILE *)dword_7C7B4);
      }
    }
    else if ( dword_7C7B4 )
    {
      if ( a3 )
      {
        sprintf(
          s,
          "%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",
          "o",
          a1[100],
          v19,
          v20,
          v21,
          v23,
          v24,
          v36);
        v34 = strlen(s);
        fwrite(s, v34, 1u, (FILE *)dword_7C7B4);
        fwrite(&word_6E448, 1u, 1u, (FILE *)dword_7C7B4);
        fflush((FILE *)dword_7C7B4);
        if ( dword_7C7B0 == 1 )
        {
          sprintf(s, "midstate %s data %s nonce %s hash %s", v20, v21, v22, v24);
          v26 = strlen(s);
          fwrite(s, v26, 1u, (FILE *)dword_7C7B8[0]);
          fwrite(&word_6E448, 1u, 1u, (FILE *)dword_7C7B8[0]);
          fflush((FILE *)dword_7C7B8[0]);
        }
        else
        {
          v27 = dword_7C7B0 == 32;
          if ( dword_7C7B0 != 32 )
            v27 = dword_7C7B0 == 64;
          if ( v27 )
          {
            sprintf(s, "midstate %s data %s nonce %s hash %s", v20, v21, v22, v24);
            v28 = sub_34C7C(dword_7C7B0, *a2);
            v29 = strlen(s);
            fwrite(s, v29, 1u, (FILE *)dword_7C7B8[v28]);
            fwrite(&word_6E448, 1u, 1u, (FILE *)dword_7C7B8[v28]);
            fflush((FILE *)dword_7C7B8[v28]);
          }
        }
        if ( byte_7C8BC )
        {
          v30 = v36;
          for ( i = 0; i != 64; ++i )
          {
            v30 >>= 1;
            if ( !v30 )
              break;
          }
          if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            snprintf(v48, 0x800u, "work diff %lld diffnum %d", v36, i);
            sub_3F178(7, v48, 0);
          }
          sprintf(s, "midstate %s data %s nonce %s hash %s", v20, v21, v22, v24);
          v32 = strlen(s);
          fwrite(s, v32, 1u, *((FILE **)&unk_7C8C0 + i));
          fwrite(&word_6E448, 1u, 1u, *((FILE **)&unk_7C8C0 + i));
          fflush(*((FILE **)&unk_7C8C0 + i));
        }
      }
      else
      {
        sprintf(
          s,
          "%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",
          "x",
          a1[100],
          v19,
          v20,
          v21,
          v23,
          v24,
          v36);
        v33 = strlen(s);
        fwrite(s, v33, 1u, (FILE *)dword_7C7B4);
        fwrite(&word_6E448, 1u, 1u, (FILE *)dword_7C7B4);
        fflush((FILE *)dword_7C7B4);
      }
    }
    if ( v19 )
      free(v19);
    if ( v20 )
      free(v20);
    if ( v21 )
      free(v21);
    if ( v22 )
      free(v22);
    if ( v23 )
      free(v23);
    if ( v24 )
      free(v24);
  }
}
