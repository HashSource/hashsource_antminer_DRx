void fpga_uninit()
{
  int *v0; // r12
  int v1; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r12
  _DWORD *v10; // r3
  int v11; // r1
  int *v12; // r12
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r12
  _DWORD *v22; // r3
  int v23; // r1
  int v24; // [sp+10h] [bp-1804h] BYREF
  int v25; // [sp+14h] [bp-1800h]
  int v26; // [sp+18h] [bp-17FCh]
  int v27; // [sp+1Ch] [bp-17F8h]
  int v28; // [sp+20h] [bp-17F4h]
  int v29; // [sp+24h] [bp-17F0h]
  int v30; // [sp+28h] [bp-17ECh]
  int v31; // [sp+2Ch] [bp-17E8h]
  char v32; // [sp+30h] [bp-17E4h]
  char v33[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_18C154 )
  {
    if ( munmap((void *)dword_18C15C, 0x1200u) < 0 )
    {
      LOWORD(v0) = -18800;
      HIWORD(v0) = (unsigned int)" %08x" >> 16;
      v1 = *v0;
      v2 = v0[1];
      v3 = v0[2];
      v4 = v0[3];
      v0 += 4;
      v24 = v1;
      v25 = v2;
      v26 = v3;
      v27 = v4;
      v5 = *v0;
      v6 = v0[1];
      v7 = v0[2];
      v8 = v0[3];
      v9 = v0[4];
      v28 = v5;
      v29 = v6;
      v30 = v7;
      v31 = v8;
      v32 = v9;
      V_LOCK();
      logfmt_raw(v33, 0x1000u, 0, &v24);
      V_UNLOCK();
      LOWORD(v10) = -12376;
      HIWORD(v10) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v11) = -19236;
      HIWORD(v11) = (unsigned int)"ing_kas" >> 16;
      zlog(*v10, v11, 172, "fpga_uninit", 11, 95, 100, v33);
    }
    if ( munmap((void *)dword_18C160, 0x1000000u) < 0 )
    {
      LOWORD(v12) = -18764;
      HIWORD(v12) = (unsigned int)"divider" >> 16;
      v13 = *v12;
      v14 = v12[1];
      v15 = v12[2];
      v16 = v12[3];
      v12 += 4;
      v24 = v13;
      v25 = v14;
      v26 = v15;
      v27 = v16;
      v17 = *v12;
      v18 = v12[1];
      v19 = v12[2];
      v20 = v12[3];
      v21 = v12[4];
      v28 = v17;
      v29 = v18;
      v30 = v19;
      v31 = v20;
      v32 = v21;
      V_LOCK();
      logfmt_raw(v33, 0x1000u, 0, &v24);
      V_UNLOCK();
      LOWORD(v22) = -12376;
      HIWORD(v22) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v23) = -19236;
      HIWORD(v23) = (unsigned int)"ing_kas" >> 16;
      zlog(*v22, v23, 172, "fpga_uninit", 11, 101, 100, v33);
    }
    dword_18C154 = 0;
    close(dword_18C158);
  }
}
