int __fastcall sub_131C8(char *s2)
{
  int v2; // r7
  int v3; // r4
  int v4; // r5
  _BOOL4 v5; // r3
  int result; // r0
  const char *v7; // r0

  v2 = dword_7CF4C;
  if ( dword_7CF4C > 3 )
  {
    v7 = (const char *)sub_50CD0(s2);
    printf("Finding addr %s with flags %d in list: ", v7, 64);
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
          v5 = *(_DWORD *)(v3 + 28) == *((_DWORD *)s2 + 6);
        }
        if ( v5 )
        {
          result = *(_DWORD *)(v3 + 32);
          if ( (*(_DWORD *)(result + 140) & 0x40) != 0 )
          {
            if ( v2 > 3 )
            {
              puts("FOUND");
              return *(_DWORD *)(v3 + 32);
            }
            return result;
          }
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
