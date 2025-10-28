void __cdecl to_locale(strbuffer_t *strbuffer)
{
  struct lconv *v1; // r0
  char *v3; // [sp+8h] [bp+8h]
  char *decimal_point; // [sp+Ch] [bp+Ch]

  v1 = localeconv();
  decimal_point = v1->decimal_point;
  if ( *v1->decimal_point != 46 )
  {
    v3 = strchr(*(const char **)strbuffer, 46);
    if ( v3 )
      *v3 = *decimal_point;
  }
}
