ssize_t __fastcall sub_2F3B8(ssize_t result)
{
  ssize_t v1; // r5
  size_t v2; // r6
  int v3; // r4
  _DWORD *v4; // r12
  _BYTE *v5; // r2
  _BYTE *v6; // r3
  int v7; // r3
  int v8; // lr
  int v9; // r1
  int v10; // r3
  size_t v11; // r0
  bool v12; // zf
  int *v13; // r5
  _DWORD *v14; // r7
  int v15; // r0
  int v16; // r1
  int v17; // r1
  _DWORD *v18; // r4
  int v19; // r0

  v1 = result;
  v2 = *(_DWORD *)(result + 8);
  v3 = *(_DWORD *)(v2 + 60);
  v4 = *(_DWORD **)(v3 + 28);
  if ( !*v4 )
  {
    *v4 = 1;
    return result;
  }
  if ( *(int *)(result + 88) <= 23 )
    return sub_27040(*(_DWORD *)(result + 8), 2);
  v5 = (_BYTE *)(result + 92);
  if ( *(_BYTE *)(result + 92) != 16 )
  {
    v6 = (_BYTE *)(result + 93);
    do
      v5 = v6++;
    while ( *v5 != 16 );
  }
  v7 = (v5[2] & 0xF) + 10 * ((unsigned __int8)v5[2] >> 4);
  *(_DWORD *)(v3 + 172) = v7;
  if ( v7 != 94 )
  {
    v8 = v4[2];
    if ( v7 <= 98 )
      v7 += 100;
    *(_DWORD *)(v3 + 172) = v7 + 1900;
    *(_DWORD *)(v3 + 176) = 10 * ((unsigned __int8)v5[4] >> 4) + 100 * (v5[3] & 0xF) + (v5[4] & 0xF);
    if ( v8 <= 10 )
    {
      *(_DWORD *)(v3 + 180) = (v5[5] & 0xF) + 10 * ((unsigned __int8)v5[5] >> 4);
    }
    else
    {
      v9 = (v5[6] & 0xF) + 10 * ((unsigned __int8)v5[6] >> 4);
      *(_DWORD *)(v3 + 180) = v9;
      if ( v9 == 10 )
      {
        *(_DWORD *)(v3 + 184) = (v5[7] & 0xF) + 10 * ((unsigned __int8)v5[7] >> 4);
        *(_DWORD *)(v3 + 188) = (v5[8] & 0xF) + 10 * ((unsigned __int8)v5[8] >> 4);
        v19 = (v5[9] & 0xF) + 10 * ((unsigned __int8)v5[9] >> 4);
        *(_DWORD *)(v3 + 192) = 1000000 * v19;
        *(_DWORD *)(v3 + 192) = 1000000 * v19 + 1000 * ((unsigned __int8)v5[10] >> 4);
        goto LABEL_23;
      }
    }
    v9 = (v5[5] & 0xF) + 10 * ((unsigned __int8)v5[5] >> 4);
    *(_DWORD *)(v3 + 180) = v9;
    *(_DWORD *)(v3 + 184) = (v5[6] & 0xF) + 10 * ((unsigned __int8)v5[6] >> 4);
    *(_DWORD *)(v3 + 188) = (v5[7] & 0xF) + 10 * ((unsigned __int8)v5[7] >> 4);
    v10 = 1000000 * ((v5[8] & 0xF) + 10 * ((unsigned __int8)v5[8] >> 4));
    *(_DWORD *)(v3 + 192) = v10;
    *(_DWORD *)(v3 + 192) = v10 + 1000 * ((unsigned __int8)v5[9] >> 4);
    if ( v9 != 10 )
    {
LABEL_13:
      sprintf(
        (char *)(v3 + 40),
        "%d %d %d %d %d",
        *(_DWORD *)(v3 + 172),
        *(_DWORD *)(v3 + 176),
        v9,
        *(_DWORD *)(v3 + 184),
        *(_DWORD *)(v3 + 188));
      v11 = strlen((const char *)(v3 + 40));
      v12 = dword_7CF4C == 0;
      *(_DWORD *)(v3 + 168) = v11;
      if ( !v12 )
        printf(
          "fg: time is %04d/%03d %02d:%02d:%02d UTC\n",
          *(_DWORD *)(v3 + 172),
          *(_DWORD *)(v3 + 176),
          *(_DWORD *)(v3 + 180),
          *(_DWORD *)(v3 + 184),
          *(_DWORD *)(v3 + 188));
      v13 = (int *)(v1 + 76);
      v14 = (_DWORD *)(v3 + 216);
      v15 = *v13;
      v16 = v13[1];
      *(_QWORD *)(v3 + 232) = 0x3EE4F8B588E368F1LL;
      *(_DWORD *)(v3 + 216) = v15;
      *(_DWORD *)(v3 + 220) = v16;
      if ( !sub_27698((_DWORD *)v3) )
        sub_27040(v2, 6);
      v17 = *(_DWORD *)(v3 + 220);
      v18 = (_DWORD *)(v3 + 208);
      *v18 = *v14;
      v18[1] = v17;
      return sub_276A0(v2);
    }
LABEL_23:
    if ( *(_DWORD *)(v3 + 184) == 10 )
      v4[2] = v8 + 1;
    goto LABEL_13;
  }
  sub_27040(v2, 2);
  result = write(*(_DWORD *)(v3 + 20), &unk_7A658, 0x1Au);
  if ( result != 26 )
    return sub_27040(v2, 3);
  return result;
}
