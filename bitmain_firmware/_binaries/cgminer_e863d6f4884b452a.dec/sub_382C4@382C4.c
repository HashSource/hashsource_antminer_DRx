void __fastcall sub_382C4(int a1)
{
  int v2; // r4

  v2 = 22;
  do
  {
    if ( *(int *)(dword_6FAEC + 48) < 0 )
    {
      *(_DWORD *)(dword_6FAEC + 48) = a1;
      return;
    }
    sub_2A810();
    --v2;
  }
  while ( v2 );
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    sub_36AF0();
}
