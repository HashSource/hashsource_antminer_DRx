int __fastcall sub_5B388(void (*a1)(void *))
{
  int *v1; // r2

  if ( &dword_7942C )
    v1 = (int *)dword_7942C;
  else
    v1 = &dword_7942C;
  return _cxa_atexit(a1, 0, v1);
}
