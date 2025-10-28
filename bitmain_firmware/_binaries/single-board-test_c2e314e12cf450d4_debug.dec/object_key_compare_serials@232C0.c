int __fastcall object_key_compare_serials(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 < *a2 )
    return -1;
  else
    return *a1 != *a2;
}
