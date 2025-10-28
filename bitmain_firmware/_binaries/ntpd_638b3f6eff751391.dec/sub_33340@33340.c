bool __fastcall sub_33340(unsigned __int8 *a1, _WORD *a2)
{
  int v2; // r3
  unsigned int v3; // r2
  unsigned int v4; // r12
  unsigned int v5; // r12
  unsigned int v6; // r12
  unsigned int v7; // r12
  __int16 v8; // r2
  bool v9; // zf
  bool v10; // nf
  bool v11; // vf
  __int16 v12; // r2
  __int16 v13; // r3

  v2 = a1[92];
  if ( (unsigned int)(v2 - 48) > 9 )
    return 0;
  v3 = a1[93];
  if ( v3 <= 0x2F )
    return 0;
  if ( v3 > 0x39 )
    return 0;
  v4 = a1[94];
  if ( v4 <= 0x2F )
    return 0;
  if ( v4 > 0x39 )
    return 0;
  v5 = a1[95];
  if ( v5 <= 0x2F )
    return 0;
  if ( v5 > 0x39 )
    return 0;
  v6 = a1[96];
  if ( v6 <= 0x2F )
    return 0;
  if ( v6 > 0x39 )
    return 0;
  v7 = a1[97];
  if ( v7 <= 0x2F )
    return 0;
  if ( v7 > 0x39 )
    return 0;
  v8 = v3 - 528 + 10 * v2;
  a2[21] = v8;
  v11 = __OFSUB__(v8, 23);
  v9 = v8 == 23;
  v10 = v8 - 23 < 0;
  v12 = a1[95] - 528 + 10 * a1[94];
  a2[23] = v12;
  v13 = a1[97] - 528 + 10 * a1[96];
  a2[22] = v13;
  if ( !(v10 ^ v11 | v9) )
    return 0;
  return v12 <= 60 && v13 <= 60;
}
