int __fastcall sub_476C0(int a1, int a2, int a3)
{
  const char *v6; // r1
  int v7; // r4
  _DWORD v9[2]; // [sp+0h] [bp-40h] BYREF
  char v10; // [sp+8h] [bp-38h]
  int v11; // [sp+10h] [bp-30h]
  int v12; // [sp+14h] [bp-2Ch]
  int v13; // [sp+18h] [bp-28h]
  int v14; // [sp+1Ch] [bp-24h]
  int v15; // [sp+24h] [bp-1Ch]
  _BYTE v16[12]; // [sp+28h] [bp-18h] BYREF
  int v17; // [sp+34h] [bp-Ch]

  if ( stdin == a1 )
    v6 = "<stdin>";
  else
    v6 = "<stream>";
  sub_48A30(a3, v6);
  if ( a1 )
  {
    v7 = 0;
    v9[1] = a1;
    v9[0] = fgetc;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v14 = 0;
    v15 = 0;
    v13 = 1;
    if ( !sub_478A8(v16) )
    {
      v17 = -1;
      v7 = sub_47544(v9, a2, a3);
      sub_46A58((int)v9);
    }
  }
  else
  {
    sub_469A4(a3, 0, "wrong arguments");
    return 0;
  }
  return v7;
}
