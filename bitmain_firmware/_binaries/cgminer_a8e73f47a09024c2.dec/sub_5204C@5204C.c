void __noreturn sub_5204C()
{
  unsigned int v0; // r7
  int v1; // r6
  int v2; // r4
  int *v3; // r3
  unsigned int v4; // r4
  int v5; // r1
  int v6; // r0
  int v7; // r0
  unsigned __int8 v8; // r0
  unsigned __int8 v9; // r5
  unsigned __int8 v10; // r0
  int v11; // [sp+10h] [bp-81Ch]
  unsigned int v12; // [sp+14h] [bp-818h]
  int v13; // [sp+14h] [bp-818h]
  int v14; // [sp+18h] [bp-814h]
  int v15; // [sp+1Ch] [bp-810h]
  int v16; // [sp+24h] [bp-808h]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  while ( 1 )
  {
    sub_4FA0C();
LABEL_2:
    while ( 1 )
    {
      sub_30140();
      pthread_mutex_lock(&stru_7FD1C);
      v0 = dword_81044;
      pthread_mutex_unlock(&stru_7FD1C);
      if ( v0 >= 0x21C0 || (unsigned int)dword_81040 >= 0x21C0 )
        break;
      if ( v0 )
      {
        v1 = 0;
        while ( 1 )
        {
          pthread_mutex_lock(&stru_7FD1C);
          v2 = dword_81040;
          v3 = &dword_8103C[3 * dword_81040];
          v12 = v3[3];
          v15 = *((unsigned __int8 *)v3 + 16);
          v14 = *((unsigned __int8 *)v3 + 17);
          v11 = *((unsigned __int8 *)v3 + 20);
          if ( sub_429CC((_BYTE *)v3 + 12, 59) != (*((_BYTE *)v3 + 19) & 0x1F) )
          {
            dword_81040 = v2 + 1;
            --dword_81044;
            if ( (unsigned int)(v2 + 1) >= 0x21C0 )
              dword_81040 = 0;
            pthread_mutex_unlock(&stru_7FD1C);
            goto LABEL_98;
          }
          dword_81040 = v2 + 1;
          --dword_81044;
          if ( (unsigned int)(v2 + 1) >= 0x21C0 )
            dword_81040 = 0;
          v4 = HIBYTE(v12) | (v12 << 24) | ((v12 & 0xFF0000) >> 8) | ((v12 & 0xFF00) << 8);
          pthread_mutex_unlock(&stru_7FD1C);
          if ( !v14 )
            break;
          v13 = v15;
          v8 = sub_5E8E0(v15, (unsigned __int16)word_B4385);
          v9 = v8;
          v16 = v8;
          if ( v8 > 0x47u )
            goto LABEL_98;
          if ( v14 == 12 )
          {
            if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
            {
              snprintf(s, 0x800u, "chain %d Chip %d PLL0_PARAMETER reg = 0x%08x", v11, v8, v4);
              sub_3F178(5, s, 0);
            }
            goto LABEL_44;
          }
          if ( v14 != 96 )
            goto LABEL_39;
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            snprintf(
              s,
              0x800u,
              "%s: the Chip%d PLL_PARAMETER1 reg_value = 0x%08x @chain%d",
              "bitmain_scanreg",
              v8,
              v4,
              v11);
            sub_3F178(5, s, 0);
          }
LABEL_49:
          if ( v14 == 28 )
          {
            if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
            {
              snprintf(s, 0x800u, "chain %d Chip %d MISC_CONTROL reg = 0x%08x", v11, v9, v4);
              sub_3F178(5, s, 0);
            }
            goto LABEL_65;
          }
LABEL_54:
          if ( v14 != 20 )
            goto LABEL_59;
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            v6 = sub_5E8E0(v13, (unsigned __int16)word_B4385);
            snprintf(s, 0x800u, "%s: the Chip%d TICK_MASK reg_value = 0x%08x @chain%d", "bitmain_scanreg", v6, v4, v11);
            sub_3F178(5, s, 0);
          }
LABEL_70:
          if ( v14 == 68 )
          {
            if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
            {
              snprintf(s, 0x800u, "chain %d Chip %d SW RESET reg = 0x%08x", v11, v9, v4);
              sub_3F178(5, s, 0);
            }
            goto LABEL_83;
          }
LABEL_75:
          if ( v14 != 8 )
            goto LABEL_81;
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            snprintf(s, 0x800u, "chain %d Chip %d HASH_RATE reg = 0x%08x", v11, v9, v4);
            sub_3F178(5, s, 0);
          }
          sub_51ED4(v11, v15, v4);
LABEL_90:
          if ( v14 != 144 )
            goto LABEL_96;
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            snprintf(s, 0x800u, "chain %d Chip %d SWEEP reg = 0x%08x", v11, v9, v4);
            sub_3F178(5, s, 0);
          }
          *(_DWORD *)&byte_7ECC0[512 * v11 - 1108 + 4 * v9] = v4;
          byte_7ECC0[128 * v11 + 940 + v9] = 1;
          ++byte_7ECC0[v11 - 1112];
LABEL_98:
          if ( ++v1 >= v0 )
            goto LABEL_2;
        }
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          snprintf(s, 0x800u, "chain %d Chip %d CHIP_ADDR reg = 0x%08x", v11, v16, v4);
          sub_3F178(7, s, 0);
        }
        if ( byte_7CCC8[v11 + 400] )
        {
          v5 = (unsigned __int8)byte_7CCC8[v11 + 404];
          *(_DWORD *)&byte_7CCC8[512 * v11 + 408 + 4 * v5] = v4;
          byte_7CCC8[v11 + 404] = v5 + 1;
        }
        v13 = v15;
        v10 = sub_5E8E0(v15, (unsigned __int16)word_B4385);
        v9 = v10;
        v16 = v10;
        if ( v10 > 0x47u )
          goto LABEL_98;
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          snprintf(s, 0x800u, "%s: the Chip%d CHIP_ADDR reg_value = 0x%08x @chain%d", "bitmain_scanreg", v10, v4, v11);
          sub_3F178(7, s, 0);
        }
