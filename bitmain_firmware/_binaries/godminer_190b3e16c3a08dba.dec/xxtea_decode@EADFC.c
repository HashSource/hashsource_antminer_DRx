int __fastcall xxtea_decode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int v5; // r2
  unsigned int v6; // r3
  unsigned int *v7; // r10
  unsigned int v8; // r11
  int v9; // r5
  unsigned int v10; // r9
  unsigned int *v11; // r6
  unsigned int v12; // t1
  int v13; // r4
  int v14; // r4
  int result; // r0
  char v16[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( a2 <= 1 )
  {
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, 1442508);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/common/general/xxtea.c",
             150,
             "xxtea_decode",
             12,
             53,
             100,
             v16);
  }
  else
  {
    v5 = -1640531527 * (0x34 / a2 + 6);
    v6 = *a1;
    v7 = &a1[a2 - 1];
    v8 = v5 + 1640531527 * (0x34 / a2) + 1253254570;
    do
    {
      v9 = a2 - 1;
      v10 = v5 >> 2;
      v11 = v7;
      do
      {
        v12 = *--v11;
        v13 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v10 ^ (unsigned __int8)v9--) & 3));
        v6 = v11[1] - (((v12 ^ v13) + (v5 ^ v6)) ^ (((4 * v6) ^ (v12 >> 5)) + ((16 * v12) ^ (v6 >> 3))));
        v11[1] = v6;
      }
      while ( v9 );
      v14 = v5 ^ v6;
      v5 += 1640531527;
      result = (4 * v6) ^ (*v7 >> 5);
      v6 = *a1 - ((result + ((16 * *v7) ^ (v6 >> 3))) ^ ((*v7 ^ *(_DWORD *)(a3 + 4 * (v10 & 3))) + v14));
      *a1 = v6;
    }
    while ( v5 != v8 );
  }
  return result;
}
