void __cdecl from_locale(char *buffer)
{
  struct lconv *v1; // r0
  char *v3; // [sp+8h] [bp+8h]

  v1 = localeconv();
  if ( *v1->decimal_point != 46 )
  {
    v3 = strchr(buffer, *(unsigned __int8 *)v1->decimal_point);
    if ( v3 )
      *v3 = 46;
  }
}
