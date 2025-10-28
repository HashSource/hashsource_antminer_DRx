int sub_41EC4()
{
  int *v0; // r4
  int v1; // t1

  v0 = &dword_C4BD0;
  pthread_mutex_lock(&stru_630DC);
  dword_C30B8[0] = 0;
  dword_C30BC = 0;
  dword_C30C0 = 0;
  do
  {
    v1 = v0[1];
    ++v0;
    tcflush(v1, 2);
  }
  while ( v0 != &dword_C4BE0 );
  return pthread_mutex_unlock(&stru_630DC);
}
