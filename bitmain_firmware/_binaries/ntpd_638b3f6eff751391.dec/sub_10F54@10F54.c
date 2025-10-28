int __fastcall sub_10F54(int result)
{
  int *v1; // r3
  int v2; // r4
  int *v3; // r5
  int *v4; // r3
  unsigned int v5; // r2
  bool v6; // zf
  int v7; // r3

  v1 = &dword_CA610;
  v2 = result;
  v3 = (int *)dword_CA610;
  if ( *(_DWORD *)(dword_CA610 + 4) != result )
  {
    v4 = *(int **)dword_CA610;
    if ( !*(_DWORD *)dword_CA610 )
      return result;
    while ( v4[1] != result )
    {
      v3 = v4;
      if ( !*v4 )
        return result;
      v4 = (int *)*v4;
    }
    v1 = v3;
    v3 = (int *)*v3;
  }
  v5 = v3[2];
  *v1 = *v3;
  *v3 = 0;
  if ( v5 > 1 )
  {
    sub_4FE78(3, "internal error - illegal descriptor type %d - EXITING", v5);
    exit(1);
  }
  close(v3[1]);
  free(v3);
  v6 = v2 == dword_CA604;
  result = 1;
  dword_CA584[v2 / 32] &= ~(1 << (v2 % 32));
  if ( v6 && v2 )
  {
    if ( v2 > 1024 )
      off_7C9FC("ntp_io.c", 4236, 2, "maxactivefd - 1 < 1024");
    result = v2;
    v7 = v2 - 1;
    if ( v2 - 1 >= 0 )
    {
      while ( ((dword_CA584[v7 >> 5] >> (v7 & 0x1F)) & 1) == 0 )
      {
        if ( v7-- == 0 )
          goto LABEL_21;
      }
      result = v7;
      dword_CA604 = v7;
    }
LABEL_21:
    if ( v2 == result )
      off_7C9FC("ntp_io.c", 4242, 2, "fd != maxactivefd");
  }
  return result;
}
