int __fastcall sub_44E9C(int a1, int a2, char *a3)
{
  int v3; // r5
  int v7; // r5
  int v8; // r2
  const char *v9; // r3
  int v11; // r3
  const char *v12; // r2
  const char *v13; // [sp+0h] [bp-CCh]
  char dest[4]; // [sp+10h] [bp-BCh] BYREF
  char s[20]; // [sp+14h] [bp-B8h] BYREF
  char v16[68]; // [sp+28h] [bp-A4h] BYREF
  char v17[72]; // [sp+6Ch] [bp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 1132);
  if ( v3 )
  {
    sprintf(s, "%016llx", *(_QWORD *)(a1 + 1072));
    memcpy(dest, &s[2 * *(_DWORD *)(a2 + 76)], 17 - 2 * *(_DWORD *)(a2 + 76));
    bin2hex((int)v16, v3 + 64, 32);
    bin2hex((int)v17, v3 + 32, 32);
    v7 = *(unsigned __int8 *)(a2 + 1656);
    if ( *(_BYTE *)(a2 + 1656) )
    {
      v11 = *(_DWORD *)(a2 + 1920);
      v12 = *(const char **)(a2 + 24);
      *(_DWORD *)(a2 + 1920) = v11 + 1;
      sprintf(
        a3,
        "{\"worker\":\"%s\",\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"eth_submitWork\",\"params\":[\"0x%s\",\"0x%s\",\"0x%s\"]}",
        v12,
        v11,
        dest,
        v16,
        v17);
      return 0;
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 1920);
      v9 = *(const char **)(a2 + 16);
      v13 = *(const char **)(a1 + 1124);
      *(_DWORD *)(a2 + 1920) = v8 + 1;
      sprintf(a3, "{\"id\":%d,\"method\":\"mining.submit\", \"params\":[\"%s\",\"%s\",\"%s\"]}", v8, v9, v13, dest);
      return v7;
    }
  }
  else
  {
    printf(aInvalidPointer, "work->private", a3);
    return 3;
  }
}
