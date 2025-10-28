int __fastcall sub_426A4(unsigned int a1, _DWORD *a2, const char **a3, int a4)
{
  unsigned int v5; // r11
  unsigned int v6; // r9
  const char *v7; // r6
  int v8; // r3
  int v9; // r12
  const char **v10; // r8
  const char **v11; // r5
  const char *v12; // r0
  int v13; // r10
  const char *v14; // t1
  size_t v15; // r0
  int v16; // r5
  const char *i; // r2
  const char *v18; // t1
  int v20; // r6
  unsigned __int8 **v21; // r7
  int v22; // r8
  int v23; // r5
  int v24; // r2
  char *v25; // r1
  int v26; // r5
  const char *v27; // t1
  int v31; // [sp+14h] [bp-18h]
  char s[20]; // [sp+18h] [bp-14h] BYREF

  if ( a1 > 0xF )
    fprintf((FILE *)dword_C9A98, (const char *)dword_C9A9C, *(_DWORD *)(a1 + 28), a2[6], a2[13]);
  v5 = 0;
  v6 = 0;
  fprintf((FILE *)dword_C9A98, off_7BA6C, a2[13]);
  v7 = *a3;
  v8 = *(unsigned __int8 *)*a3;
  if ( v8 == 127 )
    v9 = a4;
  else
    v9 = 0;
  if ( v8 == 127 )
  {
    v7 = a3[1];
    ++a3;
  }
  v10 = a3;
  v11 = a3;
  v12 = v7;
  if ( v8 == 127 )
    --v9;
  else
    v31 = v9;
  if ( v8 == 127 )
  {
    a4 = v9;
    v9 = 1;
  }
  v13 = a4;
  if ( v8 == 127 )
    v31 = v9;
  while ( 1 )
  {
    --v13;
    v15 = strlen(v12) + 1;
    if ( v6 < v15 )
      v6 = v15;
    v5 += v15;
    if ( v13 <= 0 )
      break;
    v14 = v11[1];
    ++v11;
    v12 = v14;
  }
  if ( v6 > 0x23 )
  {
    v16 = a4;
    for ( i = v7; ; i = v18 )
    {
      --v16;
      fprintf((FILE *)dword_C9A98, "  %s\n", i);
      if ( v16 <= 0 )
        break;
      v18 = v10[1];
      ++v10;
    }
    goto LABEL_24;
  }
  if ( v5 <= 0x4B )
  {
    fputc(32, (FILE *)dword_C9A98);
    v26 = a4;
    do
    {
      fputc(32, (FILE *)dword_C9A98);
      --v26;
      v27 = *a3++;
      fputs(v27, (FILE *)dword_C9A98);
    }
    while ( v26 > 0 );
    fputc(10, (FILE *)dword_C9A98);
LABEL_24:
    if ( a1 <= 0xF )
      goto LABEL_25;
    goto LABEL_34;
  }
  v20 = a4;
  sprintf(s, "%%-%ds", v6);
  v21 = (unsigned __int8 **)(a3 + 1);
  v22 = 0;
  v23 = sub_5A860(78, v6);
  fwrite("  ", 1u, 2u, (FILE *)dword_C9A98);
  while ( 1 )
  {
    --v20;
    v25 = s;
    ++v22;
    if ( v20 <= 0 )
      break;
    v24 = (int)*(v21++ - 1);
    if ( v22 == v23 )
    {
      v25 = aS_16;
      v22 = 0;
    }
    fprintf((FILE *)dword_C9A98, v25, v24);
  }
  fprintf((FILE *)dword_C9A98, "%s\n", (const char *)*(v21 - 1));
  if ( a1 > 0xF )
  {
LABEL_34:
    fprintf((FILE *)dword_C9A98, off_7B930[0], v31, a4 - 1 + v31);
    (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
  }
LABEL_25:
  if ( (unsigned __int16)a2[4] >> 12 != 4 )
    return fprintf((FILE *)dword_C9A98, off_7B930[0], v31, a4 - 1 + v31);
  fprintf((FILE *)dword_C9A98, off_7B938[0], a4);
  return fputs(off_7BA18[0], (FILE *)dword_C9A98);
}
