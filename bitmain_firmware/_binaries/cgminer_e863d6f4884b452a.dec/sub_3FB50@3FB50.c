void __fastcall sub_3FB50(int a1)
{
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  pthread_mutex_lock(&stru_72B40);
  sub_3F1E4(a1);
  pthread_mutex_unlock(&stru_72B40);
  sub_3FB28();
  sub_2A7F4();
  sub_3CDE8(1);
  sub_2A7F4();
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(v2, 0x800u, "%s DONE!", "recheck_asic_num");
    sub_343C4(5, v2, 0);
  }
}
