int __fastcall sub_348D0(sem_t *a1, int a2, const char *a3, const char *a4, int a5)
{
  int v8; // r3
  char s[2048]; // [sp+10h] [bp-81Ch] BYREF
  struct timeval v11; // [sp+810h] [bp-1Ch] BYREF
  _DWORD v12[2]; // [sp+818h] [bp-14h] BYREF
  struct timespec abstime; // [sp+820h] [bp-Ch] BYREF

  sub_30050(&v11);
  sub_2FD3C(v12, &v11);
  sub_2FDE0(&abstime);
  while ( 1 )
  {
    sub_2FE70(&abstime.tv_sec, v12);
    if ( !sem_timedwait(a1, &abstime) )
      return 0;
    v8 = *_errno_location();
    if ( v8 == 110 )
      break;
    if ( v8 != 4 )
    {
      snprintf(s, 0x800u, "Failed to sem_timedwait errno=%d cgsem=0x%p in %s %s():%d", v8, a1, a3, a4, a5);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
  }
  return 110;
}
