__mode_t sub_B020()
{
  __pid_t v0; // r0
  __pid_t v1; // r0
  int i; // r4
  int v3; // r0

  v0 = fork();
  if ( v0 < 0 )
    goto LABEL_8;
  if ( v0 || (setsid(), v1 = fork(), v1 > 0) )
    exit(0);
  if ( v1 )
LABEL_8:
    exit(1);
  for ( i = 0; i != 256; ++i )
  {
    v3 = i;
    close(v3);
  }
  chdir("/root/test");
  return umask(0);
}
