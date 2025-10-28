bool __fastcall sub_59454(int a1, int *a2, int a3)
{
  int v6; // r0
  int v8; // [sp+4h] [bp-8h] BYREF

  v8 = 0;
  dword_93CB4 = *a2;
  do
    v6 = sub_595EC(a1, a2, &v8, a3);
  while ( v6 == 1 );
  return v6 == 0;
}
