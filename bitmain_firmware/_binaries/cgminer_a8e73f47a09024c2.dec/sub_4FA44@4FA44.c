void __fastcall sub_4FA44(int a1)
{
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  pthread_mutex_lock(&stru_7FD34);
  sub_4EE0C(a1);
  pthread_mutex_unlock(&stru_7FD34);
  sub_4FA0C();
  sub_30140();
  sub_4C768(1);
  sub_30140();
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(v2, 0x800u, "%s DONE!", "recheck_asic_num");
    sub_3F178(5, v2, 0);
  }
}
