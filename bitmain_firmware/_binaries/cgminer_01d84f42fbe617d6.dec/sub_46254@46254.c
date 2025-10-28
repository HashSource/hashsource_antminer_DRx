int __fastcall sub_46254(int a1, _BYTE *a2, _DWORD *a3)
{
  int v3; // r4
  int v4; // r12
  int v5; // r3

  if ( a1 >= 0 )
  {
    if ( a1 <= 127 )
    {
      *a2 = a1;
      *a3 = 1;
      return 0;
    }
    if ( a1 < 2048 )
    {
      *a2 = (((unsigned int)a1 >> 6) & 0x1F) - 64;
      a2[1] = (a1 & 0x3F) + 0x80;
      *a3 = 2;
      return 0;
    }
    if ( a1 < 0x10000 )
    {
      a2[1] = (((unsigned int)a1 >> 6) & 0x3F) + 0x80;
      a2[2] = (a1 & 0x3F) + 0x80;
      *a2 = ((unsigned __int16)a1 >> 12) - 32;
      *a3 = 3;
      return 0;
    }
    if ( a1 < 1114112 )
    {
      v3 = ((unsigned int)a1 >> 18) & 7;
      v4 = ((unsigned int)a1 >> 12) & 0x3F;
      v5 = ((unsigned int)a1 >> 6) & 0x3F;
      a2[3] = (a1 & 0x3F) + 0x80;
      a2[2] = v5 + 0x80;
      *a2 = v3 - 16;
      a2[1] = v4 + 0x80;
      *a3 = 4;
      return 0;
    }
  }
  return -1;
}
