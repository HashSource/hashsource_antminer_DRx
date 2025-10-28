int __fastcall insert_c_map(int *a1, const void *a2, size_t a3, const void *a4, size_t a5)
{
  if ( a1 )
    return insert_c_rb(*a1, a2, a3, a4, a5);
  else
    return 501;
}
