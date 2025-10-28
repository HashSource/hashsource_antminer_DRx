void __fastcall sub_496E8(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 == 6 )
    {
      sub_42960((_DWORD *)a1[2]);
      free(a1);
    }
    else
    {
      *_errno_location() = 22;
    }
  }
}
