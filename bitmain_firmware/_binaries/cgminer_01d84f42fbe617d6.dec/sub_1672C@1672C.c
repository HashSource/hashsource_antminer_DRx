int __fastcall sub_1672C(const char *a1)
{
  _DWORD *v2; // r0
  size_t v3; // r6
  size_t v4; // r6
  char *v5; // r0
  char *v6; // r4
  _BYTE v8[92]; // [sp+Ch] [bp-8FCh] BYREF
  char s[160]; // [sp+68h] [bp-8A0h] BYREF
  char v10[2048]; // [sp+108h] [bp-800h] BYREF

  v2 = (_DWORD *)sub_45C84(a1, 0, v8);
  if ( v2 && !*v2 )
  {
    byte_611D0 = 1;
    return sub_16868();
  }
  else
  {
    v3 = strlen(a1);
    v4 = v3 + strlen(s) + 35;
    v5 = (char *)malloc(v4);
    v6 = v5;
    if ( !v5 )
    {
      strcpy(v10, "Malloc failure in json error");
      sub_38438(3, v10, 1);
      sub_16724(1);
    }
    snprintf(v5, v4, "JSON decode of file '%s' failed\n %s", a1, s);
  }
  return (int)v6;
}
