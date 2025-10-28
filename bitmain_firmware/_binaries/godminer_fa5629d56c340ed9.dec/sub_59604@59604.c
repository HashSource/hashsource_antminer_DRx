int __fastcall sub_59604(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r6
  char *v5; // r0

  v3 = (_DWORD *)a1[283];
  if ( v3 )
  {
    v5 = (char *)a1[281];
    if ( v5 )
    {
      if ( a3 != -16 )
        strcpy(v5, (const char *)(a3 + 16));
    }
    memcpy(a1 + 268, (const void *)(a3 + 80), *v3 + 5);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private", a3);
    return 3;
  }
}
