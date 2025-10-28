int __fastcall sub_3E2C0(int result, int a2, int a3)
{
  int v3; // r5
  char s[2064]; // [sp+8h] [bp-810h] BYREF

  if ( *(_BYTE *)(a2 + result + 156) != 1 )
    return result;
  if ( a3 == 921600 )
  {
    v3 = 117449217;
    byte_6D7EE = 2;
  }
  else
  {
    if ( a3 <= 921600 )
    {
      if ( a3 == 460800 )
      {
        v3 = 117450241;
        byte_6D7EE = 6;
        goto LABEL_7;
      }
      goto LABEL_14;
    }
    if ( a3 != 1500000 )
    {
      if ( a3 == 3000000 )
      {
        v3 = 117448705;
        byte_6D7EE = 0;
        goto LABEL_7;
      }
LABEL_14:
      v3 = 117455361;
      byte_6D7EE = 26;
      goto LABEL_7;
    }
    v3 = 117448961;
    byte_6D7EE = 1;
  }
LABEL_7:
  sub_3C790(result, 1, 0, 28, v3);
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "MISC_CONTROL : %x", v3);
    sub_343C4(5, s, 0);
  }
  result = sub_2A7F4();
  *(_DWORD *)(dword_6FAEC + 60) = (unsigned __int8)byte_6D7EE;
  return result;
}
