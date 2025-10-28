int __fastcall sub_3B198(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v6; // r5
  int v7; // r4
  char v9[2052]; // [sp+0h] [bp-804h] BYREF

  if ( a3 )
    v6 = 0x2000000;
  else
    v6 = 0;
  if ( a4 )
    v6 |= (a5 << 8) | 0x1000000;
  v7 = a6 | (a1 << 16) & 0x70000 | (a2 << 26) & 0xC000000 | (a1 << 17) & 0xF00000 | v6;
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v9, 0x800u, "value = 0x%08x\n", v7);
    sub_343C4(7, v9, 0);
  }
  return sub_3B074(v7);
}
