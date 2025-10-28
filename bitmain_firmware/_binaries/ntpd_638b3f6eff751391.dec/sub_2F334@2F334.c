ssize_t __fastcall sub_2F334(int a1, int a2)
{
  int v2; // r5
  ssize_t result; // r0

  v2 = *(_DWORD *)(a2 + 60);
  result = write(*(_DWORD *)(v2 + 20), &unk_7A63C, 0x1Au);
  if ( result == 26 )
    ++*(_DWORD *)(v2 + 760);
  else
    result = sub_27040(a2, 3);
  if ( *(int *)(a2 + 116) <= 0 )
  {
    *(_DWORD *)(a2 + 116) = 5;
    return sub_2DDBC(a2 + 12, (const char *)(v2 + 40));
  }
  return result;
}
