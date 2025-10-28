int __fastcall sub_465D8(int a1, int a2, char *a3)
{
  int v3; // r9
  _DWORD v8[2]; // [sp+1Ch] [bp-80h] BYREF
  char v9; // [sp+24h] [bp-78h]
  _DWORD v10[2]; // [sp+28h] [bp-74h] BYREF
  char v11; // [sp+30h] [bp-6Ch]
  _BYTE v12[32]; // [sp+34h] [bp-68h] BYREF
  char s[72]; // [sp+54h] [bp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 1132);
  if ( v3 )
  {
    v8[0] = 0;
    v10[0] = 0;
    v8[1] = 0;
    v9 = 0;
    v10[1] = 0;
    v11 = 0;
    memset(s, 0, 0x41u);
    memset(v12, 0, sizeof(v12));
    bin2hex((int)v8, a1 + 1072, 4);
    bin2hex((int)v10, v3 + 4, 4);
    bin2hex((int)s, (int)v12, 32);
    snprintf(
      a3,
      0xC00u,
      "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": \"%d\", \"method\": \"mining.submit\"}",
      *(const char **)(a2 + 16),
      *(const char **)(a1 + 1124),
      (const char *)v10,
      (const char *)(a1 + 1100),
      (const char *)v8,
      s,
      3);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private", a3);
    return 3;
  }
}
