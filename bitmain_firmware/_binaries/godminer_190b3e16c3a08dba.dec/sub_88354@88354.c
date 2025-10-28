int __fastcall sub_88354(int result)
{
  float v1; // s0
  signed int v2; // r6
  float v3; // s19
  int v4; // r10
  int v5; // r8
  int v6; // r9
  int v7; // r5
  int v8; // s15
  int v9; // r4
  float v10; // s17
  int v11; // r0
  int v12; // r0
  float v13; // s16
  __int64 v15; // [sp+28h] [bp-1024h]
  unsigned int *v16; // [sp+38h] [bp-1014h]
  int v17; // [sp+44h] [bp-1008h]
  char v18[4100]; // [sp+48h] [bp-1004h] BYREF

  v2 = 2;
  v16 = (unsigned int *)result;
  v17 = 2;
  *(_DWORD *)result = -1068236443;
  while ( 1 )
  {
    v3 = (float)v2;
    v4 = 0;
    v5 = 0;
    while ( 2 )
    {
      v6 = v5 + 1;
      v7 = v5;
      do
      {
        v8 = (int)(float)((float)((float)((float)((float)(v7 + 1) * (float)((float)(v5 + 1) * v1)) * v3) / 25.0) * 100.0);
        v15 = 1374389535LL * v8;
        v9 = v8 / 100;
        if ( v8 % 100 > 50 )
          ++v9;
        if ( (unsigned int)(v9 - 16) <= 0xEA )
        {
          v10 = (float)((float)v9 * 25.0) / v3;
          if ( (v2 != 1 || v10 <= 3125.0) && v10 <= 3200.0 )
          {
            result = 25 * v9;
            if ( v10 >= 2000.0 )
            {
              v11 = sub_12DB40(result, v2);
              v12 = sub_12DB40(v11, v5 + 1);
              result = sub_12DB40(v12, v7 + 1);
              v13 = (float)result;
              *v16 = v7 & 7 | (v2 << 8) | 0xC0000000 | v4 | (v9 << 16) | ((v10 > 2400.0) << 28);
              if ( fabsf((float)result - v1) < 3.0 )
              {
                V_LOCK();
                logfmt_raw(
                  v18,
                  0x1000u,
                  0,
                  "target_freq:%.2f actual_freq:%.2f,vco:%.2f fbdiv:%d refdiv:%d postdiv1:%d, postdiv2:%d",
                  v1,
                  v13,
                  v10,
                  v9,
                  v2,
                  v5,
                  v7,
                  v15);
                V_UNLOCK();
                return zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/bu"
                         "ild/godminer-origin_godminer-new/backend/chip_setting.c",
                         150,
                         "inferred_plldivider",
                         19,
                         538,
                         20,
                         v18);
              }
            }
          }
        }
      }
      while ( v7-- != 0 );
      v4 += 16;
      ++v5;
      if ( v6 != 8 )
        continue;
      break;
    }
    v2 = 1;
    if ( v17 == 1 )
      return result;
    v17 = 1;
  }
}
