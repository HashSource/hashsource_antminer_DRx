const char *__fastcall sub_4905C(int a1, unsigned int *a2, size_t *a3)
{
  const char *v5; // r0

  v5 = sub_48E68(a1, a2, a3);
  if ( !v5 )
    return 0;
  while ( *v5 != 45 )
  {
    v5 = sub_48E68((int)v5, a2, a3);
    if ( !v5 )
      return 0;
  }
  --*a3;
  return v5 + 1;
}
