void __fastcall sub_300B8(int a1, int a2)
{
  void *v3; // r0

  close(dword_CB590);
  v3 = *(void **)(*(_DWORD *)(a2 + 60) + 28);
  if ( v3 )
    free(v3);
}
