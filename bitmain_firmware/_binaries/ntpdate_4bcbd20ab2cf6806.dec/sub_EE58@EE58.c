void __fastcall sub_EE58(int a1, void (*a2)(int))
{
  int v3; // r3
  int v4; // r4
  struct sigaction v5; // [sp+0h] [bp-11Ch] BYREF
  struct sigaction oact; // [sp+8Ch] [bp-90h] BYREF

  v5.sa_handler = a2;
  sigemptyset(&v5.sa_mask);
  if ( a1 == 29 )
    v3 = 0x10000000;
  else
    v3 = 0;
  v5.sa_flags = v3;
  do
    v4 = sigaction(a1, &v5, &oact);
  while ( v4 == -1 && *_errno_location() == 4 );
  if ( (oact.sa_flags & 0xEFFFFFFF) != 0 )
    sub_E15C(7, "signal_no_reset: signal %d had flags %x", a1, oact.sa_flags);
  if ( v4 == -1 )
  {
    perror("sigaction");
    exit(1);
  }
}
