int __fastcall get_chain_mps_voltage(int a1, _WORD *a2)
{
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  int result; // r0
  unsigned __int16 v8; // r9
  __int16 v9; // r10
  int v10; // r9
  unsigned int v11; // r8
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r1
  unsigned __int8 v15; // [sp+10h] [bp-1008h] BYREF
  unsigned __int8 v16; // [sp+11h] [bp-1007h]
  __int16 src; // [sp+18h] [bp-1000h] BYREF
  char v18; // [sp+1Ah] [bp-FFEh]

  *a2 = -1;
  if ( !sub_A6190(a1, 0)
    || (src = 8562, v18 = 2, sub_A5DC8(a1, 60, &src, 3u, &v15, 2u))
    || (v8 = v15, v9 = v16, !sub_A6190(a1, 2))
    || (v18 = 2, src = 3442, (result = sub_A5DC8(a1, 60, &src, 3u, &v15, 2u)) != 0) )
  {
    V_LOCK();
    LOWORD(v4) = -21664;
    HIWORD(v4) = (unsigned int)"" >> 16;
    logfmt_raw((char *)&src, 0x1000u, 0, v4, a1);
    V_UNLOCK();
    LOWORD(v5) = -12376;
    HIWORD(v5) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v6) = -21984;
    HIWORD(v6) = (unsigned int)"_core_clk_tops_kas" >> 16;
    zlog(*v5, v6, 164, "get_chain_mps_voltage", 21, 193, 100, &src);
    return 1;
  }
  else
  {
    v10 = 10 * ((v8 | (unsigned __int16)(v9 << 8)) & 0x1FF) + 490;
    v11 = 10 * (((unsigned int)(v15 | (v16 << 8)) >> 5) & 0x1FF) + 490;
    *a2 = v11;
    if ( v10 != v11 )
    {
      V_LOCK();
      LOWORD(v12) = -21712;
      HIWORD(v12) = (unsigned int)"set_inactive_kas" >> 16;
      logfmt_raw((char *)&src, 0x1000u, 0, v12, v10, v11, a1);
      V_UNLOCK();
      LOWORD(v13) = -12376;
      HIWORD(v13) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v14) = -21984;
      HIWORD(v14) = (unsigned int)"_core_clk_tops_kas" >> 16;
      zlog(*v13, v14, 164, "get_chain_mps_voltage", 21, 189, 80, &src);
      return 0;
    }
  }
  return result;
}
