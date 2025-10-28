_DWORD *sub_EB48()
{
  _DWORD *v0; // r4
  int v1; // lr
  int v2; // r12

  v0 = (_DWORD *)dword_23FF0;
  if ( dword_23FF0 )
  {
    v1 = *(_DWORD *)(dword_23FF0 + 4);
    v2 = dword_23FF4;
    *(_DWORD *)(dword_23FF0 + 4) = 0;
    dword_23FF0 = v1;
    dword_23FF4 = v2 - 1;
    memset(v0, 0, 0x448u);
    v0[273] = 1;
    return v0;
  }
  else
  {
    ++dword_24004;
    return 0;
  }
}
