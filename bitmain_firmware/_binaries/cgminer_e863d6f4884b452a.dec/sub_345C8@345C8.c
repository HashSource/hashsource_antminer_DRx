int __fastcall sub_345C8(const char *a1, const char *a2, int a3)
{
  int v6; // r0

  if ( a3 )
  {
    pthread_mutex_trylock(&stru_73AA4);
    v6 = sub_34508(38);
    off_6CB70(v6);
  }
  sub_34568();
  printf("%s%s%s", a1, a2, "                    \n");
  sub_34508(49);
  return ((int (__fastcall *)())off_6CB70)();
}
