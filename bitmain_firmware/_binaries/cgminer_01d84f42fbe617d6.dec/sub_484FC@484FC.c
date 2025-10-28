bool __fastcall sub_484FC(int a1, int *a2, int a3)
{
  int v4; // r1
  int v7; // r0
  int v9; // [sp+4h] [bp-8h] BYREF

  v4 = *a2;
  v9 = 0;
  dword_C54D4 = v4;
  do
    v7 = sub_48664(a1, a2, &v9, a3);
  while ( v7 == 1 );
  return v7 == 0;
}
