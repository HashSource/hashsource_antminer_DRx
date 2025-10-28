int sub_3BA84()
{
  int v0; // r0
  int v1; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  pthread_mutex_lock(&stru_6FCAC);
  v0 = sub_3B198((unsigned __int8)byte_6D7EA, (unsigned __int8)byte_6D7E9, 1, 1, 2u, 0);
  v1 = v0;
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "power da value is %d\n", v0);
    sub_343C4(5, s, 0);
    pthread_mutex_unlock(&stru_6FCAC);
    return v1;
  }
  else
  {
    pthread_mutex_unlock(&stru_6FCAC);
    return v1;
  }
}
