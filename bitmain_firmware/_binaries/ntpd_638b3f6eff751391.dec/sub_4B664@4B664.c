size_t __fastcall sub_4B664(size_t result)
{
  int v1; // r3
  int v2; // r5
  int v3; // r4
  int v4; // r9
  int v5; // r2
  int v6; // t1
  int v7; // r8
  int v8; // r2
  int v9; // r6
  char *v10; // r2
  size_t v11; // r11
  const void *v12; // r1
  size_t v13; // r2
  char *v14; // r0
  struct stat v15; // [sp+8h] [bp-1064h] BYREF
  char v16[4104]; // [sp+64h] [bp-1008h] BYREF

  v1 = *(_DWORD *)(result + 52);
  v2 = result;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 4);
    v4 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v4 & 0xFFFFFFFB;
    if ( v3 )
    {
      v5 = v1 + 4;
      v3 = 0;
      do
      {
        v6 = *(_DWORD *)(v5 + 4);
        v5 += 4;
        ++v3;
      }
      while ( v6 );
    }
    v7 = -1;
    while ( 1 )
    {
      if ( v3 == -1 )
        v8 = 0;
      else
        v8 = 4 * v3;
      if ( v3 == -1 )
        v9 = v8;
      else
        v9 = v3;
      v10 = *(char **)(v1 + v8);
      if ( v3 == -1 )
        v7 = 1;
      if ( !v10 )
      {
        *(_DWORD *)(v2 + 12) = v4;
        return result;
      }
      v3 = v9 + v7;
      result = sub_48B94(v16, 0x1001u, v10, *(const char **)(v2 + 24));
      if ( result )
      {
        result = _xstat(3, v16, &v15);
        if ( !result )
        {
          if ( (v15.st_mode & 0xF000) == 0x4000 )
          {
            v11 = strlen(v16);
            result = strlen(*(const char **)(v2 + 36));
            v12 = *(const void **)(v2 + 36);
            v13 = result + 1;
            if ( v11 + 1 + result + 1 > 0x1000 )
              goto LABEL_6;
            v14 = &v16[v11];
            if ( v16[v11 - 1] != 47 )
            {
              ++v14;
              v16[v11] = 47;
            }
            memcpy(v14, v12, v13);
          }
          result = sub_4AC8C(v2, v16, v7);
          if ( (*(_DWORD *)(*(_DWORD *)(v2 + 68) + (*(unsigned __int16 *)(v2 + 94) << 6) + 80) & 0x20) != 0 && v7 == -1 )
          {
            v3 = v9;
            v7 = 1;
          }
        }
      }
LABEL_6:
      v1 = *(_DWORD *)(v2 + 52);
    }
  }
  return result;
}
