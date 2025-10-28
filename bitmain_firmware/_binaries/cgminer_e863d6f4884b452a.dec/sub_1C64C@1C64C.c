int __fastcall sub_1C64C(int a1, unsigned int a2)
{
  unsigned int v4; // r4
  int v5; // r1
  __time_t v6; // r4
  int v7; // r1
  int v8; // r4
  _DWORD v10[2]; // [sp+0h] [bp-10h] BYREF
  struct timespec abstime; // [sp+8h] [bp-8h] BYREF

  v4 = a2 / 0x3E8;
  sub_2A69C(v10);
  v5 = 1000 * a2 - 1000000 * v4;
  v6 = v4 + v10[0];
  v7 = v5 + v10[1];
  if ( v7 > 999999 )
  {
    ++v6;
    v7 -= 1000000;
  }
  abstime.tv_sec = v6;
  abstime.tv_nsec = 1000 * v7;
  v8 = pthread_mutex_lock(&stru_73CB4);
  if ( v8 )
    sub_1BF10("restart_wait", 5559);
  if ( !*(_BYTE *)(a1 + 62) )
    v8 = pthread_cond_timedwait(&stru_73AC0, &stru_73CB4, &abstime);
  if ( pthread_mutex_unlock(&stru_73CB4) )
    sub_1BF54("restart_wait", 5564);
  off_6CB70();
  return v8;
}
