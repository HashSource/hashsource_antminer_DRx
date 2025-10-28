int __fastcall sub_378C0(
        _DWORD *a1,
        int a2,
        int a3,
        unsigned int *a4,
        int (__fastcall *a5)(__int16 *, int, int),
        int a6)
{
  unsigned int *v7; // r5
  int v8; // r9
  unsigned int v9; // r8
  char v11; // r10
  char *v12; // r3
  int v13; // r3
  int v14; // r7
  char *v16; // r5
  _DWORD *v17; // r0
  __int64 v18; // r0
  int v19; // r0
  int v20; // r3
  int v21; // r1
  int v22; // r11
  int v23; // r6
  int v24; // r10
  char *v25; // r9
  size_t v26; // r0
  bool v27; // zf
  int v28; // r0
  _DWORD *v29; // r0
  unsigned int v30; // r10
  int v31; // r6
  _DWORD *v32; // r0
  bool v33; // cc
  char *v34; // r0
  int v35; // r5
  char *v36; // r10
  char *v37; // r9
  unsigned int v38; // r7
  char *v39; // t1
  _DWORD *v40; // r10
  size_t v41; // r0
  __int16 *v42; // [sp+8h] [bp-94h]
  _DWORD *v43; // [sp+8h] [bp-94h]
  int v44; // [sp+Ch] [bp-90h]
  int v45; // [sp+Ch] [bp-90h]
  int v46; // [sp+Ch] [bp-90h]
  int v47; // [sp+10h] [bp-8Ch]
  size_t nmemb; // [sp+14h] [bp-88h]
  int v49; // [sp+18h] [bp-84h]
  void *base; // [sp+1Ch] [bp-80h]
  void *basea; // [sp+1Ch] [bp-80h]
  unsigned int *v52; // [sp+20h] [bp-7Ch]
  char *v53; // [sp+24h] [bp-78h]
  int v54; // [sp+28h] [bp-74h]
  __int16 s[52]; // [sp+34h] [bp-68h] BYREF

  if ( !a1 )
    return -1;
  v7 = a4;
  v8 = a2 & 0x10000;
  v9 = a2 & 0xFFFEFFFF;
  v11 = a2;
  switch ( *a1 )
  {
    case 0:
      v12 = ":";
      if ( (a2 & 0x20) == 0 )
        v12 = ": ";
      v42 = (__int16 *)v12;
      if ( (a2 & 0x20) != 0 )
        v13 = 1;
      else
        v13 = 2;
      v44 = v13;
      v14 = sub_37868(v7, a1, (char *)s);
      if ( v14 )
        return -1;
      v47 = json_object_iter(a1);
      if ( v8 )
      {
        if ( !v47 )
          goto LABEL_47;
      }
      else
      {
        if ( a5((__int16 *)"{", 1, a6) )
          return -1;
        if ( !v47 )
        {
          hashtable_del(v7, (char *)s);
          return a5((__int16 *)"}", 1, a6);
        }
      }
      v49 = a3 + 1;
      v14 = sub_377B8(v9, a3 + 1, 0, a5, a6);
      if ( v14 )
        return -1;
      if ( (v11 & 0x80) == 0 )
      {
        v22 = v44;
        v45 = a3;
        v23 = v47;
        base = (void *)v8;
        while ( 1 )
        {
          v24 = json_object_iter_next(a1, v23);
          v25 = (char *)json_object_iter_key(v23);
          v26 = strlen(v25);
          sub_37530(v25, v26, (int (__fastcall *)(const char *, int, int))a5, a6, v9);
          v27 = a5(v42, v22, a6) == 0;
          v28 = v23;
          v23 = v24;
          if ( !v27 )
            return -1;
          v29 = (_DWORD *)json_object_iter_value(v28);
          if ( sub_378C0(v29, v9, v49, v7, a5, a6) )
            return -1;
          if ( !v24 )
          {
            v8 = (int)base;
            v14 = 0;
            if ( !sub_377B8(v9, v45, 0, a5, a6) )
              goto LABEL_65;
            return -1;
          }
          if ( a5(&word_14853C, 1, a6) || sub_377B8(v9, v49, 1, a5, a6) )
            return -1;
        }
      }
      nmemb = (size_t)json_object_size(a1);
      v34 = (char *)jsonp_malloc((void *)(4 * nmemb));
      basea = v34;
      if ( !v34 )
        return -1;
      v52 = v7;
      v35 = v47;
      v36 = v34 - 4;
      v53 = v34 - 4;
      do
      {
        *((_DWORD *)v36 + 1) = json_object_iter_key(v35);
        v36 += 4;
        v35 = json_object_iter_next(a1, v35);
      }
      while ( v35 );
      v7 = v52;
      qsort(basea, nmemb, 4u, (__compar_fn_t)sub_37524);
      if ( nmemb )
      {
        v54 = v8;
        v37 = v53;
        v38 = 0;
        do
        {
          v39 = (char *)*((_DWORD *)v37 + 1);
          v37 += 4;
          v40 = (_DWORD *)json_object_get(a1, v39);
          v41 = strlen(v39);
          sub_37530(v39, v41, (int (__fastcall *)(const char *, int, int))a5, a6, v9);
          if ( a5(v42, v44, a6) || sub_378C0(v40, v9, v49, v52, a5, a6) )
          {
LABEL_70:
            v14 = -1;
            jsonp_free(basea);
            return v14;
          }
          v33 = nmemb - 1 > v38++;
          if ( v33 )
          {
            if ( a5(&word_14853C, 1, a6) || sub_377B8(v9, v49, 1, a5, a6) )
              goto LABEL_70;
          }
          else if ( sub_377B8(v9, a3, 0, a5, a6) )
          {
            goto LABEL_70;
          }
        }
        while ( nmemb != v38 );
        v14 = 0;
        v8 = v54;
      }
      jsonp_free(basea);
LABEL_65:
      hashtable_del(v7, (char *)s);
      if ( !v8 )
        return a5((__int16 *)"}", 1, a6);
      return v14;
    case 1:
      v14 = sub_37868(a4, a1, (char *)s);
      if ( v14 )
        return -1;
      v43 = json_array_size(a1);
      if ( v8 )
      {
        if ( !v43 )
        {
LABEL_47:
          hashtable_del(v7, (char *)s);
          return v14;
        }
      }
      else
      {
        if ( a5((__int16 *)"[", 1, a6) )
          return -1;
        if ( !v43 )
        {
          hashtable_del(v7, (char *)s);
          return a5((__int16 *)"]", 1, a6);
        }
      }
      v30 = sub_377B8(v9, a3 + 1, 0, a5, a6);
      if ( v30 )
        return -1;
      v46 = a3;
      v31 = a3 + 1;
      break;
    case 2:
      v16 = (char *)json_string_value(a1);
      v17 = json_string_length(a1);
      return sub_37530(v16, (int)v17, (int (__fastcall *)(const char *, int, int))a5, a6, v9);
    case 3:
      v18 = json_integer_value((int)a1);
      v19 = snprintf((char *)s, 0x64u, "%lld", v18);
      return a5(s, v19, a6);
    case 4:
      json_real_value();
      v21 = jsonp_dtostr((char *)s, 0x64u, (unsigned __int16)v9 >> 11, v20);
      if ( v21 < 0 )
        return -1;
      return a5(s, v21, a6);
    case 5:
      return a5((__int16 *)"true", 4, a6);
    case 6:
      return a5((__int16 *)"false", 5, a6);
    case 7:
      return a5((__int16 *)"null", 4, a6);
    default:
      return -1;
  }
  do
  {
    v32 = json_array_get(a1, v30);
    v14 = sub_378C0(v32, v9, v31, v7, a5, a6);
    if ( v14 )
      return -1;
    v33 = (unsigned int)v43 - 1 > v30++;
    if ( v33 )
    {
      if ( a5(&word_14853C, 1, a6) || sub_377B8(v9, v31, 1, a5, a6) )
        return -1;
    }
    else if ( sub_377B8(v9, v46, 0, a5, a6) )
    {
      return -1;
    }
  }
  while ( v43 != (_DWORD *)v30 );
  hashtable_del(v7, (char *)s);
  if ( !v8 )
    return a5((__int16 *)"]", 1, a6);
  return v14;
}
