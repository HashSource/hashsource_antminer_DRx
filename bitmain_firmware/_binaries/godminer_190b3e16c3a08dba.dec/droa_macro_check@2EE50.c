time_t droa_macro_check()
{
  const char *v0; // r0
  time_t result; // r0

  LOWORD(v0) = 1192;
  HIWORD(v0) = (unsigned int)" %s array value invalid" >> 16;
  result = access(v0, 0);
  if ( !result )
    return sub_2D974();
  return result;
}
