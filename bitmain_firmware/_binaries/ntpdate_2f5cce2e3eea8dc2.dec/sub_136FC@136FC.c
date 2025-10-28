int sub_136FC()
{
  int result; // r0
  int v1; // r6
  const char *v2; // r0

  result = sub_EFC4();
  if ( !dword_24044 )
  {
    dword_24038 = 0;
    dword_2403C = 0;
    dword_24040 = 0;
    result = sub_1358C(0, 0x3Du, (int)off_21E30, dword_2400C, 2);
    v1 = result;
    if ( result )
    {
      v2 = (const char *)sub_F118((_DWORD *)dword_2400C, 1, 101, (int)"failed");
      result = sub_FF48("./../lib/isc/result.c", 157, "register_table() %s: %u", v2, v1);
    }
    dword_24044 = 1;
  }
  return result;
}
