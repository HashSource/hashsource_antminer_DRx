int __fastcall sub_30AC8(int a1, int a2, int a3)
{
  char *v4; // r7
  int result; // r0
  const char *v6; // r3
  signed int v7; // r4
  int v8; // r5
  int v9; // r10
  _BOOL4 v10; // r3
  fd_set *p_tv_usec; // r3
  int v12; // r12
  char *v13; // r0
  int v14; // [sp+8h] [bp-894h]
  int v15; // [sp+8h] [bp-894h]
  signed int v17; // [sp+Ch] [bp-890h]
  struct timeval timeout; // [sp+10h] [bp-88Ch] BYREF
  fd_set writefds; // [sp+18h] [bp-884h] BYREF
  char s[2040]; // [sp+98h] [bp-804h] BYREF

  v4 = *(char **)(a1 + 4);
  if ( *(_BYTE *)(a1 + 13) )
  {
    *(_WORD *)&v4[strlen(*(const char **)(a1 + 4))] = 93;
    if ( !a3 )
      goto LABEL_3;
  }
  else if ( !a3 )
  {
    goto LABEL_3;
  }
  strcat(v4, ",\"id\":1}");
LABEL_3:
  result = strlen(v4);
  v17 = result + 1;
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    if ( result > 10 )
      v6 = "...";
    else
      v6 = "";
    snprintf(s, 0x800u, "API: send reply: (%d) '%.10s%s'", v17, v4, v6);
    result = sub_38438(7, s, 0);
  }
  v7 = v17;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = v7 > 0;
    if ( v9 > 4 )
      v10 = 0;
    if ( !v10 )
      return result;
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    timeout.tv_sec = 0;
    timeout.tv_usec = 50000;
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
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        snprintf(s, 0x800u, "API: send select failed (%d)", result);
        return sub_38438(4, s, 0);
      }
      return result;
    }
    result = send(a2, v4, v7, 0);
    ++v8;
    v12 = result;
    if ( result < 0 )
    {
      result = *_errno_location();
      if ( result != 11 )
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
        {
          v13 = strerror(result);
          snprintf(s, 0x800u, "API: send (%d:%d) failed: %s", v17, v17 - v7, v13);
          return sub_38438(4, s, 0);
        }
        return result;
      }
LABEL_25:
      ++v9;
    }
    else if ( v8 == 1 )
    {
      if ( result != v7 )
      {
        if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
          goto LABEL_24;
        v14 = result;
        snprintf(s, 0x800u, "API: sent %d of %d first go", result, v7);
        goto LABEL_23;
      }
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        v15 = result;
        snprintf(s, 0x800u, "API: sent all of %d first go", result);
        goto LABEL_41;
      }
LABEL_42:
      v7 -= v12;
      v4 += v12;
    }
    else
    {
      if ( result == v7 )
      {
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          v15 = result;
          snprintf(s, 0x800u, "API: sent all of remaining %d (sendc=%d)", result, v8);
LABEL_41:
          result = sub_38438(7, s, 0);
          v12 = v15;
          goto LABEL_42;
        }
        goto LABEL_42;
      }
      if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
        goto LABEL_24;
      v14 = result;
      snprintf(s, 0x800u, "API: sent %d of remaining %d (sendc=%d)", result, v7, v8);
LABEL_23:
      result = sub_38438(7, s, 0);
      v12 = v14;
LABEL_24:
      v7 -= v12;
      v4 += v12;
      if ( !v12 )
        goto LABEL_25;
    }
  }
}
