void __noreturn sub_4E11C()
{
  unsigned int v0; // r4
  int v1; // r10
  unsigned int v2; // r8
  int v3; // r7
  int *v4; // r4
  unsigned int v5; // r4
  int v6; // r1
  unsigned __int8 v7; // r0
  unsigned __int8 v8; // r7
  int v9; // r0
  int v10; // r0
  unsigned int v11; // [sp+10h] [bp-814h]
  int v12; // [sp+10h] [bp-814h]
  int format; // [sp+14h] [bp-810h]
  int v14; // [sp+18h] [bp-80Ch]
  int v15; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  while ( 1 )
  {
    sub_4CEC8();
LABEL_2:
    while ( 1 )
    {
      sub_2FF20();
      pthread_mutex_lock(&stru_78C3C);
      v0 = dword_79F64;
      pthread_mutex_unlock(&stru_78C3C);
      if ( v0 > 0x194F || (unsigned int)dword_79F60 > 0x194F )
        break;
      if ( v0 )
      {
        v1 = 0;
        v2 = v0;
        while ( 1 )
        {
          pthread_mutex_lock(&stru_78C3C);
          v3 = dword_79F60;
          v4 = &dword_79F5C[2 * dword_79F60 + 2];
          v11 = v4[1];
          format = *((unsigned __int8 *)v4 + 8);
          v14 = *((unsigned __int8 *)v4 + 9);
          v15 = *((unsigned __int8 *)v4 + 11);
          if ( sub_41784((_BYTE *)v4 + 4, 51) != (*((_BYTE *)v4 + 10) & 0x1F) )
          {
            dword_79F60 = v3 + 1;
            --dword_79F64;
            if ( (unsigned int)(v3 + 1) > 0x194F )
              dword_79F60 = 0;
            pthread_mutex_unlock(&stru_78C3C);
            goto LABEL_64;
          }
          dword_79F60 = v3 + 1;
          --dword_79F64;
          if ( (unsigned int)(v3 + 1) > 0x194F )
            dword_79F60 = 0;
          v5 = HIBYTE(v11) | (v11 << 24) | ((v11 & 0xFF0000) >> 8) | ((v11 & 0xFF00) << 8);
          pthread_mutex_unlock(&stru_78C3C);
          if ( v14 )
          {
            v12 = format;
            v7 = sub_59FB0(format, (unsigned __int16)word_93C7A);
            v8 = v7;
            if ( v7 > 0x35u )
              goto LABEL_64;
            if ( v14 == 12 )
            {
              if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
              {
                snprintf(
                  s,
                  0x800u,
                  "%s: the Chip%d PLL_PARAMETER0 reg_value = 0x%08x @chain%d",
                  "bitmain_scanreg",
                  v7,
                  v5,
                  v15);
                sub_3F1C0(5, s, 0);
              }
LABEL_35:
              if ( v14 == 104 )
              {
                if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
                {
                  snprintf(
                    s,
                    0x800u,
                    "%s: the Chip%d PLL_PARAMETER3 reg_value = 0x%08x @chain%d",
                    "bitmain_scanreg",
                    v8,
                    v5,
                    v15);
                  sub_3F1C0(5, s, 0);
                }
                goto LABEL_50;
              }
LABEL_40:
              if ( v14 == 28 )
              {
                if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
                {
                  snprintf(
                    s,
                    0x800u,
                    "%s: the Chip%d MISC_CONTROL reg_value = 0x%08x @chain%d",
                    "bitmain_scanreg",
                    v8,
                    v5,
                    v15);
                  sub_3F1C0(5, s, 0);
                }
LABEL_56:
                if ( v14 == 8 )
                {
                  sub_4E09C(v15, format, v5);
LABEL_62:
                  if ( v14 == 152 )
                  {
                    *(_DWORD *)&byte_77C08[512 * v15 + 1456 + 4 * v8] = v5;
                    byte_77C08[128 * v15 + 3504 + v8] = 1;
                    ++byte_77C08[v15 + 1452];
                  }
                  goto LABEL_64;
                }
LABEL_58:
                if ( v14 == 52 )
                {
                  *(_DWORD *)&byte_77C08[512 * v15 - 3160 + 4 * v8] = v5;
                  ++byte_77C08[v15 - 3164];
                  goto LABEL_64;
                }
                goto LABEL_60;
              }
              goto LABEL_45;
            }
            if ( v14 == 96 )
            {
              if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
              {
                snprintf(
                  s,
                  0x800u,
                  "%s: the Chip%d PLL_PARAMETER1 reg_value = 0x%08x @chain%d",
                  "bitmain_scanreg",
                  v7,
                  v5,
                  v15);
                sub_3F1C0(5, s, 0);
              }
              goto LABEL_40;
            }
          }
          else
          {
            if ( byte_75C10[v15 + 400] )
            {
              v6 = (unsigned __int8)byte_75C10[v15 + 404];
              *(_DWORD *)&byte_75C10[512 * v15 + 408 + 4 * v6] = v5;
              byte_75C10[v15 + 404] = v6 + 1;
            }
            v12 = format;
            v8 = sub_59FB0(format, (unsigned __int16)word_93C7A);
            if ( v8 > 0x35u )
              goto LABEL_64;
          }
          if ( v14 != 100 )
            goto LABEL_35;
          if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
          {
            snprintf(
              s,
              0x800u,
              "%s: the Chip%d PLL_PARAMETER2 reg_value = 0x%08x @chain%d",
              "bitmain_scanreg",
              v8,
              v5,
              v15);
            sub_3F1C0(5, s, 0);
          }
LABEL_45:
          if ( v14 == 20 )
          {
            if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
            {
              v9 = sub_59FB0(v12, (unsigned __int16)word_93C7A);
              snprintf(
                s,
                0x800u,
                "%s: the Chip%d TICK_MASK reg_value = 0x%08x @chain%d",
                "bitmain_scanreg",
                v9,
                v5,
                v15);
              sub_3F1C0(5, s, 0);
            }
            goto LABEL_58;
          }
LABEL_50:
          if ( v14 != 32 )
            goto LABEL_56;
          sub_4DFCC((char *)v15, format, v5);
          if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            v10 = sub_59FB0(v12, (unsigned __int16)word_93C7A);
            snprintf(
              s,
              0x800u,
              "%s: the Chip%d GENERAL_I2C_COMMAND reg_value = 0x%08x @chain%d",
              "bitmain_scanreg",
              v10,
              v5,
              v15);
            sub_3F1C0(7, s, 0);
          }
LABEL_60:
          if ( v14 != 144 )
            goto LABEL_62;
          *(_DWORD *)&byte_77C08[512 * v15 - 1108 + 4 * v8] = v5;
          byte_77C08[128 * v15 + 940 + v8] = 1;
          ++byte_77C08[v15 - 1112];
LABEL_64:
          if ( ++v1 >= v2 )
            goto LABEL_2;
        }
      }
    }
    if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
    {
      strcpy(s, "reg fifo is full !!");
      sub_3F1C0(4, s, 0);
    }
  }
}
