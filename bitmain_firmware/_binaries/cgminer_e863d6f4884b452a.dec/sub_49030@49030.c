const char *__fastcall sub_49030(unsigned int *a1, size_t *a2)
{
  const char *v4; // r0

  v4 = sub_48DD8(a1, a2);
  if ( !v4 )
    return 0;
  while ( *v4 != 45 )
  {
    v4 = sub_48E68((int)v4, a1, a2);
    if ( !v4 )
      return 0;
  }
  --*a2;
  return v4 + 1;
}
