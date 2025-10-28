void sub_3BB18()
{
  int v0; // [sp+0h] [bp-82Ch] BYREF
  __int16 v1; // [sp+4h] [bp-828h]
  unsigned __int8 s[32]; // [sp+8h] [bp-824h] BYREF
  char v3[2052]; // [sp+28h] [bp-804h] BYREF

  v0 = 67414613;
  v1 = 8;
  memset(s, 0, sizeof(s));
  if ( sub_3B798((unsigned __int8 *)&v0, 6, s, 8) && (byte_73320 || byte_6FA70 || dword_6D35C > 4) )
  {
    snprintf(v3, 0x800u, "power get adc value is %02x\n", s[4]);
    sub_343C4(5, v3, 0);
  }
}
