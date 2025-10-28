double *__fastcall sub_39950(int a1, int a2, int a3)
{
  unsigned int v5; // r3
  int v6; // r3
  double *v7; // r6
  _BYTE *v10; // r7
  size_t v11; // r9
  int v12; // r3
  void *v13; // r7
  size_t v14; // r2
  double *v15; // r2
  int v16; // r3
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  int v20; // r3
  int v21; // r3
  double *v22; // r1
  unsigned int *v23; // r3
  unsigned int v24; // r2
  double *v25; // r0

  v5 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v5;
  if ( v5 > 0x800 )
  {
    v7 = 0;
    sub_38D6C(a3, (_DWORD *)a1, 2, "maximum parsing depth reached");
    return v7;
  }
  v6 = *(_DWORD *)(a1 + 60);
  if ( v6 == 257 )
  {
    v7 = (double *)json_integer(*(_QWORD *)(a1 + 64));
    goto LABEL_9;
  }
  if ( v6 <= 257 )
  {
    if ( v6 == 91 )
    {
      v7 = (double *)json_array();
      if ( !v7 )
        return 0;
      sub_39124(a1, a3);
      v20 = *(_DWORD *)(a1 + 60);
      if ( v20 == 93 )
        goto LABEL_10;
      if ( v20 )
      {
        while ( 1 )
        {
          v22 = sub_39950(a1, a2, a3);
          if ( !v22 || json_array_append_new(v7, v22) )
            break;
          sub_39124(a1, a3);
          v21 = *(_DWORD *)(a1 + 60);
          if ( v21 != 44 )
          {
            if ( v21 == 93 )
              goto LABEL_10;
            goto LABEL_62;
          }
          sub_39124(a1, a3);
          if ( !*(_DWORD *)(a1 + 60) )
            goto LABEL_62;
        }
      }
      else
      {
LABEL_62:
        sub_38D6C(a3, (_DWORD *)a1, 8, "']' expected");
      }
      if ( *((_DWORD *)v7 + 1) == -1 )
        return 0;
      v23 = (unsigned int *)v7 + 1;
      __dmb(0xBu);
      do
      {
        v24 = __ldrex(v23);
        v19 = v24 - 1;
      }
      while ( __strex(v19, v23) );
    }
    else
    {
      if ( v6 <= 91 )
      {
        if ( v6 == -1 )
        {
          v7 = 0;
          sub_38D6C(a3, (_DWORD *)a1, 8, "invalid token");
          return v7;
        }
        goto LABEL_57;
      }
      if ( v6 != 123 )
      {
        if ( v6 != 256 )
          goto LABEL_57;
        v10 = *(_BYTE **)(a1 + 64);
        v11 = *(_DWORD *)(a1 + 68);
        if ( (a2 & 0x10) == 0 && memchr(*(const void **)(a1 + 64), 0, *(_DWORD *)(a1 + 68)) )
        {
          v7 = 0;
          sub_38D6C(a3, (_DWORD *)a1, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
          return v7;
        }
        v7 = (double *)jsonp_stringn_nocheck_own(v10, v11);
        *(_DWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 68) = 0;
        goto LABEL_9;
      }
      v7 = (double *)json_object();
      if ( !v7 )
        return 0;
      sub_39124(a1, a3);
      v12 = *(_DWORD *)(a1 + 60);
      if ( v12 == 125 )
        goto LABEL_10;
      if ( v12 == 256 )
      {
        v13 = *(void **)(a1 + 64);
        v14 = *(_DWORD *)(a1 + 68);
        *(_DWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 68) = 0;
        if ( !v13 )
          return 0;
        while ( 1 )
        {
          if ( memchr(v13, 0, v14) )
          {
            jsonp_free(v13);
            sub_38D6C(a3, (_DWORD *)a1, 13, "NUL byte in object key not supported");
            goto LABEL_36;
          }
          if ( (a2 & 1) != 0 && json_object_get(v7, (char *)v13) )
          {
            jsonp_free(v13);
            sub_38D6C(a3, (_DWORD *)a1, 14, "duplicate object key");
            goto LABEL_36;
          }
          sub_39124(a1, a3);
          if ( *(_DWORD *)(a1 + 60) != 58 )
          {
            jsonp_free(v13);
            sub_38D6C(a3, (_DWORD *)a1, 8, "':' expected");
            goto LABEL_36;
          }
          sub_39124(a1, a3);
          v15 = sub_39950(a1, a2, a3);
          if ( !v15 || json_object_set_new_nocheck(v7, (char *)v13, v15) )
          {
            jsonp_free(v13);
            goto LABEL_36;
          }
          jsonp_free(v13);
          sub_39124(a1, a3);
          v16 = *(_DWORD *)(a1 + 60);
          if ( v16 != 44 )
            break;
          sub_39124(a1, a3);
          if ( *(_DWORD *)(a1 + 60) != 256 )
            goto LABEL_63;
          v13 = *(void **)(a1 + 64);
          v14 = *(_DWORD *)(a1 + 68);
          *(_DWORD *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 68) = 0;
          if ( !v13 )
            return 0;
        }
        if ( v16 == 125 )
          goto LABEL_10;
        sub_38D6C(a3, (_DWORD *)a1, 8, "'}' expected");
      }
      else
      {
LABEL_63:
        sub_38D6C(a3, (_DWORD *)a1, 8, "string or '}' expected");
      }
LABEL_36:
      if ( *((_DWORD *)v7 + 1) == -1 )
        return 0;
      v17 = (unsigned int *)v7 + 1;
      __dmb(0xBu);
      do
      {
        v18 = __ldrex(v17);
        v19 = v18 - 1;
      }
      while ( __strex(v19, v17) );
    }
    if ( !v19 )
    {
      v25 = v7;
      v7 = 0;
      json_delete(v25);
      return v7;
    }
    return 0;
  }
  if ( v6 == 259 )
  {
    v7 = (double *)json_true();
  }
  else if ( v6 < 259 )
  {
    v7 = json_real();
  }
  else
  {
    if ( v6 != 260 )
    {
      if ( v6 == 261 )
      {
        v7 = (double *)json_null();
        goto LABEL_9;
      }
LABEL_57:
      v7 = 0;
      sub_38D6C(a3, (_DWORD *)a1, 8, "unexpected token");
      return v7;
    }
    v7 = (double *)json_false();
  }
LABEL_9:
  if ( v7 )
  {
LABEL_10:
    --*(_DWORD *)(a1 + 56);
    return v7;
  }
  return 0;
}
