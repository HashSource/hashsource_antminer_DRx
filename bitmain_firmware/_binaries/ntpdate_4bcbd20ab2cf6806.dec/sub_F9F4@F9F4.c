char *__fastcall sub_F9F4(unsigned int a1, unsigned int a2, _BYTE *a3, unsigned int a4, int a5)
{
  __int64 v6; // r4
  int v7; // r8
  int v8; // r2
  int v9; // r10
  char *v10; // r10
  unsigned int v11; // r0
  char *v12; // r2
  unsigned int v13; // r1
  char *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r1
  bool v17; // zf
  unsigned int v18; // r3
  unsigned int v19; // r1
  char v20; // r12
  int v21; // r3
  char *v22; // r1
  char *v23; // r6
  _BYTE *v24; // r12
  _BYTE *v25; // r3
  char v26; // r0
  char v27; // t1
  _BYTE *v29; // r12
  char v30; // r6
  bool v31; // nf
  char v32; // r6
  char *v33; // r12
  unsigned int v34; // r3
  char *v35; // r3
  char v36; // r0
  int v37; // [sp+0h] [bp-24h]
  _BYTE *v38; // [sp+4h] [bp-20h] BYREF
  _DWORD v39[2]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v40[4]; // [sp+10h] [bp-14h] BYREF
  char v41; // [sp+20h] [bp-4h] BYREF
  char v42; // [sp+21h] [bp-3h] BYREF

  v6 = __PAIR64__(a4, a2);
  v38 = a3;
  if ( !dword_23FD0 )
    sub_DAE4();
  v7 = dword_241DC;
  v8 = dword_241DC + 1;
  v9 = 5 * dword_241DC;
  v37 = 4 * dword_241DC;
  if ( dword_241DC + 1 > 199 )
    v8 = 0;
  dword_241DC = v8;
  v10 = (char *)&unk_241E0 + 16 * v9;
  LOBYTE(v11) = (unsigned __int8)memset(v10, 0, 0x50u);
  if ( !HIWORD(a1) )
    v12 = (char *)v40 + 2;
  v39[0] = 0;
  v39[1] = 0;
  memset(v40, 0, sizeof(v40));
  if ( HIWORD(a1) )
  {
    LOBYTE(v11) = -51;
    v13 = a1 % 0xA;
    a1 /= 0xAu;
    v12 = (char *)v40 + 1;
    BYTE1(v40[0]) = v13;
    v14 = (char *)v40;
    if ( HIWORD(a1) )
    {
      while ( 1 )
      {
        v15 = a1 / 0xA;
        v16 = a1 % 0xA;
        if ( v14 == (char *)&v38 + 2 )
          break;
        a1 /= 0xAu;
        v17 = HIWORD(v15) == 0;
        v12 = v14;
        *v14-- = v16;
        if ( v17 )
          goto LABEL_12;
      }
LABEL_57:
      abort();
    }
  }
LABEL_12:
  if ( a1 )
  {
    v18 = (unsigned __int16)a1;
    v11 = (unsigned int)v12;
    do
    {
      v19 = v18 / 0xA;
      v20 = v18 % 0xA;
      if ( v12 < (char *)v39 )
        goto LABEL_57;
      --v12;
      v18 /= 0xAu;
      *(_BYTE *)(v11 - 1) = v20;
      v11 = (unsigned int)v12;
    }
    while ( v19 );
  }
  if ( a5 )
  {
    v21 = HIDWORD(v6) + 3;
    v22 = (char *)&v40[1] + 1;
    if ( HIDWORD(v6) + 3 <= 2 )
    {
      v21 = 3;
      goto LABEL_19;
    }
  }
  else
  {
    v21 = HIDWORD(v6);
    if ( v6 < 0 )
    {
      v21 = 0;
      v22 = (char *)v40 + 2;
      goto LABEL_19;
    }
    v22 = (char *)v40 + 2;
  }
  if ( v21 > 12 )
  {
    v21 = 12;
    if ( !(_DWORD)v6 )
      goto LABEL_20;
    goto LABEL_45;
  }
LABEL_19:
  if ( !(_DWORD)v6 )
  {
LABEL_20:
    v11 = (unsigned int)&v41;
    v23 = (char *)v40 + v21 + 2;
    goto LABEL_21;
  }
  if ( !v21 )
  {
    v23 = (char *)v40 + 2;
LABEL_59:
    if ( (int)v6 < 0 )
    {
      v33 = v23 - 1;
      v34 = (unsigned __int8)(*(v23 - 1) + 1);
      *(v23 - 1) = v34;
      if ( v34 > 9 )
      {
        v35 = v23 - 2;
        do
        {
          v36 = *v35;
          v33 = v35;
          v35[1] = 0;
          v11 = (unsigned __int8)(v36 + 1);
          *v35-- = v11;
        }
        while ( v11 > 9 );
      }
      if ( v12 >= v33 )
        v12 = v33;
    }
    goto LABEL_21;
  }
LABEL_45:
  v29 = (char *)v40 + 2;
  while ( 1 )
  {
    v6 = 2LL * (unsigned int)v6;
    --v21;
    v30 = 2 * BYTE4(v6);
    if ( (int)v6 < 0 )
      v30 |= 1u;
    v31 = (v6 & 0x40000000) != 0;
    v32 = 2 * v30;
    v11 = WORD1(v6) + ((unsigned int)(4 * v6) >> 16);
    LODWORD(v6) = (unsigned __int16)(4 * v6) + (unsigned __int16)v6;
    if ( v31 )
      v32 |= 1u;
    BYTE4(v6) += v32;
    if ( (v6 & 0x10000) != 0 )
      ++v11;
    LODWORD(v6) = (unsigned __int16)v6 | (v11 << 16);
    if ( (v11 & 0x10000) != 0 )
      ++BYTE4(v6);
    *v29 = BYTE4(v6);
    v23 = ++v29;
    if ( !(_DWORD)v6 )
      break;
    if ( v23 == &v42 )
      goto LABEL_57;
    if ( !v21 )
      goto LABEL_59;
  }
  v23 += v21;
LABEL_21:
  if ( v12 < v22 && !*v12 )
  {
    v11 = (unsigned int)(v12 + 1);
    do
    {
      v12 = (char *)v11;
      if ( (char *)v11 == v22 )
        break;
      ++v11;
    }
    while ( !*v12 );
  }
  v24 = v38;
  if ( v12 == v22 )
    --v12;
  if ( v38 )
  {
    v25 = (_BYTE *)v37;
    v24 = &unk_241E0;
    LOBYTE(v11) = 45;
    v7 += v37;
  }
  else
  {
    v25 = v10;
  }
  if ( v38 )
  {
    v25 = v10 + 1;
    v24[16 * v7] = v11;
  }
  if ( v12 < v23 )
  {
    do
    {
      v17 = v12 == v22;
      v27 = *v12++;
      v26 = v27;
      if ( v17 )
        *v25++ = 46;
      *v25++ = v26 + 48;
    }
    while ( v12 != v23 );
  }
  *v25 = 0;
  return v10;
}
