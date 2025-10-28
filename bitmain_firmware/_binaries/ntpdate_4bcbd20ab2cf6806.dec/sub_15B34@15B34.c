void sub_15B34()
{
  __pid_t v0; // r4
  unsigned int v1; // r0

  v0 = getpid();
  v1 = time(0) ^ __ROR4__(v0, 16);
  srand(v1);
}
