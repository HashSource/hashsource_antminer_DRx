int sub_400BC()
{
  pthread_mutex_lock(&stru_6FBA8);
  dword_8DCDC[0] = 0;
  dword_8DCE0 = 0;
  dword_8DCE4 = 0;
  sub_381A4(0);
  sub_381A4(1);
  sub_381A4(2);
  sub_381A4(3);
  return j_pthread_mutex_unlock(&stru_6FBA8);
}
