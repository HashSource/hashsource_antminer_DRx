const char *__fastcall sub_C544(const char *a1, int a2)
{
  int v3; // r3
  int v4; // r2

  if ( sscanf(a1, "%d:%d", a2 + 12, a2 + 8) != 2 )
    return "Invalid time set, should be HH:MM";
  v3 = *(_DWORD *)(a2 + 12);
  if ( v3 > 23 )
    return "Invalid time set.";
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 > 59 )
    return "Invalid time set.";
  if ( v3 < 0 )
    return "Invalid time set.";
  if ( v4 < 0 )
    return "Invalid time set.";
  *(_BYTE *)a2 = 1;
  return 0;
}
