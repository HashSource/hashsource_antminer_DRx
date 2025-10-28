int __fastcall sub_A138(
        unsigned int a1,
        const char *a2,
        int a3,
        const char *a4,
        const char *a5,
        const char *a6,
        char *s)
{
  int v7; // r8
  unsigned int v8; // r7
  char *v10; // r1
  int v11; // r3
  int v12; // t1
  char *v13; // r5
  char *v14; // r2
  int v15; // r3
  int v16; // t1
  unsigned int v17; // r3
  bool v18; // zf
  bool v19; // cc
  char v20; // r10
  int v21; // r10
  int v22; // r9
  const char *v23; // r0
  struct iovec *v24; // r5
  size_t v25; // r0
  int v26; // r3
  int v27; // r9
  int v28; // r0
  int *v29; // r0
  signed int v31; // r0
  __int64 v32; // r0
  struct tm *v33; // r3
  __pid_t v34; // r0
  size_t v35; // r0
  size_t v36; // r0
  size_t v37; // r0
  size_t v38; // r0
  ssize_t v39; // r0
  size_t iov_len; // r1
  struct iovec *v41; // r3
  size_t v42; // r2
  size_t v43; // r0
  char *iov_base; // r12
  size_t v45; // r1
  __pid_t v46; // r0
  size_t v47; // r0
  size_t v48; // r0
  size_t v49; // r0
  int *v50; // r0
  size_t v51; // r0
  struct iovec *v52; // r3
  int *v53; // r0
  time_t v57; // [sp+4Ch] [bp-B0h] BYREF
  struct msghdr message; // [sp+50h] [bp-ACh] BYREF
  struct iovec v59[5]; // [sp+6Ch] [bp-90h] BYREF
  char v60[16]; // [sp+94h] [bp-68h] BYREF
  char v61[15]; // [sp+A4h] [bp-58h] BYREF
  char v62; // [sp+B3h] [bp-49h]
  char v63[64]; // [sp+B4h] [bp-48h] BYREF

  v8 = a1;
  if ( dword_16038 == 8 )
    v7 = 0;
  if ( dword_16038 != 8 )
  {
    if ( (a1 & 0x3F8) == 0 )
      v8 = a1 & 7 | dword_1600C;
    v7 = 0;
    do
    {
      do
      {
        do
        {
          v10 = s;
          v12 = (unsigned __int8)*s++;
          v11 = v12;
        }
        while ( v12 == 10 );
      }
      while ( v11 == 13 );
      v13 = v10;
      if ( !v11 )
        return v7;
      if ( v11 == 10 )
      {
LABEL_37:
        *v10 = 0;
        s = v10 + 1;
      }
      else
      {
        v14 = s;
        while ( 1 )
        {
          v10 = v14;
          v16 = (unsigned __int8)*v14++;
          v15 = v16;
          if ( !v16 )
            break;
          if ( v15 == 10 || v15 == 13 )
            goto LABEL_37;
        }
        s = 0;
      }
      v17 = dword_16038;
      v18 = dword_16038 == 6;
      if ( dword_16038 != 6 )
        v18 = dword_16038 == 3;
      if ( v18 || dword_16038 == 2 )
      {
        v31 = sub_9EF0(v8, a2, a3, a4, a5, a6, v13);
        if ( v31 < 0 )
        {
          if ( v31 != -11 )
            sub_A10C();
          sub_9BD4();
          v17 = dword_16038;
        }
        else
        {
          if ( v31 )
          {
            ++v7;
            if ( (unsigned int)(dword_16038 - 4) > 1 )
              continue;
LABEL_43:
            memset(v59, 0, sizeof(v59));
            memset(&message, 0, sizeof(message));
            message.msg_iov = v59;
            message.msg_iovlen = 5;
            if ( dword_16004 >= 0 )
            {
              _snprintf_chk(v60, 16, 1, 16, "<%i>", v8);
              v60[15] = 0;
              v32 = sub_9AE0(0);
              v57 = sub_AFAC(v32, HIDWORD(v32), 1000000, 0);
              v33 = localtime(&v57);
              if ( v33 && strftime(v63, 0x40u, "%h %e %T ", v33) )
              {
                v34 = getpid();
                _snprintf_chk(v61, 16, 1, 16, "[%lu]: ", v34);
                v62 = 0;
                v59[0].iov_base = v60;
                v35 = strlen(v60);
                v59[1].iov_base = v63;
                v59[0].iov_len = v35;
                v59[1].iov_len = strlen(v63);
                v59[2].iov_base = (void *)program_invocation_short_name;
                v36 = strlen(program_invocation_short_name);
                v59[3].iov_base = v61;
                v59[2].iov_len = v36;
                v37 = strlen(v61);
                v59[4].iov_base = v13;
                v59[3].iov_len = v37;
                v38 = strlen(v13);
                v59[4].iov_len = v38;
                if ( byte_16034 )
                  v59[4].iov_len = v38 + 1;
                while ( 1 )
                {
                  v39 = sendmsg(dword_16004, &message, 0x4000);
                  if ( v39 < 0 )
                    break;
                  if ( !byte_16034
                    || v39 >= v59[0].iov_len + v59[1].iov_len + v59[2].iov_len + v59[3].iov_len + v59[4].iov_len )
                  {
                    goto LABEL_67;
                  }
                  if ( v39 )
                  {
                    if ( v39 >= v59[0].iov_len )
                      iov_len = v59[0].iov_len;
                    else
                      iov_len = v39;
                    v59[0].iov_len -= iov_len;
                    v41 = v59;
                    v42 = v39 - iov_len;
                    v59[0].iov_base = (char *)v59[0].iov_base + iov_len;
                    do
                    {
                      if ( !v42 )
                        break;
                      v43 = v41[1].iov_len;
                      iov_base = (char *)v41[1].iov_base;
                      v45 = v43 >= v42 ? v42 : v41[1].iov_len;
                      v41[1].iov_len = v43 - v45;
                      v42 -= v45;
                      v41[1].iov_base = &iov_base[v45];
                      ++v41;
                    }
                    while ( v41 != &v59[4] );
                  }
                }
                v50 = _errno_location();
                if ( *v50 > 0 )
                {
                  if ( -*v50 == -11 )
                    goto LABEL_70;
                  goto LABEL_80;
                }
                if ( *v50 )
                {
LABEL_67:
                  ++v7;
                  continue;
                }
              }
              else
              {
LABEL_80:
                sub_A0E0();
LABEL_70:
                sub_9BD4();
              }
            }
            v17 = dword_16038;
            goto LABEL_21;
          }
          v17 = dword_16038;
        }
      }
      if ( v17 - 4 <= 1 )
        goto LABEL_43;
LABEL_21:
      v19 = v17 > 3;
      if ( v17 != 3 )
        v19 = v17 - 5 > 2;
      if ( !v19 || v17 == 1 )
      {
        memset(v59, 0, sizeof(v59));
        if ( dword_16008 >= 0 )
        {
          _snprintf_chk(v61, 16, 1, 16, "<%i>", v8);
          v62 = 0;
          v46 = getpid();
          _snprintf_chk(v63, 16, 1, 16, "[%lu]: ", v46);
          v59[0].iov_base = v61;
          v63[15] = 0;
          v59[0].iov_len = strlen(v61);
          v59[1].iov_base = (void *)program_invocation_short_name;
          v47 = strlen(program_invocation_short_name);
          v59[2].iov_base = v63;
          v59[1].iov_len = v47;
          v48 = strlen(v63);
          v59[3].iov_base = v13;
          v59[2].iov_len = v48;
          v49 = strlen(v13);
          v59[4].iov_base = "\n";
          v59[4].iov_len = 1;
          v59[3].iov_len = v49;
          if ( writev(dword_16008, v59, 5) >= 0 )
            goto LABEL_67;
          v53 = _errno_location();
          if ( *v53 <= 0 )
          {
            if ( *v53 )
              goto LABEL_67;
          }
          else
          {
            sub_A0B4();
            sub_9C2C();
          }
        }
      }
      v20 = 0;
      memset(v59, 0, sizeof(v59));
      if ( dword_16014 >= 0 )
      {
        if ( (v8 & 7) <= 3 )
          v20 = byte_16840;
        v21 = v20 & 1;
        v22 = (unsigned __int8)byte_16035;
        if ( byte_16035 )
        {
          _snprintf_chk(v63, 64, 1, 64, "(%s:%u) ", a2, a3);
          v59[0].iov_base = v63;
          v63[63] = 0;
          v22 = 1;
          v59[0].iov_len = strlen(v63);
        }
        if ( v21 )
        {
          v23 = v13;
          v59[v22].iov_base = "\x1B[1;31m";
          v59[v22].iov_len = 7;
          v59[v22 + 1].iov_base = v13;
          v24 = &v59[v22 + 1];
          v25 = strlen(v23);
          v26 = v22 + 2;
          v27 = v22 + 3;
          v24->iov_len = v25;
          v59[v26].iov_base = "\x1B[0m";
          v59[v26].iov_len = 4;
        }
        else
        {
          v59[v22].iov_base = v13;
          v51 = strlen(v13);
          v52 = &v59[v22];
          v27 = v22 + 1;
          v52->iov_len = v51;
        }
        v59[v27].iov_base = "\n";
        v28 = dword_16014;
        v59[v27].iov_len = 1;
        if ( writev(v28, v59, v27 + 1) < 0 )
        {
          v29 = _errno_location();
          if ( *v29 > 0 )
            return -*v29;
        }
      }
    }
    while ( s );
  }
  return v7;
}
