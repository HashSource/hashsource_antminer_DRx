int __fastcall sub_36F4C(int a1, int a2, int a3)
{
  char *v5; // r10
  int result; // r0
  const char *v7; // r3
  signed int v8; // r5
  int v9; // r7
  int v10; // r11
  fd_set *p_tv_usec; // r3
  int v12; // r6
  char *v13; // r0
  _BOOL4 v14; // r3
  signed int v15; // [sp+14h] [bp-890h]
  struct timeval timeout; // [sp+18h] [bp-88Ch] BYREF
  fd_set writefds; // [sp+20h] [bp-884h] BYREF
  char s[2048]; // [sp+A0h] [bp-804h] BYREF

  v5 = *(char **)(a1 + 4);
  if ( *(_BYTE *)(a1 + 13) )
    *(_WORD *)&v5[strlen(*(const char **)(a1 + 4))] = 93;
  if ( a3 )
    strcat(v5, ",\"id\":1}");
  result = strlen(v5);
  v15 = result + 1;
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    if ( result <= 10 )
      v7 = &byte_6DF60;
    else
      v7 = "...";
    snprintf(s, 0x800u, "API: send reply: (%d) '%.10s%s'", v15, v5, v7);
    result = sub_3F178(7, s, 0);
  }
  v8 = v15;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v14 = v8 > 0;
    if ( v10 > 4 )
      v14 = 0;
    if ( !v14 )
      break;
    timeout.tv_sec = 0;
    timeout.tv_usec = 50000;
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( p_tv_usec != (fd_set *)&writefds.__fds_bits[31] );
    writefds.__fds_bits[a2 / 32] |= 1 << (a2 % 32);
    result = select(a2 + 1, 0, &writefds, 0, &timeout);
    if ( result <= 0 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
      {
        snprintf(s, 0x800u, "API: send select failed (%d)", result);
        return sub_3F178(4, s, 0);
      }
      return result;
    }
    result = send(a2, v5, v8, 0);
    ++v9;
    v12 = result;
    if ( result >= 0 )
    {
      if ( v9 > 1 )
      {
        if ( result == v8 )
        {
          if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            snprintf(s, 0x800u, "API: sent all of remaining %d (sendc=%d)", result, v9);
            result = sub_3F178(7, s, 0);
          }
        }
        else if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          snprintf(s, 0x800u, "API: sent %d of remaining %d (sendc=%d)", result, v8, v9);
          result = sub_3F178(7, s, 0);
        }
      }
      else if ( result == v8 )
      {
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          snprintf(s, 0x800u, "API: sent all of %d first go", result);
          result = sub_3F178(7, s, 0);
        }
      }
      else if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "API: sent %d of %d first go", result, v8);
        result = sub_3F178(7, s, 0);
      }
      v8 -= v12;
      v5 += v12;
      if ( !v12 )
        ++v10;
    }
    else
    {
      result = *_errno_location();
      if ( result != 11 )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
        {
          v13 = strerror(result);
          snprintf(s, 0x800u, "API: send (%d:%d) failed: %s", v15, v15 - v8, v13);
          return sub_3F178(4, s, 0);
        }
        return result;
      }
      ++v10;
    }
  }
  return result;
}
