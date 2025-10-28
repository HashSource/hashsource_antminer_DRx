int __fastcall scrypt_test(int a1, int a2, unsigned int a3)
{
  int v3; // r0
  unsigned int v4; // r4
  unsigned int *v5; // r1
  unsigned int v6; // t1
  unsigned int v7; // r0
  int v9; // [sp-20208h] [bp-20284h] BYREF
  int v10[7]; // [sp+0h] [bp-7Ch] BYREF
  unsigned int v11; // [sp+1Ch] [bp-60h] BYREF
  int v12[18]; // [sp+20h] [bp-5Ch] BYREF
  char v13; // [sp+68h] [bp-14h] BYREF
  unsigned int v14; // [sp+6Ch] [bp-10h]

  v3 = a1 - 4;
  v4 = *(_DWORD *)(a2 + 28);
  v5 = &v11;
  do
  {
    v6 = *(_DWORD *)(v3 + 4);
    v3 += 4;
    v5[1] = bswap32(v6);
    ++v5;
  }
  while ( v5 != (unsigned int *)&v13 );
  v14 = bswap32(a3);
  sub_EDE54(v12, (int)&v9, v10);
  v7 = bswap32(v11);
  if ( v7 >= 0x10000 )
    return -1;
  else
    return v4 >= v7;
}
