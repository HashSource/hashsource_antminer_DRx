int __fastcall sub_4C47C(_DWORD *a1, _DWORD *a2, char *a3)
{
  int v3; // r4
  const char *v7; // r4
  int v8; // r3
  int v10; // r2
  const char *v11; // r3
  const char *v12; // [sp+0h] [bp-B4h]
  char s[20]; // [sp+14h] [bp-A0h] BYREF
  char v14[68]; // [sp+28h] [bp-8Ch] BYREF
  char v15[72]; // [sp+6Ch] [bp-48h] BYREF

  v3 = a1[283];
  if ( v3 )
  {
    sprintf(s, "%016lx", a1[268]);
    bin2hex((int)v14, v3 + 64, 32);
    bin2hex((int)v15, v3 + 32, 32);
    v7 = (const char *)a2[6];
    if ( v7 )
    {
      v8 = a2[480];
      a2[480] = v8 + 1;
      sprintf(
        a3,
        "{\"worker\": \"%s\",\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"rvn_submitWork\",                 \"params\":[\"0"
        "x%s\",\"0x%s\",\"0x%s\"]}",
        v7,
        v8,
        s,
        v14,
        v15);
    }
    else
    {
      v10 = a2[480];
      v11 = (const char *)a2[4];
      v12 = (const char *)a1[281];
      a2[480] = v10 + 1;
      sprintf(
        a3,
        "{\"id\":%d,\"method\":\"mining.submit\", \"params\":[\"%s\",\"%s\",\"0x%s\",\"0x%s\",\"0x%s\"]}",
        v10,
        v11,
        v12,
        s,
        v14,
        v15);
    }
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "work->private", a3);
    return 3;
  }
}
