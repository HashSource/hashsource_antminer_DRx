int __fastcall sub_2B43C(const char *a1, _DWORD *a2, char **a3)
{
  const char *v4; // r4
  char *v6; // r0
  char *v7; // r5
  char *v8; // r0
  bool v9; // zf
  char *v10; // r8
  int v11; // r9
  char *v12; // r11
  int v13; // r6
  signed int v14; // r12
  const char *v15; // r11
  char *v16; // r0
  int v17; // r3
  char *v19; // r0
  size_t v20; // r0
  signed int v21; // [sp+Ch] [bp-110h]
  char v22[8]; // [sp+10h] [bp-10Ch] BYREF
  char s[260]; // [sp+18h] [bp-104h] BYREF

  *a2 = a1;
  v4 = a1;
  v6 = strstr(a1, "//");
  if ( v6 )
    v4 = v6 + 2;
  v7 = strchr(v4, 91);
  v8 = strchr(v4, 93);
  v9 = v8 == 0;
  if ( v8 )
    v9 = v7 == 0;
  v10 = v8;
  v11 = !v9;
  if ( v9 || v7 >= v8 )
    v8 = (char *)v4;
  v12 = strchr(v8, 58);
  if ( v12 )
  {
    v13 = v12 - v4;
    v14 = ~(v12 - v4) + strlen(v4);
    if ( v14 <= 0 )
      return 0;
    v15 = v12 + 1;
  }
  else
  {
    v20 = strlen(v4);
    v14 = 0;
    v15 = 0;
    v13 = v20;
  }
  if ( v13 <= 0 )
    return 0;
  if ( v11 && v7 < v10 )
  {
    v13 -= 2;
    ++v4;
  }
  v21 = v14;
  snprintf(s, 0xFEu, "%.*s", v13, v4);
  if ( v21 )
  {
    snprintf(v22, 6u, "%.*s", v21, v15);
    v19 = strchr(v22, 47);
    if ( v19 )
      *v19 = 0;
  }
  else
  {
    strcpy(v22, "80");
  }
  *a3 = _strdup(v22);
  v16 = _strdup(s);
  v17 = 1;
  *a2 = v16;
  return v17;
}
