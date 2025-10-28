json_t *__fastcall parse_object(const lex_t *a1, unsigned int a2, json_error_t *a3)
{
  json_t *v8; // [sp+14h] [bp+14h]
  void *v9; // [sp+18h] [bp+18h]
  json_t *v10; // [sp+1Ch] [bp+1Ch]

  v10 = (json_t *)json_object();
  if ( !v10 )
    return 0;
  lex_scan((int)a1, a3);
  if ( *((_DWORD *)a1 + 13) == 125 )
    return v10;
  while ( 1 )
  {
    if ( *((_DWORD *)a1 + 13) != 256 )
    {
      error_set(a3, a1, "string or '}' expected");
      goto LABEL_23;
    }
    v9 = (void *)lex_steal_string((int)a1);
    if ( !v9 )
      return 0;
    if ( (a2 & 1) != 0 && json_object_get(v10, (char *)v9) )
    {
      jsonp_free(v9);
      error_set(a3, a1, "duplicate object key");
      goto LABEL_23;
    }
    lex_scan((int)a1, a3);
    if ( *((_DWORD *)a1 + 13) != 58 )
    {
      jsonp_free(v9);
      error_set(a3, a1, "':' expected");
      goto LABEL_23;
    }
    lex_scan((int)a1, a3);
    v8 = (json_t *)parse_value(COERCE_DOUBLE(__PAIR64__(a2, (unsigned int)a1)), a3);
    if ( !v8 )
    {
      jsonp_free(v9);
      goto LABEL_23;
    }
    if ( json_object_set_nocheck(v10, (const char *)v9, v8) )
    {
      jsonp_free(v9);
      json_decref_1((int)v8);
      goto LABEL_23;
    }
    json_decref_1((int)v8);
    jsonp_free(v9);
    lex_scan((int)a1, a3);
    if ( *((_DWORD *)a1 + 13) != 44 )
      break;
    lex_scan((int)a1, a3);
  }
  if ( *((_DWORD *)a1 + 13) == 125 )
    return v10;
  error_set(a3, a1, "'}' expected");
LABEL_23:
  json_decref_1((int)v10);
  return 0;
}
