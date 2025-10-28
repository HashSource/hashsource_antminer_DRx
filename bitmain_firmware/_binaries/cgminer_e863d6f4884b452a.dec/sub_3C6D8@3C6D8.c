size_t __fastcall sub_3C6D8(int a1, int a2, char a3, int a4)
{
  int v6; // r0
  int v8; // [sp+18h] [bp-808h] BYREF
  char v9; // [sp+1Ch] [bp-804h]
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  v8 = 0;
  v9 = 0;
  if ( a2 )
  {
    LOWORD(v8) = 1362;
  }
  else
  {
    BYTE2(v8) = a3;
    LOWORD(v8) = 1346;
  }
  HIBYTE(v8) = a4;
  v6 = sub_36D08(&v8, 0x20u);
  v9 = v6;
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(
      s,
      0x800u,
      "%s: reg_addr: 0x%02x : 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x",
      "get_status",
      a4,
      (unsigned __int8)v8,
      5,
      BYTE2(v8),
      a4,
      v6);
    sub_343C4(7, s, 0);
  }
  return sub_37A50(a1, &v8, 5u);
}
