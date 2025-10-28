int __fastcall sub_32EB0(pthread_mutex_t *a1)
{
  if ( a1[26].__size[17] )
    sub_30748(a1);
  if ( sub_311E4(a1) && sub_34030(a1) )
  {
    sub_31110(a1);
    sub_15280((int)a1);
    return 1;
  }
  else
  {
    sub_19EC8((int)a1);
    return 0;
  }
}
