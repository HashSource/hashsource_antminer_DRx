int __fastcall sub_4F5E8(int a1, int a2)
{
  double v2; // d0
  double v3; // d0
  size_t v5; // r6
  int v6; // r5
  char v7; // r1
  _BYTE *v8; // r12
  char *v9; // r3
  int v10; // lr
  char v11; // r2
  char v12; // r4
  int v13; // t1
  _BYTE *v14; // r3
  int v15; // r3
  _BYTE *v16; // r1
  int buf; // [sp+Ch] [bp-20h] BYREF
  _DWORD v19[2]; // [sp+10h] [bp-1Ch] BYREF
  char s[10]; // [sp+18h] [bp-14h] BYREF
  _BYTE v21[10]; // [sp+22h] [bp-Ah] BYREF

  v3 = v2 * 1000000.0;
  if ( a2 == 4 )
    v5 = 11;
  else
    v5 = 12;
  if ( a2 == 4 )
    v6 = 4;
  else
    v6 = 5;
  buf = 16711423;
  v19[0] = 1504;
  v19[1] = -33751040;
  HIBYTE(buf) = a2;
  snprintf(s, 0x10u, " %10.0f", v3);
  v7 = v21[0];
  if ( v21[0] == 32 )
  {
    v10 = 0;
LABEL_11:
    v15 = v10;
    do
    {
      v16 = &v21[v15++ + 6];
      *(v16 - 22) = 0;
    }
    while ( v15 != v6 );
    v14 = (char *)&buf + v10 + ~v10 + v15 + 7;
    goto LABEL_14;
  }
  v8 = v21;
  v9 = (char *)v19 + 1;
  v10 = 0;
  do
  {
    v11 = v7 & 0xF;
    v12 = *(v8 - 1);
    v13 = (unsigned __int8)*(v8 - 2);
    v8 -= 2;
    v7 = v13;
    ++v10;
    *++v9 = v11 | (16 * v12);
  }
  while ( v13 != 32 );
  v14 = (char *)&buf + v10 + 6;
  if ( v6 > v10 )
    goto LABEL_11;
LABEL_14:
  *v14 = -3;
  write(a1, &buf, v5);
  return 0;
}
