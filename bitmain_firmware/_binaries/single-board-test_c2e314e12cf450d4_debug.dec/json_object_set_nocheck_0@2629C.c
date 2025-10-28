int __fastcall json_object_set_nocheck_0(_DWORD *a1, char *a2, int a3)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)json_incref_0(a3);
  return json_object_set_new_nocheck(a1, a2, v3);
}
