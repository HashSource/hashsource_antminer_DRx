int __fastcall sub_2F548(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int *v4; // r5
  unsigned int *v5; // r4
  int v6; // r3
  unsigned int v7; // r12
  unsigned int v8; // t1
  unsigned int v9; // t1
  bool v10; // cf
  int v11; // r4
  char *v12; // r6
  const char *v13; // r0
  char *v14; // r5
  const char *v15; // r3
  _DWORD v17[8]; // [sp+8h] [bp-840h] BYREF
  _DWORD v18[8]; // [sp+28h] [bp-820h] BYREF
  char s[2048]; // [sp+48h] [bp-800h] BYREF

  v2 = a1[7];
  v3 = a2[7];
  if ( v2 > v3 )
  {
    v11 = 0;
  }
  else if ( v2 >= v3 )
  {
    v4 = a1 + 7;
    v5 = a2 + 7;
    v6 = 6;
    while ( 1 )
    {
      v8 = *--v4;
      v7 = v8;
      v9 = *--v5;
      v10 = v7 >= v9;
      if ( v7 > v9 )
        break;
      if ( !v10 )
      {
        v11 = 1;
        goto LABEL_12;
      }
      if ( --v6 == -1 )
      {
        v11 = 1;
        goto LABEL_12;
      }
    }
    v11 = 0;
  }
  else
  {
    v11 = 1;
  }
LABEL_12:
  if ( byte_75C09 )
  {
    v17[0] = bswap32(a1[7]);
    v17[1] = bswap32(a1[6]);
    v17[2] = bswap32(a1[5]);
    v17[3] = bswap32(a1[4]);
    v17[4] = bswap32(a1[3]);
    v17[5] = bswap32(a1[2]);
    v17[6] = bswap32(a1[1]);
    v17[7] = bswap32(*a1);
    v18[0] = bswap32(a2[7]);
    v18[1] = bswap32(a2[6]);
    v18[2] = bswap32(a2[5]);
    v18[3] = bswap32(a2[4]);
    v18[4] = bswap32(a2[3]);
    v18[5] = bswap32(a2[2]);
    v18[6] = bswap32(a2[1]);
    v18[7] = bswap32(*a2);
    v12 = sub_2CDEC((char *)v17, 32);
    v13 = sub_2CDEC((char *)v18, 32);
    v14 = (char *)v13;
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      if ( v11 )
        v15 = "YES (hash <= target)";
      else
        v15 = "no (false positive; hash > target)";
      snprintf(s, 0x800u, " Proof: %s\nTarget: %s\nTrgVal? %s", v12, v13, v15);
      sub_3F1C0(7, s, 0);
    }
    free(v12);
    free(v14);
  }
  return v11;
}
