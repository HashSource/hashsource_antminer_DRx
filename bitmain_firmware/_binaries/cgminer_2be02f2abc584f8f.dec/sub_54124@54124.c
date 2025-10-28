int __fastcall sub_54124(_BYTE *a1, int (__fastcall *a2)(char *, int, int), int a3, __int16 a4)
{
  _BYTE *v8; // r4
  int v9; // r0
  _BYTE *v10; // r5
  bool v11; // zf
  int v12; // r2
  int v13; // r1
  char *v14; // r0
  char s[16]; // [sp+4h] [bp-18h] BYREF
  int v17; // [sp+14h] [bp-8h] BYREF

  if ( !((int (__fastcall *)(char *, int))a2)("\"", 1) )
  {
    v8 = a1;
    while ( *v8 )
    {
      v9 = sub_57084(v8, &v17);
      v10 = (_BYTE *)v9;
      if ( !v9 )
        return -1;
      v11 = v17 == 92;
      if ( v17 != 92 )
        v11 = v17 == 34;
      if ( v11 || v17 <= 31 || (a4 & 0x400) != 0 && v17 == 47 )
      {
LABEL_17:
        if ( v8 != a1 && a2(a1, v8 - a1, a3) )
          return -1;
        if ( v10 == v8 )
          return a2("\"", 1, a3);
        v12 = v17;
        if ( v17 == 12 )
        {
          v13 = 2;
          v14 = "\\f";
          goto LABEL_43;
        }
        if ( v17 > 12 )
        {
          if ( v17 == 34 )
          {
            v13 = 2;
            v14 = "\\\"";
            goto LABEL_43;
          }
          if ( v17 > 34 )
          {
            if ( v17 == 47 )
            {
              v13 = 2;
              v14 = "\\/";
              goto LABEL_43;
            }
            if ( v17 == 92 )
            {
              v13 = 2;
              v14 = "\\\\";
              goto LABEL_43;
            }
          }
          else if ( v17 == 13 )
          {
            v13 = 2;
            v14 = "\\r";
            goto LABEL_43;
          }
        }
        else
        {
          switch ( v17 )
          {
            case 9:
              v13 = 2;
              v14 = "\\t";
              goto LABEL_43;
            case 10:
              v13 = 2;
              v14 = "\\n";
              goto LABEL_43;
            case 8:
              v13 = 2;
              v14 = "\\b";
              goto LABEL_43;
          }
        }
        if ( v17 >= 0x10000 )
        {
          v17 -= 0x10000;
          sprintf(s, "\\u%04x\\u%04x", ((unsigned int)(v12 - 0x10000) >> 10) & 0x3FF | 0xD800, v17 & 0x3FF | 0xDC00);
          v13 = 12;
        }
        else
        {
          sprintf(s, "\\u%04x", v17);
          v13 = 6;
        }
        v14 = s;
LABEL_43:
        if ( a2(v14, v13, a3) )
          return -1;
        v8 = v10;
        a1 = v10;
      }
      else if ( (a4 & 0x40) != 0 )
      {
        if ( v17 > 127 )
          goto LABEL_17;
        v8 = (_BYTE *)v9;
      }
      else
      {
        v8 = (_BYTE *)v9;
      }
    }
    v10 = v8;
    goto LABEL_17;
  }
  return -1;
}
