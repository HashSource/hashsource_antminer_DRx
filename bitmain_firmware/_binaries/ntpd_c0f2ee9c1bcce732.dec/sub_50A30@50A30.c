void __fastcall sub_50A30(int *a1)
{
  int v1; // r2
  int v2; // r12
  bool v3; // zf

  if ( a1 )
  {
    a1[1] = -1;
    *a1 = -1;
    v1 = dword_C9BF4;
    v2 = dword_C9C00;
    v3 = dword_C9BF4 == 0;
    dword_C9BF4 = (int)a1;
    if ( !v3 )
      *(_DWORD *)(v1 + 4) = a1;
    *a1 = v1;
    if ( v3 )
      dword_C9BF0 = (int)a1;
    a1[1] = 0;
    dword_C9C00 = v2 + 1;
  }
  else
  {
    sub_4FE78(3, "add_full_recv_buffer received NULL buffer");
  }
}
