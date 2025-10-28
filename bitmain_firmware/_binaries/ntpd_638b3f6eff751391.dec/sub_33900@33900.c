int __fastcall sub_33900(int result, int a2, _BYTE *a3)
{
  int v3; // r5
  char *v5; // r2
  bool v6; // zf
  char *v7; // r3
  char v8; // r12
  int v9; // r3
  int v10; // r1

  v3 = result;
  if ( result > 0 )
    return sub_4FE78(3, "leitch_control: unit %d invalid", result);
  if ( a2 )
  {
    v5 = (char *)*(unsigned __int8 *)(a2 + 2);
    if ( ((unsigned __int8)v5 & 4) != 0 )
      *((_BYTE *)&unk_800BC + result + 112) = *(_DWORD *)(a2 + 56);
    v6 = ((unsigned __int8)v5 & 8) == 0;
    if ( ((unsigned __int8)v5 & 8) != 0 )
      v5 = (char *)&unk_800BC + 4 * result;
    v7 = (char *)&unk_800BC + result;
    if ( !v6 )
      a2 = *(_DWORD *)(a2 + 60);
    result = 104;
    if ( !v6 )
      *((_DWORD *)v5 + 27) = a2;
    if ( v7[104] )
    {
      result = 104 * v3;
      v8 = v7[112];
      v9 = *((_DWORD *)&unk_800BC + 26 * v3);
      *(_BYTE *)(v9 + 69) = v8;
      *(_DWORD *)(v9 + 88) = *((_DWORD *)&unk_800BC + v3 + 27);
    }
  }
  if ( a3 )
  {
    memset(a3, 0, 0x48u);
    a3[2] = 12;
    *a3 = 13;
    result = *((unsigned __int8 *)&unk_800BC + v3 + 112);
    v10 = *((_DWORD *)&unk_800BC + v3 + 27);
    *((_DWORD *)a3 + 14) = result;
    *((_DWORD *)a3 + 2) = &unk_665CC;
    *((_DWORD *)a3 + 15) = v10;
    *((_DWORD *)a3 + 8) = "Leitch: CSD 5300 Master Clock System Driver";
  }
  return result;
}
