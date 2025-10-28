void sub_46E98()
{
  int v0; // r3
  bool v1; // r7
  int v2; // r7
  unsigned int v3; // r4
  int v4; // r7
  int i; // r9
  int v7; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy(s, "check_whether_need_update_pic_program");
    sub_3F1C0(5, s, 0);
  }
  v7 = 603403;
  for ( i = 0; i != 4; ++i )
  {
    v0 = *(unsigned __int8 *)++v7;
    if ( v0 == 1 )
    {
      pthread_mutex_lock(&stru_75D80);
      sub_44670((unsigned __int8)i);
      sub_2FF20();
      sub_444A8((unsigned __int8)i);
      sub_2FF20();
      v2 = sub_456F0((unsigned __int8)i, &byte_75D98[i]);
      pthread_mutex_unlock(&stru_75D80);
      v1 = byte_75D98[i] <= 0x80u && v2 == 1;
    }
    else
    {
      v1 = 0;
    }
    v3 = 0;
    while ( v3 <= 2 && v1 )
    {
      pthread_mutex_lock(&stru_75D80);
      sub_463D8((unsigned __int8)i);
      sub_2FF20();
      sub_444A8((unsigned __int8)i);
      sub_2FF20();
      v4 = sub_456F0((unsigned __int8)i, &byte_75D98[i]);
      pthread_mutex_unlock(&stru_75D80);
      v3 = (unsigned __int8)(v3 + 1);
      if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
      {
        snprintf(s, 0x800u, "%s: Chain%d pic update for %d times", "check_whether_need_update_pic_program", i, v3);
        sub_3F1C0(5, s, 0);
      }
      v1 = byte_75D98[i] != 129 || v4 == 0;
    }
  }
}
