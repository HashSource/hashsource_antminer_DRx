int __fastcall sub_44E30(int a1, void ***a2, char *s, int a4, int a5)
{
  char *v5; // r10
  unsigned int v6; // r2
  char *v10; // r3
  unsigned int v11; // r12
  char *v12; // r0
  const char *v13; // r9
  unsigned int v14; // r3
  _BOOL4 v15; // r1
  unsigned int v16; // r12
  const char *v17; // r2
  unsigned int v18; // t1
  int result; // r0
  void **v20; // r3
  int v21; // r2
  unsigned int v22; // r3
  void **v23; // r3
  void ***v24; // r1
  int v25; // r5
  bool v26; // zf
  const char *v27; // r3
  unsigned int v28; // r2
  char *v29; // r0
  int v30; // r3

  v5 = s;
  v6 = (unsigned __int8)*s;
  if ( v6 <= 0x7F && (dword_69A0C[v6] & 0x500) != 0 )
  {
    v10 = v5 + 1;
    do
    {
      v5 = v10++;
      v11 = (unsigned __int8)*v5;
    }
    while ( v11 <= 0x7F && (dword_69A0C[v11] & 0x500) != 0 );
  }
  v12 = strpbrk(v5, " \t\n:=");
  if ( v12 )
  {
    if ( a5 == 2 )
    {
      *v12 = 0;
      v13 = v12 + 1;
    }
    else
    {
      v14 = (unsigned __int8)*v12;
      v15 = v14 <= 0x7F && (dword_69A0C[v14] & 0x500) != 0;
      *v12 = 0;
      v13 = v12 + 1;
      v16 = (unsigned __int8)v12[1];
      if ( v16 <= 0x7F && (dword_69A0C[v16] & 0x500) != 0 )
      {
        v17 = v12 + 2;
        do
        {
          v13 = v17;
          v18 = *(unsigned __int8 *)v17++;
          v16 = v18;
        }
        while ( v18 <= 0x7F && (dword_69A0C[v16] & 0x500) != 0 );
      }
      if ( v15 )
      {
        v26 = v16 == 58;
        if ( v16 != 58 )
          v26 = v16 == 61;
        if ( v26 )
        {
          v27 = v13 + 1;
          do
          {
            v13 = v27++;
            v28 = *(unsigned __int8 *)v13;
          }
          while ( v28 <= 0x7F && (dword_69A0C[v28] & 0x500) != 0 );
        }
      }
    }
  }
  else
  {
    v13 = &v5[strlen(v5)];
  }
  result = sub_42BB4(a1, v5, a2);
  if ( result )
    return result;
  v20 = a2[2];
  if ( ((unsigned __int16)v20 & 0x100) != 0 )
    return result;
  v21 = (unsigned int)v20 & 0x60000;
  a2[1] = (void **)v13;
  if ( ((unsigned int)v20 & 0x60000) == 0x20000 )
  {
    if ( a4 < 0 )
    {
      if ( ((unsigned __int8)v20 & 0x20) != 0 )
        goto LABEL_25;
    }
    else if ( ((unsigned __int8)v20 & 0x20) == 0 )
    {
      goto LABEL_25;
    }
  }
  else
  {
    if ( ((unsigned int)v20 & 0x60000) > 0x20000 )
    {
      if ( v21 == 0x40000 )
      {
        if ( a4 >= 0 )
        {
          if ( ((unsigned __int8)v20 & 0x20) != 0 )
            goto LABEL_25;
          return result;
        }
        if ( ((unsigned __int8)v20 & 0x20) != 0 )
          return result;
      }
      else if ( v21 == 393216 && a4 > 0 )
      {
        return result;
      }
LABEL_25:
      v22 = (unsigned int)(*a2)[4];
      if ( (v22 & 0xF000) == 0 )
      {
        v23 = (void **)*(unsigned __int8 *)v13;
        if ( *v13 )
          return result;
        goto LABEL_28;
      }
      v26 = (v22 & 0x10000) == 0;
      v23 = (void **)*(unsigned __int8 *)v13;
      if ( v26 )
      {
        if ( *v13 )
          goto LABEL_44;
        v23 = (void **)&unk_69C54;
      }
      else if ( *v13 )
      {
LABEL_44:
        v29 = sub_44D28(v13);
        v30 = (unsigned int)a2[2] | 0x40;
        a2[1] = (void **)v29;
        a2[2] = (void **)v30;
        goto LABEL_29;
      }
LABEL_28:
      a2[1] = v23;
LABEL_29:
      v24 = a2;
      v25 = dword_7BB74;
      dword_7BB74 = a5;
      result = sub_429C8(a1, v24);
      dword_7BB74 = v25;
      return result;
    }
    if ( v21 || a4 >= 0 )
      goto LABEL_25;
  }
  return result;
}
