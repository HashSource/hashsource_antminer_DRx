int __fastcall sub_3FBDC(unsigned __int8 *a1)
{
  pthread_t v2; // r0
  int v3; // r11
  int v4; // r4
  int result; // r0
  signed int v6; // r0
  char *v7; // r3
  char *v8; // r0
  char v9; // t1
  int v10; // r12
  int v11; // r3
  __int64 *v12; // r5
  int v13; // r7
  int v14; // r3
  char v15; // r7
  __int16 v16; // kr00_2
  int v17; // lr
  int v18; // r3
  int *v19; // r2
  char v20; // r12
  char *v21; // r7
  int v22; // r3
  bool v23; // cc
  int v24; // r5
  int v25; // r3
  int v26; // r2
  int v27; // r1
  int v28; // r3
  int v29; // lr
  char v30; // r12
  char v31; // r5
  char v32; // r0
  bool v33; // cc
  int v34; // r3
  int *v35; // r3
  int v36; // [sp+28h] [bp-1FB4h]
  int v37; // [sp+34h] [bp-1FA8h]
  __int64 v38; // [sp+48h] [bp-1F94h] BYREF
  __int16 v39; // [sp+50h] [bp-1F8Ch]
  char v40; // [sp+52h] [bp-1F8Ah] BYREF
  _BYTE s[900]; // [sp+54h] [bp-1F88h] BYREF
  char v42[2048]; // [sp+3D8h] [bp-1C04h] BYREF
  _BYTE v43[5124]; // [sp+BD8h] [bp-1404h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v37 = *a1;
  memset(s, 0, sizeof(s));
  v39 = 0;
  v38 = 0;
  memset(v43, 0, 0x1400u);
  sub_381A4(v37);
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(v42, 0x800u, "Start A New Asic Response.Chain:[%d]", v37);
    sub_343C4(5, v42, 0);
  }
  v3 = 0;
  v4 = 0;
