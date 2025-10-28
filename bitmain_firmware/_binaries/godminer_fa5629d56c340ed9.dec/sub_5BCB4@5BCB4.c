int __fastcall sub_5BCB4(_DWORD *a1, int a2, int a3)
{
  int v3; // r5
  const char *v4; // r1
  int v8; // r3

  v3 = a1[283];
  if ( v3 )
  {
    v4 = *(const char **)(a2 + 1580);
    if ( v4 && strcmp((const char *)(a3 + 16), v4) )
    {
      return 1;
    }
    else
    {
      *(_DWORD *)(v3 + 16) = *(_DWORD *)(a3 + 48);
      v8 = *(_DWORD *)(a3 + 58);
      a1[275] = *(_DWORD *)(a3 + 54);
      a1[276] = v8;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(a3 + 72);
      return 0;
    }
  }
  else
  {
    printf(aInvalidPointer, "private", a3);
    return 3;
  }
}
