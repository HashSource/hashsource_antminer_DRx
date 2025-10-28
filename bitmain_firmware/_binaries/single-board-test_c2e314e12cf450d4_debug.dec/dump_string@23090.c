int __fastcall dump_string(char *a1, int (__fastcall *a2)(unsigned __int8 *, int, int), int a3, __int16 a4)
{
  char s[16]; // [sp+14h] [bp+14h] BYREF
  int v11; // [sp+24h] [bp+24h] BYREF
  int v12; // [sp+28h] [bp+28h]
  int v13; // [sp+2Ch] [bp+2Ch]
  int v14; // [sp+30h] [bp+30h]
  char *v15; // [sp+34h] [bp+34h]
  char *i; // [sp+38h] [bp+38h]
  char *v17; // [sp+3Ch] [bp+3Ch]

  if ( !a2("\"", 1, a3) )
  {
    v17 = a1;
    for ( i = a1; ; a1 = i )
    {
      while ( *i )
      {
        i = utf8_iterate(v17, &v11);
        if ( !i )
          return -1;
        if ( v11 == 92 || v11 == 34 || v11 <= 31 || (a4 & 0x400) != 0 && v11 == 47 || (a4 & 0x40) != 0 && v11 > 127 )
          break;
        v17 = i;
      }
      if ( v17 != a1 && a2((unsigned __int8 *)a1, v17 - a1, a3) )
        return -1;
      if ( i == v17 )
        return a2("\"", 1, a3);
      v14 = 2;
      if ( v11 == 12 )
      {
        v15 = "\\f";
        goto LABEL_43;
      }
      if ( v11 > 12 )
      {
        if ( v11 == 34 )
        {
          v15 = "\\\"";
          goto LABEL_43;
        }
        if ( v11 > 34 )
        {
          if ( v11 == 47 )
          {
            v15 = "\\/";
            goto LABEL_43;
          }
          if ( v11 == 92 )
          {
            v15 = "\\\\";
            goto LABEL_43;
          }
        }
        else if ( v11 == 13 )
        {
          v15 = "\\r";
          goto LABEL_43;
        }
      }
      else
      {
        switch ( v11 )
        {
          case 9:
            v15 = "\\t";
            goto LABEL_43;
          case 10:
            v15 = "\\n";
            goto LABEL_43;
          case 8:
            v15 = "\\b";
            goto LABEL_43;
        }
      }
      if ( v11 > 0xFFFF )
      {
        v11 -= 0x10000;
        v13 = ((int)((unsigned int)&unk_FFC00 & v11) >> 10) | 0xD800;
        v12 = v11 & 0x3FF | 0xDC00;
        sprintf(s, "\\u%04x\\u%04x", v13, v12);
        v14 = 12;
      }
      else
      {
        sprintf(s, "\\u%04x", v11);
        v14 = 6;
      }
      v15 = s;
LABEL_43:
      if ( a2((unsigned __int8 *)v15, v14, a3) )
        return -1;
      v17 = i;
    }
  }
  return -1;
}
