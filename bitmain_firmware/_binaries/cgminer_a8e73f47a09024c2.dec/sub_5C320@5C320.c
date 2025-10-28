void __fastcall sub_5C320(_DWORD *a1)
{
  __int64 v1; // r0

  if ( a1 )
  {
    if ( *a1 == 3 )
    {
      v1 = sub_5C19C((int)a1);
      sub_5ED34(v1, HIDWORD(v1));
    }
    else if ( *a1 == 4 )
    {
      sub_5C270();
    }
  }
}
