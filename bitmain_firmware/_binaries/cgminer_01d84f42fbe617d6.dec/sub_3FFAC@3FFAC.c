int sub_3FFAC()
{
  int v0; // r4
  _DWORD *v1; // r6
  int v2; // r5
  int v3; // t1
  int result; // r0

  v0 = 805859;
  v1 = &unk_63178;
  v2 = 805836;
  do
  {
    v3 = *(unsigned __int8 *)++v0;
    if ( v3 == 1 )
    {
      sub_3F864(*(_DWORD *)(v2 + 8), 0, 12, 28, 38915);
      *v1 = 4;
      usleep(0xC8u);
      sub_3F864(*(_DWORD *)(v2 + 8), 0, 201, 28, 38915);
      v1[2] = 4;
      result = usleep(0xC8u);
    }
    v2 += 4;
    v1 += 6;
  }
  while ( v0 != 805863 );
  return result;
}
