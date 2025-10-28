void sub_3A2F0()
{
  int v0; // r9
  int *v1; // r12
  int v2; // r4
  bool v3; // cc
  int *v4; // r3
  int v5; // r1
  unsigned int v6; // r0
  unsigned int v7; // r6
  int v8; // r8
  int v9; // r3
  unsigned int v10; // r7
  unsigned __int8 v11; // r0
  int v12; // r3
  unsigned int v13; // lr
  bool v14; // zf
  unsigned int v15; // r1
  double v16; // d16
  const char *v17; // r3
  int v18; // [sp+18h] [bp-81Ch]
  int v19; // [sp+1Ch] [bp-818h]
  unsigned int v20; // [sp+20h] [bp-814h]
  int v21; // [sp+24h] [bp-810h]
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    strcpy(s, "receive_func");
    sub_38438(5, s, 0);
  }
  if ( byte_630D9 )
  {
    v0 = 0;
    do
    {
      pthread_mutex_lock(&stru_630DC);
      v2 = dword_C30C0;
      while ( v2 )
      {
        while ( 1 )
        {
          --v2;
          v3 = (unsigned int)dword_C30BC > 0x35E;
          ++v0;
          dword_C30C0 = v2;
          v4 = &dword_C30B8[2 * dword_C30BC + 2];
          if ( (unsigned int)dword_C30BC > 0x35E )
            v1 = dword_C30B8;
          v5 = (unsigned __int8)byte_C548C;
          v6 = *(int *)((char *)v4 + 6);
          v7 = *((unsigned __int8 *)v4 + 11);
          v8 = *((unsigned __int8 *)v4 + 13);
          if ( (unsigned int)dword_C30BC > 0x35E )
          {
            v9 = 0;
          }
          else
          {
            v9 = 798904;
            ++dword_C30BC;
          }
          if ( v3 )
            v1[1] = v9;
          v10 = bswap32(v6);
          if ( v7 > 0x30 )
            break;
          v11 = sub_48EC0((unsigned __int8)(v10 >> 20), v5);
          if ( v10 != dword_6A4B8[1248 * v11 + 1 + 26 * v7] )
            break;
          v12 = dword_6A4B8[1248 * v11 + 22 + 26 * v7 + v8];
          if ( v12 > 0 )
            break;
          v13 = v10 >> 28;
          if ( v10 >> 28 > 5 )
            v20 = v13 - 2;
          v21 = v12 + 1;
          if ( v10 >> 28 <= 5 )
            v20 = v10 >> 28;
          v14 = byte_630C1 == 0;
          v15 = 864 * v8 + 12 * v11 + v20;
          v18 = dword_630F4;
          v19 = dword_66EB0[v15];
          dword_6A4B8[1248 * v11 + 22 + 26 * v7 + v8] = v21;
          v1 = dword_66EB0;
          dword_66EB0[v15] = v19 + 1;
          dword_630F4 = v18 + 1;
          if ( v14 )
            break;
          if ( !byte_632F0 )
          {
            v1 = (int *)&byte_630C0;
            if ( !byte_630C0 && dword_60964 <= 6 )
              break;
          }
          if ( v10 >> 28 > 5 )
            v13 -= 2;
          snprintf(
            s,
            0x800u,
            "wc %d chian %d asic %d core %d nonce %08x times %d nonce %08x",
            v7,
            v8,
            v11,
            v13,
            v10,
            v21,
            dword_6A4B8[1248 * v11 + 1 + 26 * v7]);
          sub_38438(7, s, 0);
          v2 = dword_C30C0;
          if ( !dword_C30C0 )
            goto LABEL_28;
        }
      }
LABEL_28:
      pthread_mutex_unlock(&stru_630DC);
      sub_2B21C();
    }
    while ( byte_630D9 );
  }
  else
  {
    v0 = 0;
  }
  v16 = (double)(3456 * (unsigned __int8)byte_C5468);
  if ( (int)v16 - 20 > dword_630F4 )
    byte_60DE8 = 0;
  byte_630F8 = 0;
  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    snprintf(s, 0x800u, "total_nonce : %d total_value_nonce : %d need %d", v0, dword_630F4, (int)v16 - 20);
    sub_38438(5, s, 0);
    if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
    {
      v17 = "TRUE";
      if ( !byte_60DE8 )
        v17 = "FALSE";
      snprintf(s, 0x800u, "test result : %s ", v17);
      sub_38438(5, s, 0);
    }
  }
}
