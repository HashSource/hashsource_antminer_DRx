int __fastcall sub_46E60(int a1, unsigned int a2, int a3)
{
  char *v6; // r0
  char *v7; // r6
  char *v8; // r1
  int v10; // r3
  int v11; // r3
  int v12; // r3

  if ( !a3 )
    return -1;
  if ( !a1
    || *(_DWORD *)a1 != 1
    || a1 == a3
    || *(_DWORD *)(a1 + 12) < a2
    || (v6 = (char *)sub_46598((_DWORD *)a1, 1, 0), (v7 = v6) == 0) )
  {
    v11 = *(_DWORD *)(a3 + 4);
    if ( v11 != -1 )
    {
      v12 = v11 - 1;
      *(_DWORD *)(a3 + 4) = v12;
      if ( !v12 )
        sub_46C5C((void **)a3);
    }
    return -1;
  }
  v8 = *(char **)(a1 + 16);
  if ( v8 == v6 )
  {
    memmove(&v8[4 * a2 + 4], &v8[4 * a2], 4 * (*(_DWORD *)(a1 + 12) - a2));
  }
  else
  {
    memcpy(*(void **)(a1 + 16), v6, 4 * a2);
    memcpy((void *)(*(_DWORD *)(a1 + 16) + 4 * (a2 + 1)), &v7[4 * a2], 4 * (*(_DWORD *)(a1 + 12) - a2));
    sub_45E0C(v7);
  }
  v10 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * a2) = a3;
  *(_DWORD *)(a1 + 12) = v10 + 1;
  return 0;
}
