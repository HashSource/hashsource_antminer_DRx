int __fastcall read_dag_rvn(int a1)
{
  int v2; // r4
  int i; // r4
  unsigned __int8 v4; // r1
  int v5; // r8
  int v6; // r9
  int v7; // r2
  _DWORD *v8; // r4
  int *v9; // r12
  int *v10; // r5
  int v11; // r0
  int v12; // r1
  int *v13; // lr
  int v14; // r2
  int v15; // r3
  char *v17; // r11
  char *v18; // r4
  int v19; // t1
  char *v20; // r0
  int v21; // [sp+4h] [bp-1160h]
  int v22; // [sp+2Ch] [bp-1138h]
  int v23; // [sp+30h] [bp-1134h]
  int v24; // [sp+34h] [bp-1130h]
  int j; // [sp+38h] [bp-112Ch]
  int k; // [sp+3Ch] [bp-1128h]
  int *v27; // [sp+40h] [bp-1124h]
  int v28; // [sp+5Ch] [bp-1108h] BYREF
  _DWORD v29[6]; // [sp+60h] [bp-1104h] BYREF
  _DWORD v30[7]; // [sp+78h] [bp-10ECh] BYREF
  int v31; // [sp+94h] [bp-10D0h]
  char v32; // [sp+9Bh] [bp-10C9h] BYREF
  int v33; // [sp+9Ch] [bp-10C8h] BYREF
  char v34; // [sp+DBh] [bp-1089h] BYREF
  char s[132]; // [sp+DCh] [bp-1088h] BYREF
  _DWORD v36[2]; // [sp+160h] [bp-1004h] BYREF
  int v37; // [sp+168h] [bp-FFCh]
  int v38; // [sp+16Ch] [bp-FF8h]

  V_LOCK();
  V_INT((int)v30, "chain", *(int *)(a1 + 224));
  v2 = 0;
  logfmt_raw(
    (char *)v36,
    0x1000u,
    0,
    v31,
    v30[0],
    v30[1],
    v30[2],
    v30[3],
    v30[4],
    v30[5],
    v30[6],
    v31,
    "%s...",
    "read_dag_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    171,
    "read_dag_rvn",
    12,
    376,
    60,
    v36);
  do
  {
    sub_92E24(a1, v2, 179, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 8 );
  for ( i = 0; i != 8; ++i )
  {
    v4 = i;
    sub_92E24(a1, v4, 28, 3);
  }
  v5 = a1;
  memset(s, 0, 0x81u);
  v24 = 0;
  v29[0] = 0;
  v29[1] = 1;
  v29[2] = 4096;
  v29[3] = 4096;
  v29[4] = 16382;
  v29[5] = 0x3FFF;
  do
  {
    for ( j = 0; j != 8; ++j )
    {
      for ( k = 0; k != 8; ++k )
      {
        v27 = v29;
        do
        {
          v6 = 0;
          v7 = *v27++;
          v23 = v7;
          v22 = (v24 << 22) | (32 * j) | (4 * k) | (v7 << 8);
          do
          {
            v37 = 0;
            v28 = 0;
            v36[1] = v22;
            v36[0] = 0;
            v38 = 0;
            BYTE1(v37) = v6;
            v8 = malloc(0x4Cu);
            *v8 = 0;
            v8[1] = 0;
            v8[2] = 0;
            (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD))(v5 + 264))(
              v5,
              v36,
              1,
              v8,
              &v28,
              v21,
              2000,
              0);
            v9 = (_DWORD *)((char *)v8 + 10);
            v10 = &v33;
            do
            {
              v11 = *v9;
              v9 += 4;
              v12 = *(v9 - 3);
              v13 = v10;
              v14 = *(v9 - 2);
              v10 += 4;
              v15 = *(v9 - 1);
              *v13 = v11;
              v13[1] = v12;
              v13[2] = v14;
              v13[3] = v15;
            }
            while ( v9 != (_DWORD *)((char *)v8 + 74) );
            free(v8);
            if ( v28 )
            {
              v17 = &v32;
              v18 = s;
              do
              {
                v19 = (unsigned __int8)*++v17;
                v20 = v18;
                v18 += 2;
                sprintf(v20, "%02x", v19);
              }
              while ( &v34 != v17 );
              V_LOCK();
              logfmt_raw(
                (char *)v36,
                0x1000u,
                0,
                "[DAG] node_index %08x(chip %1d row %02d col %d ch %d s_addr %04x %s",
                v22,
                v6,
                v24,
                j,
                k,
                v23,
                s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                171,
                "read_dag_rvn",
                12,
                413,
                60,
                v36);
            }
            ++v6;
          }
          while ( v6 != 8 );
        }
        while ( v30 != v27 );
      }
    }
    ++v24;
  }
  while ( v24 != 12 );
  sub_92B4C(v5, 28, 2);
  return 0;
}
