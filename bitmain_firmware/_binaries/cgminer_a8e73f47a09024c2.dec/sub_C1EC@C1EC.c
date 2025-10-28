int __fastcall sub_C1EC(int a1)
{
  int v2; // r12
  int result; // r0
  int v4; // r2
  int v5; // t1
  char v6[2048]; // [sp+0h] [bp-800h] BYREF

  if ( dword_802C8 > 0 )
  {
    v2 = dword_80568;
    result = *(_DWORD *)dword_80568;
    if ( *(_DWORD *)(*(_DWORD *)dword_80568 + 4) == a1 )
    {
LABEL_7:
      if ( result )
        return result;
    }
    else
    {
      v4 = 0;
      while ( ++v4 != dword_802C8 )
      {
        v5 = *(_DWORD *)(v2 + 4);
        v2 += 4;
        result = v5;
        if ( *(_DWORD *)(v5 + 4) == a1 )
          goto LABEL_7;
      }
    }
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
  {
    snprintf(v6, 0x800u, "WTF No pool %d found!", a1);
    sub_3F178(3, v6, 0);
  }
  return *(_DWORD *)(dword_80568 + 4 * a1);
}
