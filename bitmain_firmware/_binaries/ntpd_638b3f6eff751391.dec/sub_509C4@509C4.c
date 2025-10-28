void __fastcall sub_509C4(int a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r2

  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 1092) - 1;
    *(_DWORD *)(a1 + 1092) = v2;
    if ( v2 )
      sub_4FE78(3, "******** freerecvbuff non-zero usage: %d *******", v2);
    v3 = dword_C9BF8;
    dword_C9BF8 = a1;
    v4 = dword_C9BFC + 1;
    *(_DWORD *)(a1 + 4) = v3;
    dword_C9BFC = v4;
  }
  else
  {
    sub_4FE78(3, "freerecvbuff received NULL buffer");
  }
}
