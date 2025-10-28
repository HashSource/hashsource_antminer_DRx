int __fastcall sub_3FBF0(int a1, int a2, char *a3)
{
  int *v4; // r1
  int v7; // r3
  const char *v8; // r12
  const char *v10; // [sp+4h] [bp-30h]
  char s[36]; // [sp+10h] [bp-24h] BYREF

  v4 = *(int **)(a1 + 1132);
  if ( v4 )
  {
    bin2hex((int)s, (int)(v4 + 1), *v4);
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
