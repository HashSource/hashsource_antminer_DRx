int __fastcall sub_29110(_DWORD *a1, const char **a2)
{
  _DWORD *v4; // r5
  int v6; // [sp+4h] [bp-8h] BYREF

  v6 = 0;
  frontend_runtime_instance();
  get_all_created_runtime(&v6);
  if ( !a2 )
    return sub_29090();
  sub_25DA0(a1, a2);
  sub_25EBC(a1);
  v4 = json_array();
  sweep_get_error_code(v4);
  json_object_set_new(a1, "WARNING", v4);
  return 0;
}
