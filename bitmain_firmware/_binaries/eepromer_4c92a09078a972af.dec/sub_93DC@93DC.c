int __fastcall sub_93DC(int a1, __int16 a2, int a3)
{
  int v3; // r0
  int v4; // r4
  _BYTE v6[4]; // [sp+4h] [bp-28h] BYREF
  _DWORD v7[2]; // [sp+8h] [bp-24h] BYREF
  _WORD v8[4]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE *v9; // [sp+18h] [bp-14h]
  __int16 v10; // [sp+1Ch] [bp-10h]
  __int16 v11; // [sp+1Eh] [bp-Eh]
  __int16 v12; // [sp+20h] [bp-Ch]
  int v13; // [sp+24h] [bp-8h]

  v13 = a3;
  v8[0] = a2;
  v10 = a2;
  v6[1] = 0;
  v6[0] = 0;
  v8[1] = 0;
  v11 = 1;
  v8[2] = 2;
  v7[1] = 2;
  v9 = v6;
  v12 = 64;
  v7[0] = v8;
  v3 = ioctl(a1, 0x707u, v7);
  v4 = v3;
  if ( v3 < 0 )
    fprintf((FILE *)stderr, "Error: Read error:%d\n", v3);
  return v4;
}
