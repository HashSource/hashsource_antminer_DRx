int __fastcall sub_263E4(int a1)
{
  int v2; // r5
  bool v3; // zf
  int v4; // r3
  bool v5; // cc
  int v6; // r3
  int v8; // r3
  int v9; // r6
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r3

  v2 = *(unsigned __int8 *)(a1 + 48);
  if ( (*(_BYTE *)(a1 + 56) & 6) != 0 )
  {
    v3 = byte_CB4B0 == 3;
    *(_DWORD *)(a1 + 516) = dword_CB548;
    if ( !v3 )
      sub_228D8(a1);
    return sub_22F68(a1, v2);
  }
  if ( (*(_BYTE *)(a1 + 56) & 0x10) == 0 )
  {
    v8 = *(_DWORD *)(a1 + 116);
    if ( v8 )
    {
      v14 = v8 - 1;
      *(_DWORD *)(a1 + 116) = v14;
      if ( !v14 )
      {
        if ( dword_7D5EC )
        {
          if ( !--dword_CB480 )
          {
            sub_4FE78(5, "ntpd: no servers found", 0);
            puts("ntpd: no servers found");
            exit(0);
          }
        }
      }
      goto LABEL_24;
    }
    v9 = *(unsigned __int8 *)(a1 + 106);
    v10 = dword_CB548;
    ++*(_DWORD *)(a1 + 508);
    *(_BYTE *)(a1 + 106) = 2 * v9;
    *(_DWORD *)(a1 + 516) = v10;
    if ( ((2 * (_BYTE)v9) & 0xE) != 0 || (sub_246A0(a1), *(_BYTE *)(a1 + 106)) )
    {
      v11 = *(_DWORD *)(a1 + 52);
      v2 = (unsigned __int8)byte_CABC8;
      if ( (v11 & 2) == 0 || *(_BYTE *)(a1 + 47) != 3 )
        *(_DWORD *)(a1 + 508) = 0;
      if ( (v11 & 0x40) == 0 || *(_DWORD *)(a1 + 120) || sub_227C8(a1) )
        goto LABEL_22;
    }
    else
    {
      if ( v9 )
        sub_1D3D8(131, a1, (const char *)*(unsigned __int8 *)(a1 + 106));
      if ( (*(_DWORD *)(a1 + 52) & 0x100) == 0 || *(_DWORD *)(a1 + 120) )
        goto LABEL_22;
    }
    *(_DWORD *)(a1 + 120) = 3;
LABEL_22:
    if ( *(int *)(a1 + 508) > 9 )
    {
      ++v2;
      if ( (*(_DWORD *)(a1 + 52) & 2) != 0 )
      {
        sub_1D3D8(133, a1, "timeout");
        v12 = *(unsigned __int8 *)(a1 + 47);
        if ( v12 != 3 )
          goto LABEL_38;
        if ( dword_CAC28 <= dword_7A2BC )
          goto LABEL_25;
        if ( sub_216D8(a1) )
        {
LABEL_38:
          sub_2310C(a1, "TIME");
          return sub_218BC(a1);
        }
      }
    }
LABEL_24:
    v12 = *(unsigned __int8 *)(a1 + 47);
LABEL_25:
    v13 = *(_DWORD *)(a1 + 120);
    if ( v13 > 0 )
      *(_DWORD *)(a1 + 120) = v13 - 1;
    if ( v12 != 6 )
      sub_228D8(a1);
    return sub_22F68(a1, v2);
  }
  v4 = *(_DWORD *)(a1 + 508);
  v5 = v4 <= SLODWORD(flt_7A2C0);
  *(_DWORD *)(a1 + 516) = dword_CB548;
  if ( v5 )
  {
    if ( dword_CB4D0 < dword_7A2B8 || dword_CAC28 < dword_7A2BC )
    {
      v6 = *(unsigned __int8 *)(a1 + 59);
      if ( v6 < dword_CB4D4 )
        *(_BYTE *)(a1 + 59) = v6 + 1;
      sub_228D8(a1);
      v4 = *(_DWORD *)(a1 + 508);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 508) = 0;
    *(_BYTE *)(a1 + 59) = 0;
    sub_228D8(a1);
    v4 = *(_DWORD *)(a1 + 508);
  }
  *(_DWORD *)(a1 + 508) = v4 + 1;
  return sub_22F68(a1, v2);
}
