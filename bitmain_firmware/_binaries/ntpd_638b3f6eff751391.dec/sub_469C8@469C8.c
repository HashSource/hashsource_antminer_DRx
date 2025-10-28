char *__fastcall sub_469C8(const char *a1, const char *a2, char *s)
{
  int v6; // r11
  size_t v7; // r6
  int v8; // r2
  const char *v9; // r12
  const char *v10; // r3
  int v11; // t1
  char *v12; // r3
  const char *v13; // r6
  unsigned int v14; // r1
  DIR *v15; // r5
  struct dirent *v16; // r0
  const char *d_name; // r0
  size_t v18; // r0
  char *v19; // r11
  char *v20; // r0
  void *v21; // r8
  char *v22; // r0
  int v23; // r3
  char v24; // r6
  int v25; // r2
  char *v26; // r10
  int v27; // r7
  char *v28; // r2
  int v29; // r4
  int v30; // r3
  int v31; // t1
  bool v32; // zf
  int v33; // r9
  char *v34; // r11
  char *v35; // r0
  char *v36; // r1
  int v37; // r12
  char *v38; // lr
  int v39; // r0
  const char *v40; // r1
  int v41; // r0
  bool v42; // zf
  char *v43; // r3
  int v44; // t1
  size_t v46; // r11
  size_t v47; // r0
  int v48; // r2
  int type; // [sp+4h] [bp-1010h]
  char v50; // [sp+Ch] [bp-1008h] BYREF
  char v51; // [sp+Dh] [bp-1007h] BYREF

  if ( strchr(s, 114) )
    v6 = 4;
  else
    v6 = 0;
  if ( strchr(s, 119) )
    v6 |= 2u;
  if ( strchr(s, 120) )
    v6 |= 1u;
  if ( !a1 )
    return 0;
  v7 = 0;
  type = v6;
LABEL_10:
  if ( v7 >= strlen(a1) )
    return 0;
  while ( 1 )
  {
    v8 = (unsigned __int8)a1[v7];
    v9 = &a1[v7];
    if ( v8 == 58 )
    {
      v10 = v9 + 1;
      do
      {
        v9 = v10;
        v11 = *(unsigned __int8 *)v10++;
        v8 = v11;
      }
      while ( v11 == 58 );
    }
    v12 = &v51;
    v13 = v9 + 1;
    v50 = v8;
    if ( v8 )
    {
      while ( 1 )
      {
        v14 = v12 - &v50;
        if ( v8 == 58 )
          break;
        ++v12;
        if ( v14 <= 0xFFF )
        {
          v8 = *((unsigned __int8 *)v9 + 1);
          v9 = v13++;
          *(v12 - 1) = v8;
          if ( v8 )
            continue;
        }
        goto LABEL_18;
      }
      *(v12 - 1) = 0;
    }
LABEL_18:
    v7 = v13 - a1;
    if ( !v50 )
      return 0;
    v15 = opendir(&v50);
    if ( !v15 )
      goto LABEL_10;
    do
    {
      v16 = readdir(v15);
      v32 = v16 == 0;
      d_name = v16->d_name;
      if ( v32 )
        goto LABEL_66;
    }
    while ( strcmp(d_name, a2) );
    if ( *a2 == 47 )
    {
      v19 = sub_44D28(a2);
    }
    else
    {
      if ( v50 )
      {
        v46 = strlen(&v50);
        v47 = strlen(a2);
        v19 = (char *)sub_44484(v46 + v47 + 2);
        v20 = (char *)stpcpy(v19);
        if ( *(v20 - 1) != 47 )
        {
          v48 = v20 - v19 + 1;
          *v20++ = 47;
          v19[v48] = 0;
        }
      }
      else
      {
        v18 = strlen(a2);
        v19 = (char *)sub_44484(v18 + 3);
        *v19 = 46;
        v19[1] = 47;
        v19[2] = 0;
        v20 = v19 + 2;
      }
      strcpy(v20, a2);
    }
    if ( access(v19, type) >= 0 )
      break;
    free(v19);
LABEL_66:
    closedir(v15);
    if ( v7 >= strlen(a1) )
      return 0;
  }
  v21 = v19;
  v22 = sub_44D28(v19);
  v23 = 0;
  if ( *v19 == 47 )
    v24 = 47;
  else
    v24 = 46;
  v25 = (unsigned __int8)*v22;
  v26 = v22;
LABEL_31:
  v27 = v23;
  if ( v25 )
  {
    do
    {
      if ( v25 == 47 )
      {
        v33 = v23 + 1;
        v29 = v23;
        v34 = &v26[v23 + 1];
        v25 = (unsigned __int8)*v34;
        if ( v25 != 47 )
          goto LABEL_69;
      }
      else
      {
        v28 = &v26[v23];
        v29 = v23;
        do
        {
          v31 = (unsigned __int8)*++v28;
          v30 = v31;
          ++v29;
          v32 = v31 == 47;
          if ( v31 != 47 )
            v32 = v30 == 0;
          v27 = v29;
        }
        while ( !v32 );
        v33 = v29 + 1;
        if ( !v30 )
          break;
        v25 = (unsigned __int8)v26[v33];
        v34 = &v26[v33];
        if ( v25 != 47 )
        {
LABEL_69:
          v37 = v33;
          v36 = v34;
          v23 = v33;
          goto LABEL_44;
        }
      }
      v23 = v33;
      v35 = &v26[v33 + 1];
      do
      {
        v25 = (unsigned __int8)*v35;
        ++v23;
        v36 = v35++;
        v37 = v23;
      }
      while ( v25 == 47 );
      if ( v23 != v33 )
      {
        strcpy(&v26[v27 + 1], v36);
        v25 = (unsigned __int8)*v34;
        v23 = v33;
        v37 = v33;
        v36 = v34;
      }
LABEL_44:
      if ( v29 <= 0 )
      {
        if ( !v29 )
          goto LABEL_47;
      }
      else if ( v26[v27 - 1] == 92 )
      {
        goto LABEL_31;
      }
      if ( !v25 )
        goto LABEL_76;
LABEL_47:
      if ( v25 != 46 )
        goto LABEL_31;
      v38 = &v26[v37 + 1];
      v39 = (unsigned __int8)*v38;
      if ( !*v38 )
      {
LABEL_76:
        v26[v23 - 1] = 0;
        break;
      }
      if ( v39 == 47 )
      {
        strcpy(v36, &v26[v37 + 1]);
        v23 = v29 & ~(v29 >> 31);
        v25 = (unsigned __int8)v26[v23];
        goto LABEL_31;
      }
      if ( v39 != 46 )
        goto LABEL_31;
      v40 = &v26[v37 + 2];
      v41 = *(unsigned __int8 *)v40;
      v42 = v41 == 47;
      if ( v41 != 47 )
        v42 = v41 == 0;
      if ( !v42 )
        goto LABEL_31;
      v43 = &v26[v29];
      do
      {
        if ( --v29 < 0 )
          break;
        v44 = (unsigned __int8)*--v43;
      }
      while ( v44 != 47 );
      strcpy(&v26[v29 + 1], v40);
      v23 = v29 & ~(v29 >> 31);
      v25 = (unsigned __int8)v26[v23];
      v27 = v23;
    }
    while ( v26[v23] );
  }
  if ( !*v26 )
  {
    *v26 = v24;
    v26[1] = 0;
  }
  free(v21);
  closedir(v15);
  return v26;
}
