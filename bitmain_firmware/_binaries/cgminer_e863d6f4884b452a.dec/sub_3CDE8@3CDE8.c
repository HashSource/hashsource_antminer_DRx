int __fastcall sub_3CDE8(char a1)
{
  unsigned __int8 *v2; // r5
  int i; // r4
  int result; // r0
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v6, "check_every_chain_asic_number");
    sub_343C4(5, v6, 0);
  }
  v2 = (unsigned __int8 *)&unk_73EF0;
  for ( i = 0; i != 4; ++i )
  {
    if ( *v2++ )
    {
      byte_6FCC8[i] = a1;
      sub_3C960(i, 1, 0, 0);
    }
    result = sub_2A7F4();
  }
  return result;
}
