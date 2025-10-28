int __fastcall sync_get_status_base5(int a1, int a2, int *a3, int *a4, unsigned __int64 a5)
{
  if ( *(_BYTE *)(a1 + 260) )
    return sub_CD92C(a1, a2, a3, a4, a5);
  else
    return 4;
}
