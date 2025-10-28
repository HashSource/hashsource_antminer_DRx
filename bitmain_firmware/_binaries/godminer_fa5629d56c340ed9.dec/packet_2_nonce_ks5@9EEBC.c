int __fastcall packet_2_nonce_ks5(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v11; // r0
  int v13; // r5
  int v14; // r7
  int v15; // r3
  int v16; // r2
  int *v17; // r0
  int v18; // r1
  int v19; // r0
  int *v20; // r2
  int v21; // r1
  int v22; // r1
  int v23; // r2
  signed int v24; // r0
  int v25; // r3
  int v26; // r12
  int *v27; // r2
  int *v28; // r3
  int v29; // r2
  int v30; // lr
  int v31; // r3
  unsigned int v32; // r9
  unsigned __int64 v33; // r4
  int v34; // r7
  char *v35; // r8
  int v36; // lr
  unsigned int i; // r12
  __int64 v38; // r0
  int v39; // r12
  int v40; // lr
  int v41; // r1
  unsigned __int64 v42; // r2
  int v43; // r9
  int v44; // r8
  char *v45; // r10
  unsigned __int64 v46; // r0
  unsigned __int64 v47; // t1
  unsigned __int64 v48; // r2
  int v49; // r0
  signed int v50; // r1
  int v51; // r2
  _QWORD *v52; // r12
  char *v53; // r2
  int v54; // r3
  __int64 v55; // t1
  int v56; // [sp+30h] [bp-1054h]
  _DWORD v57[7]; // [sp+60h] [bp-1024h] BYREF
  int v58; // [sp+7Ch] [bp-1008h]
  char s[4096]; // [sp+80h] [bp-1004h] BYREF

  v11 = BM_CRC5((_BYTE *)(a2 + 2), 91);
  if ( (*(_BYTE *)(a2 + 13) & 0x80) == 0 )
    return 10;
  v13 = *(_BYTE *)(a2 + 13) & 0x1F;
  v14 = v11;
  if ( v11 != v13 && *(_BYTE *)(a1 + 267) )
  {
    v28 = &dword_1AD010[*(_DWORD *)(a1 + 260)];
    v29 = v28[1];
    v28[1] = v29 + 1;
    if ( v29 <= 9 )
    {
      V_LOCK();
      V_INT((int)v57, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        s,
        0x1000u,
        0,
        v58,
        v57[0],
        v57[1],
        v57[2],
        v57[3],
        v57[4],
        v57[5],
        v57[6],
        v58,
        "chip id %2d, get nonce crc error calc value %04x expected value %04x",
        0,
        v14,
        v13);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
        171,
        "packet_2_nonce_ks5",
        18,
        275,
        40,
        s);
    }
    return 11;
  }
  else
  {
    v15 = *(unsigned __int8 *)(a2 + 12);
    v16 = *(_DWORD *)(a1 + 848);
    if ( (v15 & 0x80) != 0 )
    {
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "chip respond wrong work id ,err");
      V_UNLOCK();
      v51 = 284;
    }
    else
    {
      v17 = (int *)(v16 + 8 * v15);
      v18 = *v17;
      v19 = v17[1];
      *(_DWORD *)a3 = v18;
      *(_DWORD *)(a3 + 4) = v19;
      *a7 = v18;
      if ( v18 != -1 )
      {
        v20 = (int *)(v16 + 8 * (v15 + 128));
        v21 = *(_DWORD *)(a2 + 7);
        *(_DWORD *)(a3 + 26) = *(_DWORD *)(a2 + 3);
        *(_DWORD *)(a3 + 30) = v21;
        v22 = *v20;
        v23 = v20[1];
        *(_DWORD *)(a3 + 18) = v22;
        *(_DWORD *)(a3 + 22) = v23;
        LOBYTE(v23) = *(_BYTE *)(a2 + 11);
        *(_BYTE *)(a3 + 16) = v15;
        *(_BYTE *)(a3 + 17) = v23;
        v24 = (unsigned int)*(unsigned __int8 *)(a2 + 6) / *(_DWORD *)(a1 + 452);
        if ( v24 >= *(_DWORD *)(a1 + 356) )
        {
          v49 = rand();
          sub_146924(v49, *(_DWORD *)(a1 + 356));
          v24 = v50;
        }
        *a6 = v24;
        *(_DWORD *)(a3 + 8) = v24;
        *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 10) & 0x7F;
        v25 = *(_DWORD *)(a3 + 30);
        *a5 = *(_DWORD *)(a3 + 26);
        a5[1] = v25;
        *a4 = 1;
        memset(s, 0, 0x800u);
        v26 = *(_DWORD *)(a1 + 252);
        v27 = &dword_1AD010[v26];
        if ( v27[4] != 999 )
        {
          ++v27[4];
          return 0;
        }
        v30 = *(_DWORD *)(a1 + 356);
        v27[4] = 0;
        if ( v30 <= 0 )
        {
          v41 = 2 * v26;
          v33 = 0;
LABEL_33:
          *(_QWORD *)&dword_1AD010[v41 + 20] = v33;
          return 0;
        }
        v31 = *(_DWORD *)(a1 + 480);
        v32 = 0;
        v56 = v26;
        v33 = 0;
        v34 = v30;
        v35 = s;
        v36 = v31 + 48 * v30;
        for ( i = 0; ; i = *((_DWORD *)v35 + 1) )
        {
          v38 = *(_QWORD *)(v31 + 4);
          v31 += 48;
          v33 += __PAIR64__(*(_DWORD *)(v31 - 36), *(_DWORD *)(v31 - 48)) + __PAIR64__(v38, HIDWORD(v38));
          *(_QWORD *)v35 = *(_QWORD *)(v31 - 32) + *(_QWORD *)(v31 - 16) + __PAIR64__(i, v32);
          v35 += 8;
          if ( v31 == v36 )
            break;
          v32 = *(_DWORD *)v35;
        }
        v39 = v56;
        v40 = v34;
        v41 = 2 * v56;
        v42 = *(_QWORD *)&dword_1AD010[2 * v56 + 20];
        if ( v42 >= v33 )
        {
          LOWORD(v43) = -12064;
        }
        else
        {
          LOWORD(v43) = (unsigned __int16)&unk_1AD0E0;
          if ( v33 - v42 <= 0x63 )
          {
            v44 = 0;
            HIWORD(v43) = (unsigned int)&unk_1AD0E0 >> 16;
            v45 = s;
            do
            {
              v47 = *(_QWORD *)v45;
              v45 += 8;
              v46 = v47;
              v48 = *(_QWORD *)(8 * (v44 + (v39 << 8)) + v43);
              if ( v47 > v48 && v46 - v48 > 0x190 )
              {
                close_one_chip_cores_ks5(a1, (unsigned __int8)v44);
                v39 = *(_DWORD *)(a1 + 252);
                v40 = *(_DWORD *)(a1 + 356);
              }
              ++v44;
            }
            while ( v40 > v44 );
            v41 = 2 * v39;
            if ( v40 <= 0 )
              goto LABEL_33;
            goto LABEL_31;
          }
        }
        HIWORD(v43) = (unsigned int)&unk_1AD0E0 >> 16;
LABEL_31:
        v52 = (_QWORD *)(v43 + (v39 << 11));
        v53 = s;
        v54 = 0;
        do
        {
          ++v54;
          v55 = *(_QWORD *)v53;
          v53 += 8;
          *v52++ = v55;
        }
        while ( v40 > v54 );
        goto LABEL_33;
      }
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "chip respond wrong work id ,err");
      V_UNLOCK();
      v51 = 291;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
      171,
      "packet_2_nonce_ks5",
      18,
      v51,
      20,
      s);
    return 12;
  }
}
