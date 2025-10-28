int __fastcall sub_40D28(int a1, int a2, char *a3)
{
  int v3; // r4
  int v7; // r2
  const char *v8; // lr
  const char *v9; // r3
  int v11; // [sp+10h] [bp-74h]
  unsigned int v12; // [sp+1Ch] [bp-68h] BYREF
  _QWORD v13[4]; // [sp+20h] [bp-64h] BYREF
  char s[32]; // [sp+40h] [bp-44h] BYREF
  char v15[32]; // [sp+60h] [bp-24h] BYREF

  v3 = *(_DWORD *)(a1 + 1132);
  if ( v3 )
  {
    v7 = *(_DWORD *)v3;
    v13[0] = *(_QWORD *)(v3 + 8);
    bin2hex((int)s, (int)v13, v7);
    v12 = bswap32(*(_DWORD *)(v3 + 16));
    bin2hex((int)v15, (int)&v12, 4);
    v8 = *(const char **)(a1 + 1124);
    v9 = *(const char **)(a2 + 16);
    v11 = *(_DWORD *)(a2 + 1920);
    *(_DWORD *)(a2 + 1920) = v11 + 1;
    snprintf(
      a3,
      0xC00u,
      "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
      v9,
      v8,
      s,
      (const char *)(a1 + 1100),
      v15,
      v11);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private", a3);
    return 3;
  }
}
