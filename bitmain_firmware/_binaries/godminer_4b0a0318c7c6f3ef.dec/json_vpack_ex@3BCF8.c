double *__fastcall json_vpack_ex(char *a1, int a2, _BYTE *a3, int *a4)
{
  double *v8; // r4
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  int *v13; // [sp+Ch] [bp-58h] BYREF
  int v14[9]; // [sp+10h] [bp-54h] BYREF
  int v15; // [sp+34h] [bp-30h]
  int v16; // [sp+38h] [bp-2Ch]
  int v17; // [sp+3Ch] [bp-28h]
  int v18; // [sp+40h] [bp-24h]
  int v19; // [sp+44h] [bp-20h]
  char *v20; // [sp+48h] [bp-1Ch]
  int v21; // [sp+4Ch] [bp-18h]
  int v22; // [sp+50h] [bp-14h]
  int v23; // [sp+54h] [bp-10h]
  int v24; // [sp+58h] [bp-Ch]
  int v25; // [sp+5Ch] [bp-8h]

  if ( a3 && *a3 )
  {
    jsonp_error_init(a1, 0);
    v14[0] = (int)a3;
    v14[1] = (int)a3;
    memset(&v14[2], 0, 28);
    v16 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v15 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v22 = 1;
    v20 = a1;
    v21 = a2;
    sub_3A520(v14);
    v13 = a4;
    v8 = sub_3B5A0(v14, &v13);
    if ( v8 )
    {
      sub_3A520(v14);
      if ( (_BYTE)v15 )
      {
        if ( *((_DWORD *)v8 + 1) != -1 )
        {
          v10 = (unsigned int *)v8 + 1;
          __dmb(0xBu);
          do
          {
            v11 = __ldrex(v10);
            v12 = v11 - 1;
          }
          while ( __strex(v12, v10) );
          if ( !v12 )
            json_delete(v8);
        }
        v8 = 0;
        sub_3A4C0(v14, "<format>", 9, "Garbage after format string");
      }
    }
    return v8;
  }
  else
  {
    jsonp_error_init(a1, "<format>");
    jsonp_error_set((int)a1, -1, -1, 0, 4, "NULL or empty format string");
    return 0;
  }
}
