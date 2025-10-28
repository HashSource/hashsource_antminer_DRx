const char *__fastcall sub_134B4(const char *a1)
{
  char *v2; // r4
  _DWORD *v3; // r0
  size_t v4; // r6
  size_t v5; // r6
  char *v6; // r0
  char v8[2036]; // [sp+Ch] [bp-8FCh] BYREF
  int v9; // [sp+80Ch] [bp-FCh] BYREF
  char v10[160]; // [sp+868h] [bp-A0h] BYREF

  if ( !dword_7AD70 )
    dword_7AD70 = (int)_strdup(a1);
  if ( ++dword_7AD74 > 10 )
    return "Too many levels of JSON includes (limit 10) or a loop";
  v3 = (_DWORD *)sub_5B144(a1, 0, &v9);
  if ( v3 && !*v3 )
  {
    byte_7AD78 = 1;
    return (const char *)sub_135F0();
  }
  else
  {
    v4 = strlen(a1);
    v5 = v4 + strlen(v10) + 35;
    v6 = (char *)malloc(v5);
    v2 = v6;
    if ( !v6 )
    {
      strcpy(v8, "Malloc failure in json error");
      sub_3F178(3, v8, 1);
      sub_134A4(1);
    }
    snprintf(v6, v5, "JSON decode of file '%s' failed\n %s", a1, v10);
  }
  return v2;
}
