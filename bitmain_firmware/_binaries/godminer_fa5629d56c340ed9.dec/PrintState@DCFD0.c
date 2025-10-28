int __fastcall PrintState(int a1)
{
  int v1; // r4
  int v2; // r5
  unsigned int v3; // t1

  v1 = a1 - 4;
  v2 = a1 + 60;
  do
  {
    v3 = *(_DWORD *)(v1 + 4);
    v1 += 4;
    printf("0x%02x%02x%02x%02x ", HIBYTE(v3), BYTE2(v3), BYTE1(v3), (unsigned __int8)v3);
  }
  while ( v2 != v1 );
  return putchar(10);
}
