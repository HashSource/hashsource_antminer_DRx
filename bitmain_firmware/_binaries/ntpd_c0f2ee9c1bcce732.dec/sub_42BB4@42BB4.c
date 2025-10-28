int __fastcall sub_42BB4(int a1, char *s, _DWORD *a3)
{
  const char *v3; // r11
  char *v4; // r0
  const char *v5; // r1
  int v6; // r8
  int v7; // r9
  _DWORD *v8; // r10
  unsigned __int8 *v9; // r5
  unsigned int v10; // r3
  int v11; // r7
  const char *v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // t1
  int v16; // t1
  unsigned __int8 *v17; // r0
  const char *v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // t1
  int v22; // t1
  int v23; // r3
  int result; // r0
  int v25; // r2
  _DWORD *v26; // r4
  const char *v27; // r2
  int v28; // r2
  int n; // [sp+0h] [bp-ACh]
  int v30; // [sp+4h] [bp-A8h]
  int v31; // [sp+8h] [bp-A4h]
  int v32; // [sp+Ch] [bp-A0h]
  char *v34; // [sp+18h] [bp-94h]
  _DWORD *v35; // [sp+1Ch] [bp-90h]
  int v37; // [sp+24h] [bp-88h]
  _BYTE dest[132]; // [sp+28h] [bp-84h] BYREF

  v3 = s;
  v4 = strchr(s, 61);
  v35 = *(_DWORD **)(a1 + 68);
  v31 = *(_DWORD *)(a1 + 100);
  v34 = v4;
  if ( v4 )
  {
    n = v4 - v3;
    if ( (unsigned int)(v4 - v3) > 0x7F )
      return -1;
    v5 = v3;
    v3 = dest;
    v34 = v4 + 1;
    memcpy(dest, v5, n);
    dest[n] = 0;
  }
  else
  {
    n = strlen(v3);
  }
  v6 = (int)&v3[n - 1];
  v32 = 0;
  v7 = 0;
  v30 = 0;
  v37 = 0;
  v8 = v35;
  do
  {
    v9 = (unsigned __int8 *)v8[13];
    if ( !v9 )
      goto LABEL_6;
    v10 = v8[4];
    if ( (v10 & 0x280000) != 0 && (_UNKNOWN *)v10 != &unk_80100 )
      goto LABEL_6;
    if ( n > 0 )
    {
      v11 = *((unsigned __int8 *)&unk_7B7B0 + *(unsigned __int8 *)v3 + 704);
      if ( v11 != *((unsigned __int8 *)&unk_7B7B0 + *v9 + 704) )
      {
LABEL_19:
        v17 = (unsigned __int8 *)v8[14];
        if ( !v17 || v11 != *((unsigned __int8 *)&unk_7B7B0 + *v17 + 704) )
          goto LABEL_6;
        if ( *v3 )
        {
          v18 = v3;
          v19 = v8[14];
          do
          {
            if ( v18 == (const char *)v6 )
              break;
            v21 = *(unsigned __int8 *)++v18;
            v20 = v21;
            v22 = *(unsigned __int8 *)++v19;
            if ( *((unsigned __int8 *)&unk_7B7B0 + v20 + 704) != *((unsigned __int8 *)&unk_7B7B0 + v22 + 704) )
              goto LABEL_6;
          }
          while ( v20 );
        }
        if ( !v17[n] )
        {
          v37 = 1;
LABEL_38:
          v32 = v7;
LABEL_39:
          v26 = &v35[16 * v32];
          if ( (v26[4] & 0x280000) != 0 )
          {
            fprintf((FILE *)stderr, off_7B8B8[0], *(_DWORD *)(a1 + 28), v26[13]);
            v27 = (const char *)v26[11];
            if ( v27 )
              fprintf((FILE *)stderr, " -- %s", v27);
            fputc(10, (FILE *)stderr);
            (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
          }
          result = 0;
          if ( v37 )
            a3[2] |= 0x20u;
          *a3 = v26;
          a3[1] = v34;
          a3[3] = 2;
          return result;
        }
        v37 = 1;
        goto LABEL_17;
      }
      if ( *v3 )
      {
        v12 = v3;
        v13 = v8[13];
        do
        {
          if ( v12 == (const char *)v6 )
            break;
          v15 = *(unsigned __int8 *)++v12;
          v14 = v15;
          v16 = *(unsigned __int8 *)++v13;
          if ( *((unsigned __int8 *)&unk_7B7B0 + v14 + 704) != *((unsigned __int8 *)&unk_7B7B0 + v16 + 704) )
            goto LABEL_19;
        }
        while ( v14 );
      }
    }
    if ( !v9[n] )
      goto LABEL_38;
LABEL_17:
    if ( ++v30 != 1 )
      goto LABEL_29;
    v32 = v7;
LABEL_6:
    ++v7;
    v8 += 16;
  }
  while ( v31 > v7 );
  if ( v30 == 1 )
    goto LABEL_39;
LABEL_29:
  v23 = *(_DWORD *)(a1 + 12);
  if ( !v34 && (v23 & 3) == 0 )
  {
    v28 = *(unsigned __int16 *)(a1 + 98);
    if ( v28 != 0x8000 )
    {
      *a3 = &v35[16 * v28];
      a3[1] = v3;
      a3[3] = 3;
      return 0;
    }
  }
  if ( (v23 & 4) != 0 )
  {
    v25 = *(_DWORD *)(a1 + 24);
    if ( v30 )
      fprintf((FILE *)stderr, off_7B888[0], v25, v3, n);
    else
      fprintf((FILE *)stderr, off_7B928[0], v25, v3, n);
    (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
  }
  return -1;
}
