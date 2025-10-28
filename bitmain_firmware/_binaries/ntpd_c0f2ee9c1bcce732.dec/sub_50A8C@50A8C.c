_DWORD *sub_50A8C()
{
  _DWORD *v0; // r4
  int v1; // lr
  int v2; // r12

  v0 = (_DWORD *)dword_C9BF8;
  if ( dword_C9BF8 )
  {
    v1 = *(_DWORD *)(dword_C9BF8 + 4);
    v2 = dword_C9BFC;
    *(_DWORD *)(dword_C9BF8 + 4) = 0;
    dword_C9BF8 = v1;
    dword_C9BFC = v2 - 1;
    memset(v0, 0, 0x448u);
    v0[273] = 1;
    return v0;
  }
  else
  {
    ++dword_C9C0C;
    return 0;
  }
}
