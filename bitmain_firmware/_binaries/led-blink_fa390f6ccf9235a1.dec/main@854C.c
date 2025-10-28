int __fastcall main(int a1, char **a2, char **a3)
{
  int v5; // r4
  int v6; // r0
  int v7; // r4
  int i; // r0
  time_t v10; // [sp+0h] [bp-8h] BYREF
  int v11; // [sp+4h] [bp-4h] BYREF

  v11 = -1;
  if ( !access("/var/run/led-blink.run", 0) )
    exit(-1);
  if ( a1 > 1 )
  {
    _isoc99_sscanf(a2[1], "%d", &v11);
    v5 = v11;
    if ( v11 > 1 )
    {
      if ( v11 >= 1800 )
        v5 = 1800;
    }
    else
    {
      v5 = 2;
    }
  }
  else
  {
    v5 = 600;
  }
  signal(9, handler);
  signal(3, handler);
  signal(15, handler);
  signal(2, handler);
  time(&v10);
  v6 = v5;
  v7 = v5 + v10;
  sub_87C4(v6);
  for ( i = daemon(0, 0); v7 >= v10; i = sub_87C4(v7 - v10) )
  {
    sub_87AC(i);
    time(&v10);
  }
  unlink("/var/run/led-blink.run");
  return 0;
}
