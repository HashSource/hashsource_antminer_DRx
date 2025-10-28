int __fastcall json_object_set_new(_DWORD *a1, char *a2, _DWORD *a3)
{
  if ( a2 && utf8_check_string(a2, -1) )
    return json_object_set_new_nocheck(a1, a2, a3);
  json_decref_2((int)a3);
  return -1;
}
