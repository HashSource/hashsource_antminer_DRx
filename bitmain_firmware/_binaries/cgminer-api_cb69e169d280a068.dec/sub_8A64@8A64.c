char *__fastcall sub_8A64(char *result)
{
  const char *v1; // r4
  char *v2; // r8
  int v3; // r7
  char *v4; // r0
  char *v5; // r5
  char *v6; // r0
  char *v7; // r9
  const char *v8; // r6
  const char *v9; // r2

  v1 = result;
  if ( result )
  {
    while ( 1 )
    {
      result = strchr(v1, 124);
      v2 = result;
      if ( result )
      {
        *result = 0;
        v2 = result + 1;
      }
      if ( *v1 )
        break;
LABEL_21:
      if ( !v2 )
        return result;
      v1 = v2;
    }
    v3 = 0;
    while ( 1 )
    {
      v4 = strchr(v1, 44);
      v5 = v4;
      if ( v4 )
      {
        *v4 = 0;
        v5 = v4 + 1;
      }
      if ( *v1 )
        break;
LABEL_19:
      ++v3;
      if ( !v5 )
      {
        result = (char *)puts(")");
        goto LABEL_21;
      }
      v1 = v5;
    }
    v6 = strchr(v1, 61);
    v7 = v6;
    if ( v6 )
    {
      *v6 = 0;
      v8 = v6 + 1;
      if ( v3 )
        goto LABEL_17;
      if ( v6 == (char *)-1 )
      {
        v9 = "";
      }
      else if ( ((*_ctype_b_loc())[(unsigned __int8)v6[1]] & 0x800) != 0 )
      {
        v9 = v7 + 1;
      }
      else
      {
        v9 = "";
      }
    }
    else
    {
      if ( v3 )
      {
LABEL_23:
        printf("   [%d] => %s\n", v3, v1);
        goto LABEL_19;
      }
      v9 = "";
      v8 = 0;
    }
    printf("[%s%s] =>\n(\n", v1, v9);
LABEL_17:
    if ( v8 )
    {
      printf("   [%s] => %s\n", v1, v8);
      goto LABEL_19;
    }
    goto LABEL_23;
  }
  return result;
}
