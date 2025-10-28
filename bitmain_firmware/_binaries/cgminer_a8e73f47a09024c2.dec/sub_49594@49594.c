int sub_49594()
{
  int v0; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  pthread_mutex_lock(&stru_7CE38);
  v0 = sub_491A8((unsigned __int8)byte_7A9B9, byte_7A9BA, 1, 1, 0, 0);
  if ( v0 == 245 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "power protocal %02x, using package cmd\n", 245);
      sub_3F178(5, s, 0);
    }
    word_7A9BC = 2;
  }
  else
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "power protocal %02x, using simple cmd\n", v0);
      sub_3F178(5, s, 0);
    }
    word_7A9BC = 1;
  }
  return pthread_mutex_unlock(&stru_7CE38);
}
