int __fastcall sub_3C604(int a1)
{
  int v2; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "%s, quickly setting to working voltage...\n", "power_quickly_set_to_working_voltage");
    sub_343C4(5, s, 0);
    v2 = *(unsigned __int8 *)(a1 + 67);
    if ( *(_BYTE *)(a1 + 67) )
    {
      if ( byte_73320 || byte_6FA70 )
      {
LABEL_6:
        snprintf(s, 0x800u, "%s, iic data set to %d\n", "power_quickly_set_to_working_voltage", v2);
        sub_343C4(5, s, 0);
        LOBYTE(v2) = *(_BYTE *)(a1 + 67);
LABEL_7:
        sub_3BF78(v2);
        return 0;
      }
LABEL_10:
      if ( dword_6D35C <= 4 )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  else
  {
    v2 = *(unsigned __int8 *)(a1 + 67);
    if ( v2 )
      goto LABEL_10;
  }
  return sub_3C520(a1);
}
