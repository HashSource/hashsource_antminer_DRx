char *__fastcall sub_19E1C(const char *a1, char *a2)
{
  char *v4; // r5
  char *v5; // r0
  int v6; // r4
  const char *v7; // r6
  char *result; // r0
  char *v9; // r5
  size_t v10; // r8
  size_t v11; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = strstr(a1, "##voltage");
  v5 = strstr(a1, "###");
  v6 = (int)v5;
  if ( v5 )
    v6 = 1;
  if ( !v4 )
    v6 = 0;
  if ( !v6 )
    return (char *)v6;
  v7 = v5;
  result = strchr(v4, 58);
  v9 = result;
  if ( result )
  {
    v10 = strlen(result);
    v11 = strlen(v7);
    snprintf(a2, 4u, "%.*s", v10 - v11, v9 + 1);
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s, voltage_hex: %s", "is_voltage_args", a2);
      sub_343C4(5, s, 0);
    }
    return (char *)v6;
  }
  return result;
}
