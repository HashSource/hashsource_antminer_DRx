_DWORD *sub_18360()
{
  _DWORD *v0; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = calloc(1u, 0x220u);
  if ( !v0 )
  {
    strcpy(v2, "Failed to calloc work in make_work");
    sub_3F1C0(3, v2, 1);
    sub_132C4(1);
  }
  v0[100] = sub_BDC8();
  return v0;
}
