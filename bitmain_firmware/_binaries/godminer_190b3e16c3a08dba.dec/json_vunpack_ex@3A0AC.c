int __fastcall json_vunpack_ex(_DWORD *a1, char *a2, int a3, _BYTE *a4, _QWORD **a5)
{
  int v9; // r4
  char *v11; // r1
  char *format; // r3
  char *v13; // r3
  char *v14; // r1
  char *v15; // r1
  char *v16; // r1
  _QWORD **v17; // [sp+Ch] [bp-58h] BYREF
  int v18[9]; // [sp+10h] [bp-54h] BYREF
  int v19; // [sp+34h] [bp-30h]
  int v20; // [sp+38h] [bp-2Ch]
  int v21; // [sp+3Ch] [bp-28h]
  int v22; // [sp+40h] [bp-24h]
  int v23; // [sp+44h] [bp-20h]
  char *v24; // [sp+48h] [bp-1Ch]
  int v25; // [sp+4Ch] [bp-18h]
  int v26; // [sp+50h] [bp-14h]
  int v27; // [sp+54h] [bp-10h]
  int v28; // [sp+58h] [bp-Ch]
  int v29; // [sp+5Ch] [bp-8h]

  if ( a1 )
  {
    if ( a4 && *a4 )
    {
      jsonp_error_init(a2, 0);
      v18[0] = (int)a4;
      v18[1] = (int)a4;
      memset(&v18[2], 0, 28);
      v20 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v19 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v26 = 1;
      v24 = a2;
      v25 = a3;
      sub_38700(v18);
      v17 = a5;
      v9 = sub_38B64((int)v18, a1, &v17);
      if ( v9 )
      {
        return -1;
      }
      else
      {
        sub_38700(v18);
        if ( (_BYTE)v19 )
        {
          LOWORD(v13) = 10088;
          LOWORD(v14) = 9264;
          HIWORD(v13) = (unsigned int)"p_url" >> 16;
          HIWORD(v14) = (unsigned int)"hns_2130" >> 16;
          sub_386A0(v18, v14, 9, v13);
          return -1;
        }
      }
    }
    else
    {
      LOWORD(v11) = 9264;
      HIWORD(v11) = (unsigned int)"hns_2130" >> 16;
      v9 = -1;
      jsonp_error_init(a2, v11);
      LOWORD(format) = 10060;
      HIWORD(format) = (unsigned int)"eason_history_update" >> 16;
      jsonp_error_set((int)a2, -1, -1, 0, 4, format);
    }
  }
  else
  {
    LOWORD(v15) = 10116;
    HIWORD(v15) = (unsigned int)"threads" >> 16;
    v9 = -1;
    jsonp_error_init(a2, v15);
    LOWORD(v16) = 10124;
    HIWORD(v16) = (unsigned int)"add_pool" >> 16;
    jsonp_error_set((int)a2, -1, -1, 0, 12, v16);
  }
  return v9;
}
