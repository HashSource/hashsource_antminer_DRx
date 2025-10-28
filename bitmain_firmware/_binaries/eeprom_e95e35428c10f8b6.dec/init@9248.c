void __fastcall init(int a1, int a2, int a3)
{
  int v6; // r6
  unsigned int v7; // r5
  int v8; // r4
  void (__fastcall *v9)(int, int, int); // t1

  init_proc();
  v6 = &off_11BE8 - off_11BE4;
  if ( v6 )
  {
    v7 = 0x11BE0u;
    v8 = 0;
    do
    {
      ++v8;
      v9 = *(void (__fastcall **)(int, int, int))(v7 + 4);
      v7 += 4;
      v9(a1, a2, a3);
    }
    while ( v8 != v6 );
  }
}
