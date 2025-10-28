int __fastcall sub_472F4(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  char *i; // r4
  int v6; // r5
  int v7; // r0

  if ( !a1 || *a1 || !a2 || *a2 )
    return -1;
  v4 = sub_46714(a2);
  for ( i = (char *)sub_4678C((int)v4); i; i = (char *)sub_4678C(v7) )
  {
    v6 = sub_46798((int)(i - 16));
    if ( !v6 )
      break;
    if ( sub_46698(a1, i) )
    {
      if ( *(_DWORD *)(v6 + 4) != -1 )
        ++*(_DWORD *)(v6 + 4);
      sub_47098(a1, i, v6);
    }
    v7 = sub_46760(a2, (int)(i - 16));
  }
  return 0;
}
