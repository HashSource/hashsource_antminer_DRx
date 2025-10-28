char *__fastcall sub_2CD40(char *a1)
{
  char **v2; // r3
  char *result; // r0

  if ( !a1 )
    return "http:";
  v2 = &off_62EB4;
  while ( 1 )
  {
    result = v2[2];
    if ( !result )
      break;
    v2 += 2;
    if ( v2[1] == a1 )
      return result;
  }
  return "invalid";
}
