char *__fastcall sub_9424(_DWORD *a1, int a2)
{
  char *v4; // r0
  char *v5; // r4

  v4 = (char *)realloc(a1, 16 * (a2 + 8));
  v5 = v4;
  if ( v4 )
    memset(&v4[16 * a2], 0, 0x80u);
  else
    sub_93EC(a1);
  return v5;
}
