int __fastcall sub_27D18(const char *a1, speed_t a2, int a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r3
  int *v9; // r5
  int v11; // r0
  int v12; // [sp+0h] [bp-84h] BYREF

  v6 = open(a1, 2306, 511);
  v7 = v6;
  if ( v6 < 0 )
  {
    v7 = 0;
    sub_4FE78(3, "refclock_open %s: %m", a1);
  }
  else
  {
    if ( !v6 )
      off_7C9FC("ntp_refclock.c", 739, 2, "fd != 0");
    v8 = sub_27B30(v6, a2, a3);
    if ( v8 && (v8 = sub_27CE4(v7, a3)) != 0 )
    {
      v9 = _errno_location();
      do
      {
        while ( read(v7, &v12, 0x80u) > 0 )
          ;
      }
      while ( *v9 == 4 );
    }
    else
    {
      v11 = v7;
      v7 = v8;
      close(v11);
    }
  }
  return v7;
}
