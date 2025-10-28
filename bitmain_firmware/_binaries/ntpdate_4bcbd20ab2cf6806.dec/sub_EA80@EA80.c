void __fastcall sub_EA80(int a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r2

  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 1092) - 1;
    *(_DWORD *)(a1 + 1092) = v2;
    if ( v2 )
      sub_E15C(3, "******** freerecvbuff non-zero usage: %d *******", v2);
    v3 = dword_23FF0;
    dword_23FF0 = a1;
    v4 = dword_23FF4 + 1;
    *(_DWORD *)(a1 + 4) = v3;
    dword_23FF4 = v4;
  }
  else
  {
    sub_E15C(3, "freerecvbuff received NULL buffer");
  }
}
