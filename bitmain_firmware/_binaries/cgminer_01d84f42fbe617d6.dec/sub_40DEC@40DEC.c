int __fastcall sub_40DEC(char a1, char *a2, int a3)
{
  int result; // r0
  int v6; // r6
  char *v7; // r1
  char v8[4]; // [sp+4h] [bp-4h] BYREF

  v8[0] = a1;
  write(dword_C54A6, v8, 1u);
  result = sub_2B21C();
  if ( a3 )
  {
    v6 = (int)&a2[(unsigned __int8)(a3 - 1) + 1];
    do
    {
      v7 = a2++;
      read(dword_C54A6, v7, 1u);
      result = sub_2B21C();
    }
    while ( a2 != (char *)v6 );
  }
  return result;
}
