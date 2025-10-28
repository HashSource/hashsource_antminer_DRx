void __fastcall sub_EAEC(int *a1)
{
  int v1; // r2
  int v2; // r12
  bool v3; // zf

  if ( a1 )
  {
    a1[1] = -1;
    *a1 = -1;
    v1 = dword_23FEC;
    v2 = dword_23FF8;
    v3 = dword_23FEC == 0;
    dword_23FEC = (int)a1;
    if ( !v3 )
      *(_DWORD *)(v1 + 4) = a1;
    *a1 = v1;
    if ( v3 )
      dword_23FE8 = (int)a1;
    a1[1] = 0;
    dword_23FF8 = v2 + 1;
  }
  else
  {
    sub_E15C(3, "add_full_recv_buffer received NULL buffer");
  }
}
