int __fastcall sub_42F48(int a1, _DWORD *a2)
{
  int v2; // r3
  int v5; // r1
  unsigned int v6; // r2
  char *v7; // r1
  char *v8; // r3
  char *v9; // r1
  __int16 v10; // r6
  int result; // r0
  int v12; // r12
  int v13; // r2
  int v14; // r1
  int v15; // r3
  unsigned int v16; // r3
  int v17; // r3
  int v18; // r12
  int v19; // r3
  unsigned int v20; // r3
  int v21; // r2
  int v22; // r2
  bool v23; // zf
  _BYTE *v24; // r2
  int v25; // r2
  _BYTE *v26; // r3

  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 )
  {
    v5 = *(unsigned __int8 *)v2;
    if ( *(_BYTE *)v2 )
      goto LABEL_28;
  }
  v6 = *(_DWORD *)(a1 + 16);
  if ( v6 >= *(_DWORD *)(a1 + 4) )
    return 1;
  v2 = *(_DWORD *)(a1 + 12);
  v7 = *(char **)(*(_DWORD *)(a1 + 8) + 4 * v6);
  *(_DWORD *)(a1 + 20) = v7;
  if ( (v2 & 3) != 0 )
  {
    v18 = (unsigned __int8)*v7;
    *(_DWORD *)(a1 + 20) = v7 + 1;
    if ( v18 == 45 && v7[1] )
    {
      *(_DWORD *)(a1 + 16) = v6 + 1;
      if ( v7[1] != 45 )
      {
        if ( (v2 & 2) == 0 )
        {
          ++v7;
LABEL_22:
          result = sub_42BB4(a1, v7, a2);
          goto LABEL_10;
        }
        v5 = (unsigned __int8)v7[1];
LABEL_28:
        result = sub_41F8C(a1, v5, a2, v2);
        goto LABEL_10;
      }
      *(_DWORD *)(a1 + 20) = v7 + 2;
      if ( v7[2] )
      {
        if ( (v2 & 1) == 0 )
        {
          fprintf((FILE *)stderr, off_7B928[0], *(_DWORD *)(a1 + 24), off_7B92C[0], v7);
          return -1;
        }
        result = sub_42BB4(a1, v7 + 2, a2);
        goto LABEL_10;
      }
    }
    return 1;
  }
  *(_DWORD *)(a1 + 16) = v6 + 1;
  if ( *v7 != 45 )
    goto LABEL_22;
  v8 = v7 + 1;
  do
    v9 = v8++;
  while ( *v9 == 45 );
  v10 = *(_WORD *)(a1 + 98);
  *(_WORD *)(a1 + 98) = 0x8000;
  result = sub_42BB4(a1, v9, a2);
  *(_WORD *)(a1 + 98) = v10;
LABEL_10:
  if ( !result )
  {
    v13 = a2[2];
    v14 = *a2;
    v15 = *(_DWORD *)(*a2 + 16);
    if ( (v13 & 4) != 0 && (v15 & 0x2000000) != 0 )
    {
      fprintf((FILE *)stderr, off_7B98C[0], *(_DWORD *)(v14 + 52));
      return -1;
    }
    else
    {
      v16 = v15 & 0xFFFFFF80 | v13;
      a2[2] = v16;
      if ( (v16 & 0x20) != 0 || (v16 & 0xF000) == 0 )
      {
        if ( a2[3] == 1 )
        {
          ++*(_DWORD *)(a1 + 20);
        }
        else if ( a2[1] )
        {
          fprintf((FILE *)stderr, off_7B950[0], *(_DWORD *)(a1 + 24), *(_DWORD *)(v14 + 52));
          return -1;
        }
        else
        {
          *(_DWORD *)(a1 + 20) = 0;
        }
      }
      else
      {
        if ( (v16 & 0x10000) != 0 )
        {
          v17 = a2[3];
          if ( v17 == 1 )
          {
            v24 = (_BYTE *)(*(_DWORD *)(a1 + 20) + 1);
            *(_DWORD *)(a1 + 20) = v24;
            if ( *v24 )
            {
              a2[1] = v24;
LABEL_30:
              *(_DWORD *)(a1 + 20) = 0;
              return result;
            }
            v25 = *(_DWORD *)(a1 + 16);
            v26 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v25);
            if ( !v26 || *v26 == 45 )
            {
              a2[1] = 0;
              goto LABEL_30;
            }
          }
          else
          {
            if ( v17 != 2 )
            {
              fputs(off_7B874[0], (FILE *)stderr);
              exit(70);
            }
            if ( a2[1] )
              goto LABEL_30;
            if ( (*(_DWORD *)(a1 + 12) & 3) == 0 )
              goto LABEL_30;
            v25 = *(_DWORD *)(a1 + 16);
            v26 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v25);
            if ( !v26 || *v26 == 45 )
              goto LABEL_30;
          }
          *(_DWORD *)(a1 + 16) = v25 + 1;
          a2[1] = v26;
          goto LABEL_30;
        }
        v19 = a2[3];
        if ( v19 == 1 )
        {
          v22 = *(_DWORD *)(a1 + 20) + 1;
          *(_DWORD *)(a1 + 20) = v22;
          v23 = *(_BYTE *)v22 == 0;
          if ( *(_BYTE *)v22 )
          {
            v20 = *(_DWORD *)(a1 + 16);
          }
          else
          {
            v22 = *(_DWORD *)(a1 + 16);
            v12 = *(_DWORD *)(a1 + 8);
            v20 = v22 + 1;
          }
          if ( v23 )
          {
            v22 = *(_DWORD *)(v12 + 4 * v22);
            *(_DWORD *)(a1 + 16) = v20;
            *(_DWORD *)(a1 + 20) = v22;
          }
          a2[1] = v22;
        }
        else if ( v19 != 2 || a2[1] )
        {
          v20 = *(_DWORD *)(a1 + 16);
        }
        else
        {
          v21 = *(_DWORD *)(a1 + 16);
          v20 = v21 + 1;
          a2[1] = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v21);
          *(_DWORD *)(a1 + 16) = v21 + 1;
        }
        if ( v20 <= *(_DWORD *)(a1 + 4) )
          goto LABEL_30;
        fprintf((FILE *)stderr, off_7B940[0], *(_DWORD *)(a1 + 24), *(_DWORD *)(v14 + 52));
        return -1;
      }
    }
  }
  return result;
}
