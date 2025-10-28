int __fastcall do_dump(json_t *a1, int a2, int a3, int (__fastcall *a4)(const char *, int, int), int a5)
{
  double v5; // d0
  __int64 v7; // r0
  char *v8; // r0
  json_t *v9; // r0
  char *v10; // r0
  json_t *v11; // r0
  char s[100]; // [sp+18h] [bp+10h] BYREF
  json_t *v18; // [sp+7Ch] [bp+74h]
  char *v19; // [sp+80h] [bp+78h]
  void *base; // [sp+84h] [bp+7Ch]
  size_t nmemb; // [sp+88h] [bp+80h]
  void *v22; // [sp+8Ch] [bp+84h]
  json_t *v23; // [sp+90h] [bp+88h]
  signed int v24; // [sp+94h] [bp+8Ch]
  json_t *v25; // [sp+98h] [bp+90h]
  int v26; // [sp+9Ch] [bp+94h]
  double v27; // [sp+A0h] [bp+98h]
  unsigned int v28; // [sp+ACh] [bp+A4h]
  __compar_fn_t compar; // [sp+B0h] [bp+A8h]
  size_t i; // [sp+B4h] [bp+ACh]
  int v31; // [sp+B8h] [bp+B0h]
  const char *v32; // [sp+BCh] [bp+B4h]
  void *v33; // [sp+C0h] [bp+B8h]
  signed int v34; // [sp+C4h] [bp+BCh]

  if ( a1 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        if ( (a2 & 0x20) != 0 )
        {
          v32 = ":";
          v31 = 1;
        }
        else
        {
          v32 = ": ";
          v31 = 2;
        }
        v23 = a1;
        if ( *((_DWORD *)a1 + 8) )
          goto LABEL_74;
        *((_DWORD *)v23 + 8) = 1;
        v33 = json_object_iter(a1);
        if ( a4("{", 1, a5) )
          goto LABEL_74;
        if ( !v33 )
          goto LABEL_36;
        if ( dump_indent(a2, a3 + 1, 0, a4, a5) )
          goto LABEL_74;
        if ( (a2 & 0x80) != 0 || (a2 & 0x100) != 0 )
        {
          nmemb = json_object_size(a1);
          base = jsonp_malloc(8 * nmemb);
          if ( !base )
          {
LABEL_74:
            *((_DWORD *)v23 + 8) = 0;
            return -1;
          }
          i = 0;
          while ( v33 )
          {
            *((_DWORD *)base + 2 * i) = hashtable_iter_serial((int)v33);
            *((_DWORD *)base + 2 * i + 1) = json_object_iter_key(v33);
            v33 = json_object_iter_next(a1, v33);
            ++i;
          }
          if ( i != nmemb )
            _assert_fail("i == size", "3rdparty/jansson-2.6/src/dump.c", 0x141u, "do_dump");
          if ( (a2 & 0x80) != 0 )
            compar = (__compar_fn_t)object_key_compare_keys;
          else
            compar = (__compar_fn_t)object_key_compare_serials;
          qsort(base, nmemb, 8u, compar);
          for ( i = 0; i < nmemb; ++i )
          {
            v19 = (char *)*((_DWORD *)base + 2 * i + 1);
            v18 = (json_t *)json_object_get(a1, v19);
            if ( !v18 )
              _assert_fail("value", "3rdparty/jansson-2.6/src/dump.c", 0x151u, "do_dump");
            dump_string(v19, (int (__fastcall *)(unsigned __int8 *, int, int))a4, a5, a2);
            if ( a4(v32, v31, a5) || do_dump(v18, a2, a3 + 1, a4, a5) )
            {
LABEL_60:
              jsonp_free(base);
              goto LABEL_74;
            }
            if ( nmemb - 1 <= i )
            {
              if ( dump_indent(a2, a3, 0, a4, a5) )
                goto LABEL_60;
            }
            else if ( a4(",", 1, a5) || dump_indent(a2, a3 + 1, 1, a4, a5) )
            {
              goto LABEL_60;
            }
          }
          jsonp_free(base);
        }
        else
        {
          while ( v33 )
          {
            v22 = json_object_iter_next(a1, v33);
            v10 = (char *)json_object_iter_key(v33);
            dump_string(v10, (int (__fastcall *)(unsigned __int8 *, int, int))a4, a5, a2);
            if ( a4(v32, v31, a5) )
              goto LABEL_74;
            v11 = (json_t *)json_object_iter_value((int)v33);
            if ( do_dump(v11, a2, a3 + 1, a4, a5) )
              goto LABEL_74;
            if ( v22 )
            {
              if ( a4(",", 1, a5) || dump_indent(a2, a3 + 1, 1, a4, a5) )
                goto LABEL_74;
            }
            else if ( dump_indent(a2, a3, 0, a4, a5) )
            {
              goto LABEL_74;
            }
            v33 = v22;
          }
        }
LABEL_36:
        *((_DWORD *)v23 + 8) = 0;
        return a4("}", 1, a5);
      case 1:
        v25 = a1;
        if ( *((_DWORD *)a1 + 5) )
          goto LABEL_29;
        *((_DWORD *)v25 + 5) = 1;
        v24 = json_array_size(a1);
        if ( a4("[", 1, a5) )
          goto LABEL_29;
        if ( !v24 )
          goto LABEL_17;
        if ( dump_indent(a2, a3 + 1, 0, a4, a5) )
          goto LABEL_29;
        v34 = 0;
        while ( 2 )
        {
          if ( v34 >= v24 )
          {
LABEL_17:
            *((_DWORD *)v25 + 5) = 0;
            return a4("]", 1, a5);
          }
          v9 = json_array_get(a1, v34);
          if ( do_dump(v9, a2, a3 + 1, a4, a5) )
            break;
          if ( v24 - 1 <= v34 )
          {
            if ( !dump_indent(a2, a3, 0, a4, a5) )
            {
LABEL_26:
              ++v34;
              continue;
            }
          }
          else if ( !a4(",", 1, a5) && !dump_indent(a2, a3 + 1, 1, a4, a5) )
          {
            goto LABEL_26;
          }
          break;
        }
LABEL_29:
        *((_DWORD *)v25 + 5) = 0;
        return -1;
      case 2:
        v8 = (char *)json_string_value(a1);
        return dump_string(v8, (int (__fastcall *)(unsigned __int8 *, int, int))a4, a5, a2);
      case 3:
        v7 = json_integer_value(a1);
        v28 = snprintf(s, 0x64u, "%lld", v7);
        if ( v28 < 0x64 )
          return a4(s, v28, a5);
        else
          return -1;
      case 4:
        json_real_value(a1);
        v27 = v5;
        v26 = jsonp_dtostr(s, 0x64u);
        if ( v26 >= 0 )
          return a4(s, v26, a5);
        else
          return -1;
      case 5:
        return a4("true", 4, a5);
      case 6:
        return a4("false", 5, a5);
      case 7:
        return a4("null", 4, a5);
      default:
        return -1;
    }
  }
  return -1;
}
