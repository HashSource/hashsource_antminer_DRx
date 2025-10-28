char *__fastcall sub_D5B4(unsigned int a1, _BYTE *a2, int a3, int a4)
{
  char *v6; // r11
  int v7; // r7
  int v8; // r2
  int v9; // r10
  int v10; // r8
  char *v11; // r8
  unsigned int v12; // r12
  char *v13; // r3
  char *v14; // r1
  char v15; // r0
  char *v16; // r0
  char *v17; // r2
  char *v18; // r1
  unsigned int v19; // r2
  char *v20; // r2
  char *v21; // r2
  bool v22; // zf
  _BYTE *v23; // r4
  _BYTE *v24; // r2
  char v25; // r12
  char v26; // t1
  int v30; // [sp+Ch] [bp-10h]
  int v31; // [sp+10h] [bp-Ch] BYREF
  int v32; // [sp+14h] [bp-8h] BYREF

  if ( !dword_23FD0 )
    sub_DAE4();
  v6 = (char *)&v31;
  v7 = dword_241DC;
  v8 = dword_241DC + 1;
  v9 = 4 * dword_241DC;
  v10 = 5 * dword_241DC;
  if ( dword_241DC + 1 > 199 )
    v8 = 0;
  dword_241DC = v8;
  v11 = (char *)&unk_241E0 + 16 * v10;
  memset(v11, 0, 0x50u);
  v12 = HIWORD(a1);
  HIBYTE(v30) = 0;
  v31 = 0;
  v32 = 0;
  if ( HIWORD(a1) )
  {
    v12 = HIWORD(a1);
    v14 = (char *)&v31;
    do
    {
      v13 = v14;
      v15 = v12 % 0xA;
      v12 /= 0xAu;
      *v14-- = v15;
    }
    while ( v12 );
  }
  else
  {
    v13 = (char *)&v31;
  }
  if ( a4 )
  {
    v6 = (char *)&v31 + 3;
    v16 = (char *)&v32;
    a3 = (__int16)(a3 + 3);
    if ( a3 <= 2 )
    {
      LOWORD(a3) = 3;
      v17 = (char *)&v31 + 1;
      goto LABEL_16;
    }
    v17 = (char *)&v31 + 1;
    if ( a3 > 6 )
    {
      LOWORD(a3) = 6;
      goto LABEL_16;
    }
  }
  else
  {
    v17 = (char *)&v31 + 1;
    v16 = (char *)&v31 + 1;
    if ( a3 > 6 )
    {
      LOWORD(a3) = 6;
      goto LABEL_16;
    }
  }
  if ( a3 <= 0 )
  {
    v18 = (char *)&v31 + 1;
    goto LABEL_17;
  }
  do
  {
LABEL_16:
    a3 = (__int16)(a3 - 1);
    a1 = 10 * (unsigned __int16)a1;
    *v17++ = BYTE2(a1);
    v18 = v17;
  }
  while ( a3 > 0 );
LABEL_17:
  if ( (a1 & 0x8000) != 0 )
  {
    v19 = (unsigned __int8)(*(v18 - 1) + 1);
    *(v18 - 1) = v19;
    if ( v19 > 9 )
    {
      v20 = v18;
      do
      {
        *--v20 = 0;
        v12 = (unsigned __int8)(*(v20 - 1) + 1);
        *(v20 - 1) = v12;
      }
      while ( v12 > 9 );
    }
  }
  if ( v13 < v6 && !*v13 )
  {
    v21 = v13 + 1;
    do
    {
      v22 = v21 == v6;
      v13 = v21++;
      if ( v22 )
        break;
      LOBYTE(v12) = *v13;
    }
    while ( !*v13 );
  }
  v23 = a2;
  if ( a2 )
  {
    v7 += v9;
    v24 = v11 + 1;
    v23 = &unk_241E0;
    LOBYTE(v12) = 45;
  }
  else
  {
    v24 = v11;
  }
  if ( a2 )
    v23[16 * v7] = v12;
  if ( v18 > v13 )
  {
    do
    {
      v22 = v13 == v16;
      v26 = *v13++;
      v25 = v26;
      if ( v22 )
        *v24++ = 46;
      *v24++ = v25 + 48;
    }
    while ( v13 != v18 );
  }
  *v24 = 0;
  return v11;
}
