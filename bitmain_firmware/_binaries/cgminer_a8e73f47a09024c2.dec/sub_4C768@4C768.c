int __fastcall sub_4C768(char a1)
{
  int result; // r0
  int i; // r4
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v4, "check_every_chain_asic_number");
    sub_3F178(5, v4, 0);
  }
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    sub_4C728(i, a1);
    result = sub_30140();
  }
  return result;
}
