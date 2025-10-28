int __fastcall get_uuid(_DWORD *a1)
{
  if ( !a1 )
    return -1;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return sub_A8060((int)a1);
}
