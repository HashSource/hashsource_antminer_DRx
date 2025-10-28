void __fastcall sub_43D78(int a1, int a2)
{
  int *v4; // r0
  int *v5; // r7
  int v6; // r0
  char *v7; // r3
  char *v8; // r2
  int v9; // r6
  int v10; // r1
  char *v11; // r0
  unsigned int v12; // r12
  char *endptr; // [sp+4h] [bp-8h] BYREF

  if ( !a2 || !*(_DWORD *)(a2 + 24) || (*(_DWORD *)(a2 + 16) & 8) != 0 )
    return;
  v4 = _errno_location();
  *v4 = 0;
  v5 = v4;
  v6 = strtol(*(const char **)(a2 + 24), &endptr, 0);
  v7 = *(char **)(a2 + 24);
  v8 = endptr;
  v9 = v6;
  if ( v7 == endptr || *v5 )
    goto LABEL_18;
  v10 = *(_DWORD *)(a2 + 16);
  if ( (v10 & 0x1000000) == 0 )
    goto LABEL_17;
  v11 = endptr + 1;
  v12 = (unsigned __int8)*endptr++;
  if ( v12 == 84 )
  {
    v9 <<= 10;
LABEL_14:
    v9 <<= 10;
LABEL_15:
    v9 <<= 10;
    goto LABEL_16;
  }
  if ( v12 > 0x54 )
  {
    if ( v12 == 107 )
    {
LABEL_29:
      v8 = v11;
      v9 *= 1000;
      goto LABEL_17;
    }
    if ( v12 > 0x6B )
    {
      if ( v12 == 109 )
        goto LABEL_28;
      if ( v12 != 116 )
        goto LABEL_18;
      v9 *= 1000;
    }
    else if ( v12 != 103 )
    {
      goto LABEL_18;
    }
    v9 *= 1000;
LABEL_28:
    v9 *= 1000;
    goto LABEL_29;
  }
  if ( v12 == 75 )
  {
LABEL_16:
    v9 <<= 10;
    ++v8;
    goto LABEL_17;
  }
  if ( v12 > 0x4B )
  {
    if ( v12 != 77 )
      goto LABEL_18;
    goto LABEL_15;
  }
  if ( v12 )
  {
    if ( v12 != 71 )
    {
LABEL_18:
      fprintf((FILE *)stderr, off_7B998[0], *(_DWORD *)(a1 + 28));
      if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
        (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
      *v5 = 22;
      *(_DWORD *)(a2 + 24) = -1;
      return;
    }
    goto LABEL_14;
  }
  endptr = v8;
LABEL_17:
  if ( *v8 )
    goto LABEL_18;
  if ( (v10 & 0x40) != 0 )
  {
    free(v7);
    *(_DWORD *)(a2 + 16) &= ~0x40u;
  }
  *(_DWORD *)(a2 + 24) = v9;
}
