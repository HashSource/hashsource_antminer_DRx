int __fastcall sub_45C04(const char *a1)
{
  char *v1; // r4
  char *v2; // r2
  int v3; // r4
  char *v4; // r2
  int v5; // r0
  int v6; // r6
  size_t v7; // r0
  int v8; // r5
  int v10; // r3
  char *v11; // r2
  int v12; // r3
  int v13; // t1
  __int16 v14; // r12
  int v15; // r0
  __int16 v16; // r12
  int v17; // r0
  __int16 v18; // r12
  char *v19; // r2
  int v20; // r0
  char *v21; // r2
  int v22; // r0
  char *v23; // r2
  int v24; // r0
  const unsigned __int16 **v25; // r0
  char *v26; // r3
  const unsigned __int16 *v27; // r4
  int v28; // r1
  int v29; // t1
  __int16 v30; // [sp+4h] [bp-Ch] BYREF
  char v31[2]; // [sp+6h] [bp-Ah] BYREF
  char *v32; // [sp+8h] [bp-8h] BYREF
  char *v33; // [sp+Ch] [bp-4h] BYREF

  v1 = (char *)a1;
  v2 = strchr(a1, 58);
  if ( v2 )
  {
    v33 = v1;
    v3 = sub_45B18(0, &v33, v2, 3600);
    v4 = strchr(++v33, 58);
    if ( v4 )
    {
      v5 = sub_45B18(v3, &v33, v4, 60);
      ++v33;
      v6 = v5;
      v7 = strlen(v33);
      return sub_45B18(v6, &v33, &v33[v7], 1);
    }
LABEL_27:
    v8 = -1;
    *_errno_location() = 22;
    return v8;
  }
  v10 = (unsigned __int8)*v1;
  if ( !*v1 )
  {
LABEL_14:
    if ( strlen(v1) == 6 )
    {
      v14 = *(_WORD *)v1;
      v33 = (char *)&v30;
      v30 = v14;
      v31[0] = 0;
      v15 = sub_45B18(0, &v33, v31, 3600);
      v16 = *((_WORD *)v1 + 1);
      v31[0] = 0;
      v30 = v16;
      v33 = (char *)&v30;
      v17 = sub_45B18(v15, &v33, v31, 60);
      v18 = *((_WORD *)v1 + 2);
      v31[0] = 0;
      v30 = v18;
      v33 = (char *)&v30;
      return sub_45B18(v17, &v33, v31, 1);
    }
    goto LABEL_27;
  }
  if ( v10 != 72 && v10 != 77 && v10 != 83 )
  {
    v11 = v1;
    do
    {
      v13 = (unsigned __int8)*++v11;
      v12 = v13;
      if ( !v13 )
        goto LABEL_14;
    }
    while ( v12 != 72 && v12 != 77 && v12 != 83 );
  }
  v32 = v1;
  v19 = strchr(v1, 72);
  if ( v19 )
  {
    v20 = sub_45B18(0, &v32, v19, 3600);
    v1 = ++v32;
    v8 = v20;
  }
  else
  {
    v8 = 0;
  }
  v21 = strchr(v1, 77);
  if ( v21 )
  {
    v22 = sub_45B18(v8, &v32, v21, 60);
    v1 = ++v32;
    v8 = v22;
  }
  v23 = strchr(v1, 83);
  if ( v23 )
  {
    v24 = sub_45B18(v8, &v32, v23, 1);
    v1 = ++v32;
    v8 = v24;
  }
  v25 = _ctype_b_loc();
  v26 = v1;
  v27 = *v25;
  while ( 1 )
  {
    v29 = (unsigned __int8)*v26++;
    v28 = v29;
    if ( (v27[v29] & 0x2000) == 0 )
      break;
    v32 = v26;
  }
  if ( v28 )
    goto LABEL_27;
  return v8;
}
