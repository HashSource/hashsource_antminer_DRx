const char *__fastcall sub_2F184(const char *a1, int a2, int a3, int a4)
{
  const char *v7; // r9
  size_t v8; // r0
  size_t v9; // r2
  const char *v10; // r3
  int v11; // r3
  int v12; // r5
  signed int v13; // r4
  int v14; // r8
  int v15; // r5
  const char *result; // r0
  int v17; // r10
  _BOOL4 v18; // r3
  fd_set *p_tv_usec; // r3
  const char *v20; // r7
  char *v21; // r0
  int v22; // [sp+Ch] [bp-8A0h]
  signed int v23; // [sp+10h] [bp-89Ch]
  struct timeval timeout; // [sp+20h] [bp-88Ch] BYREF
  fd_set writefds; // [sp+28h] [bp-884h] BYREF
  char s[2052]; // [sp+A8h] [bp-804h] BYREF

  v7 = a1;
  v8 = strlen(a1);
  v9 = v8;
  if ( a2 )
  {
    v9 = v8 + 1;
    *(_WORD *)&v7[v8] = 93;
  }
  if ( a4 )
  {
    strcpy((char *)&v7[v9], ",\"id\":1}");
    v9 = strlen(v7);
  }
  v23 = v9 + 1;
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    v10 = &byte_57FF0;
    if ( v9 > 0xA )
      v10 = (const char *)&dword_58874;
    snprintf(s, 0x800u, "API: send reply: (%d) '%.10s%s'", v23, v7, v10);
    sub_343C4(7, s, 0);
  }
  LOBYTE(v11) = a3 & 0x1F;
  v12 = (a3 + 31) & (a3 >> 31);
  if ( a3 >= 0 )
    v12 = a3;
  if ( a3 <= 0 )
    v11 = -(-a3 & 0x1F);
  v13 = v23;
  v14 = 0;
  v15 = v12 >> 5;
  result = "API: sent %d of remaining %d (sendc=%d)";
  v22 = 1 << v11;
  v17 = 0;
  while ( 1 )
  {
    v18 = v17 <= 4;
    if ( v13 <= 0 )
      v18 = 0;
    if ( !v18 )
      return result;
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    timeout.tv_sec = 0;
    timeout.tv_usec = 50000;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( &writefds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
    writefds.__fds_bits[v15] |= v22;
    result = (const char *)select(a3 + 1, 0, &writefds, 0, &timeout);
    if ( (int)result <= 0 )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
      {
        snprintf(s, 0x800u, "API: send select failed (%d)", result);
        return (const char *)sub_343C4(4, s, 0);
      }
      return result;
    }
    result = (const char *)send(a3, v7, v13, 0);
    v20 = result;
    ++v14;
    if ( (int)result < 0 )
    {
      result = (const char *)*_errno_location();
      if ( result != (const char *)11 )
      {
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
        {
          v21 = strerror((int)result);
          snprintf(s, 0x800u, "API: send (%d:%d) failed: %s", v23, v23 - v13, v21);
          return (const char *)sub_343C4(4, s, 0);
        }
        return result;
      }
LABEL_29:
      ++v17;
    }
    else if ( v14 == 1 )
    {
      if ( (const char *)v13 != result )
      {
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf(s, 0x800u, "API: sent %d of %d first go", result, v13);
          result = (const char *)sub_343C4(7, s, 0);
        }
        goto LABEL_28;
      }
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        snprintf(s, 0x800u, "API: sent all of %d first go", v13);
        result = (const char *)sub_343C4(7, s, 0);
      }
LABEL_49:
      v13 -= (int)v20;
      v7 = &v20[(_DWORD)v7];
    }
    else if ( (const char *)v13 == result )
    {
      if ( !byte_6FA71 || !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
        goto LABEL_49;
      snprintf(s, 0x800u, "API: sent all of remaining %d (sendc=%d)", v13, v14);
      v13 -= (int)v20;
      result = (const char *)sub_343C4(7, s, 0);
      v7 = &v20[(_DWORD)v7];
    }
    else
    {
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        snprintf(s, 0x800u, "API: sent %d of remaining %d (sendc=%d)", result, v13, v14);
        result = (const char *)sub_343C4(7, s, 0);
      }
LABEL_28:
      v13 -= (int)v20;
      v7 = &v20[(_DWORD)v7];
      if ( !v20 )
        goto LABEL_29;
    }
  }
}
