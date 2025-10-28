void __fastcall sub_24A70(int a1)
{
  int v2; // r1
  int v3; // r9
  int v4; // r2
  bool v5; // zf
  __int64 v6; // r0
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r8
  int v13; // r2
  int v14; // r11
  int v15; // r3
  int v16; // r12
  int v17; // r0
  int v18; // r5
  int v19; // r1
  int v20; // r2
  double v21; // d9
  double v22; // d8
  int v23; // r3
  int v24; // r3
  int v25; // r1
  void *v26; // r2
  int v27; // r7
  int v28; // r1
  int v29; // r3
  int v30; // r2
  int v31; // r1
  int v32; // r2
  int v33; // r3
  __int64 v34; // kr00_8
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r4
  int v39; // r12
  int v40; // r3
  int v41; // r2
  int v42; // r1
  int v43; // r3
  int v44; // r4
  double v45; // d16
  double v46; // d8
  int v47; // r1
  unsigned int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r2
  int v53; // [sp+Ch] [bp-880h]
  int v54; // [sp+Ch] [bp-880h]
  int v55; // [sp+Ch] [bp-880h]
  int v56; // [sp+10h] [bp-87Ch]
  int v57; // [sp+14h] [bp-878h]
  int v58; // [sp+14h] [bp-878h]
  int v59; // [sp+14h] [bp-878h]
  int v60; // [sp+14h] [bp-878h]
  int v61; // [sp+14h] [bp-878h]
  __int64 v62; // [sp+28h] [bp-864h]
  int v63; // [sp+3Ch] [bp-850h]
  int v64; // [sp+40h] [bp-84Ch]
  int v65; // [sp+44h] [bp-848h]
  int v66; // [sp+48h] [bp-844h]
  int v67; // [sp+4Ch] [bp-840h]
  int v68; // [sp+50h] [bp-83Ch]
  unsigned int v69; // [sp+54h] [bp-838h]
  int v70; // [sp+58h] [bp-834h]
  int remaining; // [sp+60h] [bp-82Ch]
  int v72; // [sp+64h] [bp-828h]
  _DWORD v73[2]; // [sp+68h] [bp-824h] BYREF
  int v74; // [sp+70h] [bp-81Ch] BYREF
  int v75; // [sp+74h] [bp-818h]
  _DWORD v76[2]; // [sp+78h] [bp-814h] BYREF
  _DWORD v77[2]; // [sp+80h] [bp-80Ch] BYREF
  struct timespec s[256]; // [sp+88h] [bp-804h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 36);
  v70 = *(_DWORD *)a1;
  v63 = *(_DWORD *)(v3 + 4);
  v4 = dword_6006C / 5;
  if ( (int)((unsigned __int64)(1717986919LL * dword_6006C) >> 32) >> 1 == dword_6006C >> 31 )
    v4 = 1;
  v5 = v2 == 0;
  if ( v2 )
    v2 = *(unsigned __int8 *)(a1 + 8);
  v68 = v4;
  if ( v5 )
    remaining = 1;
  else
    remaining = v2;
  v6 = ((__int64 (__fastcall *)(int, int))*(_DWORD *)(v63 + 48))(a1, v2);
  v69 = v6;
  sub_2B13C(v73, HIDWORD(v6), v7, v8);
  sub_2B13C(v77, v9, v10, v11);
  if ( !*(_BYTE *)(v3 + 364) )
  {
    v12 = *(unsigned __int8 *)(v3 + 364);
    v13 = 1000000 * v68;
    v62 = 0;
    v14 = v12;
    v15 = 1000000 * v68 + 1023;
    if ( 1000000 * v68 >= 0 )
      v15 = 1000000 * v68;
    v72 = v15 >> 10;
    while ( 1 )
    {
      v17 = sub_244C4(a1, v70, v13);
      *(_BYTE *)(a1 + 62) = 0;
      *(_BYTE *)(v3 + 172) = 1;
      v18 = v17;
      sub_2B13C(v76, v19, v20, 1);
      *(_DWORD *)(v18 + 248) = 0;
      *(_QWORD *)(v3 + 160) = 0;
      if ( !(*(int (__fastcall **)(int, int))(v63 + 56))(a1, v18) )
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
        {
          snprintf((char *)s, 0x800u, "work prepare failed, exiting mining thread %d", v70);
          sub_38438(3, s, 0);
        }
        goto LABEL_82;
      }
      v21 = *(double *)(v18 + 376);
      v22 = *(double *)(v63 + 104);
      if ( v22 > v21 )
        v22 = *(double *)(v18 + 376);
      *(double *)(v18 + 224) = v22;
      v23 = (unsigned __int8)byte_63DF9;
      if ( v22 < *(double *)(v63 + 120) )
        v22 = *(double *)(v63 + 120);
      *(double *)(v18 + 224) = v22;
      if ( v23 )
        break;
      v24 = v3 + 296;
      v25 = v3 + 312;
      v67 = v3 + 296;
      v64 = v3 + 304;
      v65 = v3 + 312;
      v66 = v18 + 424;
LABEL_29:
      v26 = &loc_30D40;
      while ( 1 )
      {
        sub_2B13C(&v74, v25, v26, v24);
        sub_2AD38(&v74, v73);
        sub_2AD6C(v73, v67);
        if ( sub_2ADB8(v73, v64) )
          sub_2AE20(v64, v73);
        if ( sub_2ADEC(v73, v65) )
          sub_2AE20(v65, v73);
        ++*(_DWORD *)(v3 + 292);
        v27 = *(_DWORD *)(v18 + 260);
        sub_2AD6C(v73, v27 + 380);
        if ( sub_2ADB8(v73, v27 + 388) )
          sub_2AE20(v27 + 388, v73);
        if ( sub_2ADEC(v73, v27 + 396) )
          sub_2AE20(v27 + 396, v73);
        v30 = *(_DWORD *)(v27 + 376) + 1;
        *(_DWORD *)(v27 + 376) = v30;
        sub_2B13C(v66, v28, v30, v29);
        pthread_setcancelstate(1, 0);
        sub_F7D4(a1, v31, v32, v33);
        v34 = ((__int64 (__fastcall *)(int, int, unsigned int, _DWORD))*(_DWORD *)(v63 + 64))(
                a1,
                v18,
                v69 + *(_DWORD *)(v18 + 248),
                0);
        sub_F808(a1, SHIDWORD(v34), v34);
        pthread_setcancelstate(0, 0);
        pthread_testcancel();
        sub_2B13C(v73, v35, v36, v37);
        if ( v34 == -1 )
          break;
        v38 = v73[1];
        v39 = v76[0];
        v62 += v34;
        if ( *(_QWORD *)(v3 + 160) < v34 )
          *(_QWORD *)(v3 + 160) = v34;
        v40 = v73[0];
        v41 = v38 - v75 + (v38 - v75 < 0 ? 0xF4000 : 0);
        v16 = v73[0] - v39;
        if ( v38 - v75 < 0 )
          v41 += 576;
        v42 = v73[0] - v74;
        v12 += v41;
        if ( v38 - v75 < 0 )
          --v42;
        v14 += v42;
        if ( v12 > 1000000 )
        {
          ++v14;
          v12 -= 1000000;
        }
        if ( v38 - v76[1] < 0 )
          --v16;
        if ( v68 > v14 )
        {
          if ( v69 == -1 )
            goto LABEL_19;
          v47 = v12 + 1024;
          v53 = v73[0];
          if ( v12 + 1024 < 0 )
            v47 = v12 + 2047;
          v59 = v16;
          v56 = (sub_48F88(1000000, v47 >> 10) + 16) * v68;
          v48 = sub_48EC0(-1024, v56);
          v40 = v53;
          v16 = v59;
          if ( v69 <= v48 )
            v69 = (v69 * v56) >> 10;
          else
            v69 = -1;
        }
        else if ( v68 < v14 )
        {
          v54 = v73[0];
          v60 = v16;
          v49 = sub_48EC0(v68 * v69, v14);
          v40 = v54;
          v16 = v60;
          v69 = v49;
        }
        else if ( v12 > (int)&loc_186A0 )
        {
          v55 = v73[0];
          v61 = v16;
          v50 = sub_48F88(1000000 * v68 + v12, v72);
          v51 = sub_48EC0(v69 << 10, v50);
          v40 = v55;
          v16 = v61;
          v69 = v51;
        }
        v43 = v40 - v77[0];
        v44 = v38 - v77[1];
        if ( v44 < 0 )
        {
          --v43;
          v44 += 1000000;
        }
        if ( v62 && (v43 > 0 || v44 > (int)&loc_30D40) || dword_6006C <= v43 )
        {
          v57 = v16;
          sub_1C834(v70, v62 | HIDWORD(v62), v62, SHIDWORD(v62));
          sub_2AE20(v77, v73);
          v16 = v57;
          v62 = 0;
        }
        if ( *(_BYTE *)(a1 + 62) )
        {
          if ( !remaining )
          {
            v52 = *(_DWORD *)(a1 + 4);
            s[0].tv_sec = 0;
            s[0].tv_nsec = 250000000 * v52;
            nanosleep(s, 0);
          }
          goto LABEL_21;
        }
        if ( *(_BYTE *)(a1 + 60) || (v14 = *(_DWORD *)(v3 + 32)) != 0 )
        {
          v14 = 0;
          v58 = v16;
          v12 = 0;
          sub_118C4(a1, v70, v63);
          v16 = v58;
        }
        else
        {
          v12 = 0;
        }
LABEL_19:
        if ( v16 > dword_60090 || *(_QWORD *)(v3 + 160) > 0xFFFFFFFD || sub_2282C(v18, 0) )
          goto LABEL_21;
      }
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        snprintf((char *)s, 0x800u, "%s %d failure, disabling!", *(const char **)(v63 + 8), *(_DWORD *)(v3 + 8));
        sub_38438(3, s, 0);
      }
      *(_DWORD *)(v3 + 32) = 1;
      sub_2ED00(v3);
      *(_BYTE *)(v3 + 364) = 1;
LABEL_21:
      sub_152B8((void **)v18);
      if ( *(_BYTE *)(v3 + 364) )
        goto LABEL_82;
    }
    if ( sub_493DC(dword_636A8, dword_636AC) / dbl_5F898 * 60.0 <= 30.0 )
    {
      v45 = *(double *)(v63 + 112);
    }
    else
    {
      v45 = *(double *)(v63 + 112);
      if ( v45 < *(double *)(v63 + 104) && v21 > v45 )
      {
        v5 = byte_630C1 == 0;
        v46 = v45 + 1.0;
        *(double *)(v63 + 112) = v45 + 1.0;
        if ( !v5 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          snprintf((char *)s, 0x800u, "Driver %s working diff changed to %.0f", *(const char **)(v63 + 4), v45 + 1.0);
          sub_38438(7, s, 0);
          v46 = *(double *)(v63 + 112);
        }
        if ( *(double *)(v18 + 376) < v46 )
          v46 = *(double *)(v18 + 376);
        *(double *)(v18 + 224) = v46;
LABEL_73:
        sub_15D7C(v18 + 441);
        v24 = v3 + 304;
        v25 = v18 + 424;
        v67 = v3 + 296;
        v64 = v3 + 304;
        v65 = v3 + 312;
        v66 = v18 + 424;
        goto LABEL_29;
      }
    }
    if ( v21 < v45 )
      *(double *)(v63 + 112) = v21;
    goto LABEL_73;
  }
LABEL_82:
  *(_DWORD *)(v3 + 32) = 1;
}
