unsigned int __fastcall sub_2E0D0(unsigned int a1)
{
  unsigned int v1; // r12
  _DWORD *v2; // r2
  unsigned int v3; // r3
  int v4; // t1
  _DWORD v6[12]; // [sp+0h] [bp+0h] BYREF
  _DWORD v7[12]; // [sp+30h] [bp+30h] BYREF

  v1 = a1;
  if ( a1 > 0xBC19137F )
    v1 = a1 + 1139207296;
  v6[0] = 31;
  v6[1] = 28;
  v6[2] = 31;
  v6[3] = 30;
  v6[4] = 31;
  v6[5] = 30;
  v6[6] = 31;
  v6[7] = 31;
  v6[8] = 30;
  v6[9] = 31;
  v6[10] = 30;
  v6[11] = 31;
  v7[0] = 31;
  v7[1] = 29;
  v7[2] = 31;
  v7[3] = 30;
  v7[4] = 31;
  v7[5] = 30;
  v7[6] = 31;
  v7[7] = 31;
  v7[8] = 30;
  v7[9] = 31;
  v7[10] = 30;
  for ( v7[11] = 31; v1 > 0x7861F7F; v1 -= 126230400 )
    ;
  if ( v1 > 0x1E284FF )
  {
    for ( v1 -= 31622400; v1 > 0x1E1337F; v1 -= 31536000 )
      ;
    v2 = v6;
  }
  else
  {
    v2 = v7;
  }
  v3 = 86400 * *v2;
  if ( v1 >= v3 )
  {
    do
    {
      v4 = v2[1];
      ++v2;
      v1 -= v3;
      v3 = 86400 * v4;
    }
    while ( 86400 * v4 <= v1 );
  }
  return v3 - 86400 - v1;
}
