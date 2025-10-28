int __fastcall delete_c_map(void ****a1)
{
  int v3; // [sp+Ch] [bp+Ch]

  v3 = 0;
  if ( a1 )
  {
    v3 = delete_c_rb(*a1);
    free(a1);
  }
  return v3;
}
