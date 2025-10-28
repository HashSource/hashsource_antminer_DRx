int __fastcall sub_2C77C(pthread_mutex_t *a1)
{
  int v2; // r5

  if ( a1[26].__size[17] )
    sub_2AC10(a1);
  if ( sub_2B3F0(a1) && (v2 = sub_2D32C(a1)) != 0 )
  {
    if ( a1[24].__size[4] )
      sub_2AF4C(a1);
    sub_1E37C((int)a1);
    return v2;
  }
  else
  {
    sub_1F4FC((int)a1);
    return 0;
  }
}
