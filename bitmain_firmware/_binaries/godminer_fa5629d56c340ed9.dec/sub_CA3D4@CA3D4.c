int __fastcall sub_CA3D4(int a1, int a2, unsigned __int64 a3)
{
  int v6; // r11
  char *v7; // r6
  int v8; // r2
  unsigned __int64 v9; // r0
  char *v11; // r3
  int v12; // r9
  int v13; // r2
  char v14; // t1
  char v15; // [sp+3h] [bp-49h] BYREF
  _DWORD v16[18]; // [sp+4h] [bp-48h] BYREF

  memset(v16, 0, 65);
  v6 = a2 - 1;
  v7 = (char *)v16;
  do
  {
    sub_146F74(a3, 0x24u);
    *v7++ = aCheckReadBackD[v8 + 116];
    LODWORD(v9) = sub_146F74(a3, 0x24u);
    a3 = v9;
  }
  while ( v7 != &v15 + a2 );
  if ( v9 )
    return 0;
  v11 = (char *)v16 + a2 - 2;
  v12 = a1 + a2 - 2;
  v13 = a1 - 1;
  do
  {
    v14 = *v11--;
    *(_BYTE *)++v13 = v14;
  }
  while ( v13 != v12 );
  *(_BYTE *)(a1 + v6) = 0;
  return 1;
}
