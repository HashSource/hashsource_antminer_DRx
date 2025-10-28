int __fastcall debug_verify_property_1(int a1, _DWORD *a2)
{
  int result; // r0

  result = debug_node_color(a1, (int)a2);
  if ( result != 1 )
  {
    result = debug_node_color(a1, (int)a2);
    if ( result )
      _assert_fail(
        "debug_node_color(pTree,n) == 1 || debug_node_color(pTree,n) == 0",
        "3rdparty/cstl/src/c_rb.c",
        0x1DFu,
        "debug_verify_property_1");
  }
  if ( (_DWORD *)(a1 + 4) != a2 )
  {
    debug_verify_property_1(a1, (_DWORD *)*a2);
    return debug_verify_property_1(a1, (_DWORD *)a2[1]);
  }
  return result;
}
