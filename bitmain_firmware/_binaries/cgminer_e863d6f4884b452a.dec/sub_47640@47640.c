int __fastcall sub_47640(int a1, int a2, int a3, int a4)
{
  int v8; // r4
  _DWORD v10[3]; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v11[2]; // [sp+10h] [bp-40h] BYREF
  char v12; // [sp+18h] [bp-38h]
  int v13; // [sp+20h] [bp-30h]
  int v14; // [sp+24h] [bp-2Ch]
  int v15; // [sp+28h] [bp-28h]
  int v16; // [sp+2Ch] [bp-24h]
  int v17; // [sp+34h] [bp-1Ch]
  _BYTE v18[12]; // [sp+38h] [bp-18h] BYREF
  int v19; // [sp+44h] [bp-Ch]

  sub_48A30(a4, "<buffer>");
  if ( a1 )
  {
    v8 = 0;
    v10[0] = a1;
    v10[1] = a2;
    v11[0] = sub_46944;
    v10[2] = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v16 = 0;
    v17 = 0;
    v11[1] = v10;
    v15 = 1;
    if ( !sub_478A8(v18) )
    {
      v19 = -1;
      v8 = sub_47544(v11, a3, a4);
      sub_46A58((int)v11);
    }
  }
  else
  {
    sub_469A4(a4, 0, "wrong arguments");
    return 0;
  }
  return v8;
}
