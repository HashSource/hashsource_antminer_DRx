__int64 __fastcall json_integer_value(int a1)
{
  if ( a1 && *(_DWORD *)a1 == 3 )
    return *(_QWORD *)(a1 + 8);
  else
    return 0;
}
