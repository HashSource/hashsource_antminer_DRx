int __fastcall strbuffer_steal_value(int *a1)
{
  int result; // r0

  result = *a1;
  *a1 = 0;
  return result;
}
