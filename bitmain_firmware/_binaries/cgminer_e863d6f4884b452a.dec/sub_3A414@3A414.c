int sub_3A414()
{
  unsigned __int8 *v0; // r5
  int i; // r4
  int v2; // t1
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v4, "every_chain_reset_PIC16F1704_pic_new");
    sub_343C4(5, v4, 0);
  }
  v0 = (unsigned __int8 *)&unk_73EF0;
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    v2 = *v0++;
    if ( v2 == 1 )
    {
      pthread_mutex_lock(&stru_6FCAC);
      sub_38D8C(i);
      pthread_mutex_unlock(&stru_6FCAC);
      sub_2A7F4();
    }
  }
  return sub_2A7F4();
}
