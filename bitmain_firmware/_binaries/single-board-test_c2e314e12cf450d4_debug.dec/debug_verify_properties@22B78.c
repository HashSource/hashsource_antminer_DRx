int __fastcall debug_verify_properties(int *a1)
{
  debug_verify_property_1((int)a1, (_DWORD *)*a1);
  debug_verify_property_2((int)a1, *a1);
  debug_verify_property_4((int)a1, (int *)*a1);
  return debug_verify_property_5((int)a1, (_DWORD *)*a1);
}
