int __fastcall sub_5863C(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  unsigned int v4; // r3
  unsigned int v5; // r2
  bool v6; // cf

  v3 = a1;
  if ( !(_DWORD)a1 || *(_DWORD *)a1 != 1114990113 )
    a1 = off_7C9FC(
           "./../lib/isc/buffer.c",
           185,
           0,
           "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))",
           a3);
  if ( !HIDWORD(v3) )
    a1 = off_7C9FC("./../lib/isc/buffer.c", 186, 0, "r != ((void *)0)");
  v4 = *(_DWORD *)(v3 + 16);
  v5 = *(_DWORD *)(v3 + 20);
  v6 = v4 >= v5;
  if ( v4 >= v5 )
  {
    v4 = 0;
  }
  else
  {
    v5 -= v4;
    HIDWORD(a1) = *(_DWORD *)(v3 + 4);
  }
  if ( v6 )
  {
    *(_DWORD *)HIDWORD(v3) = v4;
  }
  else
  {
    *(_DWORD *)(HIDWORD(v3) + 4) = v5;
    v4 += HIDWORD(a1);
  }
  if ( v6 )
    *(_DWORD *)(HIDWORD(v3) + 4) = v4;
  else
    *(_DWORD *)HIDWORD(v3) = v4;
  return a1;
}
