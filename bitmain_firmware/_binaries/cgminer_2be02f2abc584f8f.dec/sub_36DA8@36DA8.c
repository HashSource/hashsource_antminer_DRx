bool __fastcall sub_36DA8(const struct sockaddr *a1, const char **a2, _BYTE *a3)
{
  char *v6; // r0
  int v8; // r1
  unsigned __int8 *v9; // r3
  unsigned __int8 *v10; // r5
  int v11; // r2
  _DWORD buf[4]; // [sp+10h] [bp-30h] BYREF
  char s[32]; // [sp+20h] [bp-20h] BYREF

  v6 = (char *)malloc(0x2Eu);
  *a2 = v6;
  getnameinfo(a1, 0x80u, v6, 0x2Eu, 0, 0, 1u);
  if ( a1->sa_family == 2 )
  {
    sprintf(s, "::ffff:%s", *a2);
    inet_pton(10, s, buf);
  }
  else
  {
    inet_pton(10, *a2, buf);
  }
  *a3 = (*_ctype_toupper_loc())[82];
  if ( dword_75A98 )
  {
    if ( dword_75AB0 > 0 )
    {
      v10 = (unsigned __int8 *)dword_75AB4;
      v11 = 0;
      do
      {
        if ( *v10 == (unsigned __int8)(buf[0] & v10[16]) )
        {
          v9 = v10;
          v8 = 1;
          while ( v9[1] == (unsigned __int8)(v9[17] & *((_BYTE *)buf + v8)) )
          {
            ++v8;
            ++v9;
            if ( v8 == 16 )
            {
              *a3 = *(_BYTE *)(dword_75AB4 + 36 * v11 + 32);
              return 1;
            }
          }
        }
        ++v11;
        v10 += 36;
      }
      while ( v11 != dword_75AB0 );
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( byte_7988C )
  {
    return 1;
  }
  else
  {
    if ( !strcmp(*a2, "127.0.0.1") )
      return 1;
    if ( buf[0] )
      return 0;
    if ( buf[1] )
      return 0;
    if ( buf[2] )
      return 0;
    return buf[3] == 0x1000000;
  }
}
