void __fastcall handler(int a1)
{
  printf("receive signal :%d\n", a1);
  if ( a1 == 10 )
  {
    sub_ACE4(6000000, 6000000);
    dword_1B380 = 0;
    close(dword_258BC);
    sub_E4CC(&dword_1B3A8);
    sub_E4CC(&dword_1D410);
  }
  else if ( a1 == 12 )
  {
    sub_E4CC(&dword_1B3A8);
    sub_E4CC(&dword_1D410);
    sub_ACE4(30, 30);
    sub_AB74();
  }
}
