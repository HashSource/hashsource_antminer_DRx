int __fastcall sub_10924(int a1)
{
  const char *v2; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0
  _DWORD v6[9]; // [sp+4h] [bp-A4h] BYREF
  char s[128]; // [sp+28h] [bp-80h] BYREF

  v2 = (const char *)sub_50CD0(a1);
  snprintf(s, 0x80u, "remote config from %s", v2);
  v6[0] = s;
  dword_794D8 = 0;
  dword_CA668 = (int)v6;
  v6[1] = 0;
  memset(&v6[4], 0, 20);
  v6[2] = 1;
  v6[3] = 1;
  v3 = sub_C040();
  sub_1651C(v3);
  dword_C9CC8 = 1;
  dword_C9CE0 = time(0);
  v4 = sub_50CD0(a1);
  dword_C9CD0 = sub_4F4E8(v4);
  if ( dword_7CF4C > 0 )
    puts("Finished Parsing!!");
  result = sub_D434();
  dword_794D8 = 1;
  return result;
}
