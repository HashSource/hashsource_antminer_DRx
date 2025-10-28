int __cdecl json_object_equal(json_t *object1, json_t *object2)
{
  size_t v2; // r4
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  int v7; // r0
  json_t *v11; // [sp+Ch] [bp+Ch]
  json_t *v12; // [sp+10h] [bp+10h]
  char *i; // [sp+14h] [bp+14h]

  v2 = json_object_size(object1);
  if ( v2 != json_object_size(object2) )
    return 0;
  v4 = json_object_iter(object1);
  for ( i = (char *)json_object_iter_key(v4); i; i = (char *)json_object_iter_key(v6) )
  {
    v7 = json_object_key_to_iter((int)i);
    v12 = (json_t *)json_object_iter_value(v7);
    if ( !v12 )
      break;
    v11 = (json_t *)json_object_get(object2, i);
    if ( !json_equal(v12, v11) )
      return 0;
    v5 = (void *)json_object_key_to_iter((int)i);
    v6 = json_object_iter_next(object1, v5);
  }
  return 1;
}
