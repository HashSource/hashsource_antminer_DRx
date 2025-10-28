bool __fastcall hex2bin(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int v4; // r5
  unsigned __int8 v5; // r12
  unsigned __int8 *v6; // r4
  int v7; // r6
  char v8; // r0
  char *v9; // r3
  _DWORD *v10; // r3
  int v11; // r2
  int v12; // r1
  int v14; // r3
  char v15[4]; // [sp+10h] [bp-1008h] BYREF
  char *endptr; // [sp+14h] [bp-1004h] BYREF
  char v17[4096]; // [sp+18h] [bp-1000h] BYREF

  v3 = *a2;
  v4 = a3;
  v15[2] = 0;
  if ( !v3 )
    return v4 == 0;
  if ( !a3 )
    return 1;
  v5 = a2[1];
  if ( v5 )
  {
    v6 = a2;
    v7 = a1 - 1;
    while ( 1 )
    {
      v15[0] = v3;
      v15[1] = v5;
      --v4;
      v8 = strtol(v15, &endptr, 16);
      v9 = endptr;
      *(_BYTE *)++v7 = v8;
      if ( *v9 )
        break;
      v3 = v6[2];
      v6 += 2;
      if ( !v3 )
        return v4 == 0;
      if ( !v4 )
        return 1;
      v5 = v6[1];
      if ( !v5 )
        goto LABEL_14;
    }
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "hex2bin failed on '%s'", v15);
    V_UNLOCK();
    LOWORD(v10) = 24916;
    HIWORD(v10) = (unsigned int)&unk_1B503C >> 16;
    v11 = 151;
  }
  else
  {
LABEL_14:
    V_LOCK();
    LOWORD(v14) = -21072;
    HIWORD(v14) = (unsigned int)"job pushed after %lld ms" >> 16;
    logfmt_raw(v17, 0x1000u, 0, v14);
    V_UNLOCK();
    LOWORD(v10) = 24916;
    HIWORD(v10) = (unsigned int)&unk_1B503C >> 16;
    v11 = 144;
  }
  LOWORD(v12) = -21456;
  HIWORD(v12) = (unsigned int)"miner_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner.c" >> 16;
  zlog(*v10, v12, 134, "hex2bin", 7, v11, 100, v17);
  return 0;
}
