int __fastcall sub_216D8(int a1)
{
  _DWORD *v2; // r7
  int v3; // r5
  int v4; // r10
  _DWORD *v5; // r1
  _DWORD *v6; // t1
  _DWORD *v7; // r4
  int v8; // r0

  v2 = &unk_CB238;
  v3 = 100;
  v4 = sub_212A0(a1);
  do
  {
    v6 = (_DWORD *)v2[1];
    ++v2;
    v5 = v6;
    if ( v6 )
    {
      do
      {
        v7 = (_DWORD *)*v5;
        v8 = sub_212A0((int)v5);
        if ( v8 < v3 && (*(_DWORD *)(a1 + 52) & 2) != 0 )
          v3 = v8;
        v5 = v7;
      }
      while ( v7 );
    }
  }
  while ( v2 != (_DWORD *)&unk_CB438 );
  if ( dword_7CF4C )
    printf("score_all: at %lu score %d min %d\n", dword_CB548, v4, v3);
  if ( v4 == v3 )
    return v3;
  else
    return 0;
}
