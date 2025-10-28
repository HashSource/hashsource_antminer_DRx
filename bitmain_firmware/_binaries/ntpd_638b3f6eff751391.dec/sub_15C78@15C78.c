int __fastcall sub_15C78(const struct sockaddr *a1)
{
  int i; // r4
  const char *v4; // r0
  int v5; // r3
  int sa_family; // r3
  int v7; // r9
  int v8; // r3
  int v9; // r0
  int v10; // r9
  int v11; // r0
  int v12; // r10
  _BOOL4 v13; // r3
  int *v14; // r3
  int v15; // r3
  const char *v16; // r0
  int v17; // r10

  if ( dword_7CF4C > 3 )
  {
    v4 = (const char *)sub_50CD0(a1);
    printf("Finding broadcast/multicast interface for addr %s in list of addresses\n", v4);
  }
  i = sub_13E90(a1, 132, 1);
  if ( i )
  {
    if ( dword_7CF4C > 3 )
      printf("Easily found bcast-/mcast- interface index #%d %s\n", *(_DWORD *)(i + 16), (const char *)(i + 104));
    return i;
  }
  for ( i = dword_CA654; i; i = *(_DWORD *)i )
  {
    v5 = *(_DWORD *)(i + 140);
    if ( (v5 & 0x80) != 0 || *(_DWORD *)(i + 176) || *(unsigned __int16 *)(i + 20) != a1->sa_family || (v5 & 4) != 0 )
      continue;
    if ( sub_12884((int)a1) && (*(_DWORD *)(i + 140) & 0x10) != 0 )
    {
      if ( a1->sa_family != 10
        || (unsigned __int8)a1->sa_data[6] != 255
        || (a1->sa_data[7] & 0xF) != 2
        || (*(_DWORD *)(i + 28) & 0xC0FF) == 0x80FE )
      {
        goto LABEL_20;
      }
    }
    else
    {
      sa_family = a1->sa_family;
      if ( sa_family == 2 )
      {
        v15 = *(_DWORD *)&a1->sa_data[2];
        if ( *(_WORD *)(i + 76) == 2 && *(_DWORD *)(i + 80) == v15
          || ((v15 ^ *(_DWORD *)(i + 24)) & *(_DWORD *)(i + 52)) == 0 )
        {
LABEL_20:
          if ( dword_7CF4C > 3 )
            printf("Found bcast-/mcast- interface index #%d %s\n", *(_DWORD *)(i + 16), (const char *)(i + 104));
          return i;
        }
      }
      else if ( sa_family == 10 )
      {
        if ( *(_WORD *)(i + 76) == 10
          && !memcmp((const void *)(i + 84), &a1->sa_data[6], 0x10u)
          && *(_DWORD *)(i + 100) == *(_DWORD *)&a1[1].sa_data[6] )
        {
          goto LABEL_20;
        }
        v7 = *(unsigned __int16 *)sub_4FECC(i + 20);
        if ( *(unsigned __int16 *)sub_4FECC(a1) == v7 )
        {
          v8 = *(unsigned __int16 *)sub_4FECC(i + 20);
          v9 = i + 20;
          if ( v8 == 2 )
          {
            v17 = *(_DWORD *)(sub_4FECC(v9) + 4);
            v13 = v17 == *(_DWORD *)(sub_4FECC(a1) + 4);
          }
          else
          {
            v10 = sub_4FECC(v9);
            v11 = sub_4FECC(a1);
            if ( memcmp((const void *)(v10 + 8), (const void *)(v11 + 8), 0x10u) )
              continue;
            v12 = *(_DWORD *)(sub_4FECC(i + 20) + 24);
            v13 = v12 == *(_DWORD *)(sub_4FECC(a1) + 24);
          }
          if ( v13 )
            goto LABEL_20;
        }
      }
    }
  }
  if ( dword_7CF4C > 3 )
  {
    v16 = (const char *)sub_50CD0(a1);
    printf("No bcast interface found for %s\n", v16);
  }
  if ( a1->sa_family == 2 )
    v14 = &dword_CA608;
  else
    v14 = &dword_CA644;
  return *v14;
}
