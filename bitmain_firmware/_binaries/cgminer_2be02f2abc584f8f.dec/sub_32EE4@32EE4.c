int __fastcall sub_32EE4(pthread_mutex_t *a1)
{
  if ( a1[26].__size[17] )
    sub_304C4(a1);
  if ( sub_30F60(a1) && sub_33FB0(a1) )
  {
    sub_30E8C(a1);
    sub_150A0((int)a1);
    return 1;
  }
  else
  {
    sub_19CE8((int)a1);
    return 0;
  }
}
