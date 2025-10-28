void (*__fastcall sub_D810(void (*result)(void *ptr)))(void *ptr)
{
  void *(*v1)(size_t); // r2
  void (*v2)(void *); // r3
  bool v3; // zf

  if ( result )
  {
    v1 = *(void *(**)(size_t))result;
    v2 = (void (*)(void *))*((_DWORD *)result + 1);
    v3 = *(_DWORD *)result == 0;
    result = free;
    if ( v3 )
      v1 = malloc;
    off_1B374 = v1;
    if ( !v2 )
      v2 = free;
    off_1B378 = v2;
  }
  else
  {
    off_1B374 = malloc;
    off_1B378 = free;
  }
  return result;
}
