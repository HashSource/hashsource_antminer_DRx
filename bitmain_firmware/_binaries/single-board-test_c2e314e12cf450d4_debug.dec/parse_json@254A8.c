_DWORD *__fastcall parse_json(const lex_t *a1, unsigned int a2, int a3)
{
  _DWORD *v8; // [sp+14h] [bp+14h]

  lex_scan((int)a1, (json_error_t *)a3);
  if ( (a2 & 4) != 0 || *((_DWORD *)a1 + 13) == 91 || *((_DWORD *)a1 + 13) == 123 )
  {
    v8 = parse_value(COERCE_DOUBLE(__PAIR64__(a2, (unsigned int)a1)), (json_error_t *)a3);
    if ( v8 )
    {
      if ( (a2 & 2) != 0 || (lex_scan((int)a1, (json_error_t *)a3), !*((_DWORD *)a1 + 13)) )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = *((_DWORD *)a1 + 9);
        return v8;
      }
      else
      {
        error_set((json_error_t *)a3, a1, "end of file expected");
        json_decref_1((int)v8);
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    error_set((json_error_t *)a3, a1, "'[' or '{' expected");
    return 0;
  }
}
