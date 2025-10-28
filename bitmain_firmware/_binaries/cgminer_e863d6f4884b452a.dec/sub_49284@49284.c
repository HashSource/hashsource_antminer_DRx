int __fastcall sub_49284(_DWORD *a1, const char **a2, int *a3, void (*a4)(const char *, ...))
{
  int result; // r0
  const char **v9; // r6
  int *v10; // r3
  int v11; // r4
  int v12; // t1
  const char *v13; // r0
  const char *v14; // r11
  int v15; // r1
  unsigned int v16; // r12
  int v17; // r3
  unsigned int v18; // r0
  unsigned int v19; // r3
  int v20; // r0
  char *v21; // r7
  char *v22; // r11
  int v23; // r7
  const char *v24; // r0
  int v25; // r11
  const char *v26; // r8
  const char *v27; // r7
  size_t v28; // r4
  size_t v29; // r1
  const char *v30; // r6
  size_t v31; // r0
  const char *v32; // r2
  size_t v33; // r7
  const char *v34; // [sp+8h] [bp-14h]
  int *v35; // [sp+Ch] [bp-10h]
  unsigned int v36; // [sp+10h] [bp-Ch] BYREF
  size_t n[2]; // [sp+14h] [bp-8h] BYREF

  if ( getenv("POSIXLY_CORRECT") )
  {
    result = (int)a2[1];
    v9 = a2 + 1;
    if ( result )
    {
      if ( *(_BYTE *)result != 45 )
        return 0;
      v11 = 1;
      if ( *(_BYTE *)(result + 1) == 45 )
      {
LABEL_32:
        v23 = *(unsigned __int8 *)(result + 2);
        if ( !*(_BYTE *)(result + 2) )
        {
          sub_49264(a1, (int)a2, v11);
          return v23;
        }
        if ( *a3 )
          _assert_fail("*offset == 0", "opt/parse.c", 0x3Bu, "parse_one");
        v24 = sub_49030(&v36, n);
        if ( v24 )
        {
          v35 = a3;
          v25 = v11;
          v26 = v24;
          do
          {
            v27 = *v9;
            v28 = n[0];
            if ( !strncmp(*v9 + 2, v26, n[0]) )
            {
              v29 = v28 + 2;
              if ( v27[v28 + 2] == 61 )
              {
                v32 = v27;
                v16 = v36;
                v33 = v28;
                v11 = v25;
                v14 = v32;
                v34 = v26 - 2;
                a3 = v35;
                v21 = (char *)&v32[v33 + 3];
                n[0] = v29;
                v19 = dword_A71F4 + 28 * v36;
                v20 = *(_DWORD *)(v19 + 4);
                if ( v20 != 1 )
                {
                  if ( !v21 )
                  {
LABEL_44:
                    v15 = *a3;
                    goto LABEL_18;
                  }
                  goto LABEL_21;
                }
                if ( v21 )
                {
                  a4("%s: %.*s: %s", *a2, v29, v34, "doesn't allow an argument");
                  return -1;
                }
LABEL_36:
                v21 = 0;
                v22 = (char *)(*(int (__fastcall **)(_DWORD))(v19 + 8))(*(_DWORD *)(v19 + 20));
                goto LABEL_24;
              }
              if ( !v27[v28 + 2] )
              {
                v16 = v36;
                v34 = v26 - 2;
                v11 = v25;
                a3 = v35;
                v14 = v27;
                n[0] = v29;
                v19 = dword_A71F4 + 28 * v36;
                v20 = *(_DWORD *)(v19 + 4);
                if ( v20 == 1 )
                  goto LABEL_36;
                goto LABEL_44;
              }
            }
            v26 = sub_4905C((int)v26, &v36, n);
          }
          while ( v26 );
        }
LABEL_46:
        v30 = *v9;
        v31 = strlen(v30);
        a4("%s: %.*s: %s", *a2, v31, v30, "unrecognized option");
        return -1;
      }
LABEL_15:
      v13 = sub_49088(&v36);
      if ( !v13 )
        goto LABEL_46;
      v14 = *v9;
      v15 = *a3 + 1;
      if ( *(unsigned __int8 *)v13 != (unsigned __int8)(*v9)[v15] )
      {
        do
        {
          v13 = sub_490BC((int)v13, &v36);
          if ( !v13 )
            goto LABEL_46;
          v15 = *a3 + 1;
        }
        while ( (unsigned __int8)(*v9)[v15] != *(unsigned __int8 *)v13 );
        v14 = *v9;
      }
      v16 = v36;
      v17 = dword_A71F4;
      v34 = v13 - 1;
      v18 = 7 * v36;
      *a3 = v15;
      n[0] = 2;
      v19 = v17 + 4 * v18;
      v20 = *(_DWORD *)(v19 + 4);
      if ( v20 == 1 )
        goto LABEL_36;
LABEL_18:
      if ( v15 )
      {
        v21 = (char *)&v14[v15 + 1];
        if ( *v21 )
        {
          *a3 = 0;
          goto LABEL_21;
        }
      }
      v21 = (char *)a2[v11 + 1];
      if ( !v21 )
      {
        a4("%s: %.*s: %s", *a2, n[0], v34, "requires an argument");
        return -1;
      }
LABEL_21:
      if ( v20 == 4 )
      {
        sub_48B74((int)v21, *(_DWORD **)(v19 + 20));
        v16 = v36;
      }
      v22 = (char *)(*(int (__fastcall **)(char *, _DWORD))(dword_A71F4 + 28 * v16 + 12))(
                      v21,
                      *(_DWORD *)(dword_A71F4 + 28 * v16 + 20));
LABEL_24:
      if ( v22 )
      {
        a4("%s: %.*s: %s", *a2, n[0], v34, v22);
        free(v22);
        return -1;
      }
      if ( *a3 )
      {
        if ( (*v9)[*a3 + 1] )
          return 1;
        *a3 = 0;
      }
      sub_49264(a1, (int)a2, v11);
      if ( v21 )
      {
        if ( *v9 == v21 )
          sub_49264(a1, (int)a2, v11);
      }
      return 1;
    }
  }
  else
  {
    result = (int)a2[1];
    if ( result )
    {
      if ( *(_BYTE *)result == 45 )
      {
        v9 = a2 + 1;
        v11 = 1;
LABEL_14:
        if ( *(_BYTE *)(result + 1) == 45 )
          goto LABEL_32;
        goto LABEL_15;
      }
      v10 = (int *)(a2 + 2);
      v11 = 1;
      while ( 1 )
      {
        v9 = (const char **)v10;
        v12 = *v10++;
        result = v12;
        ++v11;
        if ( !v12 )
          break;
        if ( *(_BYTE *)result == 45 )
          goto LABEL_14;
      }
    }
  }
  return result;
}
