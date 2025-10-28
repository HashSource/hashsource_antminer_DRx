char *__fastcall sub_2C940(_DWORD *a1, unsigned int a2)
{
  const char *v2; // r0

  v2 = (const char *)sub_2C8B4(a1, a2);
  if ( v2 )
    return _strdup(v2);
  else
    return 0;
}
