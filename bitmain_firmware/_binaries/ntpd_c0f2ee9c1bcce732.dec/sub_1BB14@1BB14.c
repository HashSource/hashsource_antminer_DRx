unsigned __int16 *__fastcall sub_1BB14(int a1, char a2)
{
  int v2; // r10
  int v4; // r4
  int v5; // r5
  int v6; // r3
  int v7; // r2
  bool v8; // zf
  int v9; // r2
  int v10; // r6
  const char *v11; // r0
  char *v12; // lr
  char *v13; // r12
  bool v14; // zf
  size_t v15; // r8
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r4
  unsigned __int16 *result; // r0

  v4 = (unsigned __int16)word_7D3AC;
  if ( word_7D3AC )
    return sub_1B684(6);
  if ( a2 < 0 )
  {
    strcpy(byte_CA170, "runtime configuration prohibited by restrict ... nomodify");
    sub_19D60(byte_CA170, 0x39u, (unsigned __int16)word_7D3AC);
    sub_19AF8(v4);
    v9 = sub_50CD0(a1 + 8);
    return (unsigned __int16 *)sub_4FE78(5, "runtime config from %s rejected due to nomodify restriction", v9);
  }
  v5 = dword_7D3A8 - dword_7D3A4;
  memcpy(byte_C9D70, (const void *)dword_7D3A4, dword_7D3A8 - dword_7D3A4);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( byte_C9D70[v5 - 1] == 10 )
    {
      byte_C9D70[v5] = 0;
      dword_CA570 = 0;
      dword_CA574 = 0;
      dword_CA578 = 0;
    }
    else
    {
      v7 = v5 + 1;
      v8 = v5 == -1;
      byte_C9D70[v5] = 10;
      dword_CA570 = 0;
      if ( v5 == -1 )
        v5 = 0;
      dword_CA574 = 0;
      dword_CA578 = 0;
      if ( v8 )
        v2 = v5;
      byte_C9D70[v7] = 0;
      if ( v8 )
        goto LABEL_16;
      v6 = v5;
      v5 = v7;
    }
    if ( byte_C9D70[v6] == 10 )
    {
      v2 = 1;
      byte_C9D70[v6] = 0;
    }
    else
    {
      v2 = 0;
    }
  }
  else
  {
    v2 = 0;
    byte_C9D70[0] = 0;
    dword_CA570 = 0;
    dword_CA574 = 0;
    dword_CA578 = 0;
  }
LABEL_16:
  if ( dword_7CF4C > 0 )
    printf("Got Remote Configuration Command: %s\n", byte_C9D70);
  v10 = a1 + 8;
  v11 = (const char *)sub_50CD0(v10);
  sub_4FE78(5, "%s config: %s", v11, byte_C9D70);
  if ( v2 )
  {
    v5 += (int)byte_C9D70;
    *(_BYTE *)(v5 - 1) = 10;
  }
  sub_10924(v10);
  v13 = byte_C9D70;
  v14 = dword_CA578 == 0;
  if ( !dword_CA578 )
  {
    v12 = byte_CA170;
    v5 = (int)"Config Succeeded";
  }
  v15 = dword_CA574;
  if ( !dword_CA578 )
  {
    v16 = *(_DWORD *)v5;
    v17 = *(_DWORD *)(v5 + 4);
    v18 = *(_DWORD *)(v5 + 8);
    v19 = *(_DWORD *)(v5 + 12);
    v15 = dword_CA574 + 16;
    dword_CA574 += 16;
    v13 = *(char **)(v5 + 16);
    *(_DWORD *)v12 = v16;
    *((_DWORD *)v12 + 1) = v17;
    *((_DWORD *)v12 + 2) = v18;
    *((_DWORD *)v12 + 3) = v19;
    v12 += 16;
  }
  if ( v14 )
    *v12 = (char)v13;
  sub_19D60(byte_CA170, v15, 0);
  result = sub_19AF8(0);
  if ( dword_7CF4C > 0 )
    result = (unsigned __int16 *)printf("Reply: %s\n", byte_CA170);
  v20 = dword_CA578;
  if ( dword_CA578 > 0 )
  {
    sub_50CD0(v10);
    return (unsigned __int16 *)sub_4FE78(5, "%d error in %s config", v20);
  }
  return result;
}
