int __fastcall sub_490F0(
        const char *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        const char *a6,
        const char *a7)
{
  const char *v8[8]; // [sp+4h] [bp-20h] BYREF

  v8[1] = a2;
  v8[0] = a1;
  v8[2] = a3;
  v8[3] = a4;
  v8[6] = a7;
  v8[4] = a5;
  v8[5] = a6;
  sub_48EDC(v8);
  return sub_48FE8((int *)v8);
}
