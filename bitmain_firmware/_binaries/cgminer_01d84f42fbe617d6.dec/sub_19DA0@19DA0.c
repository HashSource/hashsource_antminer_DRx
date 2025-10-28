_DWORD *sub_19DA0()
{
  _DWORD *v0; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = calloc(1u, 0x1E0u);
  if ( !v0 )
  {
    strcpy(v2, "Failed to calloc work in make_work");
    sub_38438(3, v2, 1);
    sub_16724(1);
  }
  v0[85] = sub_19BC0();
  return v0;
}
