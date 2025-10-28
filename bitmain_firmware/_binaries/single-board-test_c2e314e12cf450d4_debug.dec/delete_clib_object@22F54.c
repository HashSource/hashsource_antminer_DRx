void __fastcall delete_clib_object(void **a1)
{
  if ( a1 )
  {
    free(*a1);
    free(a1);
  }
}
