int __fastcall sub_41F8C(int a1, int a2, _DWORD *a3, int a4)
{
  int v5; // r3
  int v7; // r12
  int v8; // r4
  int v9; // r1
  int v10; // r0
  int result; // r0
  unsigned int v12; // r3
  const char *v13; // r2

  v5 = *(_DWORD *)(a1 + 68);
  v7 = *(_DWORD *)(a1 + 100);
  v8 = v5;
  while ( 1 )
  {
    --v7;
    if ( *(unsigned __int16 *)(v8 + 2) == a2 )
      break;
    v8 += 64;
    if ( v7 <= 0 )
    {
      if ( (unsigned __int8)a2 <= 0x7Fu && (dword_69A0C[(unsigned __int8)a2] & 0xC) != 0 )
      {
        v9 = *(unsigned __int16 *)(a1 + 96);
        if ( v9 != 0x8000 )
        {
          v10 = *(_DWORD *)(a1 + 20);
          *a3 = v5 + (v9 << 6);
          *(_DWORD *)(a1 + 20) = v10 - 1;
          a3[3] = 1;
          return 0;
        }
      }
LABEL_10:
      if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
        return -1;
      goto LABEL_13;
    }
  }
  v12 = *(_DWORD *)(v8 + 16);
  result = v12 & 0x280000;
  if ( (v12 & 0x280000) == 0 )
  {
    *a3 = v8;
    a3[3] = 1;
    return result;
  }
  if ( (_UNKNOWN *)v12 != &unk_80100 || !*(_DWORD *)(v8 + 52) )
    goto LABEL_10;
  fprintf((FILE *)stderr, off_7B8B8[0], *(_DWORD *)(a1 + 24));
  v13 = *(const char **)(v8 + 44);
  if ( v13 )
    fprintf((FILE *)stderr, " -- %s", v13);
  fputc(10, (FILE *)stderr);
  (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
  if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
    return -1;
LABEL_13:
  fprintf((FILE *)stderr, off_7B924[0], *(_DWORD *)(a1 + 24), a2, a4);
  (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
  return -1;
}
