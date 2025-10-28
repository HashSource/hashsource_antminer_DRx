int __fastcall sub_866C(char *a1, char *a2)
{
  size_t v2; // r0
  size_t v3; // r0
  int v7; // [sp+18h] [bp-Ch]
  __int16 v8; // [sp+1Eh] [bp-6h]

  v2 = strlen(a1);
  v8 = sub_8520(a1, v2);
  v3 = strlen(a1);
  v7 = sub_85CC(a1, v3, -1);
  return sprintf(
           a2,
           "%02x:%02x:%02x:%02x:%02x:%02x",
           v8 & 0xFE,
           HIBYTE(v8),
           (unsigned __int8)v7,
           BYTE1(v7),
           BYTE2(v7),
           HIBYTE(v7));
}
