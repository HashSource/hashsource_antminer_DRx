int __fastcall sub_11458(char *s2)
{
  int v2; // r8
  int v3; // r4
  int v4; // r5
  int v5; // r3
  const char *v7; // r0

  v2 = dword_7CF4C;
  if ( dword_7CF4C > 3 )
  {
    v7 = (const char *)sub_50CD0(s2);
    printf("Searching for addr %s in list of addresses - ", v7);
    v2 = dword_7CF4C;
  }
  v3 = dword_CA64C;
  if ( dword_CA64C )
  {
    v4 = *(unsigned __int16 *)s2;
    do
    {
      if ( *(unsigned __int16 *)(v3 + 4) == v4 )
      {
        if ( v4 == 2 )
        {
          v5 = *(_DWORD *)(v3 + 8) == *((_DWORD *)s2 + 1);
        }
        else
        {
          if ( memcmp((const void *)(v3 + 12), s2 + 8, 0x10u) )
            goto LABEL_5;
          v5 = *(_DWORD *)(v3 + 28)
             - *((_DWORD *)s2 + 6)
             + (*(_DWORD *)(v3 + 28) == *((_DWORD *)s2 + 6))
             + *((_DWORD *)s2 + 6)
             - *(_DWORD *)(v3 + 28);
        }
        if ( v5 )
        {
          if ( v2 > 3 )
            puts("FOUND");
          return *(_DWORD *)(v3 + 32);
        }
      }
LABEL_5:
      v3 = *(_DWORD *)v3;
    }
    while ( v3 );
  }
  if ( v2 > 3 )
    puts("NOT FOUND");
  return 0;
}
