void __fastcall destroy_sample_buffer(void **a1)
{
  if ( a1 )
  {
    free(*a1);
    free(a1);
  }
}
