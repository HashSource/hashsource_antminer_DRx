char *__fastcall sub_D7E8(void *a1, size_t a2, size_t a3, int a4)
{
  size_t v4; // r5
  char *v7; // r0
  char *v8; // r6
  bool v9; // cc

  v4 = a2;
  if ( !a2 )
    a2 = 1;
  v7 = (char *)realloc(a1, a2);
  v8 = v7;
  if ( !v7 )
  {
    dword_23FE4 = 1;
    sub_E15C(3, "fatal out of memory (%lu bytes)", v4);
    exit(1);
  }
  v9 = a4 != 0;
  if ( a4 )
    v9 = v4 > a3;
  if ( v9 )
    memset(&v7[a3], 0, v4 - a3);
  return v8;
}
