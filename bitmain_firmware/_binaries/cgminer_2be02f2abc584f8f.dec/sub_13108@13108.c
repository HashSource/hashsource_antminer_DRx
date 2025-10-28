void __fastcall sub_13108(int a1, _DWORD *a2)
{
  int v3; // r2
  int v4; // r3
  int v5; // r0
  int v6; // r3
  int v7; // r3
  _DWORD *v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r3

  --*(_DWORD *)(a1 + 360);
  v3 = a2[102];
  if ( v3 || a2[103] )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 352) + 404);
    v5 = *(_DWORD *)(v4 + 20);
    if ( a2 == (_DWORD *)(*(_DWORD *)(v4 + 16) - v5) )
      *(_DWORD *)(v4 + 16) = v3 + v5;
    v6 = a2[102];
    if ( v6 )
      *(_DWORD *)(v6 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 20) + 8) = a2[103];
    else
      *(_DWORD *)(a1 + 352) = a2[103];
    v7 = a2[103];
    if ( v7 )
      *(_DWORD *)(v7 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 20) + 4) = a2[102];
    v8 = *(_DWORD **)(*(_DWORD *)(a1 + 352) + 404);
    v9 = 12 * ((v8[1] - 1) & a2[108]);
    --*(_DWORD *)(*v8 + v9 + 4);
    v10 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 404);
    if ( *(_DWORD **)(v10 + v9) == a2 + 101 )
      *(_DWORD *)(v10 + v9) = a2[105];
    v11 = a2[104];
    if ( v11 )
      *(_DWORD *)(v11 + 16) = a2[105];
    v12 = a2[105];
    if ( v12 )
      *(_DWORD *)(v12 + 12) = a2[104];
    --*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 12);
  }
  else
  {
    free(**(void ***)(*(_DWORD *)(a1 + 352) + 404));
    free(*(void **)(*(_DWORD *)(a1 + 352) + 404));
    *(_DWORD *)(a1 + 352) = 0;
  }
}
