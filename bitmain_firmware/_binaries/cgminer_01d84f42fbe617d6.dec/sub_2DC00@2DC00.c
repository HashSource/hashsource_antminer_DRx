int __fastcall sub_2DC00(pthread_mutex_t *a1)
{
  if ( a1[26].__size[9] )
  {
    sub_2B7C0(a1);
    if ( !sub_2C29C(a1) )
      goto LABEL_3;
  }
  else if ( !sub_2C29C(a1) )
  {
LABEL_3:
    sub_1F5DC((int)a1);
    return 0;
  }
  if ( !sub_2E9B0(a1) )
    goto LABEL_3;
  sub_2C1C4((int)a1);
  sub_1F8F4((int)a1);
  return 1;
}
