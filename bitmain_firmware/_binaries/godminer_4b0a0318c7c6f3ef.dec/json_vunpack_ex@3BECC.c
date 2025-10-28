int __fastcall json_vunpack_ex(_DWORD *a1, char *a2, int a3, _BYTE *a4, _QWORD **a5)
{
  int v9; // r4
  _QWORD **v11; // [sp+Ch] [bp-58h] BYREF
  int v12[9]; // [sp+10h] [bp-54h] BYREF
  int v13; // [sp+34h] [bp-30h]
  int v14; // [sp+38h] [bp-2Ch]
  int v15; // [sp+3Ch] [bp-28h]
  int v16; // [sp+40h] [bp-24h]
  int v17; // [sp+44h] [bp-20h]
  char *v18; // [sp+48h] [bp-1Ch]
  int v19; // [sp+4Ch] [bp-18h]
  int v20; // [sp+50h] [bp-14h]
  int v21; // [sp+54h] [bp-10h]
  int v22; // [sp+58h] [bp-Ch]
  int v23; // [sp+5Ch] [bp-8h]

  if ( a1 )
  {
    if ( a4 && *a4 )
    {
      jsonp_error_init(a2, 0);
      v12[0] = (int)a4;
      v12[1] = (int)a4;
      memset(&v12[2], 0, 28);
      v14 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v13 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v20 = 1;
      v18 = a2;
      v19 = a3;
      sub_3A520(v12);
      v11 = a5;
      v9 = sub_3A984((int)v12, a1, &v11);
      if ( v9 )
      {
        return -1;
      }
      else
      {
        sub_3A520(v12);
        if ( (_BYTE)v13 )
        {
          sub_3A4C0(v12, "<format>", 9, "Garbage after format string");
          return -1;
        }
      }
    }
    else
    {
      v9 = -1;
      jsonp_error_init(a2, "<format>");
      jsonp_error_set((int)a2, -1, -1, 0, 4, "NULL or empty format string");
    }
  }
  else
  {
    v9 = -1;
    jsonp_error_init(a2, "<root>");
    jsonp_error_set((int)a2, -1, -1, 0, 12, "NULL root value");
  }
  return v9;
}
