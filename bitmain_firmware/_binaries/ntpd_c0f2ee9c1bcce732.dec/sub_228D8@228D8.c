int __fastcall sub_228D8(int result)
{
  int v1; // r4
  unsigned int v2; // r8
  char v3; // r3
  unsigned int v4; // r6
  unsigned int v5; // r7
  bool v6; // zf
  char v7; // r1
  char v8; // r10
  unsigned int v9; // r12
  unsigned int v10; // r0
  int v11; // r3
  unsigned int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r12
  int v15; // r2
  int v16; // r1
  int v17; // r2
  int v18; // r3
  unsigned int v19; // r1
  int *v20; // r2
  int v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r5
  const char *v25; // r7
  const char *v26; // r0
  int v27; // r3
  unsigned int v28; // r1
  unsigned int v29; // r2
  unsigned int v30; // r12
  int v31; // r6
  int v32; // r0
  size_t n; // r5
  int v34; // r2
  int v35; // r2
  int v36; // r3
  unsigned int v37; // r1
  int *v38; // r2
  unsigned int v39; // r1
  int v40; // r3
  int v41; // r2
  int v42; // r0
  int v43; // r7
  const char *v44; // r10
  const char *v45; // r0
  unsigned int v46; // r2
  unsigned int v47; // r3
  unsigned int v48; // r2
  unsigned int v49; // r3
  unsigned int v50; // r1
  int v51; // r3
  bool v52; // cc
  unsigned int v53; // r2
  unsigned int v54; // r3
  bool v55; // cc
  unsigned int v56; // r2
  unsigned int v57; // r3
  int v58; // r3
  int v59; // r3
  unsigned int v60; // [sp+14h] [bp-60h] BYREF
  unsigned int v61; // [sp+18h] [bp-5Ch]
  int v62; // [sp+1Ch] [bp-58h] BYREF
  unsigned int v63; // [sp+20h] [bp-54h]
  _BYTE v64[4]; // [sp+24h] [bp-50h] BYREF
  unsigned int v65; // [sp+28h] [bp-4Ch]
  unsigned int v66; // [sp+2Ch] [bp-48h]
  int v67; // [sp+30h] [bp-44h]
  unsigned int v68; // [sp+34h] [bp-40h]
  unsigned int v69; // [sp+38h] [bp-3Ch]
  unsigned int v70; // [sp+3Ch] [bp-38h]
  unsigned int v71; // [sp+40h] [bp-34h]
  unsigned int v72; // [sp+44h] [bp-30h]
  unsigned int v73; // [sp+48h] [bp-2Ch]
  unsigned int v74; // [sp+4Ch] [bp-28h]
  unsigned int v75; // [sp+50h] [bp-24h]

  v1 = result;
  if ( !*(_DWORD *)(result + 40) )
    return result;
  v2 = bswap32(dword_CB500);
  v3 = byte_CB4FC;
  v4 = bswap32(dword_CB504);
  v72 = bswap32(*(_DWORD *)(result + 384));
  v5 = *(_DWORD *)(result + 388);
  if ( byte_CB4FC == 16 )
    v3 = 0;
  v64[1] = v3;
  v73 = bswap32(v5);
  v6 = *(_DWORD *)(result + 100) == 0;
  v7 = *(_BYTE *)(result + 48);
  v8 = (8 * *(_BYTE *)(result + 46)) & 0x38 | (byte_CB4B0 << 6) | *(_BYTE *)(result + 47) & 7;
  v9 = *(_DWORD *)(result + 368);
  v10 = *(_DWORD *)(result + 372);
  v64[3] = byte_CB478;
  v71 = bswap32(v10);
  v64[0] = v8;
  v68 = v2;
  v69 = v4;
  v67 = dword_CB4E0;
  v70 = bswap32(v9);
  v64[2] = v7;
  v65 = bswap32((int)(dbl_CB4B8 * 65536.0));
  v66 = bswap32((unsigned int)(dbl_CB498 * 65536.0));
  if ( !v6 )
  {
    sub_4CBA8(&v60);
    v27 = *(_DWORD *)(v1 + 124);
    if ( v27 )
    {
      if ( *(_BYTE *)(v1 + 47) == 5 )
      {
        v52 = v27 <= 0;
        v53 = bswap32(v60);
        v74 = v53;
        v54 = bswap32(v61);
        if ( !v52 )
          v53 = *(_DWORD *)(v1 + 400);
        v75 = v54;
        if ( v52 )
          v53 = *(_DWORD *)(v1 + 392);
        else
          v54 = *(_DWORD *)(v1 + 404);
        if ( v52 )
          v54 = *(_DWORD *)(v1 + 396);
        v70 = bswap32(v53);
        v71 = bswap32(v54);
      }
      else
      {
        if ( v27 <= 0 )
        {
          v48 = *(_DWORD *)(v1 + 392);
          v49 = *(_DWORD *)(v1 + 396);
        }
        else
        {
          v48 = *(_DWORD *)(v1 + 400);
          v49 = *(_DWORD *)(v1 + 404);
        }
        v74 = bswap32(v48);
        v75 = bswap32(v49);
      }
    }
    else
    {
      v28 = v61;
      v29 = v61;
      v30 = bswap32(v60);
      *(_DWORD *)(v1 + 392) = v60;
      *(_DWORD *)(v1 + 396) = v28;
      v74 = v30;
      v75 = bswap32(v29);
    }
    v31 = *(_DWORD *)(v1 + 100);
    v32 = sub_4E458(v31, v64, 48);
    if ( v32 )
    {
      n = v32 + 48;
      if ( (unsigned int)(v32 + 48) > 0x4C )
      {
        sub_4FE78(3, "proto: buffer overflow %u", n);
        exit(-1);
      }
      v34 = *(unsigned __int8 *)(v1 + 59);
      *(_DWORD *)(v1 + 464) = n;
      sub_154A4((unsigned __int16 *)(v1 + 12), *(_DWORD *)(v1 + 40), (unsigned __int8)byte_CB460[v34], v64, n);
      v35 = *(_DWORD *)(v1 + 512) + (1 << *(_BYTE *)(v1 + 49)) - 2;
      ++*(_DWORD *)(v1 + 544);
      *(_DWORD *)(v1 + 512) = v35;
      result = sub_4CBA8(&v62);
      v36 = *(_DWORD *)(v1 + 124);
      if ( v36 )
      {
        result = v62;
        v37 = v63;
        if ( v36 <= 0 )
          v38 = (int *)(v1 + 400);
        else
          v38 = (int *)(v1 + 392);
        *v38 = v62;
        v38[1] = v37;
        *(_DWORD *)(v1 + 124) = -v36;
      }
      if ( v61 )
      {
        v39 = HIWORD(v63) + (-v61 >> 16);
        result = (unsigned __int16)v63 + (unsigned __int16)-(__int16)v61;
        if ( (result & 0x10000) != 0 )
          ++v39;
        v40 = ~v60 + v62;
        v41 = (unsigned __int16)(v63 - v61) | (v39 << 16);
        if ( (v39 & 0x10000) != 0 )
          ++v40;
        v63 = (unsigned __int16)(v63 - v61) | (v39 << 16);
        v62 = v40;
      }
      else
      {
        v41 = v63;
        v40 = v62 - v60;
        v62 -= v60;
      }
      if ( v40 < 0 )
      {
        if ( v41 )
        {
          v41 = -v41;
          v59 = ~v40;
        }
        else
        {
          v59 = -v40;
        }
        *(double *)(v1 + 440) = -((double)v59 + (double)(unsigned int)v41 * 2.32830644e-10);
      }
      else
      {
        *(double *)(v1 + 440) = (double)v40 + (double)(unsigned int)v41 * 2.32830644e-10;
      }
      if ( dword_7CF4C )
      {
        v42 = *(_DWORD *)(v1 + 40);
        v43 = dword_CB548;
        if ( v42 )
          v44 = (const char *)sub_50CD0(v42 + 20);
        else
          v44 = "-";
        v45 = (const char *)sub_50CD0(v1 + 12);
        return printf(
                 "transmit: at %ld %s->%s mode %d keyid %08x len %d\n",
                 v43,
                 v44,
                 v45,
                 *(unsigned __int8 *)(v1 + 47),
                 v31,
                 n);
      }
    }
    else
    {
      result = sub_1D3D8(140, v1, "no key");
      v58 = *(_DWORD *)(v1 + 556);
      *(_DWORD *)(v1 + 108) |= 0x10u;
      *(_DWORD *)(v1 + 556) = v58 + 1;
    }
    return result;
  }
  sub_4CBA8(&v60);
  v11 = *(_DWORD *)(v1 + 124);
  if ( v11 )
  {
    if ( *(_BYTE *)(v1 + 47) == 5 )
    {
      v55 = v11 <= 0;
      v56 = bswap32(v60);
      v74 = v56;
      v57 = bswap32(v61);
      if ( !v55 )
        v56 = *(_DWORD *)(v1 + 400);
      v75 = v57;
      if ( v55 )
        v56 = *(_DWORD *)(v1 + 392);
      else
        v57 = *(_DWORD *)(v1 + 404);
      if ( v55 )
        v57 = *(_DWORD *)(v1 + 396);
      v70 = bswap32(v56);
      v71 = bswap32(v57);
    }
    else
    {
      if ( v11 <= 0 )
      {
        v46 = *(_DWORD *)(v1 + 392);
        v47 = *(_DWORD *)(v1 + 396);
      }
      else
      {
        v46 = *(_DWORD *)(v1 + 400);
        v47 = *(_DWORD *)(v1 + 404);
      }
      v74 = bswap32(v46);
      v75 = bswap32(v47);
    }
  }
  else
  {
    v12 = v61;
    v13 = v61;
    v14 = bswap32(v60);
    *(_DWORD *)(v1 + 392) = v60;
    *(_DWORD *)(v1 + 396) = v12;
    v74 = v14;
    v75 = bswap32(v13);
  }
  v15 = *(unsigned __int8 *)(v1 + 59);
  v16 = *(_DWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 464) = 48;
  sub_154A4((unsigned __int16 *)(v1 + 12), v16, (unsigned __int8)byte_CB460[v15], v64, 0x30u);
  v17 = *(_DWORD *)(v1 + 512) + (1 << *(_BYTE *)(v1 + 49)) - 2;
  ++*(_DWORD *)(v1 + 544);
  *(_DWORD *)(v1 + 512) = v17;
  result = sub_4CBA8(&v62);
  v18 = *(_DWORD *)(v1 + 124);
  if ( v18 )
  {
    result = v62;
    v19 = v63;
    if ( v18 <= 0 )
      v20 = (int *)(v1 + 400);
    else
      v20 = (int *)(v1 + 392);
    *v20 = v62;
    v20[1] = v19;
    *(_DWORD *)(v1 + 124) = -v18;
  }
  if ( v61 )
  {
    v50 = HIWORD(v63) + (-v61 >> 16);
    result = (unsigned __int16)v63 + (unsigned __int16)-(__int16)v61;
    if ( (result & 0x10000) != 0 )
      ++v50;
    v22 = ~v60 + v62;
    if ( (v50 & 0x10000) != 0 )
      ++v22;
    v21 = (unsigned __int16)(v63 - v61) | (v50 << 16);
    v63 = v21;
    v62 = v22;
    if ( v22 >= 0 )
      goto LABEL_15;
  }
  else
  {
    v21 = v63;
    v22 = v62 - v60;
    v62 = v22;
    if ( v22 >= 0 )
    {
LABEL_15:
      *(double *)(v1 + 440) = (double)v22 + (double)(unsigned int)v21 * 2.32830644e-10;
      goto LABEL_16;
    }
  }
  if ( v21 )
  {
    v21 = -v21;
    v51 = ~v22;
  }
  else
  {
    v51 = -v22;
  }
  *(double *)(v1 + 440) = -((double)v51 + (double)(unsigned int)v21 * 2.32830644e-10);
LABEL_16:
  if ( dword_7CF4C )
  {
    v23 = *(_DWORD *)(v1 + 40);
    v24 = dword_CB548;
    if ( v23 )
      v25 = (const char *)sub_50CD0(v23 + 20);
    else
      v25 = "-";
    v26 = (const char *)sub_50CD0(v1 + 12);
    return printf("transmit: at %ld %s->%s mode %d len %d\n", v24, v25, v26, *(unsigned __int8 *)(v1 + 47), 48);
  }
  return result;
}
