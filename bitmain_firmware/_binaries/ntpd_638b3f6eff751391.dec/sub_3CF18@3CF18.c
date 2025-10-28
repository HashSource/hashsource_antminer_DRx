signed int __fastcall sub_3CF18(signed int result)
{
  signed int v1; // r5
  size_t v2; // r6
  int v3; // r4
  int v4; // r3
  int v5; // r7
  int v6; // r3
  int v7; // [sp+1Ch] [bp-10h] BYREF
  char v8; // [sp+20h] [bp-Ch] BYREF
  int v9; // [sp+24h] [bp-8h] BYREF

  v1 = result;
  v2 = *(_DWORD *)(result + 8);
  v3 = *(_DWORD *)(v2 + 60);
  v4 = *(_DWORD *)(v3 + 168);
  v5 = *(_DWORD *)(v3 + 28);
  if ( v4 <= 28 )
  {
    if ( v4 )
    {
      memcpy((void *)(v3 + v4 + 40), (const void *)(result + 92), *(_DWORD *)(result + 88));
      result = *(_DWORD *)(v3 + 168) + *(_DWORD *)(v1 + 88);
      *(_DWORD *)(v3 + 168) = result;
      *(_BYTE *)(v3 + result + 40) = 0;
      goto LABEL_5;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 168) = 0;
  }
  if ( *(_BYTE *)(result + 92) != 33 )
    return result;
  result = (signed int)sub_27AAC((_DWORD *)result, (_BYTE *)(v3 + 40), 128, (_DWORD *)(v3 + 216));
  *(_DWORD *)(v3 + 168) = result;
LABEL_5:
  if ( result > 28 )
  {
    sub_2DDBC(v2 + 12, (const char *)(v3 + 40));
    if ( *(_DWORD *)(v3 + 168) != 29 )
      return sub_27040(v2, 6);
    result = sscanf(
               (const char *)(v3 + 40),
               "!TIME,%4d,%3d,%2d,%2d,%2d,%d,%d,%d",
               v3 + 172,
               v3 + 176,
               v3 + 180,
               v3 + 184,
               v3 + 188,
               &v7,
               &v8,
               &v9);
    if ( result != 8 )
      return sub_27040(v2, 2);
    if ( v7 != 2 )
      return sub_27040(v2, 6);
    if ( v9 != 1 )
    {
      *(_BYTE *)(v3 + 32) = 3;
      return result;
    }
    result = sub_27698((_DWORD *)v3);
    if ( !result )
      return sub_27040(v2, 6);
    v6 = *(unsigned __int8 *)(v5 + 30);
    *(_DWORD *)(v5 + 32) = 2;
    if ( v6 )
    {
      *(_BYTE *)(v5 + 30) = 0;
      return sub_276A0(v2);
    }
  }
  return result;
}
