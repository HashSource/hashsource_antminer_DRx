_DWORD *__fastcall sub_37794(_DWORD *result)
{
  _DWORD *v1; // r4
  size_t v2; // r9
  int v3; // r11
  int v4; // r5
  int v5; // r8
  char *v6; // r4
  bool v7; // zf
  unsigned int v8; // r3
  char *v9; // r6
  int v10; // r3
  int v11; // r3
  __int16 v12; // r2
  int v13; // r3
  int v14; // r10
  _DWORD *v15; // r3
  int v16; // r1
  _DWORD *v17; // r10
  int v18; // r3
  __int16 v19; // r3
  char v20; // r1
  int v21; // r8
  int v22; // r3
  char *v23; // r2
  const char *v24; // r0
  int v25; // [sp+20h] [bp-Ch]
  __int16 *v26; // [sp+24h] [bp-8h]

  v1 = result;
  v2 = result[2];
  v3 = *(_DWORD *)(v2 + 60);
  v4 = *(_DWORD *)(v3 + 28);
  if ( *(_DWORD *)(v4 + 140) != 1 || !dword_CB594 )
  {
    v5 = (int)result + result[22] + 92;
    if ( result + 23 == (_DWORD *)v5 )
      return result;
    v6 = (char *)result + 93;
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)(v4 + 9);
      if ( v10 == 3 )
      {
        v11 = (unsigned __int8)*(v6 - 1);
        if ( v11 == 16 )
        {
          *(_BYTE *)(v4 + 9) = 4;
        }
        else
        {
          v12 = *(_WORD *)(v4 + 10);
          *(_WORD *)(v4 + 10) = v12 + 1;
          *(_BYTE *)(v4 + v12 + 13) = v11;
        }
LABEL_13:
        v9 = v6;
        if ( *(__int16 *)(v4 + 10) > 128 )
        {
          *(_BYTE *)(v4 + 9) = 0;
          goto LABEL_8;
        }
        goto LABEL_15;
      }
      if ( v10 == 4 )
        break;
      v7 = v10 == 2;
      v8 = (unsigned __int8)*(v6 - 1);
      if ( v7 )
      {
        if ( v8 > 0x10 || ((1 << *(v6 - 1)) & 0x10009) == 0 )
        {
          *(_BYTE *)(v4 + 9) = 3;
          *(_BYTE *)(v4 + 12) = *(v6 - 1);
          goto LABEL_13;
        }
LABEL_7:
        v9 = v6;
        *(_BYTE *)(v4 + 9) = 0;
        *(_WORD *)(v4 + 10) = 0;
LABEL_8:
        ++v6;
        if ( (char *)v5 == v9 )
          return result;
      }
      else
      {
        v9 = v6;
        if ( v8 != 16 )
          goto LABEL_7;
        *(_BYTE *)(v4 + 9) = 2;
LABEL_33:
        *(_WORD *)(v4 + 10) = 0;
        if ( (*(_BYTE *)(v3 + 752) & 2) != 0 )
        {
          result = (_DWORD *)sub_4CBA8(v3 + 216);
          v13 = *(unsigned __int8 *)(v4 + 9);
          goto LABEL_16;
        }
LABEL_15:
        v13 = *(unsigned __int8 *)(v4 + 9);
LABEL_16:
        if ( v13 != 1 )
          goto LABEL_8;
        v14 = *(_DWORD *)(v2 + 60);
        v26 = *(__int16 **)(v14 + 28);
        result = (_DWORD *)sub_366A0(v2);
        if ( !result || *((int *)v26 + 1) <= 0 )
          goto LABEL_8;
        v7 = dword_7CF4C == 0;
        *((_DWORD *)v26 + 1) = 0;
        *(_DWORD *)(v14 + 168) = 0;
        if ( !v7 )
          printf(
            "palisade_receive: unit %d: %4d %03d %02d:%02d:%02d.%06ld\n",
            *v26,
            *(_DWORD *)(v14 + 172),
            *(_DWORD *)(v14 + 176),
            *(_DWORD *)(v14 + 180),
            *(_DWORD *)(v14 + 184),
            *(_DWORD *)(v14 + 188),
            *(_DWORD *)(v14 + 192));
        snprintf(
          (char *)(v14 + 40),
          0x80u,
          "%4d %03d %02d:%02d:%02d.%06ld",
          *(_DWORD *)(v14 + 172),
          *(_DWORD *)(v14 + 176),
          *(_DWORD *)(v14 + 180),
          *(_DWORD *)(v14 + 184),
          *(_DWORD *)(v14 + 188),
          *(_DWORD *)(v14 + 192));
        *(_DWORD *)(v14 + 168) = 24;
        if ( !sub_27698((_DWORD *)v14) )
        {
          sub_27040(v2, 6);
          result = (_DWORD *)printf("palisade_receive: unit %d: refclock_process failed!\n", *v26);
          goto LABEL_8;
        }
        sub_2DDBC(v2 + 12, (const char *)(v14 + 40));
        v15 = (_DWORD *)(v14 + 216);
        if ( dword_7CF4C )
        {
          v25 = *v26;
          v24 = (const char *)sub_503E0(v14 + 216);
          printf("palisade_receive: unit %d: %s\n", v25, v24);
          v15 = (_DWORD *)(v14 + 216);
        }
        v16 = v15[1];
        v17 = (_DWORD *)(v14 + 208);
        ++v6;
        *v17 = *v15;
        v17[1] = v16;
        result = (_DWORD *)sub_276A0(v2);
        if ( (char *)v5 == v9 )
          return result;
      }
    }
    v18 = (unsigned __int8)*(v6 - 1);
    v9 = v6;
    if ( v18 == 16 )
    {
      v19 = *(_WORD *)(v4 + 10);
      *(_BYTE *)(v4 + 9) = 3;
      v20 = *(v6 - 1);
      *(_WORD *)(v4 + 10) = v19 + 1;
      *(_BYTE *)(v4 + v19 + 13) = v20;
      goto LABEL_13;
    }
    if ( v18 == 3 )
    {
      *(_BYTE *)(v4 + 9) = 1;
      goto LABEL_13;
    }
    *(_BYTE *)(v4 + 9) = 2;
    *(_BYTE *)(v4 + 12) = *(v6 - 1);
    goto LABEL_33;
  }
  v21 = dword_80134;
  result = memcpy(&byte_80138[dword_80134], result + 23, result[22]);
  v22 = v21 + v1[22];
  dword_80134 = v22;
  v23 = (char *)&dword_80134 + v22 - 2;
  if ( v23[4] == 13 && *((_BYTE *)&dword_80134 + v22 + 3) == 10 )
  {
    v23[4] = 0;
    sub_2DDBC(v2 + 12, byte_80138);
    dword_80134 = 0;
    dword_CB594 = 0;
    result = (_DWORD *)sub_3751C(v3);
    if ( (int)result < 0 )
      return (_DWORD *)sub_27040(v2, 3);
  }
  return result;
}
