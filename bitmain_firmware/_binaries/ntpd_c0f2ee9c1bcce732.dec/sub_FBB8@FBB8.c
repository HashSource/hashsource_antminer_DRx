_DWORD *__fastcall sub_FBB8(int a1, int a2)
{
  _DWORD *result; // r0

  if ( !a1 )
    off_7C9FC("ntp_config.c", 1254, 0, "((void *)0) != addr");
  result = (_DWORD *)sub_10D64(8);
  *result = a1;
  result[1] = a2;
  return result;
}
