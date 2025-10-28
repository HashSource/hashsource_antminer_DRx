int __fastcall sub_2A0C0(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // r3
  __int64 *v3; // r2
  unsigned int v4; // r5
  unsigned int v5; // t1
  unsigned int v6; // t1
  bool v7; // cf
  int v8; // r5
  __int64 v10; // kr00_8
  unsigned int v11; // r6
  unsigned int v12; // r2
  __int64 v13; // kr08_8
  __int64 v14; // r6
  unsigned int v15; // r2
  unsigned int v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r3
  unsigned int v19; // r12
  __int64 v20; // kr10_8
  char *v21; // r7
  const char *v22; // r0
  char *v23; // r6
  const char *v24; // r3
  _DWORD v25[8]; // [sp+8h] [bp-844h] BYREF
  _DWORD v26[8]; // [sp+28h] [bp-824h] BYREF
  char s[2052]; // [sp+48h] [bp-804h] BYREF

  v2 = a1 + 4;
  v3 = a2 + 4;
  while ( 1 )
  {
    v5 = *((_DWORD *)v2 - 1);
    v2 = (__int64 *)((char *)v2 - 4);
    v4 = v5;
    v6 = *((_DWORD *)v3 - 1);
    v3 = (__int64 *)((char *)v3 - 4);
    v7 = v4 >= v6;
    if ( v4 > v6 )
      break;
    if ( !v7 || a1 == v2 )
    {
      v8 = 1;
      goto LABEL_7;
    }
  }
  v8 = 0;
LABEL_7:
  if ( !byte_6FA71 )
    return v8;
  v10 = a1[3];
  v11 = *((_DWORD *)a1 + 5);
  v25[0] = bswap32(HIDWORD(v10));
  v12 = *((_DWORD *)a1 + 4);
  v25[1] = bswap32(v10);
  v25[2] = bswap32(v11);
  v13 = a1[1];
  v25[3] = bswap32(v12);
  v14 = *a1;
  v15 = *((_DWORD *)a2 + 7);
  v25[5] = bswap32(v13);
  v16 = *((_DWORD *)a2 + 6);
  v25[6] = bswap32(HIDWORD(v14));
  v25[7] = bswap32(v14);
  LODWORD(v14) = *((_DWORD *)a2 + 5);
  HIDWORD(v14) = bswap32(v16);
  v26[0] = bswap32(v15);
  v17 = *((_DWORD *)a2 + 3);
  v18 = bswap32(v14);
  LODWORD(v14) = *((_DWORD *)a2 + 4);
  v25[4] = bswap32(HIDWORD(v13));
  v26[1] = HIDWORD(v14);
  v19 = bswap32(v14);
  v26[2] = v18;
  LODWORD(v14) = *((_DWORD *)a2 + 2);
  v20 = *a2;
  v26[3] = v19;
  v26[4] = bswap32(v17);
  v26[6] = bswap32(HIDWORD(v20));
  v26[7] = bswap32(v20);
  v26[5] = bswap32(v14);
  v21 = sub_2826C((int)v25, 32);
  v22 = sub_2826C((int)v26, 32);
  v23 = (char *)v22;
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    v24 = "YES (hash <= target)";
    if ( !v8 )
      v24 = "no (false positive; hash > target)";
    snprintf(s, 0x800u, " Proof: %s\nTarget: %s\nTrgVal? %s", v21, v22, v24);
    sub_343C4(7, s, 0);
  }
  free(v21);
  free(v23);
  return v8;
}
