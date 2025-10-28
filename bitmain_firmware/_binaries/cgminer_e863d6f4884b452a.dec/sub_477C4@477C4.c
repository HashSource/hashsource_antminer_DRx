int __fastcall sub_477C4(int a1, int a2, int a3, int a4)
{
  _DWORD v9[2]; // [sp+0h] [bp-454h] BYREF
  char v10; // [sp+8h] [bp-44Ch]
  int v11; // [sp+10h] [bp-444h]
  int v12; // [sp+14h] [bp-440h]
  int v13; // [sp+18h] [bp-43Ch]
  int v14; // [sp+1Ch] [bp-438h]
  int v15; // [sp+24h] [bp-430h]
  _BYTE v16[12]; // [sp+28h] [bp-42Ch] BYREF
  int v17; // [sp+34h] [bp-420h]
  _DWORD s[261]; // [sp+40h] [bp-414h] BYREF

  memset(s, 0, 0x410u);
  s[259] = a2;
  s[258] = a1;
  sub_48A30(a4, "<callback>");
  if ( a1 )
  {
    a1 = 0;
    v9[0] = sub_46960;
    v13 = 1;
    v9[1] = s;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v14 = 0;
    v15 = 0;
    if ( !sub_478A8(v16) )
    {
      v17 = -1;
      a1 = sub_47544(v9, a3, a4);
      sub_46A58((int)v9);
    }
  }
  else
  {
    sub_469A4(a4, 0, "wrong arguments");
  }
  return a1;
}
