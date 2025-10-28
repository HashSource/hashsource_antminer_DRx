int __fastcall sub_4EE0C(int a1)
{
  int v2; // r5
  int v3; // r6
  int i; // r4
  int v5; // t1
  int result; // r0
  int j; // r4
  int v8; // t1

  sub_4939C();
  v2 = 736019;
  v3 = 736019;
  for ( i = 0; i != 4; ++i )
  {
    v5 = *(unsigned __int8 *)++v3;
    if ( v5 == 1 )
    {
      byte_7CDB0[i] = 0;
      byte_7FCE4[i] = 0;
      *((_BYTE *)&dbl_80CB8 + i - 4040) = 1;
      sub_349F0(a1 + (i << 6) + 4602);
    }
  }
  sub_349F0(a1 + 4538);
  sub_4383C();
  sub_30140();
  sub_49278();
  sleep(1u);
  sub_43850();
  sub_30140();
  result = sub_438C0(26);
  for ( j = 0; j != 4; ++j )
  {
    v8 = *(unsigned __int8 *)++v2;
    if ( v8 == 1 )
    {
      byte_7FCF0[j] = 0;
      result = sub_4DCE8(a1, (const char *)0x2DC6C0);
    }
  }
  return result;
}
