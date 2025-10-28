int __fastcall sub_198EC(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int *a8,
        unsigned int a9)
{
  int v11; // r1
  char *v12; // r2
  unsigned int v13; // r5
  unsigned int v15; // t1
  void *v16; // r9
  unsigned int v17; // r10
  int v18; // r4
  _BYTE v20[72]; // [sp+0h] [bp-850h] BYREF
  char v21; // [sp+48h] [bp-808h] BYREF
  unsigned int v22; // [sp+4Ch] [bp-804h]
  int v23[512]; // [sp+50h] [bp-800h] BYREF

  v11 = a3 - 4;
  v12 = &v20[-4];
  v13 = *(_DWORD *)(a6 + 28);
  do
  {
    v15 = *(_DWORD *)(v11 + 4);
    v11 += 4;
    *((_DWORD *)v12 + 1) = bswap32(v15);
    v12 += 4;
  }
  while ( v12 != &v21 );
  v16 = malloc(0x20200u);
  if ( v16 )
  {
    while ( 1 )
    {
      *(_DWORD *)(a3 + 76) = ++a9;
      v17 = bswap32(a9);
      v22 = v17;
      sub_17C8C((int)v20, (int)v16, v23);
      if ( v13 >= bswap32(v23[7]) )
        break;
      if ( a9 >= a7 || *(_BYTE *)(a1 + 62) )
      {
        v18 = 0;
        *a8 = a9;
        goto LABEL_8;
      }
    }
    *(_DWORD *)(a3 + 76) = v17;
    v18 = 1;
    *a8 = a9;
LABEL_8:
    free(v16);
  }
  else if ( byte_73320 || (v18 = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 2 )
  {
    v18 = 0;
    strcpy((char *)v23, "Failed to malloc scratchbuf in scanhash_scrypt");
    sub_343C4(3, v23, 0);
  }
  return v18;
}
