void __fastcall sub_1AF30(int a1, int a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r5
  int v5; // r4
  int v6; // r3
  int v7; // r6
  int v8; // r3
  _DWORD *v9; // r2
  int v10; // r3
  int v11; // r2
  __int64 v12; // r2

  v2 = *(_DWORD *)(a1 + 352);
  --*(_DWORD *)(a1 + 360);
  v3 = *(_DWORD *)(a2 + 408);
  if ( !v3 )
  {
    v7 = *(_DWORD *)(a2 + 412);
    v4 = *(_DWORD *)(v2 + 404);
    if ( !v7 )
    {
      free(*(void **)v4);
      free(*(void **)(*(_DWORD *)(a1 + 352) + 404));
      *(_DWORD *)(a1 + 352) = 0;
      return;
    }
    v6 = *(_DWORD *)(v4 + 20);
    v5 = a2 + 404;
    if ( a2 != *(_DWORD *)(v4 + 16) - v6 )
      goto LABEL_17;
    goto LABEL_13;
  }
  v4 = *(_DWORD *)(v2 + 404);
  v5 = a2 + 404;
  v6 = *(_DWORD *)(v4 + 20);
  if ( a2 == *(_DWORD *)(v4 + 16) - v6 )
  {
LABEL_13:
    *(_DWORD *)(v4 + 16) = v6 + v3;
    v3 = *(_DWORD *)(a2 + 408);
    if ( v3 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 20);
      goto LABEL_3;
    }
    v7 = *(_DWORD *)(a2 + 412);
LABEL_17:
    *(_DWORD *)(a1 + 352) = v7;
    goto LABEL_4;
  }
LABEL_3:
  *(_DWORD *)(v6 + v3 + 8) = *(_DWORD *)(a2 + 412);
  v7 = *(_DWORD *)(a1 + 352);
LABEL_4:
  v8 = *(_DWORD *)(a2 + 412);
  v9 = *(_DWORD **)(v7 + 404);
  if ( v8 )
  {
    *(_DWORD *)(v8 + v9[5] + 4) = *(_DWORD *)(a2 + 408);
    v9 = *(_DWORD **)(*(_DWORD *)(a1 + 352) + 404);
  }
  v10 = 12 * ((v9[1] - 1) & *(_DWORD *)(a2 + 432));
  --*(_DWORD *)(*v9 + v10 + 4);
  v11 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 404);
  if ( *(_DWORD *)(v11 + v10) == v5 )
    *(_DWORD *)(v11 + v10) = *(_DWORD *)(a2 + 420);
  v12 = *(_QWORD *)(a2 + 416);
  if ( (_DWORD)v12 )
  {
    *(_DWORD *)(v12 + 16) = HIDWORD(v12);
    HIDWORD(v12) = *(_DWORD *)(a2 + 420);
  }
  if ( HIDWORD(v12) )
    *(_DWORD *)(HIDWORD(v12) + 12) = *(_DWORD *)(a2 + 416);
  --*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 12);
}