LABEL_39:
        if ( v14 == 100 )
        {
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            snprintf(
              s,
              0x800u,
              "%s: the Chip%d PLL_PARAMETER2 reg_value = 0x%08x @chain%d",
              "bitmain_scanreg",
              v9,
              v4,
              v11);
            sub_3F178(5, s, 0);
          }
          goto LABEL_54;
        }
LABEL_44:
        if ( v14 == 104 )
        {
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            snprintf(
              s,
              0x800u,
              "%s: the Chip%d PLL_PARAMETER3 reg_value = 0x%08x @chain%d",
              "bitmain_scanreg",
              v9,
              v4,
              v11);
            sub_3F178(5, s, 0);
          }
LABEL_59:
          if ( v14 == 32 )
          {
            sub_51E04((char *)v11, v15, v4);
            if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
            {
              v7 = sub_5E8E0(v13, (unsigned __int16)word_B4385);
              snprintf(
                s,
                0x800u,
                "%s: the Chip%d GENERAL_I2C_COMMAND reg_value = 0x%08x @chain%d",
                "bitmain_scanreg",
                v7,
                v4,
                v11);
              sub_3F178(7, s, 0);
            }
            goto LABEL_75;
          }
LABEL_65:
          if ( v14 == 48 )
          {
            if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
            {
              snprintf(s, 0x800u, "chain %d Chip %d DRV ST reg = 0x%08x", v11, v9, v4);
              sub_3F178(5, s, 0);
            }
LABEL_81:
            if ( v14 == 40 )
            {
              sub_51F54(v11, v16, v4);
LABEL_96:
              if ( v14 == 152 )
              {
                *(_DWORD *)&byte_7ECC0[512 * v11 + 1456 + 4 * v9] = v4;
                byte_7ECC0[128 * v11 + 3504 + v9] = 1;
                ++byte_7ECC0[v11 + 1452];
              }
              goto LABEL_98;
            }
LABEL_83:
            if ( v14 == 52 )
            {
              if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
              {
                snprintf(s, 0x800u, "chain %d Chip %d CHIP_STATUS reg = 0x%08x", v11, v9, v4);
                sub_3F178(7, s, 0);
              }
              *(_DWORD *)&byte_7ECC0[512 * v11 - 3160 + 4 * v9] = v4;
              ++byte_7ECC0[v11 - 3164];
              goto LABEL_98;
            }
            goto LABEL_90;
          }
          goto LABEL_70;
        }
        goto LABEL_49;
      }
    }
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
    {
      strcpy(s, "reg fifo is full !!");
      sub_3F178(4, s, 0);
    }
  }
}
