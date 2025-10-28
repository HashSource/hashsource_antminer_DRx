int __fastcall sub_C118(const char *a1, _WORD *a2)
{
  int v4; // r4
  struct addrinfo *v6; // r7
  const char *v7; // r0
  struct addrinfo *v8; // [sp+4h] [bp-8h] BYREF

  v4 = sub_BD2C(a1, a2, &v8, 1);
  if ( v4 == 1 )
  {
    v6 = v8;
    memcpy(a2, v8->ai_addr, v8->ai_addrlen);
    if ( dword_7CF4C > 1 )
    {
      v7 = (const char *)sub_50CD0(a2);
      printf("getnetnum given %s, got %s\n", a1, v7);
      v6 = v8;
    }
    freeaddrinfo(v6);
  }
  return v4;
}
