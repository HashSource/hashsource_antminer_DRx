int __fastcall jsonp_dtostr(char *a1, size_t a2)
{
  double v2; // d0
  int v7; // [sp+18h] [bp+10h]
  int v8; // [sp+1Ch] [bp+14h]
  _BYTE *src; // [sp+20h] [bp+18h]
  char *dest; // [sp+24h] [bp+1Ch]
  _BYTE *desta; // [sp+24h] [bp+1Ch]

  v7 = snprintf(a1, a2, "%.17g", v2);
  if ( v7 < 0 )
    return -1;
  v8 = v7;
  if ( v7 >= a2 )
    return -1;
  from_locale(a1);
  if ( !strchr(a1, 46) && !strchr(a1, 101) )
  {
    if ( v7 + 3 >= a2 )
      return -1;
    a1[v7] = 46;
    a1[v7 + 1] = 48;
    a1[v7 + 2] = 0;
    v8 = v7 + 2;
  }
  dest = strchr(a1, 101);
  if ( dest )
  {
    desta = dest + 1;
    src = desta + 1;
    if ( *desta == 45 )
      ++desta;
    while ( *src == 48 )
      ++src;
    if ( src != desta )
    {
      memmove(desta, src, a1 - src + v8);
      v8 += desta - src;
    }
  }
  return v8;
}
