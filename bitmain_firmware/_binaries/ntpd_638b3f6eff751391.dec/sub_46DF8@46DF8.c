void __fastcall sub_46DF8(int a1, int a2)
{
  int v2; // r3
  const char *v4; // r0
  unsigned int v5; // r1
  int v6; // r5
  char *endptr; // [sp+4h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  if ( (v2 & 8) != 0 )
    return;
  v4 = *(const char **)(a2 + 24);
  if ( !v4 )
    return;
  v5 = *(unsigned __int8 *)v4;
  if ( v5 == 78 )
    goto LABEL_18;
  if ( v5 > 0x4E )
  {
    if ( v5 != 102 && v5 != 110 )
      goto LABEL_7;
LABEL_18:
    v6 = 0;
    goto LABEL_8;
  }
  if ( v5 == 48 )
  {
    if ( !strtol(v4, &endptr, 0) )
    {
      v2 = *(_DWORD *)(a2 + 16);
      v6 = (unsigned __int8)*endptr;
      if ( *endptr )
        v6 = 1;
      goto LABEL_8;
    }
    v2 = *(_DWORD *)(a2 + 16);
    goto LABEL_7;
  }
  if ( v5 > 0x30 )
  {
    if ( v5 == 70 )
      goto LABEL_18;
  }
  else
  {
    if ( !*v4 )
      goto LABEL_18;
    if ( v5 == 35 )
    {
      v6 = *((unsigned __int8 *)v4 + 1) != 102;
      goto LABEL_8;
    }
  }
LABEL_7:
  v6 = 1;
LABEL_8:
  if ( (v2 & 0x40) != 0 )
  {
    free(*(void **)(a2 + 24));
    *(_DWORD *)(a2 + 16) &= ~0x40u;
  }
  *(_DWORD *)(a2 + 24) = v6;
}
