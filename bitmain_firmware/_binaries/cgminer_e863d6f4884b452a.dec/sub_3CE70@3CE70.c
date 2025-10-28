void __fastcall sub_3CE70(int a1, int a2, int a3, int a4)
{
  int v8; // r4
  char *v9; // r8
  int v10; // r3

  sub_2A7F4();
  sub_3C790(a1, 0, byte_6FAD8[a2 + 96], 32, a4);
  v8 = 0;
  v9 = &byte_6FAD8[16 * a1 + 4 * a2 + a3];
  v9[100] = 0;
  do
  {
    ++v8;
    sub_2A7F4();
    sub_3C960(a1, 0, byte_6FAD8[a2 + 96], 0x20u);
    if ( v8 == 3 )
      v10 = 0;
    else
      v10 = ((unsigned __int8)v9[100] ^ 1) & 1;
  }
  while ( v10 );
}
