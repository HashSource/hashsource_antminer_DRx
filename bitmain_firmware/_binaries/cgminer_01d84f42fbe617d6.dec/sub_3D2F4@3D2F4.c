void __fastcall __noreturn sub_3D2F4(unsigned __int8 *a1)
{
  pthread_t v2; // r0
  int v3; // r9
  int v4; // r8
  int v5; // r5
  int v6; // r1
  unsigned int v7; // r2
  int v8; // r12
  int *v9; // r3
  char v10; // lr
  int v11; // r3
  bool v12; // cc
  int v13; // r3
  int *v14; // r0
  int v15; // r2
  int *v16; // r1
  int *v17; // r3
  unsigned __int8 v18; // r12
  int v19; // r3
  bool v20; // cf
  unsigned __int8 v21; // [sp+20h] [bp-844h]
  int v22; // [sp+30h] [bp-834h]
  char v23; // [sp+3Ch] [bp-828h]
  char v24; // [sp+3Ch] [bp-828h]
  char v25; // [sp+48h] [bp-81Ch]
  int v26; // [sp+54h] [bp-810h] BYREF
  int *v27; // [sp+58h] [bp-80Ch] BYREF
  __int16 v28; // [sp+5Ch] [bp-808h]
  unsigned __int8 v29; // [sp+5Eh] [bp-806h]
  char s[2052]; // [sp+60h] [bp-804h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v3 = *a1;
  v22 = a1[4];
  tcflush(v3, 2);
  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    snprintf(s, 0x800u, "Start A New Asic Response.Chain Id:[%d]", v22);
    sub_38438(5, s, 0);
  }
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "%s %d", "get_asic_response", v22);
    sub_38438(7, s, 0);
  }
  while ( 1 )
  {
    while ( ioctl(v3, 0x541Bu, &v26) )
    {
      perror("ioctl error");
      sub_2B21C();
    }
    v4 = v26 / 7;
    if ( (int)((unsigned __int64)(2454267027LL * v26) >> 32) >> 2 != v26 >> 31 )
      break;
LABEL_51:
    sub_2B21C();
  }
  v5 = 0;
  while ( 1 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    sub_3C604(v3, &v27, 7u);
    if ( !byte_630C1 )
      goto LABEL_28;
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      goto LABEL_26;
    snprintf(s, 0x800u, "Chain [%d] Read Data", v22);
    sub_38438(7, s, 0);
    if ( byte_630C1 )
      break;
LABEL_28:
    if ( (v29 & 0x80u) == 0 )
    {
      if ( (unsigned int)dword_64334 <= 0x35F && dword_6432C[0] <= 0x35Fu )
      {
        pthread_mutex_lock(&stru_6315C);
        v14 = v27;
        v15 = dword_6432C[0];
        v16 = (int *)(dword_6432C[0] + 1);
        v24 = v28;
        v25 = HIBYTE(v28);
        v12 = dword_6432C[0] > 0x35Eu;
        v17 = &dword_6432C[2 * dword_6432C[0] + 2];
        v18 = v29;
        *(int *)((char *)v17 + 6) = (int)v27;
        *((_BYTE *)v17 + 13) = v22;
        *((_BYTE *)v17 + 12) = v18;
        *((_BYTE *)v17 + 10) = v24;
        *((_BYTE *)v17 + 11) = v25;
        if ( v12 )
        {
          dword_6432C[0] = 0;
        }
        else
        {
          if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            snprintf(s, 0x800u, "%s: p_wr = %d reg_value_num = %d", "get_asic_response", v15, dword_64334);
            sub_38438(7, s, 0);
            v16 = (int *)(dword_6432C[0] + 1);
          }
          dword_6432C[0] = (int)v16;
        }
        v19 = dword_64334;
        v20 = (unsigned int)dword_64334 >= 0x360;
        if ( (unsigned int)dword_64334 >= 0x360 )
        {
          v16 = dword_6432C;
        }
        else
        {
          v19 = dword_64334 + 1;
          v14 = dword_6432C;
        }
        if ( (unsigned int)dword_64334 >= 0x360 )
          v19 = 864;
        else
          v14[2] = v19;
        if ( v20 )
          v16[2] = v19;
        pthread_mutex_unlock(&stru_6315C);
      }
      else
      {
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          strcpy(s, "Will Clean!");
          sub_38438(7, s, 0);
        }
        sub_3C69C();
      }
      goto LABEL_21;
    }
    if ( byte_630F8 )
    {
      pthread_mutex_lock(&stru_630DC);
      v6 = (unsigned __int8)byte_630C1;
      v7 = dword_C30B8[0];
      v23 = v28;
      v8 = dword_C30B8[0] + 1;
      v9 = &dword_C30B8[2 * dword_C30B8[0] + 2];
      v10 = HIBYTE(v28);
      *(int *)((char *)v9 + 6) = (int)v27;
      v21 = v29;
      *((_BYTE *)v9 + 13) = v22;
      *((_BYTE *)v9 + 10) = v23;
      *((_BYTE *)v9 + 11) = v10;
      *((_BYTE *)v9 + 12) = v21;
      if ( v6 )
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
        {
          snprintf(
            s,
            0x800u,
            "get nonce %02x%02x%02x%02x wc %02x diff %02x crc5 %02x chainid %02x",
            BYTE2(dword_C30B8[2 * v8 + 1]),
            HIBYTE(dword_C30B8[2 * v7 + 3]),
            LOBYTE(dword_C30B8[2 * v7 + 4]),
            BYTE1(dword_C30B8[2 * v7 + 4]),
            BYTE2(dword_C30B8[2 * v8 + 2]),
            HIBYTE(dword_C30B8[2 * v8 + 2]),
            LOBYTE(dword_C30B8[2 * v8 + 3]),
            v22);
          sub_38438(7, s, 0);
          v6 = (unsigned __int8)byte_630C1;
          v7 = dword_C30B8[0];
        }
        else
        {
          v6 = 1;
        }
      }
      v11 = 862;
      v12 = v7 > 0x35E;
      if ( v7 > 0x35E )
        v11 = 0;
      else
        ++v7;
      if ( v12 )
        dword_C30B8[0] = v11;
      else
        dword_C30B8[0] = v7;
      if ( (unsigned int)dword_C30C0 >= 0x360 )
        v13 = 864;
      else
        v13 = dword_C30C0 + 1;
      dword_C30C0 = v13;
      if ( v6 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        snprintf(s, 0x800u, "get nonce num %d", dword_C30C0);
        sub_38438(7, s, 0);
      }
      ++v5;
      pthread_mutex_unlock(&stru_630DC);
      if ( v4 == v5 )
        goto LABEL_51;
    }
    else
    {
LABEL_21:
      if ( v4 == ++v5 )
        goto LABEL_51;
    }
  }
  if ( !byte_632F0 && !byte_630C0 )
  {
LABEL_26:
    if ( dword_60964 <= 6 )
      goto LABEL_28;
  }
  snprintf(
    s,
    0x800u,
    "get sth %02x%02x%02x%02x%02x%02x%02x",
    (unsigned __int8)v27,
    BYTE1(v27),
    BYTE2(v27),
    HIBYTE(v27),
    (unsigned __int8)v28,
    HIBYTE(v28),
    v29);
  sub_38438(7, s, 0);
  goto LABEL_28;
}
