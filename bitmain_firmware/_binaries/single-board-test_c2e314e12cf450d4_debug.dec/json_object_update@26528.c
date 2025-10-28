int __cdecl json_object_update(json_t *object, json_t *other)
{
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  int v6; // r0
  int v10; // [sp+8h] [bp+8h]
  char *i; // [sp+Ch] [bp+Ch]

  if ( !object || *(_DWORD *)object || !other || *(_DWORD *)other )
    return -1;
  v3 = json_object_iter(other);
  for ( i = (char *)json_object_iter_key(v3); i; i = (char *)json_object_iter_key(v5) )
  {
    v6 = json_object_key_to_iter((int)i);
    v10 = json_object_iter_value(v6);
    if ( !v10 )
      break;
    if ( json_object_set_nocheck_0(object, i, v10) )
      return -1;
    v4 = (void *)json_object_key_to_iter((int)i);
    v5 = json_object_iter_next(other, v4);
  }
  return 0;
}
