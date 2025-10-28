int sub_177E8()
{
  int v0; // r3

  v0 = ++dword_612C4;
  if ( dword_612C4 > dword_63740 )
  {
    sub_1746C();
    v0 = dword_612C4;
  }
  return *(_DWORD *)(dword_639E0 + 4 * (v0 - 1));
}
