int __fastcall sub_4EA78(char *a1)
{
  _DWORD *v2; // r5
  char *v3; // r12
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r8
  int v11; // r5
  int v12; // r3
  int v13; // r5
  unsigned int v14; // r0
  char *v15; // r2
  int j; // r3
  int i; // r12
  int v18; // r6
  int k; // r5
  int v20; // r8
  int v21; // r0
  int v22; // r0
  unsigned int v23; // r3
  char s[2028]; // [sp+14h] [bp-860h] BYREF
  unsigned __int16 v26; // [sp+816h] [bp-5Eh] BYREF
  int v27; // [sp+818h] [bp-5Ch] BYREF
  int v28; // [sp+81Ch] [bp-58h]
  int v29; // [sp+820h] [bp-54h]
  int v30; // [sp+824h] [bp-50h]
  int v31; // [sp+828h] [bp-4Ch]
  int v32; // [sp+82Ch] [bp-48h]
  int v33; // [sp+830h] [bp-44h]
  int v34; // [sp+834h] [bp-40h]
  int v35; // [sp+838h] [bp-3Ch]
  int v36; // [sp+83Ch] [bp-38h]
  int v37; // [sp+840h] [bp-34h]
  _DWORD v38[12]; // [sp+844h] [bp-30h] BYREF

  v2 = v38;
  v3 = a1 + 4274;
  do
  {
    v4 = *((_DWORD *)v3 + 1);
    v5 = *((_DWORD *)v3 + 2);
    v6 = *((_DWORD *)v3 + 3);
    *v2 = *(_DWORD *)v3;
    v2[1] = v4;
    v2[2] = v5;
    v2[3] = v6;
    v3 += 16;
    v2 += 4;
  }
  while ( v3 != a1 + 4306 );
  v7 = *((_DWORD *)v3 + 1);
  v8 = *((_DWORD *)v3 + 2);
  *v2 = *(_DWORD *)v3;
  v2[1] = v7;
  v2[2] = v8;
  v26 = 0;
  if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    strcpy(s, "bitmain_dcr_init");
    sub_3F1C0(4, s, 0);
  }
  v27 = v38[0];
  v28 = v38[1];
  v29 = v38[2];
  v30 = v38[3];
  v31 = v38[4];
  v32 = v38[5];
  v33 = v38[6];
  v34 = v38[7];
  v35 = v38[8];
  v36 = v38[9];
  v37 = v38[10];
  strcpy((char *)&dword_75994, "1.4.3");
  dword_869F0 = open("/sys/class/gpio/gpio941/value", 2);
  dword_86A64 = open("/sys/class/gpio/gpio942/value", 2);
  sub_42584();
  v9 = sub_42544(0);
  sub_42570(0, v9 | 0x20000000);
  sub_425E0(26);
  word_93C7A = 1;
  if ( dword_791E8 <= 0 )
    goto LABEL_20;
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = *(_DWORD *)(dword_79488 + 4 * v11);
    if ( **(_BYTE **)(v12 + 172) )
    {
      if ( **(_BYTE **)(v12 + 180) )
      {
        ++v10;
      }
      else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        strcpy(s, "Blank worker exists.\n");
        sub_3F1C0(3, s, 0);
      }
    }
    ++v11;
  }
  while ( v11 < dword_791E8 );
  if ( v10 )
  {
    sub_4B834(100);
    sub_4B6FC();
    if ( (unsigned __int8)v27 == 81 )
    {
      v14 = sub_4202C(0xFFu, (unsigned __int8 *)&v27, 42);
      if ( HIWORD(v37) == v14 )
      {
        for ( i = 0; i != 4; ++i )
        {
          for ( j = 0; j != 128; ++j )
          {
            v15 = &a1[512 * i + 144 + 4 * j];
            *((_WORD *)v15 + 3) = 0;
            *((_WORD *)v15 + 4) = 0;
          }
        }
        sub_4B8B8((int)a1);
        sub_42570(13, 0xFFFF);
        sub_2FF20();
        sub_46E98();
        sub_469AC();
        sub_46AA0();
        if ( (v29 & 0x20) != 0 )
        {
          word_93C95 = HIWORD(v31);
          sub_47620(HIWORD(v31));
          if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
          {
            snprintf(s, 0x800u, "%s, dev.voltage=%d", "bitmain_dcr_init", (unsigned __int16)word_93C95);
            sub_3F1C0(5, s, 0);
          }
        }
        v13 = sub_46DBC();
        if ( v13 != -3 )
        {
          sub_46CCC();
          sub_2FF20();
          sub_42570(13, 0);
          sub_2FF20();
          sub_4B23C((int)a1, v28);
          v13 = sub_4E894();
          sub_2FF20();
          sub_4CEC8();
          sub_2FF20();
          if ( v13 != -4 )
          {
            sub_4907C(1);
            sub_2FF20();
            v18 = 603403;
            for ( k = 0; k != 4; ++k )
            {
              if ( *(_BYTE *)++v18 == 1 )
              {
                algn_78C6C[k] = 1;
                v20 = 3;
                while ( *(_BYTE *)(v18 + 1860) != 54 )
                {
                  algn_78C6C[k] = 1;
                  sub_4CF00((int)a1, (unsigned __int8)k);
                  if ( !--v20 )
                    goto LABEL_52;
                }
                algn_78C6C[k] = 0;
              }
LABEL_52:
              ;
            }
            sub_4ACB0();
            sub_4A57C(38);
            byte_93C79 = 120;
            if ( (v29 & 8) != 0 )
            {
              sub_4A490();
            }
            else if ( (v29 & 0x10) != 0 )
            {
              word_93C81 = v31;
              if ( (_WORD)v31 )
              {
                sub_4989C((unsigned __int16)v31);
              }
              else
              {
                sub_47928(&v26);
                word_93C81 = v26;
                sub_4989C(v26);
              }
              sprintf(byte_93C83, "%u", (unsigned __int16)word_93C81);
            }
            sub_4937C();
            sub_4907C(0);
            sub_47DDC(v36);
            sub_48F7C();
            byte_93C7F = (v29 & 2) != 0;
            byte_93C80 = BYTE2(v30);
            if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
            {
              snprintf(s, 0x800u, "%s: fan_eft : %d  fan_pwm : %d", "bitmain_dcr_init", (v29 & 2) != 0, BYTE2(v30));
              sub_3F1C0(7, s, 0);
            }
            if ( byte_93C7F && (unsigned __int8)byte_93C80 <= 0x64u )
              sub_4B834((unsigned __int8)byte_93C80);
            else
              sub_4BAAC();
            if ( (v29 & 4) != 0 )
            {
              if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
              {
                snprintf(s, 0x800u, "frequency = '%d'", (unsigned __int16)word_93C81);
                sub_3F1C0(5, s, 0);
              }
              v21 = sub_59FB0(256, (unsigned __int16)word_93C7A);
              v22 = sub_59EE8(-1, v21);
              v23 = (unsigned int)((double)((unsigned int)sub_59EE8(v22, (unsigned __int16)word_93C81) >> 7) * 0.7);
              LODWORD(flt_93514) = v23;
              if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
              {
                snprintf(s, 0x800u, "dev.timeout = %d us", v23);
                sub_3F1C0(5, s, 0);
              }
            }
            sub_4A910();
            v13 = sub_4DCC8();
            if ( v13 != -8 )
            {
              sleep(1u);
              v13 = sub_4E978();
              if ( v13 != -7 )
              {
                v13 = sub_4DDD0(a1);
                if ( v13 != -5 )
                {
                  v13 = sub_4DECC();
                  if ( v13 != -6 )
                  {
                    sub_4A938();
                    byte_75CF8[0] = 1;
                    byte_75CF9 = 1;
                    byte_75CFA = 1;
                    byte_75CFB = 1;
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
      else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        snprintf(
          s,
          0x800u,
          "%s: config_parameter.crc = 0x%x, but we calculate it as 0x%x",
          "bitmain_dcr_init",
          HIWORD(v37),
          v14);
        sub_3F1C0(3, s, 0);
        return -2;
      }
      else
      {
        return -2;
      }
    }
    else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(
        s,
        0x800u,
        "%s: config_parameter.token_type != 0x%x, it is 0x%x",
        "bitmain_dcr_init",
        81,
        (unsigned __int8)v27);
      sub_3F1C0(3, s, 0);
      return -1;
    }
    else
    {
      return -1;
    }
  }
  else
  {
LABEL_20:
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      strcpy(s, "No valid pools, please configure them first!\n");
      sub_3F1C0(3, s, 0);
    }
    return -1;
  }
  return v13;
}
