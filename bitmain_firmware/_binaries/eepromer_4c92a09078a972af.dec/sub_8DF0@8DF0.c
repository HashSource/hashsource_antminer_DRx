int __fastcall sub_8DF0(int a1, __int16 a2, __int16 a3, int a4)
{
  int v4; // r0
  int v5; // r4
  _BYTE v7[4]; // [sp+4h] [bp-28h] BYREF
  _DWORD v8[2]; // [sp+8h] [bp-24h] BYREF
  _WORD v9[4]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE *v10; // [sp+18h] [bp-14h]
  __int16 v11; // [sp+1Ch] [bp-10h]
  __int16 v12; // [sp+1Eh] [bp-Eh]
  __int16 v13; // [sp+20h] [bp-Ch]
  int v14; // [sp+24h] [bp-8h]

  v7[1] = a3;
  v9[0] = a2;
  v7[0] = HIBYTE(a3) & 0x7F;
  v11 = a2;
  v14 = a4;
  v9[1] = 0;
  v9[2] = 2;
  v13 = 64;
  v8[1] = 2;
  v10 = v7;
  v12 = 1;
  v8[0] = v9;
  v4 = ioctl(a1, 0x707u, v8);
  v5 = v4;
  if ( v4 < 0 )
    fprintf((FILE *)stderr, "Error: Read error:%d\n", v4);
  return v5;
}
