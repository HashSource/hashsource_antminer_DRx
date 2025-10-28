int __fastcall sub_4AE24(int result, int a2, int a3)
{
  int v3; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( *(_BYTE *)(a2 + result + 124) != 1 )
    return result;
  if ( a3 == 921600 )
  {
    byte_73971 = 2;
    goto LABEL_14;
  }
  if ( a3 > 921600 )
  {
    if ( a3 == 1500000 )
    {
      byte_73971 = 1;
      goto LABEL_14;
    }
    if ( a3 == 3000000 )
    {
      byte_73971 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    if ( a3 == 115200 )
    {
      byte_73971 = 26;
      goto LABEL_14;
    }
    if ( a3 == 460800 )
    {
      byte_73971 = 6;
      goto LABEL_14;
    }
  }
  byte_73971 = 26;
LABEL_14:
  v3 = ((unsigned __int8)byte_73971 << 8) | 0x7002001;
  sub_47C40(result, 1, 0, 28, v3);
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(s, 0x800u, "MISC_CONTROL : %x", v3);
    sub_3F1C0(5, s, 0);
  }
  sub_2FF20();
  return sub_425E0((unsigned __int8)byte_73971);
}
