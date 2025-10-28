int __fastcall sub_4856C(int a1, int a2, char *a3)
{
  int v6; // r2
  const char *v7; // r3
  const char *v9; // [sp+0h] [bp-24h]
  char s[24]; // [sp+Ch] [bp-18h] BYREF

  if ( *(_DWORD *)(a1 + 1132) )
  {
    sprintf(s, "%016llx", _byteswap_uint64(*(_QWORD *)(a1 + 1072)));
    v6 = *(_DWORD *)(a2 + 1920);
    v7 = *(const char **)(a2 + 16);
    v9 = *(const char **)(a1 + 1124);
    *(_DWORD *)(a2 + 1920) = v6 + 1;
    sprintf(a3, "{\"id\":%d,\"method\":\"mining.submit\", \"params\":[\"%s\",\"%s\",\"0x%s\"]}", v6, v7, v9, s);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "work->private", a3);
    return 3;
  }
}
