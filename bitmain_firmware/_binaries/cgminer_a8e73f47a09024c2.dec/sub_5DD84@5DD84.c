bool __fastcall sub_5DD84(int a1, int *a2, int a3)
{
  int v6; // r0
  int v8; // [sp+4h] [bp-8h] BYREF

  v8 = 0;
  dword_B43C0 = *a2;
  do
    v6 = sub_5DF1C(a1, a2, &v8, a3);
  while ( v6 == 1 );
  return v6 == 0;
}
