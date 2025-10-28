int __fastcall sub_463E8(int a1, int a2, char *a3)
{
  int *v3; // r4
  int v7; // r3
  const char *v8; // r12
  const char *v10; // [sp+4h] [bp-58h]
  char s[12]; // [sp+1Ch] [bp-40h] BYREF
  char v12[12]; // [sp+28h] [bp-34h] BYREF
  char v13[40]; // [sp+34h] [bp-28h] BYREF

  v3 = *(int **)(a1 + 1132);
  if ( v3 )
  {
    bin2hex((int)s, a1 + 1072, 4);
    bin2hex((int)v13, (int)(v3 + 1), *v3);
    bin2hex((int)v12, a1 + 1100, 4);
    v7 = *(_DWORD *)(a2 + 1920);
    v8 = *(const char **)(a2 + 16);
    v10 = *(const char **)(a1 + 1124);
    *(_DWORD *)(a2 + 1920) = v7 + 1;
    snprintf(
      a3,
      0xC00u,
      "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\",\"%s\",\"%s\"]}",
      v7,
      v8,
      v10,
      v13,
      v12,
      s);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
