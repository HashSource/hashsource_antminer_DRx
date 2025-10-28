int sub_3F688()
{
  int v0; // r10
  _DWORD *v1; // r11
  int v3; // r4
  _BYTE *v4; // r3
  int v5; // lr
  __int64 v6; // r8
  int v7; // r6
  _BYTE *v8; // r5
  int v9; // r4
  double v10; // r0
  int v11; // r4
  unsigned int v13; // r3
  int v14; // lr
  __int64 v15; // r8
  _BYTE *v16; // r5
  int v17; // r6
  double v18; // r0
  unsigned __int8 *v19; // r4
  char *v20; // r5
  int v21; // t1
  int v22; // r5
  unsigned int v23; // r3
  int v24; // [sp+18h] [bp-81Ch]
  unsigned __int8 *v25; // [sp+1Ch] [bp-818h]
  double v26; // [sp+20h] [bp-814h]
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  v0 = 0;
  v1 = &unk_704D4;
  v25 = (unsigned __int8 *)&unk_73EF0;
  v24 = 0;
  v26 = 0.0;
  do
  {
    if ( *v25++ )
    {
      if ( byte_704D0[v0] )
      {
        if ( byte_704D0[v0] <= 0x47u )
        {
          v19 = (unsigned __int8 *)&unk_70CD4 + 128 * v0;
          do
          {
            v20 = (char *)&v19[-v24];
            v21 = *v19++;
            v22 = v20 - (char *)&unk_70CD4;
            if ( !v21 && !byte_6FAE8 && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
            {
              snprintf(
                s,
                0x800u,
                "%s: Chain%d ASIC%d didn't send back HASH_RATE register value",
                "calculate_hash_rate",
                v0,
                v22);
              sub_343C4(7, s, 0);
            }
          }
          while ( v19 != (unsigned __int8 *)((char *)&unk_70D1C + 128 * v0) );
          v23 = (unsigned __int8)(byte_72B00[v0] + 1);
          byte_72B00[v0] = v23;
          if ( v23 > 3 || (v11 = v0, byte_6FAE8) )
          {
            v11 = v0;
            qword_72B08[v0] = 0;
            sub_3F500(0.0, &byte_73E8C[16 * v0], 0x10u, 6, 1);
          }
        }
        else
        {
          v3 = (unsigned __int8)byte_6D7F0;
          LOWORD(v4) = (unsigned __int16)&byte_73320;
          if ( byte_6D7F0 )
          {
            HIWORD(v4) = (unsigned int)&byte_73320 >> 16;
            v5 = (unsigned __int8)byte_6FA71;
            v6 = 0;
            v7 = 0;
            v8 = v4;
            do
            {
              v9 = v1[v7] & 0x7FFFFFFF;
              v6 += (unsigned int)v9;
              if ( v5 && (*v8 || byte_6FA70 || dword_6D35C > 6) )
              {
                snprintf(s, 0x800u, "%s: RT g_HASH_RATE_reg_value[%d][%d] = 0x%08x", "calculate_hash_rate", v0, v7, v9);
                sub_343C4(7, s, 0);
                v5 = (unsigned __int8)byte_6FA71;
              }
              ++v7;
            }
            while ( v7 != 72 );
            if ( v5 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
            {
              v10 = sub_4A0AC(v6, HIDWORD(v6));
              snprintf(s, 0x800u, "%s: chain%d RT hash rate is %0.2fGHz/s", "calculate_hash_rate", v0, v10 / 1000000.0);
              sub_343C4(7, s, 0);
            }
            v11 = v0;
            qword_72B08[v0] = 1000000 * v6;
            byte_72B00[v0] = 0;
            sub_3F500(COERCE_DOUBLE(1000000 * v6), &byte_73E8C[16 * v0], 0x10u, 6, 0);
          }
          else
          {
            HIWORD(v4) = (unsigned int)&byte_73320 >> 16;
            v14 = (unsigned __int8)byte_6FA71;
            v15 = 0;
            v16 = v4;
            do
            {
              v17 = v1[v3] & 0x7FFFFFFF;
              v15 += (unsigned int)v17;
              if ( v14 && (*v16 || byte_6FA70 || dword_6D35C > 6) )
              {
                snprintf(
                  s,
                  0x800u,
                  "%s: avg g_HASH_RATE_reg_value[%d][%d] = 0x%08x",
                  "calculate_hash_rate",
                  v0,
                  v3,
                  v17);
                sub_343C4(7, s, 0);
                v14 = (unsigned __int8)byte_6FA71;
              }
              ++v3;
            }
            while ( v3 != 72 );
            if ( v14 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
            {
              v18 = sub_4A0AC(v15, HIDWORD(v15));
              snprintf(s, 0x800u, "%s: chain%d avg hash rate is %0.2fGHz/s", "calculate_hash_rate", v0, v18 / 1000000.0);
              sub_343C4(7, s, 0);
            }
            v11 = v0;
            byte_72B00[v0] = 0;
          }
        }
        *(_QWORD *)&v26 += qword_72B08[v11];
      }
      else
      {
        v13 = (unsigned __int8)(byte_72B00[v0] + 1);
        byte_72B00[v0] = v13;
        if ( v13 > 3 || byte_6FAE8 )
        {
          qword_72B08[v0] = 0;
          sub_3F500(0.0, &byte_73E8C[16 * v0], 0x10u, 6, 1);
        }
      }
    }
    ++v0;
    v1 += 128;
    v24 += 128;
  }
  while ( v0 != 4 );
  return sub_3F500(v26, byte_6F7FC, 0x10u, 6, 0);
}
