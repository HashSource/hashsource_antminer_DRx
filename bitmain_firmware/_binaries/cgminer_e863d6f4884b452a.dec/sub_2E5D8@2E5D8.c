int __fastcall sub_2E5D8(int a1, int a2, int a3, int a4)
{
  _BYTE *v4; // r4
  int result; // r0

  v4 = *(_BYTE **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = v4;
  *v4 = 0;
  *(_BYTE *)(a1 + 13) = 0;
  if ( a4 )
    result = sub_2E530((unsigned int *)a1, "{\"STATUS\":\"RESTART\"");
  else
    result = sub_2E530((unsigned int *)a1, "RESTART");
  byte_6F918 = 1;
  byte_6F91A = 1;
  return result;
}
