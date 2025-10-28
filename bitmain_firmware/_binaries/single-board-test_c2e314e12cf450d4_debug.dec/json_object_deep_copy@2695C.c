json_t *__cdecl json_object_deep_copy(const json_t *object)
{
  json_t *v2; // r0
  const json_t *v5; // [sp+8h] [bp+8h]
  char *v6; // [sp+Ch] [bp+Ch]
  json_t *v7; // [sp+10h] [bp+10h]
  void *i; // [sp+14h] [bp+14h]

  v7 = (json_t *)json_object();
  if ( !v7 )
    return 0;
  for ( i = json_object_iter(object); i; i = json_object_iter_next(object, i) )
  {
    v6 = (char *)json_object_iter_key(i);
    v5 = (const json_t *)json_object_iter_value((int)i);
    v2 = json_deep_copy(v5);
    json_object_set_new_nocheck(v7, v6, v2);
  }
  return v7;
}
