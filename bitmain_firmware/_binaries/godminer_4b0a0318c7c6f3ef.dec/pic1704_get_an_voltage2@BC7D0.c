int __fastcall pic1704_get_an_voltage2(char a1, int a2)
{
  float v2; // s0
  float v3; // s1
  int result; // r0
  int *v6; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r5
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r1
  double v17; // d9
  int *v18; // r12
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  unsigned int v27; // [sp+2Ch] [bp-180Ch] BYREF
  unsigned int v28; // [sp+30h] [bp-1808h] BYREF
  unsigned int v29; // [sp+34h] [bp-1804h] BYREF
  int s; // [sp+38h] [bp-1800h] BYREF
  int v31; // [sp+3Ch] [bp-17FCh]
  int v32; // [sp+40h] [bp-17F8h]
  int v33; // [sp+44h] [bp-17F4h]
  int v34; // [sp+48h] [bp-17F0h]
  int v35; // [sp+4Ch] [bp-17ECh]
  int v36; // [sp+50h] [bp-17E8h]
  int v37; // [sp+54h] [bp-17E4h]
  char v38[4096]; // [sp+838h] [bp-1000h] BYREF

  v27 = 0;
  v28 = 0;
  v29 = 0;
  result = pic1704_get_all_voltage(a1, &v27, &v28, &v29);
  if ( (_BYTE)result )
  {
    LOWORD(v6) = 20896;
    HIWORD(v6) = (unsigned int)"" >> 16;
    LOWORD(v11) = 20532;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v6 += 4;
    HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
    s = v7;
    v31 = v8;
    v32 = v9;
    v33 = v10;
    v12 = v6[1];
    v13 = v6[2];
    v14 = v6[3];
    v34 = *v6;
    v35 = v12;
    v36 = v13;
    LOWORD(v37) = v14;
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v15) = 20140;
    HIWORD(v15) = (unsigned int)"set_hardware_type" >> 16;
    zlog(*v11, v15, 165, "pic1704_get_an_voltage2", 23, 473, 20, v38);
    snprintf(
      (char *)&s,
      0x800u,
      "an0 = %f, an2 %f, an6 %f.",
      (double)v27 * 3.3 * 0.0009765625,
      (double)v28 * 3.3 * 0.0009765625,
      (double)v29 * 3.3 * 0.0009765625);
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v16) = 20140;
    HIWORD(v16) = (unsigned int)"set_hardware_type" >> 16;
    zlog(*v11, v16, 165, "pic1704_get_an_voltage2", 23, 474, 20, v38);
    if ( a2 && ((v17 = (double)v29 * 3.3 * 0.0009765625, v2 > v17) || v3 < v17) )
    {
      LOWORD(v18) = 20956;
      HIWORD(v18) = (unsigned int)"platform first!!" >> 16;
      v19 = *v18;
      v20 = v18[1];
      v21 = v18[2];
      v22 = v18[3];
      v18 += 4;
      s = v19;
      v31 = v20;
      v32 = v21;
      v33 = v22;
      v23 = v18[1];
      v24 = v18[2];
      v25 = v18[3];
      v34 = *v18;
      v35 = v23;
      v36 = v24;
      v37 = v25;
      V_LOCK();
      logfmt_raw(v38, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v26) = 20140;
      HIWORD(v26) = (unsigned int)"set_hardware_type" >> 16;
      return zlog(*v11, v26, 165, "pic1704_get_an_voltage2", 23, 480, 20, v38);
    }
    else
    {
      return sub_BB7A8(v28);
    }
  }
  return result;
}
