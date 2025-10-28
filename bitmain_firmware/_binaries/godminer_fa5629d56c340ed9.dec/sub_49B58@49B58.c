int __fastcall sub_49B58(int a1, int a2, char *a3)
{
  _DWORD *v3; // r3
  int v7; // r3
  const char *v8; // r12
  const char *v10; // [sp+4h] [bp-28h]
  char s[24]; // [sp+14h] [bp-18h] BYREF

  v3 = *(_DWORD **)(a1 + 1132);
  if ( v3 )
  {
    bin2hex((int)s, a1 + 1072, *v3 + 5);
    v7 = *(_DWORD *)(a2 + 1920);
    v8 = *(const char **)(a2 + 16);
    v10 = *(const char **)(a1 + 1124);
    *(_DWORD *)(a2 + 1920) = v7 + 1;
    snprintf(a3, 0xC00u, "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\"]}", v7, v8, v10, s);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private", a3);
    return 3;
  }
}
