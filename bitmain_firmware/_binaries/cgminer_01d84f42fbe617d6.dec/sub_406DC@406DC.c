int sub_406DC()
{
  int v0; // r7
  char *v1; // r5
  int v2; // r8
  int v3; // r4
  int v4; // t1
  int v5; // r5
  int v6; // r4
  int v7; // r7
  char *v8; // r6
  int v9; // t1
  int i; // r5
  int v11; // r7
  int v12; // r4
  _BYTE *v13; // r6
  int v14; // t1
  int v15; // r8
  int v16; // r4
  int v17; // t1
  int result; // r0
  unsigned __int8 *v19; // r9
  _BYTE *v20; // r7
  char *v21; // r10
  char *v22; // r6
  int j; // r5
  int v24; // r3
  int v25; // t1
  int v26; // r12
  int v27; // t1
  int v28; // r2
  char v29; // r0
  int v30; // r3
  char v31; // r0
  int v32; // r12
  int v33; // lr
  bool v34; // zf
  char v35; // r12
  int v36; // [sp+14h] [bp-830h]
  int v37; // [sp+18h] [bp-82Ch]
  int v38; // [sp+1Ch] [bp-828h]
  _DWORD v39[2]; // [sp+20h] [bp-824h] BYREF
  _DWORD v40[2]; // [sp+28h] [bp-81Ch] BYREF
  _DWORD v41[2]; // [sp+30h] [bp-814h] BYREF
  _BYTE v42[8]; // [sp+38h] [bp-80Ch] BYREF
  char s[2052]; // [sp+40h] [bp-804h] BYREF

  v0 = 805863;
  v1 = v42;
  v2 = 0;
  v3 = 0;
  v39[0] = 0;
  v39[1] = 0;
  v40[0] = 0;
  v40[1] = 0;
  v41[0] = 0;
  v41[1] = 0;
  sub_3FEA4(3u, byte_60DEB, 0, 0);
  v42[0] = -40;
  v42[1] = -40;
  v42[2] = -40;
  v42[3] = -40;
  v42[4] = -40;
  v42[5] = -40;
  v42[6] = -40;
  v42[7] = -40;
  do
  {
    v4 = *(unsigned __int8 *)++v0;
    if ( v4 == 1 )
    {
      ++v2;
      sub_3F9D8(*v1, 0, v3);
      sub_3F9D8(v1[1], 1, v3);
    }
    ++v3;
    v1 += 2;
  }
  while ( v3 != 4 );
  v38 = 2 * v2;
  sub_2B21C();
  v37 = 11;
  do
  {
    v5 = 0;
    sub_40064(0);
    do
    {
      if ( sub_3F014(v5) )
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
        {
          snprintf(s, 0x800u, "Get [%d]Temp Data Failed!", v5);
          sub_38438(3, s, 0);
        }
      }
      else
      {
        v6 = 0;
        v7 = 805863;
        v8 = (char *)&unk_63178 + 8 * v5;
        do
        {
          v9 = *(unsigned __int8 *)++v7;
          if ( v9 == 1 )
          {
            v34 = byte_630C1 == 0;
            v35 = v8[4];
            *((_BYTE *)v39 + 2 * v6 + v5) = v35;
            if ( !v34 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
            {
              snprintf(s, 0x800u, "Chain %d chip %d LocalTemp 0x%x ", v6, v5, v35);
              sub_38438(7, s, 0);
            }
            *(_DWORD *)v8 = 4;
          }
          ++v6;
          v8 += 24;
        }
        while ( v6 != 4 );
      }
      ++v5;
      sub_2B21C();
    }
    while ( v5 != 2 );
    sub_40064(1u);
    for ( i = 0; i != 2; ++i )
    {
      if ( sub_3F014(i) )
      {
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          snprintf(s, 0x800u, "Get [%d]Temp Data Failed!", i);
          sub_38438(7, s, 0);
        }
      }
      else
      {
        v11 = 805863;
        v12 = 0;
        v13 = (char *)&unk_63178 + 8 * i + 4;
        do
        {
          v14 = *(unsigned __int8 *)++v11;
          if ( v14 == 1 )
          {
            v32 = (unsigned __int8)byte_632F0;
            *((_DWORD *)v13 - 1) = 4;
            v33 = (char)*v13;
            *((_BYTE *)v40 + 2 * v12 + i) = *v13;
            if ( v32 || byte_630C0 || dword_60964 > 4 )
            {
              snprintf(s, 0x800u, "Chain %d chip %d RemoteTemp 0x%x", v12, i, v33);
              sub_38438(5, s, 0);
            }
          }
          ++v12;
          v13 += 24;
        }
        while ( v12 != 4 );
      }
      sub_2B21C();
    }
    v15 = 805863;
    v16 = 0;
    v36 = 0;
    do
    {
      v17 = *(unsigned __int8 *)++v15;
      if ( v17 == 1 )
      {
        v19 = (unsigned __int8 *)v40 + 2 * v16;
        v20 = (char *)v41 + 2 * v16;
        v21 = (char *)v39 + 2 * v16;
        v22 = &v42[2 * v16];
        for ( j = 0; j != 2; ++j )
        {
          v25 = *v19++;
          v24 = v25;
          v27 = *v21++;
          v26 = v27;
          v28 = (char)v24;
          if ( v24 || *v20 == 1 )
          {
            v30 = (char)v24 - v26;
            if ( v28 - v26 < 0 )
              v30 = v26 - v28;
            if ( v30 <= 2 )
            {
              if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
              {
                snprintf(s, 0x800u, "OK Chain %d chip %d local 0x%x remote 0x%x offset 0x%x ", v16, j, v26, v28, *v22);
                sub_38438(5, s, 0);
              }
              if ( *v20 != 1 )
              {
                *v20 = 1;
                ++v36;
              }
            }
            else
            {
              if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
              {
                snprintf(s, 0x800u, "2 Chain %d chip %d local 0x%x remote 0x%x offset 0x%x ", v16, j, v26, v28, *v22);
                sub_38438(5, s, 0);
              }
              v31 = *(v21 - 1) + *v22 - *(v19 - 1);
              *v22 = v31;
              sub_3F9D8(v31, j, v16);
            }
          }
          else
          {
            if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
            {
              snprintf(
                s,
                0x800u,
                "Remote = 0 Chain %d chip %d local 0x%x remote 0x%x offset 0x%x ",
                v16,
                j,
                v26,
                (char)v24,
                *v22);
              sub_38438(5, s, 0);
            }
            v29 = *v22 + 30;
            *v22 = v29;
            sub_3F9D8(v29, j, v16);
          }
          ++v22;
          ++v20;
        }
      }
      ++v16;
    }
    while ( v16 != 4 );
    sub_2B21C();
    sub_40064(0x11u);
    result = sub_3EF84(12, 28, 0);
    if ( v38 == v36 )
      break;
    --v37;
  }
  while ( v37 );
  return result;
}
