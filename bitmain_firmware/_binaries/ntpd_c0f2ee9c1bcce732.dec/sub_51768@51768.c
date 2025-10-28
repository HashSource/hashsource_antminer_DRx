int __fastcall sub_51768(int a1)
{
  unsigned int v1; // r3
  unsigned int v2; // r2

  v1 = *(_DWORD *)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 16);
  if ( v1 < v2 )
  {
    *(_DWORD *)(a1 + 32) = v1 + 32;
    return 0;
  }
  else
  {
    if ( v1 != v2 )
      off_7C9FC("./../lib/isc/unix/ifiter_ioctl.c", 900, 2, "iter->pos == (unsigned int) iter->ifc.ifc_len");
    return sub_51728(a1);
  }
}
