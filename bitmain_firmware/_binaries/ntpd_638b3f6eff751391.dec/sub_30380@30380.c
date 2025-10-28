_BYTE *__fastcall sub_30380(_DWORD *a1)
{
  size_t v1; // r7
  int v2; // r5
  int v3; // r6
  _BYTE *result; // r0
  int v5; // r2
  bool v6; // cc
  int v7; // r2
  int v8; // r1
  char *v9; // r0
  const char *v10; // r9
  int v11; // r4
  int v12; // r3
  bool v13; // zf
  const char *v14; // r3
  int v15; // r2
  int v16; // t1
  bool v17; // zf
  char *v18; // r4
  char *v19; // r0
  int v20; // r1
  int v21; // r1
  int v22; // r3
  const char *v23; // r1
  unsigned __int8 v24; // r3
  char v25; // t1
  int v26; // r4
  int v27; // r9
  int v28; // r3
  int v29; // r11
  int v30; // r1
  int v31; // r1
  int i; // r2
  int v33; // r0
  int v34; // r9
  int v35; // r3
  int v36; // r2
  int v37; // r1
  bool v38; // nf
  int v39; // r3
  int v40; // r2
  int v41; // r3
  int v42; // r1
  int v43; // r0
  int v44; // r1
  int j; // r2
  int v46; // r0
  int v47; // r1
  int v48; // r1
  bool v49; // zf
  bool v50; // zf
  int v51; // [sp+2Ch] [bp-A8h]
  unsigned __int8 v52; // [sp+37h] [bp-9Dh] BYREF
  unsigned __int8 v53; // [sp+38h] [bp-9Ch] BYREF
  char v54; // [sp+39h] [bp-9Bh] BYREF
  char v55; // [sp+3Ah] [bp-9Ah] BYREF
  unsigned __int8 v56; // [sp+3Bh] [bp-99h] BYREF
  char v57; // [sp+3Ch] [bp-98h] BYREF
  unsigned __int8 v58; // [sp+3Dh] [bp-97h] BYREF
  __int16 v59; // [sp+3Eh] [bp-96h] BYREF
  int v60; // [sp+40h] [bp-94h] BYREF
  int v61; // [sp+44h] [bp-90h] BYREF
  _DWORD v62[2]; // [sp+48h] [bp-8Ch] BYREF
  char dest[132]; // [sp+50h] [bp-84h] BYREF

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  *(_BYTE *)(v2 + 40) = 0;
  result = sub_27AAC(a1, (_BYTE *)(v2 + 40), 128, v62);
  v13 = dword_7CF4C == 0;
  *(_DWORD *)(v2 + 168) = result;
  if ( !v13 )
  {
    printf("hpgps: lencode: %d timecode:%s\n", result, (const char *)(v2 + 40));
    result = *(_BYTE **)(v2 + 168);
  }
  if ( result )
  {
    v5 = *(_DWORD *)(v3 + 12);
    v6 = v5 <= 0;
    v7 = v5 - 1;
    *(_DWORD *)(v3 + 12) = v7;
    if ( !v6 )
    {
      if ( v3 + 20 - *(_DWORD *)(v3 + 16) + 1839 >= (int)result )
      {
        v19 = *(char **)(v3 + 16);
        *v19++ = 10;
        *(_DWORD *)(v3 + 16) = v19;
        result = strcpy(v19, (const char *)(v2 + 40));
        v7 = *(_DWORD *)(v3 + 12);
        *(_DWORD *)(v3 + 16) += *(_DWORD *)(v2 + 168);
      }
      if ( !v7 )
        return (_BYTE *)sub_2DDBC(v1 + 12, (const char *)(v3 + 20));
      return result;
    }
    sub_2DDBC(v1 + 12, (const char *)(v2 + 40));
    v8 = v62[1];
    *(_DWORD *)(v2 + 216) = v62[0];
    *(_DWORD *)(v2 + 220) = v8;
    *(_DWORD *)v3 = 2;
    *(_DWORD *)(v3 + 16) = v3 + 20;
    *(_BYTE *)(v3 + 20) = 0;
    strcpy(dest, (const char *)(v2 + 40));
    v9 = strrchr((const char *)(v2 + 40), 62);
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = (int)&v9[-v2 - 39];
    }
    else
    {
      v10 = (const char *)(v2 + 40);
      v11 = 0;
    }
    dest[v11] = 0;
    v12 = *(unsigned __int8 *)v10;
    v13 = v12 == 32;
    if ( v12 != 32 )
      v13 = v12 == 9;
    if ( v13 )
    {
      v14 = v10 + 1;
      do
      {
        v10 = v14;
        v16 = *(unsigned __int8 *)v14++;
        v15 = v16;
        v17 = v16 == 32;
        if ( v16 != 32 )
          v17 = v15 == 9;
      }
      while ( v17 );
    }
    v18 = strrchr(dest, 69);
    if ( v18 > strrchr(dest, 115) )
    {
      if ( dword_7CF4C )
        printf("hpgps: error indicated in prompt: %s\n", dest);
      if ( write(*(_DWORD *)(v2 + 20), "*CLS\r\r", 6u) != 6 )
        sub_27040(v1, 3);
    }
    if ( sscanf(v10, "%c%c", &v52, &v53) != 2 )
    {
      if ( dword_7CF4C )
        puts("hpgps: no format indicator");
      return (_BYTE *)sub_27040(v1, 2);
    }
    if ( v52 == 45 )
    {
LABEL_38:
      result = (_BYTE *)sscanf(v10, "%d,%d", v3 + 4, v3 + 8);
      if ( result == (_BYTE *)2 )
      {
        v21 = *(_DWORD *)(v3 + 4);
        if ( (unsigned int)(v21 + 12) <= 0x19 )
        {
          v22 = *(_DWORD *)(v3 + 8);
          if ( v22 >= -59 && v22 <= 59 )
            return result;
        }
        if ( dword_7CF4C )
          printf("hpgps: timezone %d, %d out of range\n", v21, *(_DWORD *)(v3 + 8));
      }
      else if ( dword_7CF4C )
      {
        printf("hpgps: only %d fields recognized in timezone\n", result);
      }
      return (_BYTE *)sub_27040(v1, 2);
    }
    if ( v52 != 84 )
    {
      if ( v52 != 43 )
      {
        if ( dword_7CF4C )
          printf("hpgps: unrecognized reply format %c%c\n", v52, v53);
        return (_BYTE *)sub_27040(v1, 2);
      }
      goto LABEL_38;
    }
    if ( v53 != 50 )
    {
      if ( dword_7CF4C )
        printf("hpgps: unrecognized timecode format %c%c\n", 84, v53);
      return (_BYTE *)sub_27040(v1, 2);
    }
    v20 = sscanf(
            v10,
            "%*c%*c%4d%2d%2d%2d%2d%2d%c%c%c%c%c%2hx",
            v2 + 172,
            &v60,
            &v61,
            v2 + 180,
            v2 + 184,
            v2 + 188,
            &v54,
            &v55,
            &v56,
            &v57,
            &v58,
            &v59);
    if ( v20 != 12 )
    {
      if ( dword_7CF4C )
        printf("hpgps: only %d fields recognized in timecode\n", v20);
      return (_BYTE *)sub_27040(v1, 2);
    }
    v23 = v10 + 21;
    v24 = 0;
    do
    {
      v25 = *v10++;
      v24 += v25;
    }
    while ( v10 != v23 );
    if ( v24 != v59 )
    {
      if ( dword_7CF4C )
        printf("hpgps: checksum %2hX doesn't match %2hX expected\n", v24, v59);
      return (_BYTE *)sub_27040(v1, 2);
    }
    v26 = v60;
    v27 = v60 - 1;
    if ( (unsigned int)(v60 - 1) <= 0xB )
    {
      v28 = v61;
      if ( v61 > 0 )
      {
        v29 = *(_DWORD *)(v2 + 172);
        if ( (v29 & 3) != 0
          || (v51 = v61, sub_5AA04(*(_DWORD *)(v2 + 172), 100), v28 = v51, !v30)
          && (sub_5AA04(v29, 400), v28 = v51, v31) )
        {
          if ( v28 > *(_DWORD *)&aGps_1[4 * v27 + 8] )
            return (_BYTE *)sub_27040(v1, 6);
          for ( i = 0; i < v27; ++i )
          {
            v33 = dword_66030[i];
            v28 += v33;
          }
          v34 = 365;
          v61 = v28;
        }
        else
        {
          if ( v28 > *(_DWORD *)&aGps_1[4 * v27 + 56] )
            return (_BYTE *)sub_27040(v1, 6);
          for ( j = 0; j < v27; ++j )
          {
            v46 = dword_66030[j + 12];
            v28 += v46;
          }
          v34 = 366;
          v61 = v28;
        }
        v35 = *(_DWORD *)(v2 + 180);
        v36 = *(_DWORD *)(v2 + 184) - *(_DWORD *)(v3 + 8);
        v37 = *(_DWORD *)(v3 + 4);
        v38 = v36 < 0;
        *(_DWORD *)(v2 + 184) = v36;
        v39 = v35 - v37;
        if ( v36 < 0 )
        {
          v36 += 60;
          v37 = v39 - 1;
        }
        *(_DWORD *)(v2 + 180) = v39;
        if ( v38 )
        {
          *(_DWORD *)(v2 + 184) = v36;
          v39 = v37;
          *(_DWORD *)(v2 + 180) = v37;
        }
        if ( v36 > 59 )
        {
          *(_DWORD *)(v2 + 180) = ++v39;
          *(_DWORD *)(v2 + 184) = v36 - 60;
        }
        v40 = v61;
        if ( v39 < 0 )
        {
          v40 = v61 - 1;
          v39 += 24;
          *(_DWORD *)(v2 + 180) = v39;
          v61 = v40;
          if ( v40 <= 0 )
          {
            *(_DWORD *)(v2 + 172) = --v29;
            if ( (v29 & 3) != 0 || (sub_5AA04(v29, 100), !v47) && (sub_5AA04(v29, 400), v48) )
            {
              v39 = *(_DWORD *)(v2 + 180);
              v40 = 365;
              v61 = 365;
            }
            else
            {
              v40 = 366;
              v39 = *(_DWORD *)(v2 + 180);
              v61 = 366;
            }
          }
        }
        if ( v39 > 23 )
        {
          ++v40;
          *(_DWORD *)(v2 + 180) = v39 - 24;
          v61 = v40;
          if ( v34 < v40 )
          {
            v40 = 1;
            *(_DWORD *)(v2 + 172) = v29 + 1;
            v61 = 1;
          }
        }
        v41 = v58;
        *(_DWORD *)(v2 + 176) = v40;
        if ( v41 == 48 )
        {
          v44 = v56;
          *(_BYTE *)(v2 + 32) = 0;
          if ( v44 == 45 )
          {
            v49 = v26 == 6;
            if ( v26 != 6 )
              v49 = v26 == 12;
            if ( v49 )
              *(_BYTE *)(v2 + 32) = 2;
          }
          else if ( v44 != 48 )
          {
            if ( v44 != 43 )
            {
              if ( dword_7CF4C )
                printf("hpgps: unrecognized leap indicator: %c\n", v44);
              return (_BYTE *)sub_27040(v1, 6);
            }
            v50 = v26 == 6;
            if ( v26 != 6 )
              v50 = v26 == 12;
            if ( v50 )
              *(_BYTE *)(v2 + 32) = 1;
          }
        }
        else
        {
          *(_BYTE *)(v2 + 32) = 3;
        }
        if ( sub_27698((_DWORD *)v2) )
        {
          v42 = *(_DWORD *)(v2 + 220);
          *(_DWORD *)(v2 + 208) = *(_DWORD *)(v2 + 216);
          *(_DWORD *)(v2 + 212) = v42;
          result = (_BYTE *)sub_276A0(v1);
          if ( (*(_BYTE *)(v2 + 752) & 8) != 0 )
          {
            v43 = *(_DWORD *)(v2 + 20);
            *(_DWORD *)(v3 + 12) = 22;
            result = (_BYTE *)write(v43, ":SYSTEM:PRINT?\r", 0xFu);
            if ( result != (_BYTE *)15 )
              return (_BYTE *)sub_27040(v1, 3);
          }
          return result;
        }
      }
    }
    return (_BYTE *)sub_27040(v1, 6);
  }
  return result;
}
