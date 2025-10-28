bool __fastcall exists_c_map(int *a1, int a2)
{
  return a1 && find_c_rb(*a1, a2) != 0;
}
