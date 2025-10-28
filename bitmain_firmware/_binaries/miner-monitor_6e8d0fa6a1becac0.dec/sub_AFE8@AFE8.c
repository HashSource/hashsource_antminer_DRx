int sub_AFE8()
{
  sigset_t v1; // [sp+0h] [bp-84h] BYREF

  sigemptyset(&v1);
  sigfillset(&v1);
  sigdelset(&v1, 2);
  return sigdelset(&v1, 13);
}
