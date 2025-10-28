int __fastcall sub_1BF98(int a1, int a2)
{
  if ( pthread_mutex_lock(&stru_73A00) )
    sub_1BF10("inc_dev_status", 8866);
  dword_73528 = a1;
  dword_7352C = a2;
  if ( pthread_mutex_unlock(&stru_73A00) )
    sub_1BF54("inc_dev_status", 8869);
  return off_6CB70();
}
