int __fastcall sub_54A38(_DWORD *a1, int (__fastcall *a2)(__int16 *, int, int), int a3, __int16 a4)
{
  if ( (a4 & 0x200) != 0 )
    return sub_54360(a1, a4, 0, a2, a3);
  if ( !a1 )
    return -1;
  if ( *a1 <= 1u )
    return sub_54360(a1, a4, 0, a2, a3);
  return -1;
}
