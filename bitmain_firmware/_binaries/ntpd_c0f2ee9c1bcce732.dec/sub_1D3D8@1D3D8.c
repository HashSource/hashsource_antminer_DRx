int __fastcall sub_1D3D8(int result, int a2, const char *a3)
{
  int v4; // r7
  int v6; // r3
  char v7; // r1
  unsigned int v8; // r3
  char v9; // r3
  int v10; // r2
  int v11; // r0
  const char *v12; // r6
  int v13; // r10
  const char *v14; // r0
  size_t v15; // r0
  int v16; // r4
  int v17; // r4
  unsigned int v18; // r0
  int v19; // r0
  unsigned int v20; // r0
  int v21; // r0
  char v22; // r2
  int v23; // r6
  const char *v24; // r0
  size_t v25; // r0
  int v26; // r4
  int v27; // r0
  void **v28; // r0
  __int16 v29; // r3
  int v30; // r4
  size_t v31; // r0
  unsigned __int8 v32[68]; // [sp+10h] [bp-14Ch] BYREF
  int v33; // [sp+54h] [bp-108h]
  char v34[260]; // [sp+58h] [bp-104h] BYREF

  v4 = result;
  if ( a2 )
  {
    v6 = *(unsigned __int8 *)(a2 + 57);
    v7 = result & 0x7F;
    if ( v6 == (result & 0x7F) )
    {
      v9 = 1;
    }
    else
    {
      v8 = *(unsigned __int8 *)(a2 + 58);
      if ( v8 > 0xE )
        return result;
      v9 = v8 + 1;
    }
    v10 = *(unsigned __int16 *)(a2 + 12);
    v11 = a2 + 12;
    *(_BYTE *)(a2 + 57) = v7;
    *(_BYTE *)(a2 + 58) = v9;
    if ( v10 == 2 && bswap32(*(_DWORD *)(a2 + 16)) >> 16 << 16 == 2139029504 )
      v12 = (const char *)sub_50BEC(v11);
    else
      v12 = (const char *)sub_50CD0(v11);
    v13 = sub_1C1BC(a2);
    v14 = (const char *)sub_512EC(v4);
    snprintf(v34, 0x100u, "%s %04x %02x %s", v12, v13, v4, v14);
    if ( a3 )
    {
      v15 = strlen(v34);
      snprintf(&v34[v15], 256 - v15, " %s", a3);
    }
    if ( (dword_7BE6C & 0x20) == 0 )
      goto LABEL_13;
    goto LABEL_31;
  }
  if ( (unsigned __int8)byte_7D3B1 == (unsigned __int8)result )
  {
    if ( (unsigned __int8)byte_7D3B0 > 0xEu )
      return result;
    v22 = byte_7D3B0 + 1;
  }
  else
  {
    v22 = 1;
  }
  byte_7D3B1 = result;
  byte_7D3B0 = v22;
  v23 = sub_1C21C();
  v24 = (const char *)sub_512EC(v4);
  snprintf(v34, 0x100u, "0.0.0.0 %04x %02x %s", v23, v4, v24);
  if ( a3 )
  {
    v25 = strlen(v34);
    snprintf(&v34[v25], 256 - v25, " %s", a3);
  }
  if ( (dword_7BE6C & 2) != 0 )
LABEL_31:
    sub_4FE78(6, v34);
LABEL_13:
  result = sub_2E018(v34);
  if ( dword_7CF4C )
    result = printf("event at %lu %s\n", dword_CB548, v34);
  if ( dword_CAAD4 > 0 )
  {
    v16 = 1;
    byte_7D178 = 7;
    dword_7CF6C = (int)&unk_7CF80;
    dword_7D17C = 0;
    dword_7D194 = (int)&unk_7D154;
    byte_7D181 = 0;
    byte_7D180 = 1;
    if ( (v4 & 0x80) != 0 )
    {
      if ( !a2 )
        off_7C9FC("ntp_control.c", 3036, 2, "peer != ((void *)0)");
      v17 = 1;
      word_7CF7A = (*(_WORD *)(a2 + 44) << 8) | HIBYTE(*(_WORD *)(a2 + 44));
      v18 = sub_1C1BC(a2);
      word_7CF78 = ((_WORD)v18 << 8) | (v18 >> 8);
      do
      {
        v19 = v17++;
        sub_1AC4C(v19, a2);
      }
      while ( v17 != 42 );
      if ( v4 == 139 )
      {
        v33 = 0;
        sub_27E00(a2 + 12, 0, v32);
        v26 = 1;
        sub_1AB88("refclockstatus", v32[64] & 0xF | (unsigned __int8)(16 * v32[65]));
        do
        {
          v27 = v26++;
          sub_1B264(v27, v32, 0);
        }
        while ( v26 != 14 );
        v28 = (void **)v33;
        if ( v33 )
        {
          v29 = *(_WORD *)(v33 + 2);
          if ( (v29 & 0x80) == 0 )
          {
            v30 = v33 + 8;
            do
            {
              if ( (v29 & 0x20) != 0 )
              {
                v31 = strlen(*(const char **)(v30 - 4));
                sub_19D60(*(void **)(v30 - 4), v31, 0);
              }
              if ( !v30 )
                break;
              v29 = *(_WORD *)(v30 + 2);
              v30 += 8;
            }
            while ( (v29 & 0x80) == 0 );
            v28 = (void **)v33;
          }
        }
        sub_1D394(v28);
      }
    }
    else
    {
      word_7CF7A = 0;
      v20 = sub_1C21C();
      word_7CF78 = ((_WORD)v20 << 8) | (v20 >> 8);
      do
      {
        v21 = v16++;
        sub_1A508(v21);
      }
      while ( v16 != 24 );
    }
    return (int)sub_19AF8(0);
  }
  return result;
}
