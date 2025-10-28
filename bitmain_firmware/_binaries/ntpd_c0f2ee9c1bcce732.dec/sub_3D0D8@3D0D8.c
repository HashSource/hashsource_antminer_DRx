size_t __fastcall sub_3D0D8(size_t result)
{
  int v1; // r5
  _DWORD *v2; // r4
  int v3; // [sp+4h] [bp-8h] BYREF

  v1 = *(_DWORD *)(result + 60);
  v3 = 2;
  v2 = *(_DWORD **)(v1 + 28);
  if ( (int)v2[4] > 0 )
    result = sub_276A0(result);
  if ( (*(_BYTE *)(v1 + 752) & 4) == 0 )
  {
    ioctl(*(_DWORD *)(v1 + 20), 0x5417u, &v3);
    result = write(*(_DWORD *)(v1 + 20), "ATH\r", 4u);
  }
  v2[1] = 6;
  v2[2] = 3;
  return result;
}
