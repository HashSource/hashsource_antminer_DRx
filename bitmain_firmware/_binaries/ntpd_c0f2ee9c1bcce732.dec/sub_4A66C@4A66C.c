void __fastcall sub_4A66C(int a1, int a2)
{
  int v3; // r3
  int v4; // r5
  int *v5; // r8
  int v6; // r10
  int v7; // r6
  int v8; // r4
  int v9; // r2
  bool v10; // zf
  char *v11; // r11
  char *v12; // r9
  unsigned int v13; // r3
  unsigned int v14; // r3

  v3 = *(_DWORD *)(a2 + 16);
  v4 = v3 & 8;
  if ( (v3 & 8) != 0 )
    return;
  v5 = *(int **)(a2 + 28);
  if ( v5 )
  {
    v6 = *v5;
    if ( *v5 > 0 )
    {
      v7 = *(_DWORD *)(a2 + 28);
      v8 = v3 & 8;
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = *(char **)(v7 + 8);
          v12 = strchr(v11, 61);
          if ( v12 )
            break;
          if ( strcmp(v11, *(const char **)(a2 + 24)) )
            goto LABEL_6;
LABEL_12:
          ++v8;
          free(v11);
          v7 += 4;
          --*v5;
          if ( v8 == v6 )
            goto LABEL_13;
        }
        *v12 = 0;
        if ( !strcmp(v11, *(const char **)(a2 + 24)) )
          goto LABEL_12;
        *v12 = 61;
LABEL_6:
        v9 = v4 + 2;
        v10 = v4++ == v8++;
        if ( !v10 )
          v5[v9] = (int)v11;
        v7 += 4;
        if ( v8 == v6 )
        {
LABEL_13:
          v6 = *v5;
          break;
        }
      }
    }
    if ( !v6 )
    {
      v13 = *(_DWORD *)(a2 + 16) & 0xFFFFFF80;
      if ( (*(_DWORD *)(a2 + 16) & 0x800) == 0 )
        v13 |= 0x20u;
      *(_DWORD *)(a2 + 16) = v13;
      free(v5);
      *(_DWORD *)(a2 + 28) = 0;
    }
  }
  else
  {
    v10 = (*(_DWORD *)(a2 + 16) & 0x800) == 0;
    v14 = v3 & 0xFFFFFF80;
    *(_DWORD *)(a2 + 16) = v14;
    if ( v10 )
      *(_DWORD *)(a2 + 16) = v14 | 0x20;
  }
}
