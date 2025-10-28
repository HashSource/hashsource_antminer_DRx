int __fastcall sub_50918(int a1)
{
  int v1; // r5
  int v2; // r7
  bool v3; // cc
  char *v4; // r6
  int v5; // r3
  int v6; // r2
  int v7; // r3

  v1 = 0;
  dword_C9BF0 = 0;
  v2 = a1 + dword_C9C0C;
  dword_C9BF4 = 0;
  v3 = a1 + dword_C9C0C <= 0;
  dword_C9C04 = 0;
  dword_C9BFC = 0;
  dword_C9C08 = 0;
  dword_C9C00 = 0;
  dword_C9C0C = 0;
  if ( v3 )
  {
    v7 = 1;
  }
  else
  {
    do
    {
      ++v1;
      v4 = sub_4F524(0x448u);
      memset(v4, 0, 0x448u);
      v5 = dword_C9C04;
      v6 = dword_C9BFC + 1;
      *((_DWORD *)v4 + 1) = dword_C9BF8;
      dword_C9BF8 = (int)v4;
      dword_C9C04 = v5 + 1;
      dword_C9BFC = v6;
    }
    while ( v2 != v1 );
    v7 = dword_C9C08 + 1;
  }
  dword_C9C08 = v7;
  return sub_5B388(sub_507C8);
}
