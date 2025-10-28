int __fastcall sub_4F818(const struct timeval *a1, const struct timezone *a2)
{
  __int64 v4; // r4
  int v5; // r8
  bool v6; // zf
  char *v8; // r0
  int *v9; // r8
  int v10; // r0
  int *v11; // r8
  int v12; // r0
  int v13; // r3
  int *v14; // r8
  int v15; // r0
  bool v16; // zf
  char *v17; // r0
  char *v18; // r0
  char *v19; // r0
  time_t tv_sec; // [sp+4h] [bp-18h] BYREF
  struct timespec tp; // [sp+8h] [bp-14h] BYREF
  struct timeval v22; // [sp+10h] [bp-Ch] BYREF

  if ( dword_7CF4C )
    puts("In ntp_set_tod");
  HIDWORD(v4) = dword_C9AF8;
  if ( (unsigned int)dword_C9AF8 <= 1 )
  {
    v13 = 1000 * a1->tv_usec;
    tp.tv_sec = a1->tv_sec;
    tp.tv_nsec = v13;
    v14 = _errno_location();
    *v14 = 0;
    v15 = clock_settime(0, &tp);
    v5 = *v14;
    LODWORD(v4) = v15;
    if ( dword_7CF4C )
    {
      v19 = strerror(v5);
      printf("ntp_set_tod: clock_settime: %d: %s\n", (_DWORD)v4, v19);
      HIDWORD(v4) = dword_C9AF8;
    }
    if ( !v4 )
    {
      LODWORD(v4) = 0;
      dword_C9AF8 = 1;
      goto LABEL_10;
    }
    if ( !(_DWORD)v4 )
      goto LABEL_10;
    HIDWORD(v4) = dword_C9AF8;
  }
  else
  {
    v5 = 0;
    LODWORD(v4) = -1;
  }
  if ( (v4 & 0xFFFFFFFD00000000LL) != 0 )
  {
    v6 = HIDWORD(v4) == 3;
    if ( HIDWORD(v4) != 3 )
      v6 = HIDWORD(v4) == 0;
    if ( !v6 )
      goto LABEL_10;
LABEL_17:
    tv_sec = a1->tv_sec;
    v9 = _errno_location();
    *v9 = 0;
    v10 = stime(&tv_sec);
    v5 = *v9;
    LODWORD(v4) = v10;
    if ( dword_7CF4C )
    {
      v17 = strerror(v5);
      printf("ntp_set_tod: stime: %d: %s\n", (_DWORD)v4, v17);
      HIDWORD(v4) = dword_C9AF8;
    }
    if ( !v4 )
      dword_C9AF8 = 3;
    goto LABEL_10;
  }
  v22.tv_usec = 0;
  v22.tv_sec = 0;
  adjtime(&v22, 0);
  v11 = _errno_location();
  *v11 = HIDWORD(v4) & 0xFFFFFFFD;
  v12 = settimeofday(a1, a2);
  v5 = *v11;
  LODWORD(v4) = v12;
  if ( dword_7CF4C )
  {
    v18 = strerror(v5);
    printf("ntp_set_tod: settimeofday: %d: %s\n", (_DWORD)v4, v18);
    HIDWORD(v4) = dword_C9AF8;
  }
  if ( !v4 )
  {
    LODWORD(v4) = 0;
    dword_C9AF8 = 2;
    goto LABEL_10;
  }
  if ( (_DWORD)v4 )
  {
    HIDWORD(v4) = dword_C9AF8;
    v16 = dword_C9AF8 == 3;
    if ( dword_C9AF8 != 3 )
      v16 = dword_C9AF8 == 0;
    if ( v16 )
      goto LABEL_17;
  }
LABEL_10:
  if ( dword_7CF4C )
  {
    HIDWORD(v4) = off_6DAB0[dword_C9AF8];
    v8 = strerror(v5);
    printf("ntp_set_tod: Final result: %s: %d: %s\n", (const char *)HIDWORD(v4), (_DWORD)v4, v8);
  }
  if ( (_DWORD)v4 )
  {
    *_errno_location() = v5;
  }
  else if ( off_C9AFC )
  {
    off_C9AFC(off_6DAB0[dword_C9AF8]);
    off_C9AFC = 0;
  }
  return v4;
}
