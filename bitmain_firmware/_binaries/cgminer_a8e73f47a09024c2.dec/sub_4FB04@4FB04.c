int __fastcall sub_4FB04(unsigned __int8 *a1)
{
  pthread_t v2; // r0
  int v3; // r4
  int v4; // r11
  int v5; // r0
  char *v6; // r3
  char v7; // t1
  int v8; // r8
  int v9; // r4
  int v10; // r3
  int i; // r4
  int v12; // r3
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r4
  unsigned int v18; // r3
  int *v19; // r12
  unsigned int v20; // r3
  int *v21; // r1
  int v23; // [sp+2Ch] [bp-1FB0h]
  int v24; // [sp+38h] [bp-1FA4h]
  char s[2048]; // [sp+48h] [bp-1F94h] BYREF
  _BYTE v26[5120]; // [sp+848h] [bp-1794h] BYREF
  __int64 v27; // [sp+1C48h] [bp-394h] BYREF
  __int16 v28; // [sp+1C50h] [bp-38Ch]
  char v29; // [sp+1C53h] [bp-389h] BYREF
  _BYTE v30[904]; // [sp+1C54h] [bp-388h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v23 = *a1;
  memset(v30, 0, 0x384u);
  v27 = 0;
  v28 = 0;
  memset(v26, 0, sizeof(v26));
  sub_44714(v23);
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "Start A New Asic Response.Chain:[%d]", v23);
    sub_3F178(5, s, 0);
  }
  v3 = 0;
  v4 = 0;
LABEL_89:
  while ( *((_BYTE *)&dbl_80CB8 + v23 - 4052) )
  {
    sub_30168();
    v5 = sub_44600(v23, v30, 0xAu);
    if ( v5 > 0 )
    {
      v6 = &v29;
      do
      {
        v7 = *++v6;
        v26[v3++] = v7;
        if ( v3 > 5119 )
          v3 = 0;
      }
      while ( v6 != &v30[v5 - 1] );
    }
    if ( v3 != v4 )
    {
      v8 = v4 < v3 ? v3 - v4 : 5120 - v4 + v3;
      if ( v8 > 9 )
      {
        v24 = v3;
        while ( (unsigned __int8)v26[v4] == 170 )
        {
          if ( v4 > 5118 )
            v10 = 0;
          else
            v10 = v4 + 1;
          if ( v26[v10] != 85 )
          {
            v9 = 0;
            goto LABEL_34;
          }
          for ( i = 0; i != 10; ++i )
          {
            v12 = (unsigned __int8)v26[v4];
            *((_BYTE *)&v27 + i) = v12;
            if ( ++v4 > 5119 )
              v4 = 0;
            if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
            {
              snprintf(s, 0x800u, "tmp[%d] = %x", i, v12);
              sub_3F178(7, s, 0);
            }
          }
          v8 -= 10;
          v17 = HIBYTE(v28);
          if ( sub_4D234(HIBYTE(v28)) )
          {
            if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
            {
              snprintf(
                s,
                0x800u,
                "nonce: %x %x %x %x %x %x %x %x %x %x",
                (unsigned __int8)v27,
                BYTE1(v27),
                BYTE2(v27),
                BYTE3(v27),
                BYTE4(v27),
                BYTE5(v27),
                BYTE6(v27),
                HIBYTE(v27),
                (unsigned __int8)v28,
                v17);
              sub_3F178(7, s, 0);
            }
            if ( byte_7CDB4 )
            {
              pthread_mutex_lock(&stru_7CD30);
              v18 = dword_9A5EC[0];
              v19 = &dword_9A5EC[3 * dword_9A5EC[0]];
              v19[3] = *(_DWORD *)((char *)&v27 + 2);
              *((_WORD *)v19 + 8) = HIWORD(v27);
              *((_BYTE *)v19 + 18) = v28;
              *((_BYTE *)v19 + 19) = v17;
              *((_BYTE *)v19 + 20) = v23;
              if ( v18 > 0x21BE )
                dword_9A5EC[0] = 0;
              else
                dword_9A5EC[0] = v18 + 1;
              if ( (unsigned int)dword_9A5F4 >= 0x21C0 )
              {
                dword_9A5F4 = 8640;
                if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
                {
                  snprintf(s, 0x800u, "%s: nonce fifo full!!!", "get_asic_response");
                  sub_3F178(4, s, 0);
                }
              }
              else
              {
                ++dword_9A5F4;
              }
              pthread_mutex_unlock(&stru_7CD30);
            }
          }
          else if ( (unsigned int)dword_81044 < 0x21C0 && dword_8103C[0] < 0x21C0u )
          {
            pthread_mutex_lock(&stru_7FD1C);
            v20 = dword_8103C[0];
            v21 = &dword_8103C[3 * dword_8103C[0]];
            v21[3] = *(_DWORD *)((char *)&v27 + 2);
            *((_WORD *)v21 + 8) = HIWORD(v27);
            *((_BYTE *)v21 + 18) = v28;
            *((_BYTE *)v21 + 19) = v17 & 0x1F;
            *((_BYTE *)v21 + 20) = v23;
            *((_BYTE *)v21 + 21) = 0;
            *((_BYTE *)v21 + 22) = 0;
            *((_BYTE *)v21 + 23) = 0;
            if ( v20 > 0x21BE )
              dword_8103C[0] = 0;
            else
              dword_8103C[0] = v20 + 1;
            if ( (unsigned int)dword_81044 >= 0x21C0 )
            {
              dword_81044 = 8640;
              if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
              {
                snprintf(s, 0x800u, "%s: reg fifo full!!!", "get_asic_response");
                sub_3F178(4, s, 0);
              }
            }
            else
            {
              ++dword_81044;
            }
            pthread_mutex_unlock(&stru_7FD1C);
          }
          else
          {
            if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
            {
              strcpy(s, "Will Clean!");
              sub_3F178(7, s, 0);
            }
            sub_4FA0C();
          }
LABEL_87:
          if ( v8 <= 9 )
          {
            v3 = v24;
            goto LABEL_89;
          }
        }
        v9 = 0;
LABEL_34:
        while ( 2 )
        {
          if ( (unsigned __int8)v26[v4] == 170 )
          {
            v13 = v4 > 5118 ? 0 : v4 + 1;
            if ( v26[v13] == 85 )
            {
LABEL_51:
              v8 -= v9;
              goto LABEL_87;
            }
          }
          if ( ++v4 > 5119 )
            v4 = 0;
          if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            if ( v4 )
            {
              v14 = (unsigned __int8)s[v4 + 2047];
              v15 = (unsigned __int8)v26[v4];
              if ( v4 > 5118 )
              {
                v16 = 0;
                goto LABEL_49;
              }
            }
            else
            {
              v14 = v26[5119];
              v15 = v26[0];
            }
            v16 = v4 + 1;
LABEL_49:
            snprintf(
              s,
              0x800u,
              "%s: %d Headers are not corret! Header0 = 0x%02x, Header1 = 0x%02x, Header2 = 0x%02x rp = %d\n",
              "get_asic_response",
              v23,
              v14,
              v15,
              (unsigned __int8)v26[v16],
              v4);
            sub_3F178(7, s, 0);
          }
          if ( ++v9 == 9 )
            goto LABEL_51;
          continue;
        }
      }
    }
  }
  return 0;
}
