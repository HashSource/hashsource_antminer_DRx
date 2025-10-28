int __fastcall sub_3FAB0(_DWORD *a1)
{
  int v1; // r8
  int v2; // r4
  int v3; // r5
  int result; // r0
  bool v5; // zf
  int v6; // r2
  int v7; // r1
  int v8; // r1
  int v9; // r3
  int v10; // r2
  int v11; // r3
  char *v12; // r0
  char *v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  _BYTE *v17; // r2
  size_t v18; // r0
  int v19; // r3
  _DWORD v20[3]; // [sp+10h] [bp-Ch] BYREF

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  result = (int)sub_27AAC(a1, (_BYTE *)(v2 + 40), 128, v20);
  v5 = dword_7CF4C == 0;
  v6 = result;
  *(_DWORD *)(v2 + 168) = result;
  if ( !v5 )
  {
    result = printf("gps: timecode %d %d %s\n", *(_DWORD *)(v3 + 204), result, (const char *)(v2 + 40));
    v6 = *(_DWORD *)(v2 + 168);
  }
  if ( v6 )
  {
    if ( (*(_BYTE *)(v2 + 752) & 2) != 0 )
    {
      v7 = v20[1];
      *(_DWORD *)(v2 + 216) = v20[0];
      *(_DWORD *)(v2 + 220) = v7;
    }
    v8 = *(_DWORD *)(v3 + 204);
    if ( v8 <= 0 )
    {
      if ( v6 == 1 )
      {
        result = strtol((const char *)(v2 + 40), 0, 10);
        *(_DWORD *)(v3 + 204) = result;
      }
      else
      {
        sub_2DDBC(v1 + 12, (const char *)(v3 + 4));
        if ( dword_7CF4C )
          printf("gps: stat %s\n", (const char *)(v3 + 4));
        *(_BYTE *)(v3 + 4) = 0;
        v9 = *(_DWORD *)(v2 + 168);
        *(_DWORD *)v3 = v3 + 4;
        if ( v9 > 18
          && sscanf(
               (const char *)(v2 + 40),
               "%2d:%3d:%2d:%2d:%2d.%3ld",
               v2 + 172,
               v2 + 176,
               v2 + 180,
               v2 + 184,
               v2 + 188,
               v2 + 192) == 6 )
        {
          v10 = *(unsigned __int8 *)(v2 + 42);
          v11 = 1000000 * *(_DWORD *)(v2 + 192);
          if ( v10 == 58 )
            *(_BYTE *)(v2 + 32) = 0;
          *(_DWORD *)(v2 + 192) = v11;
          if ( v10 != 58 )
            *(_BYTE *)(v2 + 32) = 3;
          if ( sub_27698((_DWORD *)v2) )
          {
            strcpy(*(char **)v3, (const char *)(v2 + 40));
            v13 = *(char **)v3;
            v14 = *(_DWORD *)(v2 + 168);
            v15 = *(_DWORD *)v3 + v14;
            *(_DWORD *)v3 = v15;
            result = *(unsigned __int8 *)(v2 + 752);
            if ( (result & 8) != 0 )
            {
              v13[v14] = 32;
              v16 = *(_DWORD *)(v3 + 208);
              *(_DWORD *)v3 = v15 + 1;
              strcpy((char *)(v15 + 1), &aItf[30 * v16]);
              v17 = (_BYTE *)(*(_DWORD *)v3 + strlen(&aItf[30 * *(_DWORD *)(v3 + 208)]) - 1);
              *(_DWORD *)v3 = v17;
              *v17 = 0;
              v18 = strlen(&aItf[30 * *(_DWORD *)(v3 + 208)]);
              result = write(*(_DWORD *)(v2 + 20), &aItf[30 * *(_DWORD *)(v3 + 208)], v18);
              v19 = *(_DWORD *)(v3 + 208) + 1;
              *(_DWORD *)(v3 + 208) = v19;
              if ( !aItf[30 * v19] )
                *(_DWORD *)(v3 + 208) = 0;
            }
          }
          else
          {
            return sub_27040(v1, 6);
          }
        }
        else
        {
          return sub_27040(v1, 2);
        }
      }
    }
    else
    {
      result = *(_DWORD *)v3;
      *(_DWORD *)(v3 + 204) = v8 - 1;
      if ( result - (v3 + 4) + v6 <= 198 )
      {
        *(_BYTE *)result = 32;
        v12 = (char *)(result + 1);
        *(_DWORD *)v3 = v12;
        result = (int)strcpy(v12, (const char *)(v2 + 40));
        *(_DWORD *)v3 += *(_DWORD *)(v2 + 168);
      }
    }
  }
  return result;
}
