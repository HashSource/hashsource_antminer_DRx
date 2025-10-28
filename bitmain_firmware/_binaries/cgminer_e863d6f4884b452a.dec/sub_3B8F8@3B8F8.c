void sub_3B8F8()
{
  int v0; // [sp+8h] [bp-828h] BYREF
  __int16 v1; // [sp+Ch] [bp-824h]
  unsigned __int8 s[32]; // [sp+10h] [bp-820h] BYREF
  char v3[2048]; // [sp+30h] [bp-800h] BYREF

  v0 = 17082965;
  v1 = 5;
  memset(s, 0, sizeof(s));
  if ( sub_3B798((unsigned __int8 *)&v0, 6, s, 8) && (byte_73320 || byte_6FA70 || dword_6D35C > 4) )
  {
    snprintf(v3, 0x800u, "power firmware version is %02x %02x\n", s[5], s[4]);
    sub_343C4(5, v3, 0);
  }
}
