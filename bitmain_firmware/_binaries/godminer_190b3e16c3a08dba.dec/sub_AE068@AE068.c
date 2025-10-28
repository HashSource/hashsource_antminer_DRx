time_t __fastcall sub_AE068(int a1, int a2)
{
  time_t v2; // r7
  int *v3; // r4
  int (__fastcall *v5)(time_t, int); // r3
  int v6; // t1
  time_t result; // r0
  int v8; // r1

  if ( a1 == 921 )
  {
    v2 = 256;
  }
  else
  {
    if ( a1 != 943 )
      return sub_ADFD8(a1);
    v2 = 257;
  }
  v3 = (int *)&off_18C4EC;
  do
  {
    v6 = *v3++;
    v5 = (int (__fastcall *)(time_t, int))v6;
    result = v2;
    if ( v6 )
    {
      v8 = a2;
      if ( a2 )
        v8 = 1;
      result = v5(v2, v8);
    }
  }
  while ( v3 != &dword_18C500 );
  return result;
}
