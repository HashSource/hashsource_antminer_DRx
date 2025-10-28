json_t *__fastcall parse_array(const lex_t *a1, unsigned int a2, json_error_t *a3)
{
  json_t *v8; // [sp+10h] [bp+10h]
  json_t *v9; // [sp+14h] [bp+14h]

  v9 = (json_t *)json_array();
  if ( !v9 )
    return 0;
  lex_scan((int)a1, a3);
  if ( *((_DWORD *)a1 + 13) == 93 )
    return v9;
  while ( *((_DWORD *)a1 + 13) )
  {
    v8 = (json_t *)parse_value(COERCE_DOUBLE(__PAIR64__(a2, (unsigned int)a1)), a3);
    if ( !v8 )
      goto LABEL_14;
    if ( json_array_append(v9, v8) )
    {
      json_decref_1((int)v8);
      goto LABEL_14;
    }
    json_decref_1((int)v8);
    lex_scan((int)a1, a3);
    if ( *((_DWORD *)a1 + 13) != 44 )
      break;
    lex_scan((int)a1, a3);
  }
  if ( *((_DWORD *)a1 + 13) == 93 )
    return v9;
  error_set(a3, a1, "']' expected");
LABEL_14:
  json_decref_1((int)v9);
  return 0;
}
