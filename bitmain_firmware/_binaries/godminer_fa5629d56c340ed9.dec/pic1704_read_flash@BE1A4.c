int __fastcall pic1704_read_flash(char a1, void *a2, char a3, size_t a4)
{
  unsigned __int8 *v7; // r6
  int v8; // lr
  unsigned int v9; // r1
  unsigned __int8 *v10; // r2
  __int16 v11; // t1
  unsigned int v12; // r3
  unsigned __int8 *v13; // r0
  int v14; // r4
  _BYTE v16[4]; // [sp+4h] [bp-18h] BYREF
  int v17; // [sp+8h] [bp-14h]
  _BYTE *v18; // [sp+Ch] [bp-10h]
  _DWORD v19[3]; // [sp+10h] [bp-Ch] BYREF

  v19[1] = 0;
  v19[0] = 0;
  v18 = v16;
  LOWORD(v17) = 564;
  BYTE2(v17) = a4 + 5;
  HIBYTE(v17) = a1;
  v7 = (unsigned __int8 *)malloc(a4 + 5);
  v16[0] = a3;
  v16[1] = a4;
  v8 = sub_BCC64(v17, (int)v16, (int)v19, v7);
  if ( !v8 )
    goto LABEL_8;
  if ( a4 == -3 )
  {
    v12 = 0;
    v13 = v7;
    LOBYTE(v9) = 0;
  }
  else
  {
    LOWORD(v9) = 0;
    v10 = v7 - 1;
    do
    {
      v11 = *++v10;
      v9 = (unsigned __int16)(v9 + v11);
    }
    while ( &v7[a4 + 2] != v10 );
    v12 = v9 >> 8;
    v13 = &v7[a4 + 3];
  }
  if ( *v13 == v12 && v7[a4 + 4] == (unsigned __int8)v9 )
  {
    v14 = v8;
    memcpy(a2, v7 + 3, a4);
  }
  else
  {
LABEL_8:
    v14 = 0;
  }
  free(v7);
  return v14;
}
