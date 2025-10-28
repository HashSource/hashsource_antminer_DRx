size_t __fastcall sub_4BBA4(size_t result, int a2)
{
  void **v2; // r4
  char *v3; // r8
  int v4; // r6
  unsigned __int8 *v6; // r0
  int *v7; // r0
  int v8; // r5
  int v9; // r9
  int v10; // r3
  int v11; // r11
  const char *v12; // r3
  int v13; // r5
  bool v14; // cc
  int v15; // r5
  char *v16; // r9
  unsigned int v17; // r10
  int v18; // r3
  int v19; // r3
  const void *v20; // r4
  void **v21[4]; // [sp+0h] [bp-94h] BYREF
  char s[128]; // [sp+10h] [bp-84h] BYREF
  char v23; // [sp+90h] [bp-4h] BYREF

  v4 = result;
  if ( (*(_DWORD *)(result + 12) & 0x100) == 0 )
    return result;
  v6 = (unsigned __int8 *)getenv(*(const char **)(result + 32));
  if ( v6 )
  {
    v7 = sub_4B894(v6);
    v2 = (void **)v7;
    if ( v7 )
    {
      v8 = *(_DWORD *)(v4 + 12);
      v9 = *(_DWORD *)(v4 + 4);
      v10 = *v7 + 1;
      v11 = *(_DWORD *)(v4 + 8);
      v3 = 0;
      *(_DWORD *)(v4 + 12) = v8 & 0xFFFFFFFB;
      *(_DWORD *)(v4 + 4) = v10;
      *(_DWORD *)(v4 + 8) = v7;
      *(_DWORD *)(v4 + 16) = 1;
      *(_DWORD *)(v4 + 20) = 0;
      if ( a2 == 1 )
      {
        sub_45328(v4);
      }
      else
      {
        if ( a2 )
        {
          if ( a2 != 2 )
            goto LABEL_9;
        }
        else
        {
          sub_45328(v4);
          *(_DWORD *)(v4 + 16) = 1;
          *(_DWORD *)(v4 + 20) = 0;
        }
        sub_432E0(v4);
      }
LABEL_9:
      free(v2);
      *(_DWORD *)(v4 + 4) = v9;
      *(_DWORD *)(v4 + 8) = v11;
      *(_DWORD *)(v4 + 12) = v8;
    }
  }
  v12 = *(const char **)(v4 + 32);
  v13 = *(_DWORD *)(v4 + 104);
  v21[0] = *(void ***)(v4 + 68);
  result = snprintf(s, 0x80u, "%s_", v12);
  v14 = v13 <= 0;
  if ( v13 > 0 )
    v3 = &v23;
  v15 = v13 - 1;
  if ( !v14 )
    v2 = (void **)*((_DWORD *)v3 - 36);
  v16 = &s[result];
  v17 = 127 - result;
  if ( !v14 )
  {
    do
    {
      while ( 1 )
      {
        --v15;
        if ( ((unsigned int)v2[4] & 0x100) == 0 && *((unsigned __int16 *)v2 + 4) == 0x8000 )
        {
          result = strlen((const char *)v2[12]);
          if ( v17 >= result + 1 )
            break;
        }
        v2 += 16;
        v21[0] = v2;
        if ( v15 == -1 )
          goto LABEL_22;
      }
      memcpy(v16, v2[12], result + 1);
      result = (size_t)sub_45090(v21, s, v4, a2);
      v2 = v21[0] + 16;
      v21[0] += 16;
    }
    while ( v15 != -1 );
  }
LABEL_22:
  v18 = *(unsigned __int16 *)(v4 + 94);
  if ( (v18 & 0x7FFF) != 0 )
  {
    v19 = *(_DWORD *)(v4 + 68) + ((v18 + 1) << 6);
    v21[0] = (void **)v19;
    v20 = *(const void **)(v19 + 48);
    if ( v20 )
    {
      result = strlen(*(const char **)(v19 + 48));
      if ( v17 >= result + 1 )
      {
        memcpy(v16, v20, result + 1);
        return (size_t)sub_45090(v21, s, v4, a2);
      }
    }
  }
  return result;
}
