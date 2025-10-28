unsigned int __fastcall xxtea_encode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int *v4; // r8
  unsigned int v5; // r4
  int v6; // r5
  unsigned int v7; // r11
  unsigned int *v8; // r9
  int v9; // lr
  unsigned int v10; // r10
  int v11; // r3
  unsigned int result; // r0
  char v13[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( a2 <= 1 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, 1556508);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/common/general/xxtea.c",
             150,
             "xxtea_encode",
             12,
             24,
             100,
             v13);
  }
  else
  {
    v4 = &a1[a2 - 1];
    v5 = *v4;
    v6 = a2 - 1;
    v7 = 0;
    do
    {
      v8 = a1;
      v9 = 0;
      v7 -= 1640531527;
      v10 = v7 >> 2;
      do
      {
        v11 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v10 ^ (unsigned __int8)v9++) & 3));
        v5 = (((v11 ^ v5) + (v7 ^ v8[1])) ^ (((4 * v8[1]) ^ (v5 >> 5)) + ((16 * v5) ^ (v8[1] >> 3)))) + *v8;
        *v8++ = v5;
      }
      while ( v9 != v6 );
      result = (16 * v5) ^ (*a1 >> 3);
      v5 = (((v5 ^ *(_DWORD *)(a3 + 4 * (((unsigned __int8)v10 ^ (unsigned __int8)v6) & 3))) + (v7 ^ *a1))
          ^ (((4 * *a1) ^ (v5 >> 5)) + result))
         + *v4;
      *v4 = v5;
    }
    while ( v7 != -1640531527 * (0x34 / a2) - 1253254570 );
  }
  return result;
}
