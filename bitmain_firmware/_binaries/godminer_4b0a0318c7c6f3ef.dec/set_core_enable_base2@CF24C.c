int __fastcall set_core_enable_base2(int a1, int a2, __useconds_t a3)
{
  int v6; // r2
  unsigned int v7; // r3
  int v8; // r4
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  int v13; // [sp+4h] [bp-1014h]
  int v14; // [sp+14h] [bp-1004h] BYREF
  char v15[4096]; // [sp+18h] [bp-1000h] BYREF

  puts("set_core_enable_base2");
  v7 = *(unsigned __int8 *)(a2 + 13);
  if ( !*(_BYTE *)(a2 + 13) )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( (v8 & 0x1F) == 0 )
    {
      v6 = *(unsigned __int16 *)(a2 + 10) + (v8 >> 5);
      *(_WORD *)(a2 + 10) = v6;
    }
    if ( v7 > 1 )
      *(_BYTE *)(a2 + 12) = v8;
    if ( (*(int (__fastcall **)(int, int, int))(a1 + 284))(a1, a2, v6) < 0 )
      break;
    usleep(a3);
    v14 = 0;
    (*(void (__fastcall **)(int, int, int, char *, int *, int, int, _DWORD))(a1 + 316))(
      a1,
      a2,
      1,
      v15,
      &v14,
      v13,
      2000,
      0);
    v7 = *(unsigned __int8 *)(a2 + 13);
    if ( (int)v7 <= ++v8 )
      return 0;
  }
  V_LOCK();
  LOWORD(v9) = 3716;
  HIWORD(v9) = (unsigned int)"" >> 16;
  logfmt_raw(v15, 0x1000u, 0, v9, "set_core_enable_base2", *(unsigned __int16 *)(a2 + 10), v8);
  V_UNLOCK();
  LOWORD(v10) = 20532;
  HIWORD(v10) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v11) = 32756;
  HIWORD(v11) = (unsigned int)"n_to_hal" >> 16;
  zlog(*v10, v11, 154, "set_core_enable_base2", 21, 1437, 100, v15);
  return 3;
}
