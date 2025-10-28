int __fastcall sub_3BC48(unsigned __int8 a1)
{
  int v2; // r5

  pthread_mutex_lock(&stru_6FCAC);
  usleep(0x186A0u);
  v2 = sub_3B198((unsigned __int8)byte_6D7EA, (unsigned __int8)byte_6D7E9, 0, 1, 2u, a1);
  pthread_mutex_unlock(&stru_6FCAC);
  return v2;
}
