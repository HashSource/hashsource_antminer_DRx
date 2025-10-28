int __fastcall sub_4907C(char a1)
{
  int result; // r0
  int i; // r4
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy(v4, "check_every_chain_asic_number");
    sub_3F1C0(5, v4, 0);
  }
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    sub_4903C(i, a1);
    result = sub_2FF20();
  }
  return result;
}
