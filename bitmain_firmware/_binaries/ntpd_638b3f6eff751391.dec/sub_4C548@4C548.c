void __fastcall sub_4C548(int a1, int a2)
{
  int v4; // r5
  int v5; // r3

  if ( (*(_DWORD *)(a2 + 16) & 8) == 0 )
  {
    v4 = sub_45E68(*(char **)(a2 + 24));
    if ( v4 == -1 )
    {
      fprintf((FILE *)stderr, off_7B9A0[0], *(_DWORD *)(a1 + 28), *(_DWORD *)(a2 + 24));
      if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
        (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
    }
    if ( (*(_DWORD *)(a2 + 16) & 0x40) != 0 )
    {
      free(*(void **)(a2 + 24));
      v5 = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 24) = v4;
      *(_DWORD *)(a2 + 16) = v5 & 0xFFFFFFBF;
    }
    else
    {
      *(_DWORD *)(a2 + 24) = v4;
    }
  }
}
