int __fastcall sub_1A178(unsigned int *a1)
{
  int v2; // r5
  unsigned int v3; // r3
  int result; // r0
  int v5; // r1
  unsigned int v6; // r5
  int v7; // r1
  unsigned int v8[512]; // [sp+0h] [bp-800h] BYREF

  v2 = (unsigned __int8)byte_6FA71;
  v3 = bswap32(bswap32(a1[17]) + 1);
  result = a1[74] + 1;
  v5 = dword_73CA0 + 1;
  a1[17] = v3;
  a1[74] = result;
  a1[76] = 0;
  dword_73CA0 = v5;
  if ( v2 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy((char *)v8, "Successfully rolled work");
    result = sub_343C4(7, v8, 0);
  }
  v6 = a1[91];
  if ( v6 )
  {
    sub_28324(v8, a1[91]);
    v8[0] = bswap32(bswap32(v8[0]) + 1);
    result = sub_2821C(v6, v8, 4);
  }
  v7 = dword_6DB9C + 1;
  a1[100] = dword_6DB9C;
  dword_6DB9C = v7;
  return result;
}
