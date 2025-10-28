int __fastcall sub_10CAC(int a1, int a2, int a3, int a4)
{
  if ( dword_1B380 == 1 )
    return SSL_write(a1, a3, a4);
  else
    return -1;
}
