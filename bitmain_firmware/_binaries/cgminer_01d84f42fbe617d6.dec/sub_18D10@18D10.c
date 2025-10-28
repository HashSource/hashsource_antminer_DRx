int __fastcall sub_18D10(int a1, int a2)
{
  if ( pthread_mutex_lock(&mutex) )
    sub_B4E4("inc_dev_status", 8323);
  dword_63E48 = a1;
  dword_640C0 = a2;
  if ( pthread_mutex_unlock(&mutex) )
    sub_B694("inc_dev_status", 8326);
  return off_60178();
}
