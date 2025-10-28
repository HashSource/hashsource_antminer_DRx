void sub_14D20()
{
  int i; // r4
  int v1; // r3
  int v2; // r1
  const char *v3; // r0
  int optval; // [sp+Ch] [bp-8h] BYREF

  for ( i = dword_CA654; i; dword_CA628 = 0 )
  {
    while ( 1 )
    {
      v1 = *(_DWORD *)(i + 140);
      if ( (v1 & 0x80) == 0 && (v1 & 0x20) != 0 )
        break;
      i = *(_DWORD *)i;
      if ( !i )
        return;
    }
    v2 = *(unsigned __int16 *)(i + 20);
    optval = *(_DWORD *)(i + 140) & 0x80;
    if ( v2 == 2 )
    {
      if ( setsockopt(*(_DWORD *)(i + 8), 1, 6, &optval, 4u) )
      {
        v3 = (const char *)sub_50CD0(i + 20);
        sub_4FE78(3, "setsockopt(SO_BROADCAST) disable failure on address %s: %m", v3);
      }
      v1 = *(_DWORD *)(i + 140);
    }
    *(_DWORD *)(i + 140) = v1 & 0xFFFFFFDF;
    i = *(_DWORD *)i;
  }
}
