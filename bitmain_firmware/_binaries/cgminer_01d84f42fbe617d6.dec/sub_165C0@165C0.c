void __fastcall sub_165C0(int a1, _DWORD *a2)
{
  int v3; // r3
  int v4; // r2
  int v5; // r0
  bool v6; // zf
  int v7; // r2
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r3

  --*(_DWORD *)(a1 + 360);
  v3 = a2[87];
  if ( v3 || a2[88] )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 352) + 344);
    v5 = *(_DWORD *)(v4 + 20);
    if ( (_DWORD *)(*(_DWORD *)(v4 + 16) - v5) == a2 )
    {
      *(_DWORD *)(v4 + 16) = v3 + v5;
      v3 = a2[87];
    }
    v6 = v3 == 0;
    if ( v3 )
    {
      v5 = *(_DWORD *)(a1 + 352);
      v4 = a2[88];
    }
    else
    {
      v3 = a2[88];
    }
    if ( v6 )
      *(_DWORD *)(a1 + 352) = v3;
    else
      v5 = *(_DWORD *)(v5 + 344);
    if ( !v6 )
    {
      v3 += *(_DWORD *)(v5 + 20);
      *(_DWORD *)(v3 + 8) = v4;
    }
    v7 = a2[88];
    if ( !v6 )
      v3 = *(_DWORD *)(a1 + 352);
    if ( v7 )
    {
      *(_DWORD *)(v7 + *(_DWORD *)(*(_DWORD *)(v3 + 344) + 20) + 4) = a2[87];
      v3 = *(_DWORD *)(a1 + 352);
    }
    v8 = **(_DWORD **)(v3 + 344);
    v9 = 12 * ((*(_DWORD *)(*(_DWORD *)(v3 + 344) + 4) - 1) & a2[93]);
    --*(_DWORD *)(v8 + v9 + 4);
    v10 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 344);
    if ( *(_DWORD **)(v10 + v9) == a2 + 86 )
      *(_DWORD *)(v10 + v9) = a2[90];
    v11 = a2[89];
    if ( v11 )
      *(_DWORD *)(v11 + 16) = a2[90];
    v12 = a2[90];
    if ( v12 )
      *(_DWORD *)(v12 + 12) = a2[89];
    --*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 12);
  }
  else
  {
    free(**(void ***)(*(_DWORD *)(a1 + 352) + 344));
    free(*(void **)(*(_DWORD *)(a1 + 352) + 344));
    *(_DWORD *)(a1 + 352) = 0;
  }
}
