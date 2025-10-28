void __fastcall sub_4CF00(int a1, int a2)
{
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  pthread_mutex_lock(&stru_78C54);
  sub_4C674(a1, a2);
  pthread_mutex_unlock(&stru_78C54);
  sub_4CEC8();
  sub_2FF20();
  sub_4903C(a2, 1);
  sub_2FF20();
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(v4, 0x800u, "%s DONE!", "recheck_asic_num");
    sub_3F1C0(5, v4, 0);
  }
}
