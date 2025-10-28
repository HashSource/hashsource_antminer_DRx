bool __fastcall sub_30928(const struct sockaddr *a1, const char **a2, _BYTE *a3)
{
  char *v6; // r0
  int v7; // r7
  int v8; // r2
  char *v9; // r1
  int v10; // r3
  int v11; // r4
  int v12; // r0
  int v13; // t1
  int v14; // t1
  _BOOL4 result; // r0
  int v16; // r5
  char v17; // [sp+Fh] [bp-35h] BYREF
  _BOOL4 buf; // [sp+10h] [bp-34h] BYREF
  int v19; // [sp+14h] [bp-30h]
  int v20; // [sp+18h] [bp-2Ch]
  int v21; // [sp+1Ch] [bp-28h] BYREF
  char s[36]; // [sp+20h] [bp-24h] BYREF

  v6 = (char *)malloc(0x2Eu);
  *a2 = v6;
  getnameinfo(a1, 0x80u, v6, 0x2Eu, 0, 0, 1u);
  if ( a1->sa_family == 2 )
  {
    sprintf(s, "::ffff:%s", *a2);
    inet_pton(10, s, &buf);
  }
  else
  {
    inet_pton(10, *a2, &buf);
  }
  *a3 = (*_ctype_toupper_loc())[82];
  if ( dword_62F4C )
  {
    if ( dword_62F68 > 0 )
    {
      v7 = 0;
      v8 = dword_62F6C - 1;
      do
      {
        v9 = &v17;
        v10 = v8;
        while ( 1 )
        {
          v11 = *(unsigned __int8 *)(v10 + 17);
          v13 = (unsigned __int8)*++v9;
          v12 = v13;
          v14 = *(unsigned __int8 *)++v10;
          if ( v14 != (v11 & v12) )
            break;
          if ( v9 == (char *)&v21 + 3 )
          {
            result = 1;
            *a3 = *(_BYTE *)(v8 + 33);
            return result;
          }
        }
        ++v7;
        v8 += 36;
      }
      while ( v7 != dword_62F68 );
    }
    return 0;
  }
  else
  {
    v16 = (unsigned __int8)byte_63D64;
    if ( byte_63D64 || !strcmp(*a2, "127.0.0.1") )
    {
      return 1;
    }
    else
    {
      result = buf;
      if ( buf )
      {
        return v16;
      }
      else if ( !v19 )
      {
        if ( v20 )
          return v19;
        else
          return v21 == 0x1000000;
      }
    }
  }
  return result;
}
