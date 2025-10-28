int __fastcall sub_218BC(int a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r8
  int v5; // r6
  int v6; // r0
  _DWORD *v7; // r2
  _DWORD *v8; // r3
  const char *v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r6
  int v13; // r3
  _DWORD *v14; // r2
  int v15; // r0
  const char *v16; // r0
  int result; // r0
  int v18; // r1
  char v19[80]; // [sp+0h] [bp-50h] BYREF

  snprintf(v19, 0x50u, "assoc %d", *(unsigned __int16 *)(a1 + 44));
  sub_1D3D8(130, a1, v19);
  sub_21778(a1, 0);
  v2 = sub_2E254(a1 + 12);
  v3 = *(_DWORD *)(a1 + 52);
  ++dword_CB448;
  v4 = dword_CAE34[v2];
  v5 = v2;
  v6 = dword_CAC28;
  dword_CAE34[v5] = v4 - 1;
  dword_CAC28 = v6 - 1;
  if ( (v3 & 2) != 0 )
    --dword_CB444;
  if ( (v3 & 8) != 0 )
    sub_27130(a1);
  *(_DWORD *)(a1 + 528) = 0;
  v7 = (_DWORD *)dword_CB23C[v5];
  if ( v7 == (_DWORD *)a1 )
  {
    v7 = &dword_CB23C[v5];
    v8 = (_DWORD *)a1;
LABEL_23:
    *v7 = *v8;
    *v8 = 0;
  }
  else
  {
    if ( v7 )
    {
      do
      {
        if ( !*v7 )
          break;
        v8 = (_DWORD *)*v7;
        if ( *v7 == a1 )
          goto LABEL_23;
        v7 = (_DWORD *)*v7;
      }
      while ( v8 );
    }
    ++dword_CAE34[v5];
    v9 = (const char *)sub_50CD0(a1 + 12);
    sub_4FE78(3, "peer struct for %s not in table!", v9);
  }
  v10 = *(_WORD *)(a1 + 44) & 0x7F;
  v11 = dword_CB03C[v10];
  v12 = dword_CAC34[v10];
  dword_CAC34[v10] = v12 - 1;
  if ( v11 == a1 )
  {
    v14 = &dword_CB03C[v10];
  }
  else
  {
    if ( !v11 || (v13 = *(_DWORD *)(v11 + 4)) == 0 )
    {
LABEL_20:
      dword_CAC34[v10] = v12;
      v16 = (const char *)sub_50CD0(a1 + 12);
      sub_4FE78(3, "peer struct for %s not in association table!", v16);
      goto LABEL_21;
    }
    while ( a1 != v13 )
    {
      v11 = v13;
      v13 = *(_DWORD *)(v13 + 4);
      if ( !v13 )
        goto LABEL_20;
    }
    v14 = (_DWORD *)(v11 + 4);
  }
  v15 = *v14;
  *v14 = *(_DWORD *)(*v14 + 4);
  *(_DWORD *)(v15 + 4) = 0;
LABEL_21:
  result = dword_7D938;
  v18 = dword_CB440;
  dword_7D938 = a1;
  *(_DWORD *)a1 = result;
  dword_CB440 = v18 + 1;
  return result;
}
