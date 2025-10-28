int __fastcall sub_48664(_DWORD *a1, const char **a2, int *a3, void (*a4)(const char *, ...))
{
  char *v8; // r0
  const char *v9; // r12
  const char **v10; // r6
  int v12; // r5
  unsigned __int8 *v13; // r11
  const char *v14; // r3
  int v15; // r0
  size_t v16; // r0
  int v17; // r4
  unsigned __int8 *i; // r11
  int v19; // r0
  unsigned int v20; // r1
  const char *v21; // r11
  int v22; // lr
  int v23; // r12
  char *v24; // r4
  const char *v25; // r12
  const char **v26; // r4
  const char *v27; // t1
  _BYTE *ptr; // [sp+8h] [bp-14h]
  char *ptra; // [sp+8h] [bp-14h]
  const char *v30; // [sp+Ch] [bp-10h]
  unsigned int v31; // [sp+10h] [bp-Ch] BYREF
  size_t n[2]; // [sp+14h] [bp-8h] BYREF

  v8 = getenv("POSIXLY_CORRECT");
  v9 = a2[1];
  if ( !v8 )
  {
    if ( v9 )
    {
      if ( *v9 == 45 )
      {
        v10 = a2 + 1;
        v12 = 1;
        goto LABEL_6;
      }
      v26 = a2 + 2;
      v12 = 1;
      while ( 1 )
      {
        v10 = v26;
        v27 = *v26++;
        v9 = v27;
        ++v12;
        if ( !v27 )
          break;
        if ( *v9 == 45 )
          goto LABEL_6;
      }
    }
    return 0;
  }
  v10 = a2 + 1;
  if ( !v9 || *v9 != 45 )
    return 0;
  v12 = 1;
LABEL_6:
  if ( v9[1] == 45 )
  {
    v17 = *((unsigned __int8 *)v9 + 2);
    if ( !v9[2] )
    {
      sub_48630(a1, (int)a2, v12);
      return v17;
    }
    if ( *a3 )
      _assert_fail("*offset == 0", "opt/parse.c", 0x3Bu, "parse_one");
    for ( i = sub_48280(&v31, (unsigned __int8 **)n); i; i = sub_482D8(i, &v31, (unsigned __int8 **)n) )
    {
      v30 = *v10;
      ptr = (_BYTE *)n[0];
      v19 = strncmp(*v10 + 2, (const char *)i, n[0]);
      v14 = v30;
      if ( !v19 )
      {
        if ( ptr[(_DWORD)v30 + 2] == 61 )
        {
          v20 = v31;
          v24 = &ptr[(_DWORD)v30 + 3];
          v21 = (const char *)(i - 2);
          n[0] = (size_t)(ptr + 2);
          v22 = dword_C54D0 + 28 * v31;
          v23 = *(_DWORD *)(v22 + 4);
          if ( v23 != 1 )
          {
            if ( v24 )
              goto LABEL_39;
            goto LABEL_48;
          }
          if ( v24 )
          {
            a4("%s: %.*s: %s", *a2, (int)(ptr + 2), v21, "doesn't allow an argument");
            return -1;
          }
LABEL_18:
          v24 = 0;
          v25 = (const char *)(*(int (__fastcall **)(_DWORD))(v22 + 8))(*(_DWORD *)(v22 + 20));
LABEL_19:
          if ( v25 )
          {
            ptra = (char *)v25;
            a4("%s: %.*s: %s", *a2, n[0], v21, v25);
            free(ptra);
            return -1;
          }
          if ( *a3 )
          {
            if ( !(*v10)[*a3 + 1] )
            {
              *a3 = 0;
              goto LABEL_23;
            }
          }
          else
          {
LABEL_23:
            sub_48630(a1, (int)a2, v12);
            if ( v24 )
            {
              if ( *v10 == v24 )
                sub_48630(a1, (int)a2, v12);
            }
          }
          return 1;
        }
        if ( !ptr[(_DWORD)v30 + 2] )
        {
          v20 = v31;
          v21 = (const char *)(i - 2);
          n[0] = (size_t)(ptr + 2);
          v22 = dword_C54D0 + 28 * v31;
          v23 = *(_DWORD *)(v22 + 4);
          if ( v23 == 1 )
            goto LABEL_18;
LABEL_48:
          v15 = *a3;
          goto LABEL_37;
        }
      }
    }
LABEL_10:
    v16 = strlen(*v10);
    a4("%s: %.*s: %s", *a2, v16, *v10, "unrecognized option");
    return -1;
  }
  v13 = sub_48330(&v31);
  if ( !v13 )
    goto LABEL_10;
  while ( 1 )
  {
    v14 = *v10;
    v15 = *a3 + 1;
    if ( (unsigned __int8)(*v10)[v15] == *v13 )
      break;
    v13 = sub_4838C(v13, &v31);
    if ( !v13 )
      goto LABEL_10;
  }
  v20 = v31;
  v21 = (const char *)(v13 - 1);
  *a3 = v15;
  n[0] = 2;
  v22 = dword_C54D0 + 28 * v20;
  v23 = *(_DWORD *)(v22 + 4);
  if ( v23 == 1 )
    goto LABEL_18;
LABEL_37:
  if ( v15 )
  {
    v24 = (char *)&v14[v15 + 1];
    if ( *v24 )
    {
      *a3 = 0;
      goto LABEL_39;
    }
  }
  v24 = (char *)a2[v12 + 1];
  if ( v24 )
  {
LABEL_39:
    if ( v23 == 4 )
    {
      sub_47A4C((int)v24, *(_DWORD **)(v22 + 20));
      v20 = v31;
    }
    v25 = (const char *)(*(int (__fastcall **)(char *, _DWORD))(dword_C54D0 + 28 * v20 + 12))(
                          v24,
                          *(_DWORD *)(dword_C54D0 + 28 * v20 + 20));
    goto LABEL_19;
  }
  a4("%s: %.*s: %s", *a2, n[0], v21, "requires an argument");
  return -1;
}
