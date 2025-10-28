int __fastcall sub_9298(int a1)
{
  int v2; // r0
  _BYTE v4[4]; // [sp+0h] [bp-30h] BYREF
  int v5; // [sp+4h] [bp-2Ch]
  _BYTE *v6; // [sp+8h] [bp-28h]
  _BYTE v7[36]; // [sp+Ch] [bp-24h] BYREF

  ioctl(*(_DWORD *)(a1 + 8), 0x1261u);
  v2 = *(_DWORD *)(a1 + 8);
  v4[0] = 1;
  v5 = 1;
  v4[1] = 0;
  v6 = v7;
  if ( ioctl(v2, 0x720u, v4, v7) )
    return -1;
  else
    return v7[0];
}
