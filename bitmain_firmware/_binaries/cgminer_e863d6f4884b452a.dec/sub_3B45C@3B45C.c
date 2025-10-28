int sub_3B45C()
{
  int v0; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  pthread_mutex_lock(&stru_6FCAC);
  v0 = sub_3B198((unsigned __int8)byte_6D7EA, (unsigned __int8)byte_6D7E9, 1, 1, 0, 0);
  if ( v0 == 245 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "power protocal %02x, using package cmd\n", 245);
      sub_343C4(5, s, 0);
    }
    word_6D7EC = 2;
    return pthread_mutex_unlock(&stru_6FCAC);
  }
  else
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "power protocal %02x, using simple cmd\n", v0);
      sub_343C4(5, s, 0);
    }
    word_6D7EC = 1;
    return pthread_mutex_unlock(&stru_6FCAC);
  }
}
