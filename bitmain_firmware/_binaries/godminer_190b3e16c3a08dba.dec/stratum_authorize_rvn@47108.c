int __fastcall stratum_authorize_rvn(int a1, int *a2, void *a3)
{
  int v3; // r5
  double *v6; // r11
  int v8; // r7
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r7
  const char *v13; // r8
  size_t v14; // r6
  size_t v15; // r0
  char *v16; // r6
  void *v17; // r0
  char *v18; // r1
  int v19; // r0
  char *v20; // r1
  int v21; // r0
  char *v22; // r1
  int v23; // r0
  _BOOL4 v24; // r8
  char *v25; // r1
  _DWORD *v26; // r8
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  int v29; // r12
  int v30; // r1
  int v31; // r3
  int v32; // r1
  unsigned int *v33; // r3
  unsigned int v34; // r2
  unsigned int v35; // r2
  char *v37; // r1
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  int v40; // r12
  int v41; // r1
  int v42; // r3
  _DWORD *v43; // r3
  int v44; // r1
  char *v45; // r0
  char *v46; // r12
  int *v47; // lr
  int v48; // r0
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // lr
  int v53; // r3
  int v54; // r1
  int v55; // r3
  _DWORD *v56; // r3
  int v57; // r1
  int v58; // r3
  int v59; // r1
  _DWORD *v60; // [sp+2Ch] [bp-1138h]
  _DWORD *v61; // [sp+34h] [bp-1130h]
  int v62; // [sp+38h] [bp-112Ch]
  int v63; // [sp+40h] [bp-1124h] BYREF
  int v64; // [sp+44h] [bp-1120h]
  int v65; // [sp+48h] [bp-111Ch]
  int v66; // [sp+4Ch] [bp-1118h]
  int v67; // [sp+50h] [bp-1114h]
  int v68; // [sp+54h] [bp-1110h]
  int v69; // [sp+58h] [bp-110Ch]
  int v70; // [sp+5Ch] [bp-1108h]
  char v71[92]; // [sp+64h] [bp-1100h] BYREF
  _BYTE v72[160]; // [sp+C0h] [bp-10A4h] BYREF
  char v73[4100]; // [sp+160h] [bp-1004h] BYREF

  v3 = 0;
  v6 = 0;
  while ( 1 )
  {
    v12 = (const char *)a2[4];
    v13 = (const char *)a2[5];
    v14 = strlen(v12);
    v15 = strlen(v13);
    v16 = (char *)malloc(v14 + v15 + 128);
    sprintf(v16, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", 2, v12, v13);
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v16) )
      goto LABEL_2;
    v8 = socket_full(a2[9], 30);
    if ( !v8 )
    {
      V_LOCK();
      LOWORD(v55) = 11108;
      HIWORD(v55) = (unsigned int)" failed!" >> 16;
      logfmt_raw(v73, 0x1000u, 0, v55);
      V_UNLOCK();
      LOWORD(v56) = -12376;
      HIWORD(v56) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v57) = 17232;
      HIWORD(v57) = (unsigned int)&unk_136C80 >> 16;
      zlog(*v56, v57, 164, "stratum_authorize_rvn", 21, 191, 100, v73);
LABEL_2:
      free(v16);
      if ( !v6 )
        goto LABEL_10;
LABEL_3:
      if ( *((_DWORD *)v6 + 1) != -1 )
      {
        v8 = 0;
        goto LABEL_5;
      }
      goto LABEL_10;
    }
    v17 = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    a3 = v17;
    if ( !v17 )
      break;
    v6 = json_loads((int)v17, 0, v71);
    free(a3);
    if ( v6 )
    {
      LOWORD(v18) = 10736;
      HIWORD(v18) = (unsigned int)"start to check asic num test loop" >> 16;
      v19 = json_object_get(v6, v18);
      LOWORD(v20) = 916;
      v61 = (_DWORD *)v19;
      HIWORD(v20) = (unsigned int)"/2.0.0\", null]}" >> 16;
      v21 = json_object_get(v6, v20);
      LOWORD(v22) = 1404;
      v60 = (_DWORD *)v21;
      HIWORD(v22) = (unsigned int)"work->private" >> 16;
      v23 = json_object_get(v6, v22);
      v62 = json_integer_value(v23);
      v24 = v61 == 0;
      if ( v62 != 2 )
        v24 = 1;
      if ( v24 || *v61 == 6 )
      {
        V_LOCK();
        LOWORD(v37) = 1232;
        HIWORD(v37) = (unsigned int)"t extranonce2_size" >> 16;
        LOWORD(v26) = -12376;
        HIWORD(v26) = (unsigned int)&unk_18C750 >> 16;
        V_INT((int)&v63, v37, *a2);
        v38 = json_array_get(v60, 1u);
        v39 = json_string_value(v38);
        LOWORD(v40) = 14984;
        HIWORD(v40) = (unsigned int)&unk_1363A0 >> 16;
        logfmt_raw(v73, 0x1000u, 0, v70, v63, v64, v65, v66, v67, v68, v69, v70, v40, v39);
        V_UNLOCK();
        LOWORD(v41) = 17232;
        HIWORD(v41) = (unsigned int)&unk_136C80 >> 16;
        zlog(*v26, v41, 164, "stratum_authorize_rvn", 21, 215, 80, v73);
        if ( !v3 )
        {
LABEL_36:
          v8 = 0;
          goto LABEL_37;
        }
        if ( !v60 )
        {
          v45 = (char *)malloc(0x11u);
          v46 = v45;
          if ( v45 )
          {
            LOWORD(v47) = 11136;
            v16 = v45;
            HIWORD(v47) = (unsigned int)" error code %d and then exit" >> 16;
            v8 = 0;
            v48 = *v47;
            v49 = v47[1];
            v50 = v47[2];
            v51 = v47[3];
            v52 = v47[4];
            *(_DWORD *)v46 = v48;
            *((_DWORD *)v46 + 1) = v49;
            *((_DWORD *)v46 + 2) = v50;
            *((_DWORD *)v46 + 3) = v51;
            v46[16] = v52;
            V_LOCK();
            LOWORD(v53) = 11156;
            HIWORD(v53) = (unsigned int)"hen exit" >> 16;
            logfmt_raw(v73, 0x1000u, 0, v53, v16, v62);
            V_UNLOCK();
            LOWORD(v54) = 17232;
            HIWORD(v54) = (unsigned int)&unk_136C80 >> 16;
            zlog(*v26, v54, 164, "stratum_authorize_rvn", 21, 222, 100, v73);
LABEL_37:
            free(v16);
            if ( *((_DWORD *)v6 + 1) != -1 )
            {
LABEL_5:
              v9 = (unsigned int *)v6 + 1;
              __dmb(0xBu);
              do
              {
                v10 = __ldrex(v9);
                v11 = v10 - 1;
              }
              while ( __strex(v11, v9) );
              if ( !v11 )
                json_delete(v6);
            }
            if ( v8 )
              return v8;
            goto LABEL_10;
          }
          V_LOCK();
          LOWORD(v58) = 11156;
          v8 = 0;
          HIWORD(v58) = (unsigned int)"hen exit" >> 16;
          logfmt_raw(v73, 0x1000u, 0, v58, 0, v62);
          V_UNLOCK();
          LOWORD(v59) = 17232;
          HIWORD(v59) = (unsigned int)&unk_136C80 >> 16;
          zlog(*v26, v59, 164, "stratum_authorize_rvn", 21, 222, 100, v73);
          if ( *((_DWORD *)v6 + 1) == -1 )
            return v8;
LABEL_27:
          v33 = (unsigned int *)v6 + 1;
          __dmb(0xBu);
          do
          {
            v34 = __ldrex(v33);
            v35 = v34 - 1;
          }
          while ( __strex(v35, v33) );
          if ( !v35 )
            json_delete(v6);
          goto LABEL_10;
        }
      }
      else
      {
        if ( !v60 || *v60 == 7 )
          goto LABEL_37;
        V_LOCK();
        LOWORD(v25) = 1232;
        HIWORD(v25) = (unsigned int)"t extranonce2_size" >> 16;
        LOWORD(v26) = -12376;
        HIWORD(v26) = (unsigned int)&unk_18C750 >> 16;
        V_INT((int)&v63, v25, *a2);
        v27 = json_array_get(v60, 1u);
        v28 = json_string_value(v27);
        LOWORD(v29) = 14984;
        HIWORD(v29) = (unsigned int)&unk_1363A0 >> 16;
        logfmt_raw(v73, 0x1000u, 0, v70, v63, v64, v65, v66, v67, v68, v69, v70, v29, v28);
        V_UNLOCK();
        LOWORD(v30) = 17232;
        HIWORD(v30) = (unsigned int)&unk_136C80 >> 16;
        zlog(*v26, v30, 164, "stratum_authorize_rvn", 21, 215, 80, v73);
        if ( !v3 )
          goto LABEL_36;
      }
      v16 = json_dumps(v60, 3);
      V_LOCK();
      LOWORD(v31) = 11156;
      HIWORD(v31) = (unsigned int)"hen exit" >> 16;
      logfmt_raw(v73, 0x1000u, 0, v31, v16, v62);
      V_UNLOCK();
      LOWORD(v32) = 17232;
      HIWORD(v32) = (unsigned int)&unk_136C80 >> 16;
      zlog(*v26, v32, 164, "stratum_authorize_rvn", 21, 222, 100, v73);
      if ( v16 )
        goto LABEL_36;
      if ( *((_DWORD *)v6 + 1) != -1 )
        goto LABEL_27;
    }
    else
    {
      V_LOCK();
      LOWORD(v42) = 10692;
      HIWORD(v42) = (unsigned int)"all backend runtimes have been poweroff." >> 16;
      logfmt_raw(v73, 0x1000u, 0, v42, *(_DWORD *)v71, v72);
      V_UNLOCK();
      LOWORD(v43) = -12376;
      HIWORD(v43) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v44) = 17232;
      HIWORD(v44) = (unsigned int)&unk_136C80 >> 16;
      zlog(*v43, v44, 164, "stratum_authorize_rvn", 21, 205, 100, v73);
      free(v16);
    }
LABEL_10:
    if ( a3 )
      v3 ^= 1u;
    else
      v3 = 0;
    if ( !v3 )
      return 0;
  }
  free(v16);
  if ( v6 )
    goto LABEL_3;
  return 0;
}
