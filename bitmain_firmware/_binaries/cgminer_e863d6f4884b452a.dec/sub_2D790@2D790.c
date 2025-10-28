int __fastcall sub_2D790(sem_t *a1, const char *a2, const char *a3, int a4)
{
  int result; // r0
  int v8; // r4
  int *v9; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = sem_init(a1, 0, 0);
  if ( result )
  {
    v8 = result;
    v9 = _errno_location();
    snprintf(s, 0x800u, "Failed to sem_init ret=%d errno=%d in %s %s():%d", v8, *v9, a2, a3, a4);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  return result;
}
