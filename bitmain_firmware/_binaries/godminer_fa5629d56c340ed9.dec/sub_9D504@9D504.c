int __fastcall sub_9D504(int a1, char a2, int a3, char a4, int a5)
{
  int v5; // r6
  unsigned __int64 *v8; // r6
  double v9; // r0
  unsigned __int64 v10; // r0
  int v11; // r4
  char v14[4072]; // [sp+18h] [bp-1000h] BYREF

  if ( a3 <= 800 )
    v5 = a2 & 1;
  else
    v5 = 0;
  if ( v5 )
  {
    v8 = (unsigned __int64 *)(a1 + 1024);
    LODWORD(v9) = sub_146C4C(*(_QWORD *)(a1 + 1024));
    v10 = (unsigned __int64)(v9 / (double)a3 * *(float *)(a1 + 1004));
    *v8 = v10;
    *(float *)(a1 + 1004) = (float)a3;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "Update parameter failed, freq:%f", *(float *)(a1 + 1004));
    V_UNLOCK();
    LODWORD(v10) = zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/"
                     "godminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
                     171,
                     "parameter_update_ks5",
                     20,
                     901,
                     40,
                     v14);
  }
  if ( (unsigned int)(a5 - 1400) <= 0x12C )
    v11 = a4 & 1;
  else
    v11 = 0;
  if ( v11 )
    *(_DWORD *)(a1 + 1008) = a5;
  return v10;
}
