void __fastcall sub_DCFC(int a1, const char *a2, _DWORD *a3)
{
  _DWORD *v4; // r4
  int v7; // r5

  v4 = *(_DWORD **)(a1 + 8);
  if ( v4 )
  {
    v7 = 0;
    while ( sub_C634(v4[8], (int)a2) )
    {
      v4 = (_DWORD *)*v4;
      ++v7;
      if ( !v4 )
        return;
    }
    a3[8] = sub_C574(a2);
    sub_DC88(a1, v7, a3);
  }
}
