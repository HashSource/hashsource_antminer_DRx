int __fastcall sub_4C674(int a1, int a2)
{
  pthread_mutex_lock(&stru_75D80);
  sub_451BC(a2);
  pthread_mutex_unlock(&stru_75D80);
  byte_75C10[a2 + 232] = 0;
  byte_77C08[a2 + 4088] = 0;
  byte_79C00[a2 - 4076] = 1;
  sub_34970(a1 + (a2 << 6) + 3994);
  sub_42570(13, 1 << a2);
  sub_2FF20();
  pthread_mutex_lock(&stru_75D80);
  sub_44FFC(a2);
  pthread_mutex_unlock(&stru_75D80);
  sleep(1u);
  sub_42570(13, 0);
  sub_2FF20();
  sub_425E0(26);
  byte_79C00[a2 - 4076] = 0;
  sub_4AE24(a2, a1, 3000000);
  return sub_4AFB8(a2, a1);
}
