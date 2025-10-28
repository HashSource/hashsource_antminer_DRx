int sub_AF27C()
{
  int v0; // r8
  int v1; // r3
  int v2; // r7
  int v3; // r4
  int v4; // r5
  void *v5; // r9
  int v6; // r2
  int v7; // r0
  int v8; // r1
  _DWORD *v9; // r8
  int v11; // r9
  int v12; // r4
  int v13; // r3
  int v14; // r5
  void *v15; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v17[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_18C508[0] || (dword_18C508[0] = (int)calloc(1u, 0x54u)) != 0 )
  {
    v0 = dword_18C50C;
    if ( dword_18C50C <= 0 )
      return 0;
    v1 = 0;
    v2 = dword_18C508[0];
    LOBYTE(v3) = 0;
    while ( 1 )
    {
      v4 = dword_18C508[v1 + 2];
      if ( !*(_DWORD *)(v2 + 4 * v4) )
      {
        v5 = calloc(1u, 0xCCu);
        *(_DWORD *)(v2 + 4 * v4) = v5;
        if ( !v5 )
          break;
      }
      v3 = (unsigned __int8)(v3 + 1);
      v1 = v3;
      if ( v3 >= v0 )
        return 0;
    }
    snprintf(s, 0x800u, "No memory for configuraion for chain %d.", v4);
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    v6 = 215;
    v7 = g_zc;
    LOWORD(v8) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/"
                                   "release/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c";
  }
  else
  {
    strcpy(s, "No memory for configuraion.");
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    v6 = 202;
    v7 = g_zc;
    LOWORD(v8) = -14132;
  }
  HIWORD(v8) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/releas"
                             "e/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
  zlog(v7, v8, 170, "_alloc_memory", 13, v6, 100, v17);
  v9 = (_DWORD *)dword_18C508[0];
  if ( !dword_18C508[0] )
    return -1;
  v11 = dword_18C50C;
  if ( dword_18C50C > 0 )
  {
    LOBYTE(v12) = 0;
    v13 = 0;
    do
    {
      v14 = dword_18C508[v13 + 2];
      v15 = (void *)v9[v14];
      if ( v15 )
      {
        free(v15);
        v9[v14] = 0;
      }
      v12 = (unsigned __int8)(v12 + 1);
      v13 = v12;
    }
    while ( v11 > v12 );
  }
  free(v9);
  dword_18C508[0] = 0;
  return -1;
}
