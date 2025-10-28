_DWORD *__fastcall sub_1063C(int a1, int a2, int a3)
{
  bool v3; // zf
  int v4; // r3
  _DWORD *result; // r0

  v3 = a1 == 0;
  if ( !a1 )
    v3 = a2 == 0;
  v4 = !v3;
  if ( v3 )
    off_7C9FC("ntp_config.c", 1510, v4, "match_class != 0 || if_name != ((void *)0)");
  result = (_DWORD *)sub_10D64(12);
  *result = a1;
  result[1] = a2;
  result[2] = a3;
  return result;
}
