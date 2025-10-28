int sub_56D1C()
{
  int result; // r0
  int v1; // r6
  const char *v2; // r0

  result = sub_525C8();
  if ( !dword_C9C78 )
  {
    dword_C9C6C = 0;
    dword_C9C70 = 0;
    dword_C9C74 = 0;
    result = sub_56BAC(0, 0x3Du, (int)off_7CA60, dword_C9C48, 2);
    v1 = result;
    if ( result )
    {
      v2 = sub_55CA4((_DWORD *)dword_C9C48, 1, 101, "failed");
      result = sub_5166C("./../lib/isc/result.c", 157, "register_table() %s: %u", v2, v1);
    }
    dword_C9C78 = 1;
  }
  return result;
}
