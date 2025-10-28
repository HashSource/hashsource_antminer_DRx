int __fastcall sub_34850(sem_t *a1, int a2, const char *a3, const char *a4, int a5)
{
  int v8; // r3
  char s[2048]; // [sp+10h] [bp-81Ch] BYREF
  struct timeval v11; // [sp+810h] [bp-1Ch] BYREF
  _DWORD v12[2]; // [sp+818h] [bp-14h] BYREF
  struct timespec abstime; // [sp+820h] [bp-Ch] BYREF

  sub_2FE30(&v11);
  sub_2FB1C(v12, &v11);
  sub_2FBC0(&abstime);
  while ( 1 )
  {
    sub_2FC50(&abstime.tv_sec, v12);
    if ( !sem_timedwait(a1, &abstime) )
      return 0;
    v8 = *_errno_location();
    if ( v8 == 110 )
      break;
    if ( v8 != 4 )
    {
      snprintf(s, 0x800u, "Failed to sem_timedwait errno=%d cgsem=0x%p in %s %s():%d", v8, a1, a3, a4, a5);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
  }
  return 110;
}
