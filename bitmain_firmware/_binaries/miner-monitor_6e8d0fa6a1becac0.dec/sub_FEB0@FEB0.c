int __fastcall sub_FEB0(const char *a1, int a2)
{
  char *v4; // r0
  const char *v5; // r1
  int v6; // r10
  int v7; // r4
  const char *v8; // r11
  char *v9; // r0
  char *v10; // r6
  int v11; // r8
  char *v12; // r0
  char *v13; // r9

  v4 = strchr(a1, 59);
  v5 = a1;
  v6 = 0;
  v7 = 0;
  *v4 = 0;
  v8 = v4 + 1;
  strcpy(dest, v5);
  while ( 1 )
  {
    v9 = strchr(v8, 59);
    v10 = v9;
    if ( v9 )
    {
      *v9 = 0;
      v10 = v9 + 1;
    }
    if ( *v8 )
    {
      v11 = 164 * v6;
      while ( 1 )
      {
        v12 = strchr(v8, 44);
        v13 = v12;
        if ( v12 )
        {
          *v12 = 0;
          v13 = v12 + 1;
        }
        if ( *v8 )
          break;
LABEL_11:
        if ( !v13 )
          goto LABEL_14;
LABEL_12:
        v8 = v13;
      }
      switch ( v7 )
      {
        case 0:
          strcpy((char *)(a2 + v11), v8);
          v7 = 1;
          ++*(_DWORD *)(a2 + 492);
          if ( v13 )
            goto LABEL_12;
          break;
        case 1:
          v7 = 2;
          strcpy((char *)(a2 + v11 + 4), v8);
          goto LABEL_11;
        case 2:
          v7 = 3;
          strcpy((char *)(a2 + v11 + 84), v8);
          goto LABEL_11;
        case 3:
          strcpy((char *)(a2 + 164 * v6 + 124), v8);
          v7 = 0;
          goto LABEL_11;
      }
LABEL_14:
      ++v6;
    }
    if ( !v10 )
      return a2;
    v8 = v10;
  }
}
