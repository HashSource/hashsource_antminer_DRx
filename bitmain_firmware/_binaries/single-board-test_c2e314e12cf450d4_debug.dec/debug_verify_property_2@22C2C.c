int __fastcall debug_verify_property_2(int a1, int a2)
{
  int result; // r0

  result = debug_node_color(a1, a2);
  if ( result )
    _assert_fail("debug_node_color(pTree,root) == 0", "3rdparty/cstl/src/c_rb.c", 0x1E6u, "debug_verify_property_2");
  return result;
}
