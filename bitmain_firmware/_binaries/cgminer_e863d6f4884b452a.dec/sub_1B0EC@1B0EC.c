_DWORD *sub_1B0EC()
{
  _DWORD *result; // r0
  int v1; // r1
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  result = calloc(1u, 0x220u);
  if ( !result )
  {
    strcpy(v2, "Failed to calloc work in make_work");
    sub_343C4(3, v2, 1);
    sub_1B070(1, 1);
  }
  v1 = dword_6DB9C + 1;
  result[100] = dword_6DB9C;
  dword_6DB9C = v1;
  return result;
}
