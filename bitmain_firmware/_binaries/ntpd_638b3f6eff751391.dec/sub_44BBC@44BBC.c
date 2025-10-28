const char *__fastcall sub_44BBC(int a1, char *a2)
{
  size_t v4; // r6
  char *v5; // r5
  signed int v6; // r8
  unsigned __int8 *v7; // r10
  const char *v8; // r3
  const char *v9; // r0
  unsigned int v10; // r2
  unsigned int v11; // t1
  const char *v12; // r3
  unsigned __int8 *v13; // r12
  int v14; // r2
  int v15; // t1
  int v16; // t1
  unsigned int v17; // r2
  const char *v18; // r9
  const char *v19; // r3
  int v20; // r2
  int v21; // t1

  v4 = strlen(off_7B8AC[0]);
  v5 = (char *)sub_44484(v4 + 3);
  v6 = strlen(*(const char **)(a1 + 28));
  *(_WORD *)v5 = 16188;
  memcpy(v5 + 2, off_7B8AC[0], v4 + 1);
  v7 = *(unsigned __int8 **)(a1 + 28);
  while ( 1 )
  {
    v8 = a2 + 1;
    do
    {
      v9 = v8;
      v11 = *(unsigned __int8 *)v8++;
      v10 = v11;
    }
    while ( v11 <= 0x7F && (dword_69A0C[v10] & 0x500) != 0 );
    if ( v6 <= 0 )
      break;
    if ( *((unsigned __int8 *)&unk_7B7B0 + v10 + 704) == *((unsigned __int8 *)&unk_7B7B0 + *v7 + 704) )
    {
      if ( v10 )
      {
        v12 = v9;
        v13 = v7;
        do
        {
          if ( v12 == &v9[v6 - 1] )
            break;
          v15 = *(unsigned __int8 *)++v12;
          v14 = v15;
          v16 = *++v13;
          if ( *((unsigned __int8 *)&unk_7B7B0 + v14 + 704) != *((unsigned __int8 *)&unk_7B7B0 + v16 + 704) )
            goto LABEL_20;
        }
        while ( v14 );
      }
      break;
    }
LABEL_20:
    a2 = strstr(v9, v5);
    if ( !a2 )
    {
      free(v5);
      return 0;
    }
  }
  v17 = (unsigned __int8)v9[v6];
  v18 = &v9[v6];
  if ( v17 > 0x7F || (dword_69A0C[v17] & 0x1500) == 0 )
    goto LABEL_20;
  free(v5);
  v19 = v18;
  while ( 1 )
  {
    v21 = *(unsigned __int8 *)v19++;
    v20 = v21;
    if ( !v21 )
      break;
    if ( v20 == 62 )
      return v19;
  }
  return 0;
}
