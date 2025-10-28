const char *__fastcall sub_29418(char *a1)
{
  char **v2; // r3
  const char *result; // r0

  if ( !a1 )
    return "http:";
  v2 = &off_51BA4;
  while ( 1 )
  {
    result = v2[2];
    v2 += 2;
    if ( !result )
      break;
    if ( v2[1] == a1 )
      return result;
  }
  return "invalid";
}
