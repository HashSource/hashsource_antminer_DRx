unsigned __int16 *__fastcall sub_28D68(int a1, int a2, int a3)
{
  int v5; // r12
  int v7; // [sp+Ch] [bp-Ch]
  char *v8; // [sp+14h] [bp-4h] BYREF

  if ( dword_7CF4C > 2 )
  {
    v7 = a2;
    puts("wants restrict list summary");
    a2 = v7;
  }
  if ( dword_7FF54 )
    v5 = 56;
  else
    v5 = 16;
  v8 = (char *)sub_28654(a1, a2, (char *)(a3 + 2), (char *)(a3 + 3), v5);
  sub_2854C(dword_CB538, &v8);
  if ( dword_7FF54 )
    sub_285D4(dword_CB53C, &v8);
  return sub_28778();
}
