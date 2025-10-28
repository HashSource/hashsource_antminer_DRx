char *__fastcall jsonp_error_set_source(char *result, const char *a2)
{
  char *v3; // [sp+4h] [bp+4h]
  size_t v4; // [sp+Ch] [bp+Ch]

  v3 = result;
  if ( result && a2 )
  {
    v4 = strlen(a2);
    if ( v4 > 0x4F )
    {
      strcpy(v3 + 12, "...");
      return strcpy(v3 + 15, &a2[v4 - 76]);
    }
    else
    {
      return strcpy(v3 + 12, a2);
    }
  }
  return result;
}
