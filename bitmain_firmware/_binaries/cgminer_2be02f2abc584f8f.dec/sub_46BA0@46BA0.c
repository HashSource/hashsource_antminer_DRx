int sub_46BA0()
{
  int v0; // r5
  int v1; // t1
  int i; // r4
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy(v4, "every_chain_disable_PIC16F1704_dc_dc_new");
    sub_3F1C0(5, v4, 0);
  }
  v0 = 603403;
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    v1 = *(unsigned __int8 *)++v0;
    if ( v1 == 1 )
    {
      pthread_mutex_lock(&stru_75D80);
      sub_451BC(i);
      pthread_mutex_unlock(&stru_75D80);
    }
  }
  return sub_2FF20();
}
