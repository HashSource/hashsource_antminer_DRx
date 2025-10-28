char *__fastcall sub_47530(unsigned __int8 *a1, int *a2)
{
  int *v2; // r8
  char *v3; // r2
  unsigned int v4; // r5
  unsigned int v5; // r3
  _BYTE *v6; // r6
  char *v7; // r7
  char *v8; // r4
  char *v10; // r0
  int v11; // r2
  char *i; // r3
  int v13; // t1
  int v14; // [sp+4h] [bp-4h] BYREF

  v2 = a2;
  v14 = 0;
  v3 = (char *)(a1 + 1);
  v4 = *a1;
  if ( !a2 )
    v2 = &v14;
  v5 = a1[1];
  v6 = a1;
LABEL_4:
  while ( v4 != v5 )
  {
    while ( 1 )
    {
      *v6 = v5;
      v7 = v3 + 1;
      if ( v5 == 92 )
        break;
      if ( v5 <= 0x5C )
      {
        if ( !v5 )
          return 0;
        if ( v5 == 10 )
        {
          ++v6;
          ++*v2;
          v5 = (unsigned __int8)*++v3;
          goto LABEL_4;
        }
      }
      v5 = (unsigned __int8)v3[1];
      ++v6;
      ++v3;
      if ( v4 == v5 )
        goto LABEL_8;
    }
    v5 = (unsigned __int8)v3[1];
    if ( v5 == 10 )
    {
      ++*v2;
      v5 = (unsigned __int8)v3[2];
      v3 += 2;
    }
    else if ( v4 == 39 )
    {
      if ( v5 == 39 || v5 == 92 || v5 == 35 )
      {
        *v6++ = v5;
        v5 = (unsigned __int8)v3[2];
        v3 += 2;
      }
      else
      {
        ++v3;
        ++v6;
      }
    }
    else
    {
      v10 = (char *)sub_4717C((unsigned __int8 *)v3 + 1, v6, 10);
      if ( !v10 )
        return v10;
      ++v6;
      v3 = &v10[(_DWORD)v7];
      v5 = (unsigned __int8)v10[(_DWORD)v7];
    }
  }
LABEL_8:
  v8 = v3 + 1;
  *v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = (unsigned __int8)*v8;
        if ( v4 > 0x7F || (dword_69A0C[v4] & 0x500) == 0 )
          break;
        ++v8;
        if ( v4 == 10 )
          ++*v2;
      }
      if ( v4 == 39 )
        goto LABEL_31;
      if ( v4 != 47 )
      {
        if ( v4 != 34 )
          return v8;
LABEL_31:
        v3 = v8 + 1;
        v5 = (unsigned __int8)v8[1];
        goto LABEL_4;
      }
      v11 = (unsigned __int8)v8[1];
      if ( v11 != 42 )
        break;
      v10 = strstr(v8 + 2, "*/");
      if ( !v10 )
        return v10;
      if ( v8 < v10 )
      {
        for ( i = v8; i != v10 - 1; ++i )
        {
          v13 = (unsigned __int8)i[1];
          if ( v13 == 10 )
            ++*v2;
        }
      }
      v8 = v10 + 2;
    }
    if ( v11 != 47 )
      return 0;
    v8 = strchr(v8, 10);
    if ( !v8 )
      return v8;
  }
}
