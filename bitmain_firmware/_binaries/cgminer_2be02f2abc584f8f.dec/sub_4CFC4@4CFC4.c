int __fastcall sub_4CFC4(unsigned __int8 *a1)
{
  pthread_t v2; // r0
  int v3; // r9
  int v4; // r4
  int v5; // r5
  int v6; // r0
  char *v7; // r3
  char *v8; // r0
  char v9; // t1
  int v10; // r7
  int v11; // r3
  int v12; // r3
  unsigned __int8 *v13; // r3
  int v14; // r2
  unsigned int v15; // r2
  int *v16; // r3
  int v17; // r2
  unsigned int v18; // r2
  int *v19; // r3
  int v20; // r2
  unsigned __int8 v22; // [sp+4h] [bp-1D40h]
  char s[2040]; // [sp+8h] [bp-1D3Ch] BYREF
  _BYTE v24[4608]; // [sp+808h] [bp-153Ch] BYREF
  __int64 v25; // [sp+1A08h] [bp-33Ch]
  unsigned __int8 v26; // [sp+1A10h] [bp-334h] BYREF
  char v27; // [sp+1A13h] [bp-331h] BYREF
  _BYTE v28[816]; // [sp+1A14h] [bp-330h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v3 = *a1;
  memset(v28, 0, 0x32Au);
  v25 = 0;
  v26 = 0;
  memset(v24, 0, sizeof(v24));
  sub_43348(v3);
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(s, 0x800u, "Start A New Asic Response.Chain:[%d]", v3);
    sub_3F1C0(5, s, 0);
  }
  v4 = 0;
  v5 = 0;
LABEL_68:
  while ( byte_77C08[v3 + 4088] )
  {
    sub_2FF48();
    v6 = sub_43238(v3, v28, 9u);
    if ( v6 > 0 )
    {
      v7 = &v27;
      v8 = &v28[v6 - 1];
      do
      {
        v9 = *++v7;
        v24[v4++] = v9;
        if ( v4 > 4607 )
          v4 = 0;
      }
      while ( v7 != v8 );
    }
    if ( v4 != v5 )
    {
      v10 = v5 < v4 ? v4 - v5 : 4608 - v5 + v4;
      if ( v10 > 8 )
      {
        while ( 1 )
        {
          if ( (unsigned __int8)v24[v5] == 170 )
          {
            if ( v5 > 4606 )
              v12 = 0;
            else
              v12 = v5 + 1;
            if ( v24[v12] == 85 )
            {
              v13 = &v24[4607];
              do
              {
                *++v13 = v24[v5];
                if ( ++v5 > 4607 )
                  v5 = 0;
              }
              while ( v13 != &v26 );
              v10 -= 9;
              v22 = v26;
              if ( sub_4A630(v26) )
              {
                if ( byte_75CFC )
                {
                  pthread_mutex_lock(&stru_75C78);
                  v15 = dword_86A74[0];
                  v16 = &dword_86A74[2 * dword_86A74[0] + 2];
                  v16[1] = *(_DWORD *)((char *)&v25 + 2);
                  *((_BYTE *)v16 + 8) = BYTE6(v25);
                  *((_BYTE *)v16 + 9) = HIBYTE(v25) & 0x7F;
                  *((_BYTE *)v16 + 10) = v22;
                  *((_BYTE *)v16 + 11) = v3;
                  if ( v15 > 0x194E )
                    v17 = 0;
                  else
                    v17 = v15 + 1;
                  dword_86A74[0] = v17;
                  if ( (unsigned int)dword_86A7C > 0x194F )
                  {
                    dword_86A7C = 6480;
                    if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
                    {
                      snprintf(s, 0x800u, "%s: nonce fifo full!!!", "get_asic_response");
                      sub_3F1C0(4, s, 0);
                    }
                  }
                  else
                  {
                    ++dword_86A7C;
                  }
                  pthread_mutex_unlock(&stru_75C78);
                }
              }
              else if ( (unsigned int)dword_79F64 <= 0x194F && dword_79F5C[0] <= 0x194Fu )
              {
                pthread_mutex_lock(&stru_78C3C);
                v18 = dword_79F5C[0];
                v19 = &dword_79F5C[2 * dword_79F5C[0] + 2];
                v19[1] = *(_DWORD *)((char *)&v25 + 2);
                *((_WORD *)v19 + 4) = HIWORD(v25);
                *((_BYTE *)v19 + 10) = v22 & 0x1F;
                *((_BYTE *)v19 + 11) = v3;
                if ( v18 > 0x194E )
                  v20 = 0;
                else
                  v20 = v18 + 1;
                dword_79F5C[0] = v20;
                if ( (unsigned int)dword_79F64 > 0x194F )
                {
                  dword_79F64 = 6480;
                  if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
                  {
                    snprintf(s, 0x800u, "%s: reg fifo full!!!", "get_asic_response");
                    sub_3F1C0(4, s, 0);
                  }
                }
                else
                {
                  ++dword_79F64;
                }
                pthread_mutex_unlock(&stru_78C3C);
              }
              else
              {
                if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
                {
                  strcpy(s, "Will Clean!");
                  sub_3F1C0(7, s, 0);
                }
                sub_4CEC8();
              }
              goto LABEL_67;
            }
            v11 = 0;
          }
          else
          {
            v11 = 0;
          }
          do
          {
            if ( (unsigned __int8)v24[v5] == 170 )
            {
              v14 = v5 > 4606 ? 0 : v5 + 1;
              if ( v24[v14] == 85 )
                break;
            }
            if ( ++v5 > 4607 )
              v5 = 0;
            ++v11;
          }
          while ( v11 != 8 );
          v10 -= v11;
LABEL_67:
          if ( v10 <= 8 )
            goto LABEL_68;
        }
      }
    }
  }
  return 0;
}
