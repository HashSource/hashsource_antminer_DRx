void (__fastcall *__fastcall sub_14A04(void (__fastcall *result)(int, int *), int a2))(int, int *)
{
  void (__fastcall *buf[2])(int, int *); // [sp+4h] [bp-8h] BYREF

  if ( !dword_CA648 )
  {
    result = (void (__fastcall *)(int, int *))sub_132E0(result, a2);
    buf[0] = result;
    if ( result )
    {
      sub_4FE78(7, "new interface(s) found: waking up resolver");
      return (void (__fastcall *)(int, int *))write(dword_C9C9C, buf, 1u);
    }
  }
  return result;
}
