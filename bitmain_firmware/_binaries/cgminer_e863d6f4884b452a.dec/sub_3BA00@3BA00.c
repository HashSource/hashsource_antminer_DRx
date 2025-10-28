int sub_3BA00()
{
  int result; // r0
  int v1; // [sp+0h] [bp-82Ch] BYREF
  __int16 v2; // [sp+4h] [bp-828h]
  unsigned __int8 s[32]; // [sp+8h] [bp-824h] BYREF
  char v4[2052]; // [sp+28h] [bp-804h] BYREF

  v1 = 50637397;
  v2 = 7;
  memset(s, 0, sizeof(s));
  result = sub_3B798((unsigned __int8 *)&v1, 6, s, 8);
  if ( result )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(v4, 0x800u, "power get da value is %02x\n", s[4]);
      sub_343C4(5, v4, 0);
    }
    return s[4];
  }
  return result;
}
