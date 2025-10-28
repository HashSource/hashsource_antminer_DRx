void sub_19C74()
{
  unsigned int v0; // r4
  int *v1; // r7
  int *v2; // r5
  int v3; // t1
  unsigned int v4; // r3
  bool v5; // cf
  int *v6; // r8
  int v7; // t1
  int v8; // r6
  int v9; // r1
  int v10; // r1
  int v11; // r8
  _DWORD *v12; // t1
  char v13[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_72EF0 <= 0 )
  {
    v0 = 1;
  }
  else
  {
    v0 = -1;
    v1 = (int *)dword_732EC;
    v2 = (int *)dword_732EC;
    do
    {
      v3 = *v2++;
      v4 = *(_DWORD *)(v3 + 56);
      v5 = 1;
      if ( v4 )
        v5 = v4 >= v0;
      if ( !v5 )
        v0 = v4;
    }
    while ( (int *)(dword_732EC + 4 * dword_72EF0) != v2 );
    if ( v0 == -1 )
    {
      v0 = 1;
    }
    else
    {
      v6 = (int *)dword_732EC;
      do
      {
        v7 = *v6++;
        v8 = *(_DWORD *)(v7 + 56);
        if ( v8 )
        {
          sub_49AD4(v8, v0);
          if ( v9 )
          {
            do
              sub_49AD4(v8, --v0);
            while ( v10 );
          }
        }
      }
      while ( v2 != v6 );
    }
    v11 = dword_6C2B8;
    do
    {
      v12 = (_DWORD *)*v1++;
      v12[16] = sub_49878(v12[16] * v11, v0);
      v12[15] = sub_49878(v12[14], v0);
    }
    while ( v2 != v1 );
  }
  dword_6C2B8 = v0;
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v13, 0x800u, "Global quota greatest common denominator set to %lu", v0);
    sub_343C4(7, v13, 0);
  }
}
