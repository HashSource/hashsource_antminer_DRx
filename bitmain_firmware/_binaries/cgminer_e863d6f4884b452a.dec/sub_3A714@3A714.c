void sub_3A714()
{
  unsigned __int8 *v0; // r9
  int v1; // r8
  int v2; // r5
  int v3; // r4
  unsigned int v4; // r3
  bool v5; // zf
  unsigned int v6; // r3
  bool v7; // r4
  int v9; // [sp+8h] [bp-814h]
  unsigned __int8 *v10; // [sp+10h] [bp-80Ch]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(s, "check_whether_need_update_pic_program");
    sub_343C4(5, s, 0);
  }
  v0 = byte_6FCC4;
  v1 = 0;
  v10 = (unsigned __int8 *)&unk_73EF0;
  do
  {
    v2 = *v10++;
    if ( v2 == 1 )
    {
      pthread_mutex_lock(&stru_6FCAC);
      sub_38D8C((unsigned __int8)v1);
      sub_2A7F4();
      sub_38C74((unsigned __int8)v1);
      sub_2A7F4();
      v3 = sub_39834((unsigned __int8)v1, &byte_6FCC4[v1]);
      pthread_mutex_unlock(&stru_6FCAC);
      v4 = *v0;
      v5 = v4 == 128;
      if ( v4 <= 0x80 )
        v5 = v3 == 1;
      if ( v5 )
      {
        do
        {
          pthread_mutex_lock(&stru_6FCAC);
          sub_3A0A8((unsigned __int8)v1);
          sub_2A7F4();
          sub_38C74((unsigned __int8)v1);
          sub_2A7F4();
          v9 = sub_39834((unsigned __int8)v1, &byte_6FCC4[v1]);
          pthread_mutex_unlock(&stru_6FCAC);
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
          {
            snprintf(s, 0x800u, "%s: Chain%d pic update for %d times", "check_whether_need_update_pic_program", v1, v2);
            sub_343C4(5, s, 0);
          }
          v6 = (unsigned __int8)v2;
          v7 = v9 == 0;
          ++v2;
          if ( *v0 != 129 )
            v7 = 1;
        }
        while ( v6 <= 2 && v7 );
      }
    }
    ++v1;
    ++v0;
  }
  while ( v1 != 4 );
}
