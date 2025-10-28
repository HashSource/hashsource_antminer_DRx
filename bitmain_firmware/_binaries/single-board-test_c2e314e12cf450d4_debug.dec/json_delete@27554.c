void __fastcall json_delete(void **a1)
{
  if ( !a1 || *a1 )
  {
    if ( a1 && *a1 == (void *)1 )
    {
      json_delete_array((json_array_t *)a1);
    }
    else if ( a1 && *a1 == (void *)2 )
    {
      json_delete_string((json_string_t *)a1);
    }
    else if ( a1 && *a1 == (void *)3 )
    {
      json_delete_integer(a1);
    }
    else if ( a1 )
    {
      if ( *a1 == (void *)4 )
        json_delete_real(a1);
    }
  }
  else
  {
    json_delete_object((json_object_t *)a1);
  }
}
