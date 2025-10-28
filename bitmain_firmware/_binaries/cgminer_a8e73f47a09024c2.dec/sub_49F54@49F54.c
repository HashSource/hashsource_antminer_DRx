int sub_49F54()
{
  int v0; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  pthread_mutex_lock(&stru_7CE38);
  v0 = sub_491A8((unsigned __int8)byte_7A9B9, byte_7A9BA, 1, 1, 2u, 0);
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "power da value is %d\n", v0);
    sub_3F178(5, s, 0);
  }
  pthread_mutex_unlock(&stru_7CE38);
  return v0;
}
