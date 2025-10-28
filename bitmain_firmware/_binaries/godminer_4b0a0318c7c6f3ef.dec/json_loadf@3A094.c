double *__fastcall json_loadf(int a1, int a2, char *a3)
{
  char *v6; // r1
  int v7; // r3
  double *v8; // r4
  _DWORD v10[2]; // [sp+0h] [bp-4Ch] BYREF
  char v11; // [sp+8h] [bp-44h]
  int v12; // [sp+10h] [bp-3Ch]
  int v13; // [sp+14h] [bp-38h]
  int v14; // [sp+18h] [bp-34h]
  int v15; // [sp+1Ch] [bp-30h]
  int v16; // [sp+24h] [bp-28h]
  _DWORD v17[9]; // [sp+28h] [bp-24h] BYREF

  if ( stdin == a1 )
    v6 = "<stdin>";
  else
    v6 = "<stream>";
  jsonp_error_init(a3, v6);
  if ( a1 )
  {
    LOWORD(v7) = 20588;
    v8 = 0;
    HIWORD(v7) = (unsigned int)"get_cur_seed_rvn" >> 16;
    v10[1] = a1;
    v10[0] = v7;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 0;
    v14 = 1;
    if ( !strbuffer_init(v17) )
    {
      v17[3] = a2;
      v17[5] = -1;
      v8 = sub_39DF4(v10, a2, (int)a3);
      sub_38E9C((int)v10);
    }
  }
  else
  {
    v8 = 0;
    sub_38D6C((int)a3, 0, 4, "wrong arguments");
  }
  return v8;
}
