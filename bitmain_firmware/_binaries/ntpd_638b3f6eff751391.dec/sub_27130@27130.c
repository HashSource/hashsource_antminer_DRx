void __fastcall sub_27130(int a1)
{
  void *v2; // r0
  void (__fastcall *v3)(_DWORD, int); // r3

  v2 = *(void **)(a1 + 60);
  if ( v2 )
  {
    v3 = (void (__fastcall *)(_DWORD, int))*((_DWORD *)*(&off_65B1C + *(unsigned __int8 *)(a1 + 64)) + 1);
    if ( v3 )
    {
      v3(*(unsigned __int8 *)(a1 + 65), a1);
      v2 = *(void **)(a1 + 60);
    }
    free(v2);
    *(_DWORD *)(a1 + 60) = 0;
  }
}
