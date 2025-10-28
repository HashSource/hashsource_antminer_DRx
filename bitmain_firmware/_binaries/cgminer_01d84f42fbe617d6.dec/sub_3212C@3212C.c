int sub_3212C()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_62F70) )
    sub_B844("restart_thread", 4933);
  if ( pthread_mutex_unlock(&stru_62F70) )
    sub_B91C("restart_thread", 4934);
  off_60178();
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    strcpy(v1, "API: restarting cgminer");
    sub_38438(7, v1, 0);
  }
  sub_1C028();
  return 0;
}
