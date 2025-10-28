int __fastcall sub_5860C(_DWORD *a1, int a2, int a3)
{
  int v4; // r12
  _DWORD *v5; // r1
  int v6; // r2
  int v8; // r2
  int v9; // r3

  if ( a1[283] )
  {
    v4 = *(_DWORD *)(a3 + 26);
    v5 = (_DWORD *)a1[281];
    v6 = *(_DWORD *)(a3 + 30);
    a1[268] = v4;
    a1[269] = v6;
    v8 = *(_DWORD *)(a3 + 18);
    v9 = *(_DWORD *)(a3 + 22);
    *v5 = v8;
    v5[1] = v9;
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "work->private", a3);
    return 0;
  }
}
