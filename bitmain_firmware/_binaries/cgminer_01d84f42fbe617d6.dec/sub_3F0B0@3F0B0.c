void __noreturn sub_3F0B0()
{
  int v0; // r2
  int v1; // r3
  int v2; // r12
  int v3; // t1
  __int16 v4; // r1

  while ( 1 )
  {
    sub_3EF84(12, 68, 0);
    sub_3EF84(201, 68, 0);
    sub_2B21C();
    v0 = 805859;
    v1 = 0;
    v2 = 0;
    do
    {
      v3 = *(unsigned __int8 *)++v0;
      if ( v3 == 1 )
      {
        v4 = *(_WORD *)((char *)&unk_C4BCC + v1 + 320);
        if ( v4 > v2 )
          v2 = (unsigned __int8)v4;
      }
      v1 += 64;
    }
    while ( v1 != 256 );
    dword_C5473[0] = v2;
    sleep(0xAu);
  }
}
