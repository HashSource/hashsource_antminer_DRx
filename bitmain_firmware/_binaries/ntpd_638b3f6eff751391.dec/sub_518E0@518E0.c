int __fastcall sub_518E0(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  int v4; // r6
  _DWORD *v5; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r8
  int v13; // r5
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r0
  __int16 v20; // r3
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int v27; // r3
  char *v28; // r8
  char *v29; // r6
  char *v30; // r0
  int v31; // r1
  char *v32; // r2
  __int16 v33; // r3
  int v34; // r2
  int i; // r3
  int v36; // r1
  int *v37; // r0
  int v38; // r6
  char *v39; // r0
  int v40; // r1
  int v41; // r3
  int v42; // r2
  char v43; // r0
  int *v44; // r0
  int *v45; // r0
  const char *v46; // r0
  int *v47; // r0
  const char *v48; // r0
  int *v49; // r0
  const char *v50; // r0
  char *v51; // [sp+0h] [bp-18Ch]
  const char *v52; // [sp+4h] [bp-188h]
  int v53; // [sp+10h] [bp-17Ch] BYREF
  int v54; // [sp+14h] [bp-178h] BYREF
  char v55; // [sp+18h] [bp-174h] BYREF
  char v56; // [sp+1Ch] [bp-170h] BYREF
  char v57; // [sp+1Fh] [bp-16Dh] BYREF
  _BYTE v58[16]; // [sp+20h] [bp-16Ch] BYREF
  char v59[20]; // [sp+30h] [bp-15Ch] BYREF
  char dest[4]; // [sp+44h] [bp-148h] BYREF
  int v61; // [sp+48h] [bp-144h]
  int v62; // [sp+4Ch] [bp-140h]
  int v63; // [sp+50h] [bp-13Ch]
  int v64; // [sp+54h] [bp-138h]
  int v65; // [sp+58h] [bp-134h]
  int v66; // [sp+5Ch] [bp-130h]
  int v67; // [sp+60h] [bp-12Ch]
  char s[4]; // [sp+64h] [bp-128h] BYREF
  int v69; // [sp+68h] [bp-124h]
  int v70; // [sp+6Ch] [bp-120h]
  int v71; // [sp+70h] [bp-11Ch]
  int v72; // [sp+74h] [bp-118h] BYREF
  int v73; // [sp+78h] [bp-114h]
  int v74; // [sp+7Ch] [bp-110h]
  int v75; // [sp+80h] [bp-10Ch]
  char v76; // [sp+84h] [bp-108h] BYREF
  char v77[256]; // [sp+88h] [bp-104h] BYREF
  char v78; // [sp+188h] [bp-4h] BYREF

  if ( !a1 || *(_DWORD *)a1 != 1229343060 )
    off_7C9FC(
      "./../lib/isc/unix/ifiter_ioctl.c",
      443,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('T')))))");
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 != v2 )
    {
      if ( v3 >= v2 )
        off_7C9FC("./../lib/isc/unix/ifiter_ioctl.c", 454, 2, "iter->pos < (unsigned int) iter->ifc.ifc_len");
      v4 = *(_DWORD *)(a1 + 20);
      v72 = 0;
      v5 = (_DWORD *)(v4 + v3);
      *(_DWORD *)s = 0;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      v73 = 0;
      v74 = 0;
      v75 = 0;
      v6 = v5[1];
      v7 = v5[2];
      v8 = v5[3];
      *(_DWORD *)s = *v5;
      v69 = v6;
      v70 = v7;
      v71 = v8;
      v9 = v5[5];
      v10 = v5[6];
      v11 = v5[7];
      v72 = v5[4];
      v73 = v9;
      v74 = v10;
      v75 = v11;
      v12 = (unsigned __int16)v72;
      if ( (v72 & 0xFFF7) != 2 )
        return 36;
      memset((void *)(a1 + 108), 0, 0x8Cu);
      *(_DWORD *)(a1 + 140) = v12;
      memset((void *)(a1 + 108), 0, 0x20u);
      v16 = v69;
      v17 = v70;
      v18 = v71;
      *(_DWORD *)(a1 + 108) = *(_DWORD *)s;
      *(_DWORD *)(a1 + 112) = v16;
      *(_DWORD *)(a1 + 116) = v17;
      *(_DWORD *)(a1 + 120) = v18;
      sub_517C8(v12, (_DWORD *)(a1 + 144), (int)(v5 + 4), (int)s);
      if ( v12 == 2 )
      {
        if ( *(_DWORD *)(a1 + 148) )
          goto LABEL_18;
      }
      else if ( v12 != 10 || memcmp((const void *)(a1 + 148), &in6addr_any, 0x10u) )
      {
LABEL_18:
        v19 = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 240) = 0;
        if ( ioctl(v19, 0x8913u, s) < 0 )
        {
          v37 = _errno_location();
          v13 = 36;
          sub_57070(*v37);
          sub_5166C("./../lib/isc/unix/ifiter_ioctl.c", 507, "%s: getting interface flags: %s", s, v77);
        }
        else
        {
          v20 = v72;
          if ( (v72 & 1) != 0 )
            *(_DWORD *)(a1 + 240) |= 1u;
          if ( (v20 & 0x10) != 0 )
            *(_DWORD *)(a1 + 240) |= 2u;
          if ( (v20 & 8) != 0 )
            *(_DWORD *)(a1 + 240) |= 4u;
          if ( (v20 & 2) != 0 )
            *(_DWORD *)(a1 + 240) |= 8u;
          if ( (v20 & 0x1000) != 0 )
            *(_DWORD *)(a1 + 240) |= 0x10u;
          if ( v12 == 2 )
          {
            v21 = *(_DWORD *)(a1 + 240);
            if ( (v21 & 2) != 0 )
            {
              if ( ioctl(*(_DWORD *)(a1 + 12), 0x8917u, s) < 0 )
              {
                v49 = _errno_location();
                v13 = 36;
                sub_57070(*v49);
                v50 = (const char *)sub_55CA4(dword_C9C48, 7, 504, "%s: getting destination address: %s", v51, v52);
                sub_5166C("./../lib/isc/unix/ifiter_ioctl.c", 594, v50, s, v77);
                return v13;
              }
              sub_517C8(2, (_DWORD *)(a1 + 216), (int)&v72, (int)s);
              v21 = *(_DWORD *)(a1 + 240);
            }
            if ( (v21 & 8) != 0 )
            {
              if ( ioctl(*(_DWORD *)(a1 + 12), 0x8919u, s) < 0 )
              {
                v47 = _errno_location();
                v13 = 36;
                sub_57070(*v47);
                v48 = (const char *)sub_55CA4(dword_C9C48, 7, 506, "%s: getting broadcast address: %s", v51, v52);
                sub_5166C("./../lib/isc/unix/ifiter_ioctl.c", 617, v48, s, v77);
                return v13;
              }
              sub_517C8(2, (_DWORD *)(a1 + 192), (int)&v72, (int)s);
            }
            v13 = 0;
            *(_DWORD *)s = 0;
            v69 = 0;
            v70 = 0;
            v71 = 0;
            v72 = 0;
            v73 = 0;
            v74 = 0;
            v75 = 0;
            v22 = v5[1];
            v23 = v5[2];
            v24 = v5[3];
            *(_DWORD *)s = *v5;
            v69 = v22;
            v70 = v23;
            v71 = v24;
            v25 = v5[5];
            v26 = v5[6];
            v27 = v5[7];
            v72 = v5[4];
            v73 = v25;
            v74 = v26;
            v75 = v27;
            if ( ioctl(*(_DWORD *)(a1 + 12), 0x891Bu, s) < 0 )
            {
              v45 = _errno_location();
              v13 = 36;
              sub_57070(*v45);
              v46 = (const char *)sub_55CA4(dword_C9C48, 7, 505, "%s: getting netmask: %s", v51, v52);
              sub_5166C("./../lib/isc/unix/ifiter_ioctl.c", 642, v46, s, v77);
            }
            else
            {
              sub_517C8(2, (_DWORD *)(a1 + 168), (int)&v72, (int)s);
            }
          }
          else
          {
            sub_56698(a1 + 144, v77, 256);
            v38 = dword_C9C5C;
            v39 = (char *)sub_55CA4(dword_C9C48, 7, 502, "prefix length for %s is unknown (assume 128)", v51);
            sub_548C4(v38, (int)&off_7CA10, (int)&off_7CA30, -1, v39, v77);
            v40 = a1;
            v41 = 128;
            v42 = 0;
            *(_DWORD *)(a1 + 168) = v12;
            do
            {
              ++v42;
              v43 = -1;
              if ( v41 <= 8 )
              {
                v43 = -1 << (8 - v41);
                v41 = 0;
              }
              else
              {
                v41 -= 8;
              }
              *(_BYTE *)(v40 + 172) = v43;
              ++v40;
            }
            while ( v42 != 16 );
            return 0;
          }
        }
        return v13;
      }
      return 36;
    }
  }
  v13 = *(_DWORD *)(a1 + 104);
  if ( v13 )
    return v13;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    v13 = 25;
    sub_548C4(dword_C9C5C, (int)&off_7CA10, (int)&off_7CA30, -4, "/proc/net/if_inet6:iter->proc == NULL");
    return v13;
  }
  v15 = sscanf((const char *)(a1 + 40), "%32[a-f0-9] %x %x %x %x %16s\n", s, &v53, &v54, &v55, &v56, v59);
  if ( v15 != 6 )
  {
    v13 = 25;
    sub_548C4(dword_C9C5C, (int)&off_7CA10, (int)&off_7CA30, -4, "/proc/net/if_inet6:sscanf() -> %d (expected 6)", v15);
    return v13;
  }
  if ( strlen(s) != 32 )
  {
    v13 = 25;
    sub_548C4(dword_C9C5C, (int)&off_7CA10, (int)&off_7CA30, -4, "/proc/net/if_inet6:strlen(%s) != 32", s);
    return v13;
  }
  if ( (v56 & 0x40) != 0 )
    return 36;
  v28 = &v57;
  v29 = s;
  do
  {
    v30 = strchr("0123456789abcdef", (unsigned __int8)*v29);
    v31 = (unsigned __int8)v29[1];
    v29 += 2;
    *++v28 = (strchr("0123456789abcdef", v31) - "0123456789abcdef") | (16 * (v30 - "0123456789abcdef"));
  }
  while ( v29 != &v76 );
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 140) = 10;
  *(_DWORD *)dest = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  strncpy(dest, v59, 0x10u);
  if ( ioctl(*(_DWORD *)(a1 + 12), 0x8913u, dest) < 0 )
  {
    v44 = _errno_location();
    v13 = 36;
    sub_57070(*v44);
    sub_5166C("./../lib/isc/unix/interfaceiter.c", 248, "%s: getting interface flags: %s", dest, v77);
  }
  else
  {
    v32 = &v78;
    v33 = v64;
    if ( (v64 & 1) != 0 )
    {
      v32 = (char *)(*(_DWORD *)(a1 + 240) | 1);
      *(_DWORD *)(a1 + 240) = v32;
    }
    if ( (v33 & 0x10) != 0 )
    {
      v32 = (char *)(*(_DWORD *)(a1 + 240) | 2);
      *(_DWORD *)(a1 + 240) = v32;
    }
    if ( (v33 & 8) != 0 )
    {
      v32 = (char *)(*(_DWORD *)(a1 + 240) | 4);
      *(_DWORD *)(a1 + 240) = v32;
    }
    if ( (v33 & 2) != 0 )
    {
      v32 = (char *)(*(_DWORD *)(a1 + 240) | 8);
      *(_DWORD *)(a1 + 240) = v32;
    }
    if ( (v33 & 0x1000) != 0 )
      *(_DWORD *)(a1 + 240) |= 0x10u;
    sub_568BC(a1 + 144, v58, v32);
    *(_DWORD *)(a1 + 244) = v53;
    if ( sub_56A98(a1 + 144) )
      sub_568F4(a1 + 144);
    v34 = v54;
    for ( i = 0; i != 16; ++i )
    {
      v36 = 255 << (8 - v34);
      if ( v34 <= 8 )
      {
        v34 = 0;
        v58[i] = v36;
      }
      else
      {
        v34 -= 8;
        v58[i] = -1;
      }
    }
    v54 = v34;
    sub_568BC(a1 + 168, v58, v34);
    strncpy((char *)(a1 + 108), v59, 0x20u);
  }
  return v13;
}
