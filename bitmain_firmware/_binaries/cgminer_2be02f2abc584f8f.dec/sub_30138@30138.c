int __fastcall sub_30138(const char *a1, _DWORD *a2, char **a3)
{
  const char *v3; // r4
  char *v6; // r0
  char *v7; // r5
  char *v8; // r0
  char *v9; // r9
  bool v10; // zf
  int v11; // r3
  char *v12; // r7
  signed int v13; // r6
  signed int v14; // r8
  const char *v15; // r7
  char *v16; // r0
  int v18; // [sp+Ch] [bp-110h]
  char v19[8]; // [sp+10h] [bp-10Ch] BYREF
  char s[260]; // [sp+18h] [bp-104h] BYREF

  v3 = a1;
  *a2 = a1;
  v6 = strstr(a1, "//");
  if ( v6 )
    v3 = v6 + 2;
  v7 = strchr(v3, 91);
  v8 = strchr(v3, 93);
  v9 = v8;
  v10 = v8 == 0;
  if ( v8 )
    v10 = v7 == 0;
  v11 = !v10;
  v18 = v11;
  if ( v10 || v7 >= v8 )
    v12 = strchr(v3, 58);
  else
    v12 = strchr(v8, 58);
  if ( v12 )
  {
    v13 = v12 - v3;
    v14 = ~(v12 - v3) + strlen(v3);
    if ( v14 <= 0 )
      return 0;
    v15 = v12 + 1;
  }
  else
  {
    v13 = strlen(v3);
    v14 = 0;
    v15 = 0;
  }
  if ( v13 <= 0 )
    return 0;
  if ( v18 && v7 < v9 )
  {
    v13 -= 2;
    ++v3;
  }
  snprintf(s, 0xFEu, "%.*s", v13, v3);
  if ( v14 )
  {
    snprintf(v19, 6u, "%.*s", v14, v15);
    v16 = strchr(v19, 47);
    if ( v16 )
      *v16 = 0;
  }
  else
  {
    strcpy(v19, "80");
  }
  *a3 = _strdup(v19);
  *a2 = _strdup(s);
  return 1;
}
