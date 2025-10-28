int sub_3ACF0()
{
  unsigned __int8 *v0; // r5
  int i; // r4
  int v2; // t1
  unsigned __int8 v4; // [sp+Fh] [bp-805h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v0 = (unsigned __int8 *)&unk_73EF0;
  for ( i = 0; i != 4; ++i )
  {
    v2 = *v0++;
    if ( v2 == 1 )
    {
      pthread_mutex_lock(&stru_6FCAC);
      sub_39AAC((unsigned __int8)i, &v4);
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
      {
        snprintf(s, 0x800u, "Chain %u voltage %u", i, v4);
        sub_343C4(5, s, 0);
      }
      pthread_mutex_unlock(&stru_6FCAC);
    }
    sub_2A7F4();
  }
  return sub_2A7F4();
}
