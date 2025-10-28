unsigned int __fastcall sub_2FF44(int a1, size_t a2)
{
  int v2; // r4
  int v4; // r1
  int v5; // r2
  const char *v6; // r5
  int v7; // r0
  int v8; // r3
  int v9; // r2
  bool v10; // zf
  int v11; // r12
  int v12; // r1
  int v13; // lr
  int v14; // r9
  int v15; // r8
  int v16; // r7
  _DWORD *v17; // r8
  int v18; // r1
  _DWORD *v19; // r4
  unsigned int result; // r0
  int v21; // [sp+10h] [bp-38h]
  int v22; // [sp+24h] [bp-24h] BYREF
  int v23; // [sp+28h] [bp-20h]
  int v24; // [sp+30h] [bp-18h]
  int v25; // [sp+34h] [bp-14h]
  int v26; // [sp+38h] [bp-10h]
  int v27; // [sp+3Ch] [bp-Ch]
  int v28; // [sp+40h] [bp-8h]
  int v29; // [sp+44h] [bp-4h]

  v2 = *(_DWORD *)(a2 + 60);
  ioctl(dword_CB590, 0x20000u, &v22);
  v4 = v23;
  v5 = v24;
  ++*(_DWORD *)(v2 + 760);
  v6 = (const char *)(v2 + 40);
  v7 = sub_513CC(v22, v4, v5);
  v8 = v29;
  v9 = 1000000 * v28;
  v10 = (v29 & 0x20) == 0;
  v11 = v26;
  if ( (v29 & 0x20) == 0 )
    *(_BYTE *)(v2 + 32) = 0;
  v12 = v27;
  v13 = v22;
  v14 = v25;
  v15 = v24;
  v16 = v23;
  *(_DWORD *)(v2 + 192) = v9;
  *(_DWORD *)(v2 + 184) = v11;
  *(_DWORD *)(v2 + 188) = v12;
  *(_DWORD *)(v2 + 180) = v14;
  *(_DWORD *)(v2 + 176) = v7;
  if ( !v10 )
    *(_BYTE *)(v2 + 32) = 1;
  v21 = v15;
  v17 = (_DWORD *)(v2 + 216);
  snprintf(
    (char *)(v2 + 40),
    0x80u,
    "ST: %02X T: %02d:%02d:%02d.%03ld D: %02d.%02d.%04d",
    v8,
    v14,
    v11,
    v12,
    v9 / 1000000,
    v21,
    v16,
    v13);
  *(_DWORD *)(v2 + 168) = (unsigned __int16)strlen((const char *)(v2 + 40));
  sub_4CBA8(v2 + 216);
  if ( (v29 & 0xC0) != 0 && ((v29 & 0xC0) != 0x40 || (*(_BYTE *)(v2 + 752) & 1) != 0) )
  {
    if ( sub_27698((_DWORD *)v2) )
    {
      v18 = *(_DWORD *)(v2 + 220);
      v19 = (_DWORD *)(v2 + 208);
      *v19 = *v17;
      v19[1] = v18;
      sub_276A0(a2);
      return sub_2DDBC(a2 + 12, v6);
    }
    else
    {
      return sub_27040(a2, 6);
    }
  }
  else
  {
    result = sub_27040(a2, 6);
    *(_BYTE *)(v2 + 32) = 3;
  }
  return result;
}
