int sub_3A4B0()
{
  unsigned __int8 *v0; // r5
  int v1; // r4
  int v2; // t1
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v4, "every_chain_jump_from_loader_to_app_PIC16F1704_new");
    sub_343C4(5, v4, 0);
  }
  v0 = (unsigned __int8 *)&unk_73EF0;
  v1 = 0;
  do
  {
    v2 = *v0++;
    if ( v2 == 1 )
    {
      pthread_mutex_lock(&stru_6FCAC);
      sub_38C74(v1);
      pthread_mutex_unlock(&stru_6FCAC);
    }
    v1 = (unsigned __int8)(v1 + 1);
    sub_2A7F4();
  }
  while ( v1 != 4 );
  return sub_2A7F4();
}
