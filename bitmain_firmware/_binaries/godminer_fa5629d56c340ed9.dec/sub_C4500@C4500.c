int __fastcall sub_C4500(int a1, int a2)
{
  int v2; // r7
  int *v3; // r4
  int (__fastcall *v5)(int, int); // r3
  int v6; // t1
  int result; // r0
  int v8; // r1

  if ( a1 == 921 )
  {
    v2 = 256;
  }
  else
  {
    if ( a1 != 943 )
      return sub_C4470(a1);
    v2 = 257;
  }
  v3 = (int *)&off_1B5634;
  do
  {
    v6 = *v3++;
    v5 = (int (__fastcall *)(int, int))v6;
    result = v2;
    if ( v6 )
    {
      v8 = a2;
      if ( a2 )
        v8 = 1;
      result = v5(v2, v8);
    }
  }
  while ( v3 != &dword_1B5648 );
  return result;
}
