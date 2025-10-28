_DWORD *__fastcall sub_28E9C(_DWORD *result, _DWORD *a2, int a3)
{
  int v3; // r4
  _DWORD *v4; // r12
  int v5; // r3
  int v6; // t1
  _DWORD *v7; // r6
  char *v9; // r0
  _DWORD *v10; // r0
  char *v11; // r2
  int v12; // r5

  v3 = a2[2];
  if ( v3 > 0 )
  {
    v4 = (_DWORD *)a2[4];
    if ( a3 == *v4 )
    {
      v12 = 0;
LABEL_7:
      v7 = result;
      v9 = BUFX_strdup(*(char **)(a2[3] + v12));
      json_object_set_new(v7, "status", v9);
      v10 = json_integer(*(int *)(a2[4] + v12));
      json_object_set_new(v7, "code", v10);
      v11 = BUFX_strdup(*(char **)(a2[5] + v12));
      return (_DWORD *)json_object_set_new(v7, "msg", v11);
    }
    else
    {
      v5 = 0;
      while ( 1 )
      {
        ++v5;
        v12 = 4 * v5;
        if ( v5 == v3 )
          break;
        v6 = v4[1];
        ++v4;
        if ( v6 == a3 )
          goto LABEL_7;
      }
    }
  }
  return result;
}
