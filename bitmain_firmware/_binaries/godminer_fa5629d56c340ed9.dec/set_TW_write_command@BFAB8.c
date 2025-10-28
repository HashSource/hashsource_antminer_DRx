int __fastcall set_TW_write_command(int a1)
{
  int v1; // r5
  int v2; // r4
  int v3; // r0
  int v4; // t1
  int result; // r0

  v1 = a1 - 4;
  v2 = 64;
  do
  {
    v3 = v2;
    v2 += 4;
    v4 = *(_DWORD *)(v1 + 4);
    v1 += 4;
    result = fpga_write(v3, v4);
  }
  while ( v2 != 116 );
  return result;
}
