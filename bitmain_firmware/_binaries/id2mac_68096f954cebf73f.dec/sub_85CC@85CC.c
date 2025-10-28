int __fastcall sub_85CC(_BYTE *a1, int a2, int a3)
{
  while ( a2-- != 0 )
    a3 = (a3 << 8) ^ dword_8B40[(unsigned __int8)(HIBYTE(a3) ^ *a1++)];
  return a3;
}
