int sub_1E6F8()
{
  int v0; // r3

  v0 = ++dword_6DD5C;
  if ( dword_6DD5C > dword_72EF0 )
  {
    sub_1E3F0();
    v0 = dword_6DD5C;
  }
  return *(_DWORD *)(dword_732EC + 4 * (v0 + 0x3FFFFFFF));
}
