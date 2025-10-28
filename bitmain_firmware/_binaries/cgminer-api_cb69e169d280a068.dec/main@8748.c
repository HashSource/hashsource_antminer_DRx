int __fastcall main(int a1, char **a2, char **a3)
{
  char *v5; // r6
  int v6; // r7
  int v7; // r8
  const char *v8; // r0
  const char *v9; // r6
  char *v10; // r0
  int v11; // r8
  char *v12; // r0
  char *v13; // r7
  const char *v14; // r0

  if ( a1 <= 1 )
    goto LABEL_25;
  v5 = a2[1];
  if ( *v5 != 45 )
  {
    if ( strcmp(a2[1], "--help") )
    {
LABEL_4:
      v6 = 1;
      goto LABEL_5;
    }
LABEL_17:
    fprintf((FILE *)stderr, "usAge: %s [command [ip/host [port]]]\n", *a2);
    return 1;
  }
  v6 = (unsigned __int8)v5[1];
  if ( (v6 == 63 || v6 == 104) && !v5[2] || !strcmp(a2[1], "--help") )
    goto LABEL_17;
  if ( v6 != 111 || v5[2] )
    goto LABEL_4;
  if ( a1 != 2 )
    v6 = 2;
  dword_11170 = 1;
  if ( a1 == 2 )
  {
LABEL_25:
    v9 = "summary";
    goto LABEL_26;
  }
LABEL_5:
  v7 = v6 + 1;
  v8 = (const char *)sub_89EC(a2[v6]);
  if ( *v8 )
    v9 = v8;
  else
    v9 = "summary";
  if ( a1 > v7 )
  {
    v10 = a2[v7];
    v11 = v6 + 2;
    v12 = (char *)sub_89EC(v10);
    if ( *v12 )
      v13 = v12;
    else
      v13 = "127.0.0.1";
    if ( a1 > v11 )
    {
      v14 = (const char *)sub_89EC(a2[v11]);
      if ( *v14 )
        strtol(v14, 0, 10);
    }
    return sub_8BA8((int)v9, v13);
  }
LABEL_26:
  v13 = "127.0.0.1";
  return sub_8BA8((int)v9, v13);
}
