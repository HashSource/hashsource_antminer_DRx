int __fastcall sub_5C1D8(int a1, __int64 a2)
{
  if ( !a1 )
    return -1;
  if ( *(_DWORD *)a1 != 3 )
    return -1;
  *(_QWORD *)(a1 + 8) = a2;
  return 0;
}
