int __fastcall sub_43914(const void *a1, size_t a2, FILE *s)
{
  if ( fwrite(a1, a2, 1u, s) == 1 )
    return 0;
  else
    return -1;
}
