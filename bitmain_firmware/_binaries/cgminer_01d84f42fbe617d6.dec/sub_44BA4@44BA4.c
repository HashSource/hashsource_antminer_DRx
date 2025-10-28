int __fastcall sub_44BA4(int a1, int a2)
{
  int v3; // r5
  int v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r7
  bool v13; // cc
  int v14; // r0
  int v15; // r10
  int v16; // r5
  int v17; // r8
  int v18; // r1
  int v19; // r3

  v3 = *(_DWORD *)(a1 + 20);
  if ( v3 )
    return v3;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(unsigned __int8 *)(a1 + v5 + 8);
  if ( v6 )
  {
    v7 = v5 + 1;
    goto LABEL_5;
  }
  v6 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
  v12 = v6;
  if ( v6 == -1 )
  {
    *(_DWORD *)(a1 + 20) = -1;
    return -1;
  }
  *(_DWORD *)(a1 + 16) = 0;
  v13 = (unsigned int)(v6 - 128) > 0x7F;
  v6 = (unsigned __int8)v6;
  if ( v13 )
    *(_BYTE *)(a1 + 9) = 0;
  *(_BYTE *)(a1 + 8) = v6;
  if ( v13 )
  {
    v7 = 1;
  }
  else
  {
    v14 = sub_4633C((unsigned __int8)v6);
    v15 = v14;
    if ( !v14 )
      goto LABEL_23;
    if ( v14 <= 1 )
      _assert_fail("count >= 2", "load.c", 0xAFu, "stream_get");
    v16 = a1;
    v17 = a1 - 1 + v14;
    do
    {
      *(_BYTE *)(v16 + 9) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
      ++v16;
    }
    while ( v16 != v17 );
    if ( !sub_463B8(a1 + 8, v15, 0) )
    {
LABEL_23:
      v3 = -2;
      *(_DWORD *)(a1 + 20) = -2;
      sub_448AC(a2, (_DWORD *)a1, "unable to decode byte 0x%x", v12);
      return v3;
    }
    v18 = *(_DWORD *)(a1 + 16);
    v19 = a1 + v18;
    *(_BYTE *)(a1 + v15 + 8) = 0;
    v7 = v18 + 1;
    v6 = *(unsigned __int8 *)(v19 + 8);
  }
LABEL_5:
  v8 = *(_DWORD *)(a1 + 36);
  v3 = v6;
  *(_DWORD *)(a1 + 16) = v7;
  *(_DWORD *)(a1 + 36) = v8 + 1;
  if ( v6 != 10 )
  {
    if ( sub_4633C(v6) )
      ++*(_DWORD *)(a1 + 28);
    return v3;
  }
  v10 = *(_DWORD *)(a1 + 28);
  v11 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = v10;
  *(_DWORD *)(a1 + 24) = v11 + 1;
  return 10;
}
