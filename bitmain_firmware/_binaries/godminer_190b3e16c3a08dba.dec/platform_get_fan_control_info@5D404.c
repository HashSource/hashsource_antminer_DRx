float *__fastcall platform_get_fan_control_info(float *result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3
  float v7; // r1
  float v8; // r2
  float v9; // r3
  float v10; // lr

  v1 = dword_18D8B0;
  v2 = dword_18D8B4;
  v3 = dword_18D8B8;
  *(_DWORD *)result = dword_18D8AC;
  *((_DWORD *)result + 1) = v1;
  *((_DWORD *)result + 2) = v2;
  *((_DWORD *)result + 3) = v3;
  v4 = dword_18D8C0;
  v5 = dword_18D8C4;
  v6 = dword_18D8C8;
  *((_DWORD *)result + 4) = dword_18D8BC;
  *((_DWORD *)result + 5) = v4;
  *((_DWORD *)result + 6) = v5;
  *((_DWORD *)result + 7) = v6;
  v7 = flt_18D8D0;
  v8 = flt_18D8D4;
  v9 = flt_18D8D8;
  v10 = flt_18D8DC;
  *((_DWORD *)result + 8) = dword_18D8CC;
  result[9] = v7;
  result[10] = v8;
  result[11] = v9;
  result[12] = v10;
  return result;
}
