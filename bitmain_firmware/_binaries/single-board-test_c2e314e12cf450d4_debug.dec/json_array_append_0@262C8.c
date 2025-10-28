int __fastcall json_array_append_0(json_t *a1, int a2)
{
  json_t *v2; // r0

  v2 = (json_t *)json_incref_0(a2);
  return json_array_append_new(a1, v2);
}
