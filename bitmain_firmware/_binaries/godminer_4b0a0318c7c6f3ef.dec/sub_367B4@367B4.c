int __fastcall sub_367B4(int a1, _BYTE *a2, const char **a3, int *a4, int a5)
{
  const char *v6; // r7
  char *v7; // r0
  size_t v8; // r5
  const char *v9; // r4
  int v10; // r8
  int v11; // r11
  int v12; // r3
  bool v13; // zf
  const char **v14; // r6
  const char *v15; // r2
  char *v16; // r1
  int v17; // r3
  int result; // r0
  int v19; // r3
  int v20; // [sp+0h] [bp-1Ch]
  int v23; // [sp+Ch] [bp-10h]
  int v24; // [sp+10h] [bp-Ch]

  v6 = (const char *)off_193424;
  v24 = optind;
  v23 = ++optind;
  v7 = strchr((const char *)off_193424, 61);
  v20 = (int)v7;
  if ( v7 )
  {
    v8 = v7 - v6;
    v20 = (int)(v7 + 1);
  }
  else
  {
    v8 = strlen(v6);
  }
  v9 = *a3;
  if ( *a3 )
  {
    v10 = -1;
    v11 = 0;
    do
    {
      if ( !strncmp(v6, v9, v8) )
      {
        if ( strlen(v9) == v8 )
          goto LABEL_16;
        if ( v8 == 1 )
          v12 = a5 & 1;
        else
          v12 = 0;
        if ( !v12 )
        {
          v13 = v10 == -1;
          v10 = v11;
          if ( !v13 )
            goto LABEL_32;
        }
      }
      ++v11;
      v9 = a3[4 * v11];
    }
    while ( v9 );
    if ( v10 == -1 )
      goto LABEL_31;
    v11 = v10;
LABEL_16:
    v14 = &a3[4 * v11];
    v15 = v14[1];
    v16 = (char *)v14[2];
    if ( v15 )
    {
      if ( (unsigned int)(v15 - 1) <= 1 )
      {
        if ( v20 )
        {
          optarg = v20;
        }
        else if ( v15 == (const char *)1 )
        {
          optarg = *(_DWORD *)(a1 + 4 * v23);
          optind = v24 + 2;
          if ( !optarg )
          {
            if ( v16 )
              v19 = 0;
            else
              v19 = (int)v14[3];
            optopt = v19;
            optind = v23;
            if ( *a2 != 58 )
              return 63;
            return 58;
          }
        }
      }
    }
    else
    {
      v17 = v20;
      if ( v20 )
      {
        if ( v16 )
          optopt = 0;
        else
          v17 = (int)v14[3];
        if ( !v16 )
          optopt = v17;
        if ( *a2 != 58 )
          return 63;
        return 58;
      }
    }
    if ( a4 )
      *a4 = v11;
    result = (int)v14[3];
    if ( v16 )
    {
      *(_DWORD *)v16 = result;
      return 0;
    }
  }
  else
  {
LABEL_31:
    if ( a5 )
    {
      optind = v24;
      return -1;
    }
    else
    {
LABEL_32:
      optopt = 0;
      return 63;
    }
  }
  return result;
}
