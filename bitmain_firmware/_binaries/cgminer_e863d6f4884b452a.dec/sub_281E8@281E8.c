char *__fastcall sub_281E8(char *a1)
{
  char **v1; // r3
  const char *v2; // r2

  if ( !a1 )
    return "http:";
  v1 = &off_51848;
  v2 = "http0:";
  while ( 1 )
  {
    v1 += 2;
    if ( v1[1] == a1 )
      break;
    v2 = v1[2];
    if ( !v2 )
      return "invalid";
  }
  return (char *)v2;
}
