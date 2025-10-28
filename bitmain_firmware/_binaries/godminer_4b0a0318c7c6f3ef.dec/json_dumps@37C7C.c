_BYTE *__fastcall json_dumps(_DWORD *a1, int a2)
{
  _BYTE *v4; // r4
  int (__fastcall *v5)(__int16 *, int, int); // r1
  const char *v7; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v4 = (_BYTE *)strbuffer_init(v8);
  if ( v4 )
    return 0;
  LOWORD(v5) = 28704;
  HIWORD(v5) = (unsigned int)&loc_32F98 >> 16;
  if ( !json_dump_callback(a1, v5, (int)v8, a2) )
  {
    v7 = (const char *)strbuffer_value((int)v8);
    v4 = jsonp_strdup(v7);
  }
  strbuffer_close((int)v8);
  return v4;
}
