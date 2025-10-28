int __fastcall debug_verify_property_5_helper(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int result; // r0

  result = debug_node_color(a1, (int)a2);
  if ( !result )
    ++a3;
  if ( (_DWORD *)(a1 + 4) == a2 )
  {
    if ( *a4 == -1 )
    {
      *a4 = a3;
    }
    else if ( *a4 != a3 )
    {
      _assert_fail(
        "black_count == *path_black_count",
        "3rdparty/cstl/src/c_rb.c",
        0x205u,
        "debug_verify_property_5_helper");
    }
  }
  else
  {
    debug_verify_property_5_helper(a1, (_DWORD *)*a2, a3, a4);
    return debug_verify_property_5_helper(a1, (_DWORD *)a2[1], a3, a4);
  }
  return result;
}
