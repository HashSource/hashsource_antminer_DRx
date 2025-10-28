void __fastcall sub_383B0(int a1, int a2)
{
  _DWORD *v2; // r4

  v2 = *(_DWORD **)(*(_DWORD *)(a2 + 60) + 28);
  if ( v2 )
  {
    shmdt(*v2);
    free(v2);
  }
}
