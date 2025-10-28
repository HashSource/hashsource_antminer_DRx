int __fastcall sub_4AB84(int a1)
{
  int v2; // r5
  int *v3; // r6
  int v4; // r3
  int v6; // r0
  int v7; // r0

  if ( !*(_DWORD *)(a1 + 32) )
  {
    v2 = munmap(*(void **)a1, *(_DWORD *)(a1 + 8));
    v3 = _errno_location();
    goto LABEL_6;
  }
  v2 = *(_DWORD *)(a1 + 24) & 2;
  if ( !v2 )
  {
LABEL_17:
    v3 = _errno_location();
    goto LABEL_5;
  }
  v2 = *(_DWORD *)(a1 + 28) & 2;
  if ( !v2 )
  {
    if ( lseek(*(_DWORD *)(a1 + 12), 0, 0) )
    {
LABEL_7:
      v4 = *_errno_location();
      goto LABEL_8;
    }
    if ( write(*(_DWORD *)(a1 + 12), *(const void **)a1, *(_DWORD *)(a1 + 4)) < 0 )
    {
      v3 = _errno_location();
      v2 = *v3;
      goto LABEL_5;
    }
    v2 = 0;
    goto LABEL_17;
  }
  v2 = 0;
  v3 = _errno_location();
LABEL_5:
  free(*(void **)a1);
  *v3 = v2;
LABEL_6:
  if ( v2 )
    goto LABEL_7;
  v2 = close(*(_DWORD *)(a1 + 12));
  if ( v2 )
    goto LABEL_7;
  *(_DWORD *)(a1 + 12) = -1;
  *v3 = 0;
  v6 = *(_DWORD *)(a1 + 16);
  if ( v6 == -1 )
  {
    v4 = 0;
  }
  else
  {
    v7 = close(v6);
    *(_DWORD *)(a1 + 16) = -1;
    v4 = *v3;
    v2 = v7;
  }
LABEL_8:
  *(_DWORD *)(a1 + 20) = v4;
  return v2;
}
