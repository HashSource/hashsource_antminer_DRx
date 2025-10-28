int sub_48048()
{
  int v0; // r5
  int v1; // t1
  int i; // r4
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v4, "every_chain_enable_PIC16F1704_dc_dc_new");
    sub_3F178(5, v4, 0);
  }
  v0 = 736019;
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    v1 = *(unsigned __int8 *)++v0;
    if ( v1 == 1 )
    {
      pthread_mutex_lock(&stru_7CE38);
      sub_463C4(i);
      pthread_mutex_unlock(&stru_7CE38);
      sub_30140();
    }
  }
  return sub_30140();
}
