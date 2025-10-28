int __fastcall sub_3DD00(int a1)
{
  int i; // r4
  int v2; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "%s: frequency = %d", "set_frequency", a1);
    sub_343C4(7, s, 0);
  }
  for ( i = 0; i != 4; ++i )
  {
    v2 = (unsigned __int8)i;
    sub_3D854(v2);
  }
  return sub_2A7F4();
}
