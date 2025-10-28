char *__fastcall sub_BC44(const char *a1, char *a2, const char *a3)
{
  int v4; // r6
  char *v5; // r5
  char *v6; // r0
  char *v7; // r4
  char *v8; // r0
  _BOOL4 v9; // r3
  char *v10; // r8
  char *v11; // r0
  const char *v12; // r10
  int v13; // r4
  char *v14; // r7
  int v15; // r11
  size_t v16; // r0
  int v17; // r3
  bool v18; // zf
  int v19; // r4
  int v20; // r5
  void *v21; // r0
  void *v22; // r0
  int v24; // r3
  char dest[4]; // [sp+8h] [bp-74h] BYREF
  void *ptr; // [sp+Ch] [bp-70h] BYREF
  void *v28; // [sp+10h] [bp-6Ch] BYREF
  char s[104]; // [sp+14h] [bp-68h] BYREF

  ptr = 0;
  v28 = 0;
  v4 = sub_BA9C(a1, &ptr, (int *)&v28);
  printf("sum = %d\n", v4);
  memset(s, 0, 0x64u);
  v5 = strchr(a3, 124);
  if ( v5 )
    *v5++ = 0;
  v6 = strrchr(a3, 124);
  if ( v6 )
    *v6 = 0;
  if ( v5 && *v5 )
  {
    while ( 1 )
    {
      v7 = strchr(v5, 44);
      v8 = strchr(v5, 124);
      v9 = v7 == 0;
      if ( v8 < v7 )
        v9 = 1;
      v10 = v8;
      if ( v9 )
      {
        strncpy(dest, v8, 1u);
        if ( !v10 )
          goto LABEL_12;
      }
      else
      {
        v10 = v7;
        strncpy(dest, v7, 1u);
      }
      *v10++ = 0;
LABEL_12:
      v11 = strchr(v5, 61);
      v12 = v11;
      if ( v11 )
      {
        *v11 = 0;
        v12 = v11 + 1;
      }
      if ( v4 <= 0 )
      {
LABEL_37:
        if ( !v10 )
          break;
        v24 = (unsigned __int8)*v10;
      }
      else
      {
        v13 = 0;
        v14 = (char *)ptr;
        v15 = 0;
        while ( 1 )
        {
          ++v15;
          if ( !strcmp(*(const char **)&v14[v13], v5) )
            break;
          v13 += 4;
          if ( v15 == v4 )
            goto LABEL_37;
        }
        sprintf(s, "%s=%s", *(const char **)((char *)v28 + v13), v12);
        strcat(a2, s);
        if ( !v10 || !*v10 )
          break;
        strncat(a2, dest, 1u);
        v24 = (unsigned __int8)*v10;
      }
      if ( !v24 )
        break;
      v5 = v10;
    }
  }
  v16 = strlen(a2) - 1;
  v17 = (unsigned __int8)a2[v16];
  v18 = v17 == 44;
  if ( v17 != 44 )
    v18 = v17 == 124;
  if ( v18 )
    a2[v16] = 0;
  if ( v4 > 0 )
  {
    v19 = 0;
    do
    {
      v20 = 4 * v19;
      v21 = (void *)*((_DWORD *)ptr + v19++);
      if ( v21 )
        free(v21);
      v22 = *(void **)((char *)v28 + v20);
      if ( v22 )
        free(v22);
    }
    while ( v19 != v4 );
  }
  if ( ptr )
    free(ptr);
  if ( v28 )
    free(v28);
  printf("after format :%s\n\n", a2);
  return a2;
}
