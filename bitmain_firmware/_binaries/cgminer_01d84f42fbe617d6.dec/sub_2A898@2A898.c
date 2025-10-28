int __fastcall sub_2A898(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v2; // r12
  unsigned int *v3; // r2
  int v4; // r3
  unsigned int v5; // r5
  unsigned int v6; // t1
  unsigned int v7; // t1
  bool v8; // cf
  int v9; // r5
  unsigned int v11; // r8
  unsigned int v12; // lr
  unsigned int v13; // r12
  unsigned int v14; // r9
  unsigned int v15; // r2
  unsigned int v16; // r11
  unsigned int v17; // r3
  unsigned int v18; // r7
  unsigned int v19; // r10
  unsigned int v20; // r8
  unsigned int v21; // lr
  unsigned int v22; // r12
  unsigned int v23; // r2
  unsigned int v24; // r3
  unsigned int v25; // r6
  char *v26; // r7
  const char *v27; // r0
  char *v28; // r6
  const char *v29; // r3
  _DWORD v30[8]; // [sp+8h] [bp-844h] BYREF
  _DWORD v31[8]; // [sp+28h] [bp-824h] BYREF
  char s[2052]; // [sp+48h] [bp-804h] BYREF

  v2 = a1 + 8;
  v3 = a2 + 8;
  v4 = 7;
  while ( 1 )
  {
    v6 = *--v2;
    v5 = v6;
    --v4;
    v7 = *--v3;
    v8 = v5 >= v7;
    if ( v5 > v7 )
      break;
    if ( !v8 || v4 == -1 )
    {
      v9 = 1;
      goto LABEL_7;
    }
  }
  v9 = 0;
LABEL_7:
  if ( byte_630C1 )
  {
    v11 = bswap32(a1[6]);
    v12 = bswap32(a1[5]);
    v13 = bswap32(a1[4]);
    v14 = a1[1];
    v15 = bswap32(a1[3]);
    v16 = *a1;
    v17 = bswap32(a1[2]);
    v18 = a2[7];
    v30[0] = bswap32(a1[7]);
    v19 = a2[6];
    v30[1] = v11;
    v30[2] = v12;
    v20 = a2[5];
    v21 = a2[4];
    v30[3] = v13;
    v22 = a2[3];
    v30[4] = v15;
    v30[5] = v17;
    v23 = a2[2];
    v24 = a2[1];
    v25 = *a2;
    v31[0] = bswap32(v18);
    v31[6] = bswap32(v24);
    v31[3] = bswap32(v21);
    v31[4] = bswap32(v22);
    v31[5] = bswap32(v23);
    v31[7] = bswap32(v25);
    v30[6] = bswap32(v14);
    v30[7] = bswap32(v16);
    v31[1] = bswap32(v19);
    v31[2] = bswap32(v20);
    v26 = sub_294B8((int)v30, 32);
    v27 = sub_294B8((int)v31, 32);
    v28 = (char *)v27;
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      v29 = "YES (hash <= target)";
      if ( !v9 )
        v29 = "no (false positive; hash > target)";
      snprintf(s, 0x800u, " Proof: %s\nTarget: %s\nTrgVal? %s", v26, v27, v29);
      sub_38438(7, s, 0);
    }
    free(v26);
    free(v28);
  }
  return v9;
}
