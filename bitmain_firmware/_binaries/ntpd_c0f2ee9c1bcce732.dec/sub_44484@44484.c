void *__fastcall sub_44484(size_t a1)
{
  void *result; // r0

  result = malloc(a1);
  if ( !result )
  {
    fprintf((FILE *)stderr, off_7B854[0], a1);
    exit(1);
  }
  return result;
}
