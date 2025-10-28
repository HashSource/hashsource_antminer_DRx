void sub_3DB30()
{
  _BOOL4 v0; // r2
  int v1; // r3
  int v2; // r6
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  dword_631EC = dword_C5473[0];
  if ( dword_C5473[0] > 74 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "%s: Temperature is higher than %d 'C", "set_PWM_according_to_temperature", dword_C5473[0]);
    sub_38438(7, s, 0);
  }
  if ( byte_C5490 && (unsigned __int8)byte_C5491 <= 0x64u )
  {
    sub_3DA40((unsigned __int8)byte_C5491);
    return;
  }
  v0 = dword_631EC > 74;
  if ( !dword_631EC )
    v0 = 1;
  if ( v0 )
  {
    sub_3DA40(100);
    byte_C5491 = 100;
    if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      return;
    snprintf(s, 0x800u, "%s: Set PWM percent : MAX_PWM_PERCENT", "set_PWM_according_to_temperature");
LABEL_25:
    sub_38438(7, s, 0);
    return;
  }
  if ( dword_631EC <= 35 )
  {
    sub_3DA40(20);
    byte_C5491 = 20;
    if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      return;
    snprintf(s, 0x800u, "%s: Set PWM percent : MIN_PWM_PERCENT", "set_PWM_according_to_temperature");
    goto LABEL_25;
  }
  if ( (unsigned int)(dword_631EC - dword_631F0 + 1) > 2 )
  {
    v1 = 2 * (dword_631EC - 25);
    v2 = (unsigned __int8)v1;
    byte_C5491 = 2 * (dword_631EC - 25);
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(s, 0x800u, "%s: Set PWM percent : %d", "set_PWM_according_to_temperature", v1);
      sub_38438(7, s, 0);
    }
    sub_3DA40(v2);
    dword_631F0 = dword_631EC;
  }
}
