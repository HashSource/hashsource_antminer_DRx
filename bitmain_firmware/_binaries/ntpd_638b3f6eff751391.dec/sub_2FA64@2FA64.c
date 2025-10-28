int __fastcall sub_2FA64(_DWORD *a1)
{
  int v1; // r5
  int v2; // r4
  _BYTE *v3; // r0
  int result; // r0
  int v5; // r3
  _DWORD *v6; // r12
  int *v7; // r2
  int v8; // t1
  const unsigned __int16 *v9; // r1
  int v10; // r2
  bool v11; // zf
  int v12; // r3
  char *v13; // r2
  int v14; // t1
  unsigned __int8 v15; // [sp+1Fh] [bp-19h] BYREF
  int v16; // [sp+20h] [bp-18h] BYREF
  int v17; // [sp+24h] [bp-14h] BYREF
  char v18; // [sp+28h] [bp-10h] BYREF
  int v19; // [sp+30h] [bp-8h] BYREF

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = sub_27AAC(a1, (_BYTE *)(v2 + 40), 128, &v19);
  *(_DWORD *)(v2 + 168) = v3;
  if ( v3 != (_BYTE *)23
    || sscanf(
         (const char *)(v2 + 40),
         "%2d:%2d:%2d.%c%5c%2d/%2d/%2d",
         v2 + 180,
         v2 + 184,
         v2 + 188,
         &v15,
         &v18,
         &v16,
         &v17,
         v2 + 172) != 8 )
  {
    return sub_27040(v1, 2);
  }
  if ( (unsigned int)(v16 - 1) > 0xB )
    return sub_27040(v1, 6);
  v5 = v17;
  if ( v17 <= 0 )
    return sub_27040(v1, 6);
  v6 = &dword_65E0C[v16 - 1];
  if ( (*(_DWORD *)(v2 + 172) & 3) != 0 )
  {
    if ( v17 <= v6[6] )
    {
      if ( v16 != 1 )
      {
        v7 = (int *)&unk_65E20;
        do
        {
          v8 = v7[1];
          ++v7;
          v5 += v8;
        }
        while ( v7 != &dword_65E1C[v16] );
LABEL_13:
        v17 = v5;
        goto LABEL_14;
      }
      goto LABEL_14;
    }
    return sub_27040(v1, 6);
  }
  if ( v17 > v6[18] )
    return sub_27040(v1, 6);
  if ( v16 != 1 )
  {
    v13 = (char *)&unk_65E50;
    do
    {
      v14 = *((_DWORD *)v13 + 1);
      v13 += 4;
      v5 += v14;
    }
    while ( v13 != (char *)&unk_65E4C + 4 * v16 );
    goto LABEL_13;
  }
LABEL_14:
  *(_DWORD *)(v2 + 176) = v5;
  v9 = *_ctype_b_loc();
  v10 = v9[v15];
  v11 = (v10 & 0x800) == 0;
  if ( (v10 & 0x800) != 0 )
  {
    v12 = v15 - 48;
    v10 = 100000000;
  }
  else
  {
    v12 = 3;
  }
  if ( v11 )
  {
    *(_BYTE *)(v2 + 32) = v12;
  }
  else
  {
    LOBYTE(v9) = 0;
    v10 *= v12;
  }
  if ( !v11 )
  {
    *(_BYTE *)(v2 + 32) = (_BYTE)v9;
    *(_DWORD *)(v2 + 192) = v10;
  }
  result = sub_27698((_DWORD *)v2);
  if ( !result )
    return sub_27040(v1, 6);
  return result;
}
