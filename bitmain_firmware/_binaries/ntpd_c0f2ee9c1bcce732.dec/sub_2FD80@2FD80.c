unsigned int __fastcall sub_2FD80(unsigned int result)
{
  size_t v1; // r5
  int v2; // r4
  int v3; // r12
  const char *v4; // r6
  _DWORD *v5; // r7
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r3
  int v9; // r2
  int v10; // r1
  _DWORD *v11; // r4
  int v12; // [sp+18h] [bp-14h] BYREF
  char v13; // [sp+1Ch] [bp-10h] BYREF
  int v14; // [sp+20h] [bp-Ch] BYREF
  int v15; // [sp+24h] [bp-8h] BYREF

  v1 = *(_DWORD *)(result + 8);
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  if ( *(_DWORD *)(v3 + 20) )
  {
    v4 = (const char *)(v2 + 40);
    v5 = (_DWORD *)(v2 + 216);
    *(_DWORD *)(v3 + 20) = 0;
    result = (unsigned __int16)sub_27AAC((_DWORD *)result, (_BYTE *)(v2 + 40), 128, (_DWORD *)(v2 + 216));
    *(_DWORD *)(v2 + 168) = (unsigned __int16)result;
    if ( (_WORD)result )
    {
      sscanf(
        (const char *)(v2 + 40),
        "%1x%1x%2d%2d%2d%2d%2d%2d",
        &v12,
        &v13,
        v2 + 180,
        v2 + 184,
        v2 + 188,
        &v14,
        &v15,
        v2 + 172);
      if ( *(_DWORD *)(v2 + 180) > 0x17u )
        return sub_27040(v1, 2);
      if ( *(_DWORD *)(v2 + 184) >= 0x3Cu )
        return sub_27040(v1, 2);
      if ( *(_DWORD *)(v2 + 188) > 0x3Cu )
        return sub_27040(v1, 2);
      if ( v14 <= 0 )
        return sub_27040(v1, 2);
      if ( v14 > 31 )
        return sub_27040(v1, 2);
      if ( v15 <= 0 )
        return sub_27040(v1, 2);
      if ( v15 > 12 )
        return sub_27040(v1, 2);
      v6 = *(_DWORD *)(v2 + 172);
      if ( v6 >= 0x64 )
      {
        return sub_27040(v1, 2);
      }
      else
      {
        v7 = sub_513CC(v6, v15, v14);
        v8 = *(_DWORD *)(v2 + 172);
        *(_BYTE *)(v2 + 32) = 0;
        if ( v8 <= 97 )
          v8 += 100;
        v9 = v12 & 0xC;
        *(_DWORD *)(v2 + 172) = v8 + 1900;
        *(_DWORD *)(v2 + 176) = v7;
        if ( v9 && (v9 != 4 || (*(_BYTE *)(v2 + 752) & 1) != 0) )
        {
          if ( sub_27698((_DWORD *)v2) )
          {
            v10 = *(_DWORD *)(v2 + 220);
            v11 = (_DWORD *)(v2 + 208);
            *v11 = *v5;
            v11[1] = v10;
            sub_276A0(v1);
            return sub_2DDBC(v1 + 12, v4);
          }
          else
          {
            return sub_27040(v1, 6);
          }
        }
        else
        {
          result = sub_27040(v1, 6);
          *(_BYTE *)(v2 + 32) = 3;
        }
      }
    }
  }
  return result;
}
