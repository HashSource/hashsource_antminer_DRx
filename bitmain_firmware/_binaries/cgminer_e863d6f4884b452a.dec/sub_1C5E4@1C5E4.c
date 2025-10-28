int __fastcall sub_1C5E4(int a1)
{
  int v2; // r5
  int v3; // r2

  if ( pthread_mutex_lock(&stru_73A00) )
    sub_1BF10("inc_hw_errors", 8841);
  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(v2 + 44) + 1;
  ++dword_72D08;
  *(_DWORD *)(v2 + 44) = v3;
  if ( pthread_mutex_unlock(&stru_73A00) )
    sub_1BF54("inc_hw_errors", 8844);
  off_6CB70();
  return (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84))(a1);
}
