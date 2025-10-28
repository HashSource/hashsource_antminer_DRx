_QWORD *__fastcall sub_47D40(int a1)
{
  __int64 v1; // r4
  _QWORD *result; // r0

  if ( a1 && *(_DWORD *)a1 == 3 )
    v1 = *(_QWORD *)(a1 + 8);
  else
    v1 = 0;
  result = sub_47850((void *)0x10);
  if ( result )
  {
    result[1] = v1;
    *result = 0x100000003LL;
  }
  return result;
}
