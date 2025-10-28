int __fastcall sub_27E3C(_DWORD *a1, const char **a2)
{
  int v2; // r4
  char *all_created_runtime; // r7
  int v5; // r0
  int v6; // r5
  double v7; // d8
  char *v8; // r0
  _DWORD *v9; // r9
  int v10; // r5
  int v11; // r3
  char *v12; // r0
  int v13; // r9
  char *v14; // r10
  float *v15; // r8
  _DWORD *v16; // r0
  int v17; // t1
  _DWORD *v18; // r7
  char *v19; // r0
  _DWORD *v20; // r5
  float *v21; // r11
  float v22; // s14
  _DWORD *v23; // r0
  char *v25; // r6
  char *v26; // r0
  char *v27; // r7
  char *v28; // r8
  int v29; // t1
  bool v30; // cc
  unsigned __int64 v31; // r6
  double v32; // d0
  int v33; // [sp+14h] [bp-1048h]
  _DWORD *v34; // [sp+18h] [bp-1044h]
  _DWORD *v35; // [sp+2Ch] [bp-1030h]
  _QWORD *v36; // [sp+30h] [bp-102Ch]
  char *ptr; // [sp+38h] [bp-1024h]
  _DWORD *v39; // [sp+3Ch] [bp-1020h]
  int v40; // [sp+44h] [bp-1018h] BYREF
  char s[4]; // [sp+48h] [bp-1014h] BYREF
  int v42; // [sp+4Ch] [bp-1010h]
  _DWORD v43[2]; // [sp+50h] [bp-100Ch] BYREF
  double v44[512]; // [sp+58h] [bp-1004h] BYREF

  v2 = 0;
  v40 = 0;
  *(_DWORD *)s = 0;
  v43[0] = 0;
  v42 = 0;
  v43[1] = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v40);
  v5 = frontend_runtime_instance();
  if ( a2 )
  {
    v6 = v5;
    sub_25DA0(a1, a2);
    sub_25EBC(a1);
    if ( v40 > 0 )
    {
      v36 = malloc(216 * v40);
      v25 = (char *)v36;
      v26 = (char *)malloc(4 * v40);
      ptr = v26;
      if ( v40 > 0 )
      {
        v27 = all_created_runtime - 4;
        v28 = v26 - 4;
        do
        {
          v29 = *((_DWORD *)v27 + 1);
          v27 += 4;
          read_status_from_monitor(v25, v29);
          ++v2;
          v25 += 216;
          v30 = v40 <= v2;
          *((_DWORD *)v28 + 1) = *(_DWORD *)(*(_DWORD *)v27 + 256);
          v28 += 4;
        }
        while ( !v30 );
      }
      v31 = v36[26];
      v32 = *((double *)v36 + 6);
      if ( v31 > 0x18 )
        LODWORD(v31) = 24;
      v33 = v31;
      format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), v44, (char *)v43);
      v7 = v32;
    }
    else
    {
      ptr = 0;
      v36 = 0;
      v33 = 0;
      v7 = 1.0;
    }
    v39 = json_array();
    v35 = json_object();
    if ( !v40 )
    {
      format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), v44, (char *)v43);
      v7 = 1.0;
    }
    v8 = BUFX_strdup((char *)v43);
    json_object_set_new(v35, "unit", v8);
    v9 = json_array();
    if ( v33 )
    {
      v10 = 15;
      do
      {
        v11 = v10;
        *(_DWORD *)s = 0;
        v10 += 15;
        v42 = 0;
        snprintf(s, 8u, "%dmin", v11);
        v12 = BUFX_strdup(s);
        json_array_append_new(v9, v12);
      }
      while ( v10 != 15 * (v33 + 1) );
    }
    json_object_set_new(v35, "xAxis", v9);
    v34 = json_array();
    if ( v40 > 0 )
    {
      v13 = 0;
      v14 = ptr - 4;
      v15 = (float *)(v36 + 13);
      do
      {
        v16 = json_object();
        v17 = *((_DWORD *)v14 + 1);
        v14 += 4;
        *(_DWORD *)s = 0;
        v42 = 0;
        v18 = v16;
        snprintf(s, 8u, "chain%d", v17);
        v19 = BUFX_strdup(s);
        json_object_set_new(v18, "name", v19);
        v20 = json_array();
        if ( v33 )
        {
          v21 = v15;
          do
          {
            v22 = *v21++;
            v44[0] = v22 * v7;
            v23 = json_integer((__int64)v44[0]);
            json_array_append_new(v20, v23);
          }
          while ( &v15[v33] != v21 );
        }
        ++v13;
        json_object_set_new(v18, "data", v20);
        json_array_append_new(v34, v18);
        v15 += 54;
      }
      while ( v40 > v13 );
    }
    json_object_set_new(v35, "series", v34);
    json_array_append_new(v39, v35);
    json_object_set_new(a1, "RATE", v39);
    if ( v40 > 0 )
    {
      free(ptr);
      free(v36);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw((char *)v44, 0x1000u, 0, "%s: input bad api param", "get_rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_rate",
      8,
      969,
      100,
      v44);
    return -2147483646;
  }
}
