int __fastcall sub_C024(int a1)
{
  int v2; // r12
  int result; // r0
  int v4; // r2
  int v5; // t1
  char v6[2048]; // [sp+0h] [bp-800h] BYREF

  if ( dword_791E8 > 0 )
  {
    v2 = dword_79488;
    result = *(_DWORD *)dword_79488;
    if ( *(_DWORD *)(*(_DWORD *)dword_79488 + 4) == a1 )
    {
LABEL_7:
      if ( result )
        return result;
    }
    else
    {
      v4 = 0;
      while ( ++v4 != dword_791E8 )
      {
        v5 = *(_DWORD *)(v2 + 4);
        v2 += 4;
        result = v5;
        if ( *(_DWORD *)(v5 + 4) == a1 )
          goto LABEL_7;
      }
    }
  }
  if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
  {
    snprintf(v6, 0x800u, "WTF No pool %d found!", a1);
    sub_3F1C0(3, v6, 0);
  }
  return *(_DWORD *)(dword_79488 + 4 * a1);
}
