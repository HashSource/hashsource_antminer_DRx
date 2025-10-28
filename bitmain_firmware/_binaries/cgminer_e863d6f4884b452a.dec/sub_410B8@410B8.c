void __fastcall sub_410B8(int a1, int a2, int a3)
{
  int v4; // r2
  const char *v6; // r0
  int v7; // [sp+10h] [bp-808h]
  int v8; // [sp+14h] [bp-804h]
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v4 = BYTE1(a3);
  v6 = "sweep";
  if ( v4 )
  {
    switch ( v4 )
    {
      case 1:
        v6 = "clk sel";
        break;
      case 2:
        v6 = "core enable";
        break;
      case 3:
        v6 = "pm";
        break;
      default:
        v7 = a1;
        v8 = a2;
        puts("warning: core cmmad bad response");
        v6 = "unkown";
        a1 = v7;
        a2 = v8;
        break;
    }
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "chain %d Chip %d %s reg = 0x%08x", a1, a2, v6, a3);
    sub_343C4(5, s, 0);
  }
}
