int __fastcall sub_14720(const char *a1, char *s)
{
  char *v4; // r0
  int v5; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r5
  int v12; // r3
  char *v13; // r0
  int buf; // [sp+4h] [bp-94h] BYREF
  _DWORD v15[4]; // [sp+8h] [bp-90h] BYREF
  char dest[128]; // [sp+18h] [bp-80h] BYREF

  if ( !a1 )
    off_7C9FC("ntp_io.c", 796, 0, "host != ((void *)0)");
  if ( !s )
    off_7C9FC("ntp_io.c", 797, 0, "addr != ((void *)0)");
  memset(s, 0, 0x1Cu);
  if ( inet_pton(2, a1, &buf) == 1 )
  {
    v12 = buf;
    v5 = 1;
    *(_WORD *)s = 2;
    *((_DWORD *)s + 1) = v12;
  }
  else
  {
    if ( strlen(a1) > 0x7F )
      return 0;
    if ( *a1 == 91 )
    {
      strncpy(dest, a1 + 1, 0x80u);
      v13 = strchr(dest, 93);
      if ( v13 )
        *v13 = 0;
    }
    else
    {
      strncpy(dest, a1, 0x80u);
    }
    v4 = strchr(dest, 37);
    if ( v4 )
      *v4 = 0;
    v5 = inet_pton(10, dest, v15);
    if ( v5 == 1 )
    {
      v7 = v15[0];
      v8 = v15[1];
      v9 = v15[2];
      v10 = v15[3];
      *(_WORD *)s = 10;
      v11 = s + 8;
      *v11 = v7;
      v11[1] = v8;
      v11[2] = v9;
      v11[3] = v10;
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
