void __noreturn sub_4116C()
{
  unsigned int v0; // r4
  int v1; // r8
  unsigned int v2; // r6
  unsigned __int8 *v3; // r5
  unsigned int v4; // r4
  int v5; // r0
  unsigned __int8 v6; // r3
  signed int v7; // r4
  int v8; // r2
  int v9; // r3
  int v10; // r7
  int v11; // r5
  char *v12; // r2
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r6
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r2
  char *v21; // r5
  char v22; // r3
  char v23; // r3
  int v24; // r3
  int v25; // r0
  char *v26; // r5
  char v27; // r2
  int v28; // r3
  int v29; // r0
  char *v30; // r5
  char v31; // r2
  int v32; // [sp+10h] [bp-83Ch]
  unsigned int v33; // [sp+18h] [bp-834h]
  int v34; // [sp+20h] [bp-82Ch]
  char s[2052]; // [sp+48h] [bp-804h] BYREF

  while ( 1 )
  {
    sub_3FB28();
LABEL_4:
    while ( 1 )
    {
      sub_2A7F4();
      pthread_mutex_lock(&stru_72B28);
      v0 = dword_747BC;
      pthread_mutex_unlock(&stru_72B28);
      if ( v0 >= 0x21C0 || (unsigned int)dword_747B8 >= 0x21C0 )
        break;
      if ( v0 )
      {
        v1 = 0;
        v33 = v0;
        while ( 1 )
        {
          pthread_mutex_lock(&stru_72B28);
          v2 = dword_747B8 + 1;
          v3 = (unsigned __int8 *)&dword_747B4[3 * dword_747B8];
          v4 = dword_747B4[3 * dword_747B8 + 3];
          v5 = sub_36D08(&dword_747B4[3 * dword_747B8 + 3], 0x3Bu);
          v6 = v3[19];
          v7 = bswap32(v4);
          dword_747B8 = v2;
          if ( (v6 & 0x1F) != v5 )
          {
            --dword_747BC;
            if ( v2 >= 0x21C0 )
              dword_747B8 = 0;
            pthread_mutex_unlock(&stru_72B28);
            goto LABEL_13;
          }
          v8 = v3[17];
          v9 = --dword_747BC;
          if ( v2 >= 0x21C0 )
            v9 = 0;
          v10 = v3[16];
          if ( v2 >= 0x21C0 )
            dword_747B8 = v9;
          v32 = v8;
          v11 = v3[20];
          pthread_mutex_unlock(&stru_72B28);
          if ( !v32 )
            break;
          v15 = sub_49AF0(v10, (unsigned __int16)word_74761);
          v16 = v15;
          v34 = (unsigned __int8)v15;
          if ( v15 > 71 )
            goto LABEL_13;
          switch ( v32 )
          {
            case 12:
              if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
                goto LABEL_13;
              snprintf(s, 0x800u, "chain %d Chip %d PLL0_PARAMETER reg = 0x%08x", v11, v15, v7);
              goto LABEL_40;
            case 96:
              if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
                goto LABEL_13;
              snprintf(
                s,
                0x800u,
                "%s: the Chip%d PLL_PARAMETER1 reg_value = 0x%08x @chain%d",
                "bitmain_scanreg",
                v15,
                v7,
                v11);
              goto LABEL_40;
            case 100:
              if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
                goto LABEL_13;
              snprintf(
                s,
                0x800u,
                "%s: the Chip%d PLL_PARAMETER2 reg_value = 0x%08x @chain%d",
                "bitmain_scanreg",
                v15,
                v7,
                v11);
              goto LABEL_40;
            case 104:
              if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
                goto LABEL_13;
              snprintf(
                s,
                0x800u,
                "%s: the Chip%d PLL_PARAMETER3 reg_value = 0x%08x @chain%d",
                "bitmain_scanreg",
                v15,
                v7,
                v11);
              goto LABEL_40;
            case 28:
              if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
                goto LABEL_13;
              snprintf(s, 0x800u, "chain %d Chip %d MISC_CONTROL reg = 0x%08x", v11, v15, v7);
              goto LABEL_40;
            case 20:
              if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
                goto LABEL_13;
              v17 = sub_49AF0(v10, (unsigned __int16)word_74761);
              snprintf(
                s,
                0x800u,
                "%s: the Chip%d TICK_MASK reg_value = 0x%08x @chain%d",
                "bitmain_scanreg",
                v17,
                v7,
                v11);
              goto LABEL_40;
            case 32:
              if ( (v7 & 0xC0000000) == 0 )
                sub_36B50(v11, v10, v7);
              if ( !byte_6FA71 || !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
                goto LABEL_13;
              v18 = sub_49AF0(v10, (unsigned __int16)word_74761);
              snprintf(
                s,
                0x800u,
                "%s: the Chip%d GENERAL_I2C_COMMAND reg_value = 0x%08x @chain%d",
                "bitmain_scanreg",
                v18,
                v7,
                v11);
LABEL_33:
              sub_343C4(7, s, 0);
              goto LABEL_13;
            case 48:
              if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
                goto LABEL_13;
              snprintf(s, 0x800u, "chain %d Chip %d DRV ST reg = 0x%08x", v11, v15, v7);
              goto LABEL_40;
          }
          if ( v32 != 68 )
          {
            switch ( v32 )
            {
              case 8:
                if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
                {
                  snprintf(s, 0x800u, "chain %d Chip %d HASH_RATE reg = 0x%08x", v11, v15, v7);
                  sub_343C4(5, s, 0);
                }
                v19 = sub_49AF0(v10, (unsigned __int16)word_74761);
                byte_6D7F0 = v7 >= 0;
                v20 = v11 << 7;
                v21 = &byte_6FAD8[v11];
                v22 = v21[2552] + 1;
                *((_BYTE *)&unk_70BD0 + v20 + v19 + 260) = 1;
                v21[2552] = v22;
                *(_DWORD *)&byte_6FAD8[4 * v20 + 2556 + 4 * v19] = v7;
                break;
              case 40:
                sub_410B8(v11, (unsigned __int8)v15, v7);
                break;
              case 52:
                if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                {
                  snprintf(s, 0x800u, "chain %d Chip %d CHIP_STATUS reg = 0x%08x", v11, v15, v7);
                  sub_343C4(7, s, 0);
                }
                v23 = *((_BYTE *)&unk_70BD0 + v11 + 772) + 1;
                *((_DWORD *)&unk_70BD0 + 128 * v11 + v16 + 194) = v7;
                *((_BYTE *)&unk_70BD0 + v11 + 772) = v23;
                break;
              case 144:
                if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
                {
                  snprintf(s, 0x800u, "chain %d Chip %d SWEEP reg = 0x%08x", v11, v15, v7);
                  sub_343C4(5, s, 0);
                }
                v24 = v11 << 7;
                v25 = (v11 << 7) + v16;
                v26 = (char *)&unk_70BD0 + v11;
                v27 = v26[2824];
                *((_BYTE *)&unk_71CC8 + v24 + v16 + 532) = 1;
                *((_DWORD *)&unk_70BD0 + v25 + 707) = v7;
                v26[2824] = v27 + 1;
                break;
              case 152:
                v28 = v11 << 7;
                v29 = (v11 << 7) + v15;
                v30 = (char *)&unk_71CC8 + v11;
                v31 = v30[1044];
                *((_BYTE *)&unk_71CC8 + v28 + v16 + 3096) = 1;
                *((_DWORD *)&unk_71CC8 + v29 + 262) = v7;
                v30[1044] = v31 + 1;
                break;
            }
            goto LABEL_13;
          }
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
          {
            snprintf(s, 0x800u, "chain %d Chip %d SW RESET reg = 0x%08x", v11, v15, v7);
LABEL_40:
            sub_343C4(5, s, 0);
          }
LABEL_13:
          if ( v33 <= ++v1 )
            goto LABEL_4;
        }
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf(s, 0x800u, "chain %d Chip %d CHIP_ADDR reg = 0x%08x", v11, v34, v7);
          sub_343C4(7, s, 0);
        }
        v12 = &byte_6FAD8[v11];
        if ( byte_6FAD8[v11 + 496] )
        {
          v13 = (unsigned __int8)v12[500];
          v12[500] = v13 + 1;
          *(_DWORD *)&byte_6FAD8[512 * v11 + 504 + 4 * v13] = v7;
        }
        v14 = sub_49AF0(v10, (unsigned __int16)word_74761);
        v34 = (unsigned __int8)v14;
        if ( v14 > 71 || !byte_6FA71 || !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
          goto LABEL_13;
        snprintf(s, 0x800u, "%s: the Chip%d CHIP_ADDR reg_value = 0x%08x @chain%d", "bitmain_scanreg", v14, v7, v11);
        goto LABEL_33;
      }
    }
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      strcpy(s, "reg fifo is full !!");
      sub_343C4(4, s, 0);
    }
  }
}
