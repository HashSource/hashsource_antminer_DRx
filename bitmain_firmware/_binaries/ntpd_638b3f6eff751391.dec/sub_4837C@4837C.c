int __fastcall sub_4837C(int a1, int a2)
{
  void (__fastcall *v2)(int, int *); // r3
  int v4; // [sp+0h] [bp-44h] BYREF
  int v5; // [sp+18h] [bp-2Ch]

  v2 = *(void (__fastcall **)(int, int *))(a1 + 40);
  v5 = a2;
  v2(3, &v4);
  return v5;
}
