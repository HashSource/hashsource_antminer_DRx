int sub_4C948()
{
  unsigned __int64 v0; // d8
  int i; // r7
  unsigned int v3; // r3
  int m; // r4
  unsigned int v5; // r3
  _DWORD *v6; // r8
  __int64 v7; // r4
  int j; // r6
  int v9; // t1
  int v10; // r3
  double v11; // r0
  _DWORD *v12; // r8
  __int64 v13; // r4
  int k; // r6
  int v15; // t1
  int v16; // r3
  double v17; // r0
  _QWORD *v19; // [sp+14h] [bp-818h]
  int v20; // [sp+18h] [bp-814h]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v20 = 603403;
  v19 = &unk_78C18;
  v0 = 0;
  for ( i = 0; i != 4; ++i )
  {
    if ( *(unsigned __int8 *)++v20 )
    {
      if ( *((_BYTE *)&dword_75DA8[512] + i) )
      {
        if ( *((unsigned __int8 *)&dword_75DA8[512] + i) > 0x35u )
        {
          if ( byte_73973 )
          {
            v6 = &dword_75DA8[128 * i + 512];
            v7 = 0;
            for ( j = 0; j != 54; ++j )
            {
              v9 = v6[1];
              ++v6;
              v10 = v9 & 0x7FFFFFFF;
              v7 += v9 & 0x7FFFFFFF;
              if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
              {
                snprintf(s, 0x800u, "%s: RT g_HASH_RATE_reg_value[%d][%d] = 0x%08x", "calculate_hash_rate", i, j, v10);
                sub_3F1C0(7, s, 0);
              }
            }
            if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
            {
              v11 = sub_5A3F0(v7, HIDWORD(v7));
              snprintf(s, 0x800u, "%s: chain%d RT hash rate is %0.2fGHz/s", "calculate_hash_rate", i, v11 / 1000000.0);
              sub_3F1C0(7, s, 0);
            }
            byte_78C38[i] = 0;
            *v19 = 1000000 * v7;
            sub_4C75C(1000000 * v7, &byte_869F4[16 * i], 0x10u, 6, 0);
          }
          else
          {
            v12 = &dword_75DA8[128 * i + 512];
            v13 = 0;
            for ( k = 0; k != 54; ++k )
            {
              v15 = v12[1];
              ++v12;
              v16 = v15 & 0x7FFFFFFF;
              v13 += v15 & 0x7FFFFFFF;
              if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
              {
                snprintf(s, 0x800u, "%s: avg g_HASH_RATE_reg_value[%d][%d] = 0x%08x", "calculate_hash_rate", i, k, v16);
                sub_3F1C0(7, s, 0);
              }
            }
            if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
            {
              v17 = sub_5A3F0(v13, HIDWORD(v13));
              snprintf(s, 0x800u, "%s: chain%d avg hash rate is %0.2fGHz/s", "calculate_hash_rate", i, v17 / 1000000.0);
              sub_3F1C0(7, s, 0);
            }
            byte_78C38[i] = 0;
          }
        }
        else
        {
          for ( m = 0; m != 54; ++m )
          {
            if ( !byte_76DAC[128 * i + m] && !byte_75C20 && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
            {
              snprintf(
                s,
                0x800u,
                "%s: Chain%d ASIC%d didn't send back HASH_RATE register value",
                "calculate_hash_rate",
                i,
                m);
              sub_3F1C0(7, s, 0);
            }
          }
          v5 = (unsigned __int8)(byte_78C38[i] + 1);
          byte_78C38[i] = v5;
          if ( v5 > 3 || byte_75C20 )
          {
            *v19 = 0;
            sub_4C75C(0, &byte_869F4[16 * i], 0x10u, 6, 1);
          }
        }
        v0 += *v19;
      }
      else
      {
        v3 = (unsigned __int8)(byte_78C38[i] + 1);
        byte_78C38[i] = v3;
        if ( v3 > 3 || byte_75C20 )
        {
          *v19 = 0;
          sub_4C75C(0, &byte_869F4[16 * i], 0x10u, 6, 1);
        }
      }
    }
    ++v19;
  }
  return sub_4C75C(v0, byte_75984, 0x10u, 6, 0);
}
