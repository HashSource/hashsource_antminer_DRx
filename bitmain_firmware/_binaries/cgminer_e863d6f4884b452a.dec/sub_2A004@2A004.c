_BYTE *__fastcall sub_2A004(const char *a1, _DWORD *a2)
{
  size_t v4; // r4
  _BYTE *v5; // r0
  _BYTE *v6; // r5
  char v8[2052]; // [sp+0h] [bp-804h] BYREF

  v4 = strlen(a1);
  v5 = malloc(v4 + 9);
  v6 = v5;
  if ( !v5 )
  {
    strcpy(v8, "Failed to malloc ret in ser_string");
    sub_343C4(3, v8, 1);
    sub_26B0C(1);
  }
  if ( v4 <= 0xFC )
  {
    *v5 = v4;
    memcpy(v5 + 1, a1, v4);
    *a2 = v4 + 1;
    return v6;
  }
  else
  {
    if ( v4 < 0x10000 )
    {
      *v5 = -3;
      *(_WORD *)(v5 + 1) = __rev16(v4);
      memcpy(v5 + 3, a1, v4);
      *a2 = v4 + 3;
    }
    else
    {
      *v5 = -2;
      *(_DWORD *)(v5 + 1) = bswap32(v4);
      memcpy(v5 + 5, a1, v4);
      *a2 = v4 + 5;
    }
    return v6;
  }
}
