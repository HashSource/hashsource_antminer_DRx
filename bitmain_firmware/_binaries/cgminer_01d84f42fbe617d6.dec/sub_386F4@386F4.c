int __fastcall sub_386F4(int result, const char *a2, const char *a3, int a4)
{
  int v4; // r6

  v4 = result;
  if ( !byte_64218 || result == 3 )
  {
    if ( a4 )
    {
      pthread_mutex_trylock(&stru_63D48);
      sub_38674(38);
      off_60178();
      if ( byte_6007C )
      {
LABEL_5:
        result = sub_19438(v4, a2, a3);
        if ( result )
          return result;
      }
    }
    else if ( byte_6007C )
    {
      goto LABEL_5;
    }
    sub_385EC();
    printf("%s%s%s", a2, a3, asc_54E8C);
    sub_38674(49);
    return off_60178();
  }
  return result;
}
