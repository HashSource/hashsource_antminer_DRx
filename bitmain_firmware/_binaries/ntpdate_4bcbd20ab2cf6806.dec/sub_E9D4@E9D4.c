int __fastcall sub_E9D4(int a1)
{
  int v1; // r5
  int v2; // r7
  bool v3; // cc
  char *v4; // r6
  int v5; // r3
  int v6; // r2
  int v7; // r3

  v1 = 0;
  dword_23FE8 = 0;
  v2 = a1 + dword_24004;
  dword_23FEC = 0;
  v3 = a1 + dword_24004 <= 0;
  dword_23FFC = 0;
  dword_23FF4 = 0;
  dword_24000 = 0;
  dword_23FF8 = 0;
  dword_24004 = 0;
  if ( v3 )
  {
    v7 = 1;
  }
  else
  {
    do
    {
      ++v1;
      v4 = sub_D894(0x448u);
      memset(v4, 0, 0x448u);
      v5 = dword_23FFC;
      v6 = dword_23FF4 + 1;
      *((_DWORD *)v4 + 1) = dword_23FF0;
      dword_23FF0 = (int)v4;
      dword_23FFC = v5 + 1;
      dword_23FF4 = v6;
    }
    while ( v2 != v1 );
    v7 = dword_24000 + 1;
  }
  dword_24000 = v7;
  return sub_16790(sub_E884);
}
