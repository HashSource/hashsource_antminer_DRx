int __fastcall sub_3478C(sem_t *a1, const char *a2, const char *a3, int a4)
{
  int result; // r0
  int *v9; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = sem_post(a1);
  if ( result )
  {
    v9 = _errno_location();
    snprintf(s, 0x800u, "Failed to sem_post errno=%d cgsem=0x%p in %s %s():%d", *v9, a1, a2, a3, a4);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  return result;
}
