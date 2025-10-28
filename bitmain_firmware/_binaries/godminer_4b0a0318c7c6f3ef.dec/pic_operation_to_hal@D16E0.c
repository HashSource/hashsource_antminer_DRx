int __fastcall pic_operation_to_hal(int a1, int a2, unsigned int a3, void *a4)
{
  int result; // r0

  result = platform_is_pic_mcu_en();
  if ( result )
    return sub_D15A0(a1, a2, a3, a4);
  return result;
}
