void __fastcall sub_51F54(int a1, int a2, int a3)
{
  const char *v6; // r4
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( BYTE1(a3) )
  {
    switch ( BYTE1(a3) )
    {
      case 1u:
        v6 = "clk sel";
        break;
      case 2u:
        v6 = "core enable";
        break;
      case 3u:
        v6 = "pm";
        break;
      default:
        puts("warning: core cmmad bad response");
        v6 = "unkown";
        break;
    }
  }
  else
  {
    v6 = "sweep";
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "chain %d Chip %d %s reg = 0x%08x", a1, a2, v6, a3);
    sub_3F178(5, s, 0);
  }
}
