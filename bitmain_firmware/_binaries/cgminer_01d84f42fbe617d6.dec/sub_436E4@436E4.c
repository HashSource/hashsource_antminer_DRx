int __fastcall sub_436E4(const char *a1, int (__fastcall *a2)(const char *, int, int), int a3, __int16 a4)
{
  char *v8; // r0
  int v9; // r1
  const char *v10; // r6
  const char *v11; // r5
  int v13; // r0
  bool v14; // zf
  unsigned int v15; // r2
  int v16; // r3
  int v17; // [sp+4h] [bp-18h] BYREF
  char s[20]; // [sp+8h] [bp-14h] BYREF

  if ( !((int (__fastcall *)(const char *, int))a2)("\"", 1) )
  {
    while ( 1 )
    {
      v10 = a1;
      while ( *a1 )
      {
        v13 = sub_46490(a1, &v17);
        v11 = (const char *)v13;
        if ( !v13 )
          return -1;
        v14 = v17 == 92;
        if ( v17 != 92 )
          v14 = v17 == 34;
        if ( v14 || v17 <= 31 || (a4 & 0x400) != 0 && v17 == 47 || (a4 & 0x40) != 0 && v17 > 127 )
          goto LABEL_13;
        a1 = (const char *)v13;
      }
      v11 = a1;
LABEL_13:
      if ( a1 != v10 && a2(v10, a1 - v10, a3) )
        return -1;
      if ( v11 == a1 )
        return a2("\"", 1, a3);
      if ( v17 == 12 )
      {
        v9 = 2;
        v8 = "\\f";
        goto LABEL_8;
      }
      if ( v17 <= 12 )
        break;
      if ( v17 == 34 )
      {
        v8 = "\\\"";
        v9 = 2;
        goto LABEL_8;
      }
      if ( v17 > 34 )
      {
        if ( v17 == 47 )
        {
          v9 = 2;
          v8 = "\\/";
        }
        else
        {
          if ( v17 == 92 )
          {
            v9 = 2;
            v8 = "\\\\";
            goto LABEL_8;
          }
LABEL_6:
          if ( v17 >= 0x10000 )
          {
            v15 = ((unsigned int)(v17 - 0x10000) >> 10) & 0x3FF | 0xD800;
            v16 = (v17 - 0x10000) & 0x3FF | 0xDC00;
            v17 -= 0x10000;
            sprintf(s, "\\u%04x\\u%04x", v15, v16);
            v8 = s;
            v9 = 12;
          }
          else
          {
            sprintf(s, "\\u%04x", v17);
            v8 = s;
            v9 = 6;
          }
        }
        goto LABEL_8;
      }
      if ( v17 != 13 )
        goto LABEL_6;
      if ( a2("\\r", 2, a3) )
        return -1;
LABEL_9:
      a1 = v11;
    }
    switch ( v17 )
    {
      case 9:
        v9 = 2;
        v8 = "\\t";
        break;
      case 10:
        v9 = 2;
        v8 = "\\n";
        break;
      case 8:
        v9 = 2;
        v8 = "\\b";
        break;
      default:
        goto LABEL_6;
    }
LABEL_8:
    if ( !a2(v8, v9, a3) )
      goto LABEL_9;
  }
  return -1;
}
