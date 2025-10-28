int __fastcall delete_c_map(void (__fastcall ***a1)(_DWORD))
{
  int v2; // r5

  if ( !a1 )
    return 0;
  v2 = delete_c_rb(*a1);
  free(a1);
  return v2;
}
