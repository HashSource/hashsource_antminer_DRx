int __fastcall sub_47118(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  char *i; // r4
  int v6; // r0
  int v7; // r8

  if ( !a1 || *a1 || !a2 || *a2 )
    return -1;
  v4 = sub_46714(a2);
  for ( i = (char *)sub_4678C((int)v4); i; i = (char *)sub_4678C(v6) )
  {
    v7 = sub_46798((int)(i - 16));
    if ( !v7 )
      break;
    if ( !sub_46698(a1, i) )
    {
      if ( *(_DWORD *)(v7 + 4) != -1 )
        ++*(_DWORD *)(v7 + 4);
      sub_47098(a1, i, v7);
    }
    v6 = sub_46760(a2, (int)(i - 16));
  }
  return 0;
}
