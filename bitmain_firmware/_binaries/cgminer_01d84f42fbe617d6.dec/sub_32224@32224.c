void __noreturn sub_32224()
{
  char v0[2052]; // [sp+0h] [bp-804h] BYREF

  if ( !pthread_mutex_lock(&stru_62F70) )
  {
    if ( !pthread_mutex_unlock(&stru_62F70) )
    {
      off_60178();
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        strcpy(v0, "API: killing cgminer");
        sub_38438(7, v0, 0);
      }
      sub_17328();
    }
    sub_B91C("quit_thread", 4920);
  }
  sub_B844("quit_thread", 4919);
}