LABEL_5:
  result = *((unsigned __int8 *)&unk_71CC8 + v37 + 3628);
  if ( !*((_BYTE *)&unk_71CC8 + v37 + 3628) )
    return result;
  do
  {
    sub_2A810();
    v6 = sub_380F0(v37, (int)s, 0xAu);
    if ( v6 > 0 )
    {
      v7 = s;
      v8 = &s[v6];
      do
      {
        v9 = *v7++;
        v43[v3++] = v9;
        if ( v3 >= 5120 )
          v3 = 0;
      }
      while ( v7 != v8 );
    }
    if ( v4 == v3 )
      goto LABEL_5;
    v36 = v4 < v3 ? v3 - v4 : 5120 - v4 + v3;
    if ( v36 <= 9 )
      goto LABEL_5;
    do
    {
      v10 = (unsigned __int8)v43[v4];
      if ( v10 != 170 || (v4 > 5118 ? (v11 = 0) : (v11 = v4 + 1), v43[v11] != 85) )
      {
        v24 = 0;
        while ( 1 )
        {
          if ( v10 == 170 )
          {
            v25 = v4 > 5118 ? 0 : v4 + 1;
            if ( v43[v25] == 85 )
            {
LABEL_54:
              v36 -= v24;
              goto LABEL_45;
            }
          }
          if ( ++v4 >= 5120 )
            v4 = 0;
          if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
            break;
LABEL_66:
          if ( ++v24 == 9 )
            goto LABEL_54;
          v10 = (unsigned __int8)v43[v4];
        }
        if ( v4 )
        {
          v26 = 5119;
          v27 = (unsigned __int8)v43[v4 - 1];
          if ( v4 == 5119 )
            v26 = 0;
          v28 = (unsigned __int8)v43[v4];
          if ( v4 == 5119 )
            goto LABEL_65;
        }
        else
        {
          v27 = v43[5119];
          v28 = v43[0];
        }
        v26 = v4 + 1;
LABEL_65:
        snprintf(
          v42,
          0x800u,
          "%s: %d Headers are not corret! Header0 = 0x%02x, Header1 = 0x%02x, Header2 = 0x%02x rp = %d\n",
          "get_asic_response",
          v37,
          v27,
          v28,
          (unsigned __int8)v43[v26],
          v4);
        sub_343C4(7, v42, 0);
        goto LABEL_66;
      }
      v12 = &v38;
      while ( 1 )
      {
        v13 = (unsigned __int8)byte_6FA71;
        ++v4;
        v14 = (char *)v12 - (char *)&v38;
        if ( v4 >= 5120 )
          v4 = 0;
        *(_BYTE *)v12 = v10;
        v12 = (__int64 *)((char *)v12 + 1);
        if ( v13 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf(v42, 0x800u, "tmp[%d] = %x", v14, v10);
          sub_343C4(7, v42, 0);
        }
        if ( v12 == (__int64 *)&v40 )
          break;
        v10 = (unsigned __int8)v43[v4];
      }
      v15 = HIBYTE(v39);
      v36 -= 10;
      if ( v39 < 0 )
      {
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf(
            v42,
            0x800u,
            "nonce: %x %x %x %x %x %x %x %x %x %x",
            (unsigned __int8)v38,
            BYTE1(v38),
            BYTE2(v38),
            BYTE3(v38),
            BYTE4(v38),
            BYTE5(v38),
            BYTE6(v38),
            HIBYTE(v38),
            (unsigned __int8)v39,
            HIBYTE(v39));
          sub_343C4(7, v42, 0);
        }
        if ( byte_6FC28 )
        {
          pthread_mutex_lock(&stru_6FBA8);
          v29 = *(_DWORD *)((char *)&v38 + 2);
          v30 = BYTE6(v38);
          v31 = HIBYTE(v38);
          v32 = v39;
          v33 = dword_8DCDC[0] > 0x21BEu;
          v34 = 3 * dword_8DCDC[0];
          if ( dword_8DCDC[0] <= 0x21BEu )
            ++dword_8DCDC[0];
          v35 = &dword_8DCDC[v34];
          *((_BYTE *)v35 + 19) = v15;
          v35[3] = v29;
          *((_BYTE *)v35 + 16) = v30;
          *((_BYTE *)v35 + 20) = v37;
          *((_BYTE *)v35 + 17) = v31;
          *((_BYTE *)v35 + 18) = v32;
          if ( v33 )
            dword_8DCDC[0] = 0;
          if ( (unsigned int)dword_8DCE4 >= 0x21C0 )
          {
            dword_8DCE4 = 8640;
            if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
            {
              snprintf(v42, 0x800u, "%s: nonce fifo full!!!", "get_asic_response");
              sub_343C4(4, v42, 0);
            }
          }
          else
          {
            ++dword_8DCE4;
          }
          pthread_mutex_unlock(&stru_6FBA8);
        }
      }
      else if ( (unsigned int)dword_747BC >= 0x21C0 || dword_747B4[0] >= 0x21C0u )
      {
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          strcpy(v42, "Will Clean!");
          sub_343C4(7, v42, 0);
        }
        sub_3FB28();
      }
      else
      {
        pthread_mutex_lock(&stru_72B28);
        v16 = HIWORD(v38);
        v17 = *(_DWORD *)((char *)&v38 + 2);
        v18 = 3 * dword_747B4[0];
        v19 = &dword_747B4[3 * dword_747B4[0]];
        *((_BYTE *)v19 + 19) = v15 & 0x1F;
        *((_BYTE *)v19 + 16) = v16;
        v20 = v39;
        *((_BYTE *)v19 + 20) = v37;
        v21 = (char *)&dword_747B4[v18 + 5] + 1;
        *((_BYTE *)v19 + 17) = HIBYTE(v16);
        v19[3] = v17;
        *((_BYTE *)v19 + 18) = v20;
        *(_WORD *)v21 = 0;
        v21[2] = 0;
        v22 = dword_747B4[0];
        v23 = dword_747B4[0] > 0x21BEu;
        if ( dword_747B4[0] > 0x21BEu )
          dword_747B4[0] = 0;
        else
          v22 = dword_747B4[0] + 1;
        if ( !v23 )
          dword_747B4[0] = v22;
        if ( (unsigned int)dword_747BC >= 0x21C0 )
        {
          dword_747BC = 8640;
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
          {
            snprintf(v42, 0x800u, "%s: reg fifo full!!!", "get_asic_response");
            sub_343C4(4, v42, 0);
          }
        }
        else
        {
          ++dword_747BC;
        }
        pthread_mutex_unlock(&stru_72B28);
      }
LABEL_45:
      ;
    }
    while ( v36 > 9 );
    result = *((unsigned __int8 *)&unk_71CC8 + v37 + 3628);
  }
  while ( *((_BYTE *)&unk_71CC8 + v37 + 3628) );
  return result;
}
