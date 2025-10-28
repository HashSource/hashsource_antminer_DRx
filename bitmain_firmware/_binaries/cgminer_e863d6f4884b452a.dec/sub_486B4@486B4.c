int __fastcall sub_486B4(_DWORD *a1, char *a2, int a3)
{
  int v7; // r3
  int v8; // r3

  if ( a2 && sub_47CE0(a2, -1) )
    return sub_48494(a1, a2, a3);
  if ( a3 )
  {
    v7 = *(_DWORD *)(a3 + 4);
    if ( v7 != -1 )
    {
      v8 = v7 - 1;
      *(_DWORD *)(a3 + 4) = v8;
      if ( !v8 )
        sub_482FC((char *)a3);
    }
  }
  return -1;
}
