int __fastcall sub_3AD9C(unsigned int a1)
{
  unsigned __int8 *v2; // r5
  int v3; // r4
  int v4; // t1
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "%s %u", "set freq:", a1);
    sub_343C4(5, s, 0);
  }
  v2 = (unsigned __int8 *)&unk_73EF0;
  v3 = 0;
  do
  {
    v4 = *v2++;
    if ( v4 == 1 )
    {
      pthread_mutex_lock(&stru_6FCAC);
      sub_3A8B0(v3, a1);
      pthread_mutex_unlock(&stru_6FCAC);
    }
    v3 = (unsigned __int8)(v3 + 1);
    sub_2A7F4();
  }
  while ( v3 != 4 );
  return sub_2A7F4();
}
