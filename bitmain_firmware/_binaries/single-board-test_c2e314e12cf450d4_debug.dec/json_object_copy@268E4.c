json_t *__cdecl json_object_copy(json_t *object)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  int v5; // r0
  int v8; // [sp+Ch] [bp+Ch]
  json_t *v9; // [sp+10h] [bp+10h]
  char *i; // [sp+14h] [bp+14h]

  v9 = (json_t *)json_object();
  if ( !v9 )
    return 0;
  v2 = json_object_iter(object);
  for ( i = (char *)json_object_iter_key(v2); i; i = (char *)json_object_iter_key(v4) )
  {
    v5 = json_object_key_to_iter((int)i);
    v8 = json_object_iter_value(v5);
    if ( !v8 )
      break;
    json_object_set_nocheck_0(v9, i, v8);
    v3 = (void *)json_object_key_to_iter((int)i);
    v4 = json_object_iter_next(object, v3);
  }
  return v9;
}
