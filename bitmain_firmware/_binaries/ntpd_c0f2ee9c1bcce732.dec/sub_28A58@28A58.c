unsigned __int16 *__fastcall sub_28A58(int a1, int a2, int a3)
{
  int v5; // r12
  int v7; // [sp+Ch] [bp-10h]
  void *v8; // [sp+14h] [bp-8h] BYREF

  if ( dword_7CF4C > 2 )
  {
    v7 = a2;
    puts("wants interface statistics");
    a2 = v7;
  }
  if ( dword_7FF54 )
    v5 = 136;
  else
    v5 = 48;
  v8 = sub_28654(a1, a2, (char *)(a3 + 2), (char *)(a3 + 3), v5);
  sub_14884((int)sub_283DC, (int)&v8);
  return sub_28778();
}
