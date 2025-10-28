int __fastcall sub_1B768(const char *a1)
{
  _DWORD *v2; // r0
  size_t v3; // r4
  size_t v4; // r4
  char *v5; // r0
  char *v6; // r7
  _BYTE v8[92]; // [sp+Ch] [bp-900h] BYREF
  char v9[160]; // [sp+68h] [bp-8A4h] BYREF
  char v10[2052]; // [sp+108h] [bp-804h] BYREF

  v2 = (_DWORD *)sub_47750(a1, 0, v8);
  if ( v2 && !*v2 )
  {
    byte_6DBB0 = 1;
    return sub_1B838();
  }
  else
  {
    v3 = strlen(a1);
    v4 = v3 + strlen(v9) + 35;
    v5 = (char *)malloc(v4);
    v6 = v5;
    if ( !v5 )
    {
      strcpy(v10, "Malloc failure in json error");
      sub_343C4(3, v10, 1);
      sub_1B070(1, 1);
    }
    snprintf(v5, v4, "JSON decode of file '%s' failed\n %s", a1, v9);
    return (int)v6;
  }
}
