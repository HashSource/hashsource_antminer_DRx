int __fastcall sub_16790(void (*a1)(void *))
{
  int *v1; // r2

  if ( &dword_212CC )
    v1 = (int *)dword_212CC;
  else
    v1 = &dword_212CC;
  return _cxa_atexit(a1, 0, v1);
}
