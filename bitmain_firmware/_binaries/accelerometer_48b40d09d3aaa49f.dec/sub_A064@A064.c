void sub_A064()
{
  int v0; // r4

  v0 = dword_16014;
  if ( dword_16014 >= 0 && getpid() == 1 )
  {
    if ( v0 > 2 )
      sub_9868(v0);
    dword_16014 = -1;
  }
}
