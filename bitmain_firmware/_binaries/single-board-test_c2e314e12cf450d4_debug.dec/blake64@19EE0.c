__int64 *__fastcall blake64(int a1, char *a2, size_t a3)
{
  __int64 *result; // r0
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // [sp+0h] [bp+0h]
  unsigned __int64 v7; // [sp+8h] [bp+8h]
  unsigned __int64 v8; // [sp+10h] [bp+10h]
  unsigned __int64 v9; // [sp+18h] [bp+18h]
  unsigned __int64 v10; // [sp+20h] [bp+20h]
  unsigned __int64 v11; // [sp+28h] [bp+28h]
  unsigned __int64 v12; // [sp+30h] [bp+30h]
  unsigned __int64 v13; // [sp+38h] [bp+38h]
  unsigned __int64 v14; // [sp+40h] [bp+40h]
  unsigned __int64 v15; // [sp+48h] [bp+48h]
  unsigned __int64 v16; // [sp+50h] [bp+50h]
  unsigned __int64 v17; // [sp+58h] [bp+58h]
  unsigned __int64 v18; // [sp+60h] [bp+60h]
  unsigned __int64 v19; // [sp+68h] [bp+68h]
  unsigned __int64 v20; // [sp+70h] [bp+70h]
  unsigned __int64 v21; // [sp+78h] [bp+78h]
  unsigned __int64 v22; // [sp+80h] [bp+80h]
  unsigned __int64 v23; // [sp+88h] [bp+88h]
  unsigned __int64 v24; // [sp+90h] [bp+90h]
  unsigned __int64 v25; // [sp+98h] [bp+98h]
  unsigned __int64 v26; // [sp+A0h] [bp+A0h]
  unsigned __int64 v27; // [sp+A8h] [bp+A8h]
  unsigned __int64 v28; // [sp+B0h] [bp+B0h]
  unsigned __int64 v29; // [sp+B8h] [bp+B8h]
  unsigned __int64 v30; // [sp+C0h] [bp+C0h]
  unsigned __int64 v31; // [sp+C8h] [bp+C8h]
  unsigned __int64 v32; // [sp+D0h] [bp+D0h]
  unsigned __int64 v33; // [sp+D8h] [bp+D8h]
  unsigned __int64 v34; // [sp+E0h] [bp+E0h]
  unsigned __int64 v35; // [sp+E8h] [bp+E8h]
  unsigned int v36; // [sp+F4h] [bp+F4h]
  char *v37; // [sp+F8h] [bp+F8h]
  _QWORD v39[16]; // [sp+100h] [bp+100h]
  __int64 v40; // [sp+180h] [bp+180h]
  __int64 v41; // [sp+188h] [bp+188h]
  __int64 v42; // [sp+190h] [bp+190h]
  __int64 v43; // [sp+198h] [bp+198h]
  unsigned int *v44; // [sp+1A0h] [bp+1A0h]
  unsigned int i; // [sp+1A4h] [bp+1A4h]
  unsigned __int64 v46; // [sp+1A8h] [bp+1A8h]
  unsigned __int64 v47; // [sp+1B0h] [bp+1B0h]
  unsigned __int64 v48; // [sp+1B8h] [bp+1B8h]
  unsigned __int64 v49; // [sp+1C0h] [bp+1C0h]
  __int64 v50; // [sp+1C8h] [bp+1C8h]
  __int64 v51; // [sp+1D0h] [bp+1D0h]
  __int64 v52; // [sp+1D8h] [bp+1D8h]
  __int64 v53; // [sp+1E0h] [bp+1E0h]
  unsigned __int64 v54; // [sp+1E8h] [bp+1E8h]
  unsigned __int64 v55; // [sp+1F0h] [bp+1F0h]
  unsigned __int64 v56; // [sp+1F8h] [bp+1F8h]
  unsigned __int64 v57; // [sp+200h] [bp+200h]
  __int64 v58; // [sp+208h] [bp+208h]
  __int64 v59; // [sp+210h] [bp+210h]
  __int64 v60; // [sp+218h] [bp+218h]
  __int64 v61; // [sp+220h] [bp+220h]
  size_t n; // [sp+22Ch] [bp+22Ch]
  __int64 v63; // [sp+230h] [bp+230h] BYREF
  unsigned __int64 v64; // [sp+238h] [bp+238h]
  unsigned __int64 v65; // [sp+240h] [bp+240h]
  unsigned __int64 v66; // [sp+248h] [bp+248h]
  unsigned __int64 v67; // [sp+250h] [bp+250h]
  unsigned __int64 v68; // [sp+258h] [bp+258h]
  __int64 v69; // [sp+260h] [bp+260h]
  __int64 v70; // [sp+268h] [bp+268h]
  __int64 v71; // [sp+270h] [bp+270h]
  __int64 v72; // [sp+278h] [bp+278h]
  int v73; // [sp+284h] [bp+284h]

  v37 = a2;
  v36 = a3;
  v44 = (unsigned int *)a1;
  v73 = *(_DWORD *)(a1 + 128);
  if ( 128 - v73 <= a3 )
  {
    v72 = *(_QWORD *)(a1 + 136);
    v71 = *(_QWORD *)(a1 + 144);
    v70 = *(_QWORD *)(a1 + 152);
    v69 = *(_QWORD *)(a1 + 160);
    v68 = *(_QWORD *)(a1 + 168);
    v67 = *(_QWORD *)(a1 + 176);
    v66 = *(_QWORD *)(a1 + 184);
    v65 = *(_QWORD *)(a1 + 192);
    v43 = *(_QWORD *)(a1 + 200);
    v42 = *(_QWORD *)(a1 + 208);
    v41 = *(_QWORD *)(a1 + 216);
    v40 = *(_QWORD *)(a1 + 224);
    v64 = *(_QWORD *)(a1 + 232);
    v63 = *(_QWORD *)(a1 + 240);
    while ( v36 )
    {
      n = 128 - v73;
      if ( 128 - v73 > v36 )
        n = v36;
      memcpy((char *)v44 + v73, v37, n);
      v73 += n;
      v37 += n;
      v36 -= n;
      if ( v73 == 128 )
      {
        v64 += 1024LL;
        if ( v64 <= 0x3FF )
          ++v63;
        v61 = v72;
        v60 = v71;
        v59 = v70;
        v58 = v69;
        v57 = v68;
        v56 = v67;
        v55 = v66;
        v54 = v65;
        v53 = loc_1A3E0 ^ v43;
        v52 = loc_1A3E8 ^ v42;
        v51 = loc_1A3F0 ^ v41;
        v50 = loc_1A3F8 ^ v40;
        v49 = loc_1A400 ^ v64;
        v48 = loc_1A408 ^ v64;
        v47 = loc_1A410 ^ v63;
        v46 = loc_1A418 ^ v63;
        v39[0] = sph_dec64be_aligned(v44);
        v39[1] = sph_dec64be_aligned(v44 + 2);
        v39[2] = sph_dec64be_aligned(v44 + 4);
        v39[3] = sph_dec64be_aligned(v44 + 6);
        v39[4] = sph_dec64be_aligned(v44 + 8);
        v39[5] = sph_dec64be_aligned(v44 + 10);
        v39[6] = sph_dec64be_aligned(v44 + 12);
        v39[7] = sph_dec64be_aligned(v44 + 14);
        v39[8] = sph_dec64be_aligned(v44 + 16);
        v39[9] = sph_dec64be_aligned(v44 + 18);
        v39[10] = sph_dec64be_aligned(v44 + 20);
        v39[11] = sph_dec64be_aligned(v44 + 22);
        v39[12] = sph_dec64be_aligned(v44 + 24);
        v39[13] = sph_dec64be_aligned(v44 + 26);
        v39[14] = sph_dec64be_aligned(v44 + 28);
        v39[15] = sph_dec64be_aligned(v44 + 30);
        for ( i = 0; i <= 0xF; ++i )
        {
          v61 += (CB[sigma[16 * i + 1]] ^ v39[sigma[16 * i]]) + v57;
          LODWORD(v35) = (v61 ^ v49) >> 32;
          HIDWORD(v35) = v61 ^ v49;
          v49 = v35;
          v53 += v35;
          HIDWORD(v34) = ((unsigned int)((v53 ^ v57) >> 32) >> 25) | (((unsigned int)v53 ^ (unsigned int)v57) << 7);
          LODWORD(v34) = (__int64)(v53 ^ v57) >> 25;
          v57 = v34;
          v61 += (CB[sigma[16 * i]] ^ v39[sigma[16 * i + 1]]) + v34;
          HIDWORD(v33) = ((unsigned int)((v61 ^ v35) >> 32) >> 16) | (((unsigned int)v61 ^ (unsigned int)v35) << 16);
          LODWORD(v33) = (__int64)(v61 ^ v35) >> 16;
          v49 = v33;
          v53 += v33;
          HIDWORD(v32) = ((unsigned int)((v53 ^ v34) >> 32) >> 11) | (((unsigned int)v53 ^ (unsigned int)v34) << 21);
          LODWORD(v32) = (__int64)(v53 ^ v34) >> 11;
          v57 = v32;
          v60 += (CB[sigma[16 * i + 3]] ^ v39[sigma[16 * i + 2]]) + v56;
          LODWORD(v31) = (v60 ^ v48) >> 32;
          HIDWORD(v31) = v60 ^ v48;
          v48 = v31;
          v52 += v31;
          HIDWORD(v30) = ((unsigned int)((v52 ^ v56) >> 32) >> 25) | (((unsigned int)v52 ^ (unsigned int)v56) << 7);
          LODWORD(v30) = (__int64)(v52 ^ v56) >> 25;
          v56 = v30;
          v60 += (CB[sigma[16 * i + 2]] ^ v39[sigma[16 * i + 3]]) + v30;
          HIDWORD(v29) = ((unsigned int)((v60 ^ v31) >> 32) >> 16) | (((unsigned int)v60 ^ (unsigned int)v31) << 16);
          LODWORD(v29) = (__int64)(v60 ^ v31) >> 16;
          v48 = v29;
          v52 += v29;
          HIDWORD(v28) = ((unsigned int)((v52 ^ v30) >> 32) >> 11) | (((unsigned int)v52 ^ (unsigned int)v30) << 21);
          LODWORD(v28) = (__int64)(v52 ^ v30) >> 11;
          v56 = v28;
          v59 += (CB[sigma[16 * i + 5]] ^ v39[sigma[16 * i + 4]]) + v55;
          LODWORD(v27) = (v59 ^ v47) >> 32;
          HIDWORD(v27) = v59 ^ v47;
          v47 = v27;
          v51 += v27;
          HIDWORD(v26) = ((unsigned int)((v51 ^ v55) >> 32) >> 25) | (((unsigned int)v51 ^ (unsigned int)v55) << 7);
          LODWORD(v26) = (__int64)(v51 ^ v55) >> 25;
          v55 = v26;
          v59 += (CB[sigma[16 * i + 4]] ^ v39[sigma[16 * i + 5]]) + v26;
          HIDWORD(v25) = ((unsigned int)((v59 ^ v27) >> 32) >> 16) | (((unsigned int)v59 ^ (unsigned int)v27) << 16);
          LODWORD(v25) = (__int64)(v59 ^ v27) >> 16;
          v47 = v25;
          v51 += v25;
          HIDWORD(v24) = ((unsigned int)((v51 ^ v26) >> 32) >> 11) | (((unsigned int)v51 ^ (unsigned int)v26) << 21);
          LODWORD(v24) = (__int64)(v51 ^ v26) >> 11;
          v55 = v24;
          v58 += (CB[sigma[16 * i + 7]] ^ v39[sigma[16 * i + 6]]) + v54;
          LODWORD(v23) = (v58 ^ v46) >> 32;
          HIDWORD(v23) = v58 ^ v46;
          v46 = v23;
          v50 += v23;
          HIDWORD(v22) = ((unsigned int)((v50 ^ v54) >> 32) >> 25) | (((unsigned int)v50 ^ (unsigned int)v54) << 7);
          LODWORD(v22) = (__int64)(v50 ^ v54) >> 25;
          v54 = v22;
          v58 += (CB[sigma[16 * i + 6]] ^ v39[sigma[16 * i + 7]]) + v22;
          HIDWORD(v21) = ((unsigned int)((v58 ^ v23) >> 32) >> 16) | (((unsigned int)v58 ^ (unsigned int)v23) << 16);
          LODWORD(v21) = (__int64)(v58 ^ v23) >> 16;
          v46 = v21;
          v50 += v21;
          HIDWORD(v20) = ((unsigned int)((v50 ^ v22) >> 32) >> 11) | (((unsigned int)v50 ^ (unsigned int)v22) << 21);
          LODWORD(v20) = (__int64)(v50 ^ v22) >> 11;
          v54 = v20;
          v61 += (CB[sigma[16 * i + 9]] ^ v39[sigma[16 * i + 8]]) + v28;
          LODWORD(v19) = (v61 ^ v21) >> 32;
          HIDWORD(v19) = v61 ^ v21;
          v46 = v19;
          v51 += v19;
          HIDWORD(v18) = ((unsigned int)((v51 ^ v28) >> 32) >> 25) | (((unsigned int)v51 ^ (unsigned int)v28) << 7);
          LODWORD(v18) = (__int64)(v51 ^ v28) >> 25;
          v56 = v18;
          v61 += (CB[sigma[16 * i + 8]] ^ v39[sigma[16 * i + 9]]) + v18;
          HIDWORD(v17) = ((unsigned int)((v61 ^ v19) >> 32) >> 16) | (((unsigned int)v61 ^ (unsigned int)v19) << 16);
          LODWORD(v17) = (__int64)(v61 ^ v19) >> 16;
          v46 = v17;
          v51 += v17;
          HIDWORD(v16) = ((unsigned int)((v51 ^ v18) >> 32) >> 11) | (((unsigned int)v51 ^ (unsigned int)v18) << 21);
          LODWORD(v16) = (__int64)(v51 ^ v18) >> 11;
          v56 = v16;
          v60 += (CB[sigma[16 * i + 11]] ^ v39[sigma[16 * i + 10]]) + v24;
          LODWORD(v15) = (v60 ^ v33) >> 32;
          HIDWORD(v15) = v60 ^ v33;
          v49 = v15;
          v50 += v15;
          HIDWORD(v14) = ((unsigned int)((v50 ^ v24) >> 32) >> 25) | (((unsigned int)v50 ^ (unsigned int)v24) << 7);
          LODWORD(v14) = (__int64)(v50 ^ v24) >> 25;
          v55 = v14;
          v60 += (CB[sigma[16 * i + 10]] ^ v39[sigma[16 * i + 11]]) + v14;
          HIDWORD(v13) = ((unsigned int)((v60 ^ v15) >> 32) >> 16) | (((unsigned int)v60 ^ (unsigned int)v15) << 16);
          LODWORD(v13) = (__int64)(v60 ^ v15) >> 16;
          v49 = v13;
          v50 += v13;
          HIDWORD(v12) = ((unsigned int)((v50 ^ v14) >> 32) >> 11) | (((unsigned int)v50 ^ (unsigned int)v14) << 21);
          LODWORD(v12) = (__int64)(v50 ^ v14) >> 11;
          v55 = v12;
          v59 += (CB[sigma[16 * i + 13]] ^ v39[sigma[16 * i + 12]]) + v20;
          LODWORD(v11) = (v59 ^ v29) >> 32;
          HIDWORD(v11) = v59 ^ v29;
          v48 = v11;
          v53 += v11;
          HIDWORD(v10) = ((unsigned int)((v53 ^ v20) >> 32) >> 25) | (((unsigned int)v53 ^ (unsigned int)v20) << 7);
          LODWORD(v10) = (__int64)(v53 ^ v20) >> 25;
          v54 = v10;
          v59 += (CB[sigma[16 * i + 12]] ^ v39[sigma[16 * i + 13]]) + v10;
          HIDWORD(v9) = ((unsigned int)((v59 ^ v11) >> 32) >> 16) | (((unsigned int)v59 ^ (unsigned int)v11) << 16);
          LODWORD(v9) = (__int64)(v59 ^ v11) >> 16;
          v48 = v9;
          v53 += v9;
          HIDWORD(v8) = ((unsigned int)((v53 ^ v10) >> 32) >> 11) | (((unsigned int)v53 ^ (unsigned int)v10) << 21);
          LODWORD(v8) = (__int64)(v53 ^ v10) >> 11;
          v54 = v8;
          v58 += (CB[sigma[16 * i + 15]] ^ v39[sigma[16 * i + 14]]) + v32;
          LODWORD(v7) = (v58 ^ v25) >> 32;
          HIDWORD(v7) = v58 ^ v25;
          v47 = v7;
          v52 += v7;
          HIDWORD(v6) = ((unsigned int)((v52 ^ v32) >> 32) >> 25) | (((unsigned int)v52 ^ (unsigned int)v32) << 7);
          LODWORD(v6) = (__int64)(v52 ^ v32) >> 25;
          v57 = v6;
          v58 += (CB[sigma[16 * i + 14]] ^ v39[sigma[16 * i + 15]]) + v6;
          HIDWORD(v4) = (((unsigned int)v58 ^ (unsigned int)v7) << 16) | ((unsigned int)((v58 ^ v7) >> 32) >> 16);
          LODWORD(v4) = (__int64)(v58 ^ v7) >> 16;
          v47 = v4;
          v52 += v4;
          HIDWORD(v5) = (((unsigned int)v52 ^ (unsigned int)v6) << 21) | ((unsigned int)((v52 ^ v6) >> 32) >> 11);
          LODWORD(v5) = (__int64)(v52 ^ v6) >> 11;
          v57 = v5;
        }
        v72 ^= v43 ^ v61 ^ v53;
        v71 ^= v42 ^ v60 ^ v52;
        v70 ^= v41 ^ v59 ^ v51;
        v69 ^= v40 ^ v58 ^ v50;
        v68 ^= v43 ^ v57 ^ v49;
        v67 ^= v42 ^ v56 ^ v48;
        v66 ^= v41 ^ v55 ^ v47;
        v65 ^= v40 ^ v54 ^ v46;
        v73 = 0;
      }
    }
    *(_QWORD *)(a1 + 136) = v72;
    *(_QWORD *)(a1 + 144) = v71;
    *(_QWORD *)(a1 + 152) = v70;
    *(_QWORD *)(a1 + 160) = v69;
    *(_QWORD *)(a1 + 168) = v68;
    *(_QWORD *)(a1 + 176) = v67;
    *(_QWORD *)(a1 + 184) = v66;
    *(_QWORD *)(a1 + 192) = v65;
    *(_QWORD *)(a1 + 200) = v43;
    *(_QWORD *)(a1 + 208) = v42;
    *(_QWORD *)(a1 + 216) = v41;
    *(_QWORD *)(a1 + 224) = v40;
    *(_QWORD *)(a1 + 232) = v64;
    *(_QWORD *)(a1 + 240) = v63;
    *(_DWORD *)(a1 + 128) = v73;
    return &v63;
  }
  else
  {
    result = (__int64 *)memcpy((char *)v44 + v73, a2, a3);
    *(_DWORD *)(a1 + 128) = v73 + v36;
  }
  return result;
}
