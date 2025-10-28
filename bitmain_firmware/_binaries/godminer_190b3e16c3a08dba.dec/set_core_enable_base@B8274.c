int __fastcall set_core_enable_base(int result, int a2, __useconds_t a3)
{
  int v3; // r7
  int v4; // r4
  int v6; // r6
  int v8; // r10
  int v9; // r3
  int v10; // r2
  int v11; // r3
  __int16 v12; // r1
  int v13; // r12
  char v14[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = *(_DWORD *)a2;
  if ( *(_BYTE *)(a2 + 13) )
  {
    v4 = 0;
    v6 = result;
    if ( v3 )
      v8 = 0;
    else
      v8 = -1;
    while ( 1 )
    {
      v9 = v8;
      if ( (v4 & 0x1F) != 0 )
      {
        v9 = *(_DWORD *)a2;
      }
      else
      {
        v12 = *(_WORD *)(a2 + 10);
        v13 = v3 ? v4 & 0x1F : -1;
        *(_DWORD *)a2 = v13;
        *(_WORD *)(a2 + 10) = v12 + 4 * (v4 >> 5);
      }
      v10 = v9 | (1 << (v4 & 0x1F));
      v11 = 2 * v9;
      *(_BYTE *)(a2 + 12) = v4;
      *(_DWORD *)a2 = v3 ? v10 : v11;
      if ( (*(int (__fastcall **)(int, int, int))(v6 + 248))(v6, a2, v10) < 0 )
        break;
      result = usleep(a3);
      if ( *(unsigned __int8 *)(a2 + 13) <= ++v4 )
        return result;
    }
    V_LOCK();
    logfmt_raw(
      v14,
      0x1000u,
      0,
      "%s failed, reg:%02x, core_id:%d",
      "set_core_enable_base",
      *(unsigned __int16 *)(a2 + 10),
      v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "set_core_enable_base",
      20,
      1082,
      100,
      v14);
    return -1;
  }
  return result;
}
