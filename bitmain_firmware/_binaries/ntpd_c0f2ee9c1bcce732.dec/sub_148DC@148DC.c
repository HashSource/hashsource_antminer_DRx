void *__fastcall sub_148DC(int a1, const char *a2, int a3, int a4)
{
  char *v8; // r4
  void *result; // r0

  v8 = (char *)sub_4F524(48);
  result = memset(v8, 0, 0x30u);
  *((_DWORD *)v8 + 11) = a3;
  *((_DWORD *)v8 + 2) = a1;
  *((_DWORD *)v8 + 1) = a4;
  if ( a1 == 4 )
  {
    if ( !a2 )
      off_7C9FC("ntp_io.c", 1298, 0, "((void *)0) != if_name");
    result = (void *)sub_4F4E8(a2);
    *((_DWORD *)v8 + 3) = result;
  }
  else if ( a1 == 5 )
  {
    if ( !a2 )
      off_7C9FC("ntp_io.c", 1301, 0, "((void *)0) != if_name");
    result = (void *)sub_14720(a2, v8 + 16);
    if ( !result )
      off_7C9FC("ntp_io.c", 1304, 0, "is_ip");
  }
  else if ( a2 )
  {
    off_7C9FC("ntp_io.c", 1306, 0, "((void *)0) == if_name");
  }
  *(_DWORD *)v8 = dword_CA624;
  dword_CA624 = (int)v8;
  return result;
}
