int __fastcall sub_25B80(int a1, _DWORD *a2, unsigned int a3)
{
  if ( sub_F3B0(a1, a3) && sub_15FDC((int)a2, a3) )
  {
    sub_25A94(a1, a2);
    if ( dword_612AC && byte_629D8 )
    {
      sub_1155C((int)a2, a3);
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_189B4(a1);
    return 0;
  }
}
