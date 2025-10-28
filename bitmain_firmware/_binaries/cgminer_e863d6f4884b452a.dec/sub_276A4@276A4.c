int __fastcall sub_276A4(int a1, char *s, int a3)
{
  int v3; // r4
  int v4; // r11
  int v5; // r8
  int v6; // r8
  int v7; // r11
  fd_set *p_tv_usec; // r3
  ssize_t v10; // r0
  __int64 v11; // r2
  int v12; // r1
  bool v13; // cf
  int v14; // lr
  unsigned int v15; // r1
  int v16; // r5
  unsigned int v17; // r6
  int n; // [sp+Ch] [bp-820h]
  int v19; // [sp+10h] [bp-81Ch]
  struct timeval timeout; // [sp+20h] [bp-80Ch] BYREF
  fd_set writefds; // [sp+28h] [bp-804h] BYREF

  n = a3 + 1;
  v3 = *(_DWORD *)(a1 + 588);
  *(_WORD *)&s[strlen(s)] = 10;
  if ( byte_72E38 && (byte_73320 || byte_6FA70 || dword_6D35C > 4) )
  {
    snprintf((char *)&writefds, 0x800u, "SEND: %s", s);
    sub_343C4(5, &writefds, 0);
  }
  if ( n <= 0 )
  {
    v11 = 0;
LABEL_21:
    v12 = *(_DWORD *)(a1 + 504);
    v13 = __CFADD__(v12, (_DWORD)v11);
    v14 = v12 + v11;
    v15 = *(_DWORD *)(a1 + 512);
    v16 = *(_DWORD *)(a1 + 508) + v13 + HIDWORD(v11);
    v17 = *(_DWORD *)(a1 + 516);
    ++*(_QWORD *)(a1 + 496);
    *(_DWORD *)(a1 + 504) = v14;
    *(_DWORD *)(a1 + 508) = v16;
    *(_QWORD *)(a1 + 512) = __PAIR64__(v17, v15) + v11;
    return 0;
  }
  else
  {
    LOBYTE(v4) = v3 & 0x1F;
    v5 = (v3 + 31) & (v3 >> 31);
    if ( v3 >= 0 )
      v5 = v3;
    if ( v3 <= 0 )
      v4 = -(-v3 & 0x1F);
    v6 = v5 >> 5;
    v7 = 1 << v4;
    v19 = 0;
    do
    {
      while ( 1 )
      {
        timeout.tv_sec = 1;
        timeout.tv_usec = 0;
        while ( 1 )
        {
          p_tv_usec = (fd_set *)&timeout.tv_usec;
          do
          {
            p_tv_usec->__fds_bits[1] = 0;
            p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
          }
          while ( p_tv_usec != (fd_set *)&writefds.__fds_bits[31] );
          writefds.__fds_bits[v6] |= v7;
          if ( select(v3 + 1, 0, &writefds, 0, &timeout) > 0 )
            break;
          if ( *_errno_location() != 4 )
            return 1;
        }
        v10 = send(*(_DWORD *)(a1 + 588), &s[v19], n, 0x4000);
        if ( v10 < 0 )
          break;
        v19 += v10;
        n -= v10;
        if ( n <= 0 )
        {
          v11 = v19;
          goto LABEL_21;
        }
      }
    }
    while ( *_errno_location() == 11 );
    return 2;
  }
}
