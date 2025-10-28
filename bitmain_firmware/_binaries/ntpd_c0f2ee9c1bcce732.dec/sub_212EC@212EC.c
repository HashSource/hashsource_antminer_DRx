int __fastcall sub_212EC(int a1, int a2, char a3)
{
  int v4; // r4
  int v5; // r6
  int v7; // r0
  const char *v8; // r7
  const char *v9; // r0
  const char *v10; // r0

  v4 = a2;
  if ( *(_WORD *)a1 == 2 )
  {
    v5 = dword_CA608;
    if ( bswap32(*(_DWORD *)(a1 + 4)) >> 16 << 16 == 2139029504 )
    {
      v4 = dword_CA61C;
      goto LABEL_5;
    }
  }
  else
  {
    v5 = dword_CA644;
  }
  if ( (a3 & 0x36) != 0 )
  {
    v7 = sub_15C78((const struct sockaddr *)a1);
    v4 = v7;
    if ( v7 )
    {
      if ( dword_7CF4C > 3 )
      {
        v8 = (const char *)sub_50CD0(v7 + 20);
        v9 = (const char *)sub_50CD0(a1);
        printf("Found *-cast interface %s for address %s\n", v8, v9);
      }
    }
    else if ( dword_7CF4C > 3 )
    {
      v10 = (const char *)sub_50CD0(a1);
      printf("No *-cast local address found for address %s\n", v10);
    }
  }
  else if ( !a2 )
  {
LABEL_15:
    v4 = sub_15BD4((const struct sockaddr *)a1);
    goto LABEL_6;
  }
LABEL_5:
  if ( v4 == v5 )
    goto LABEL_15;
LABEL_6:
  if ( v4 && (*(_DWORD *)(v4 + 140) & 0x80) != 0 )
    return 0;
  return v4;
}
