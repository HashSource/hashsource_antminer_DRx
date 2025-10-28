int __fastcall sub_18C10(int a1, unsigned int a2, int a3)
{
  __time_t v6; // r4
  signed int v7; // r1
  int v8; // r4
  _DWORD v10[2]; // [sp+0h] [bp-10h] BYREF
  struct timespec abstime; // [sp+8h] [bp-8h] BYREF

  sub_2B13C(v10, a2, a3, 274877907 * a2);
  v6 = a2 / 0x3E8 + v10[0];
  v7 = 1000 * a2 - 1000000 * (a2 / 0x3E8) + v10[1];
  if ( v7 > 999999 )
  {
    ++v6;
    v7 -= 1000000;
  }
  abstime.tv_sec = v6;
  abstime.tv_nsec = 1000 * v7;
  if ( pthread_mutex_lock(&stru_63BCC) )
    sub_B4E4("restart_wait", 5227);
  if ( *(_BYTE *)(a1 + 62) )
    v8 = 0;
  else
    v8 = pthread_cond_timedwait(&cond, &stru_63BCC, &abstime);
  if ( pthread_mutex_unlock(&stru_63BCC) )
    sub_B694("restart_wait", 5232);
  off_60178();
  return v8;
}
