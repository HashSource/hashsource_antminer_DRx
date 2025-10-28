int __fastcall stratum_handle_response_zec(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r5
  int v6; // r0
  char *v7; // r1
  int *v8; // r6
  int v9; // r0
  char *v10; // r1
  _DWORD *v11; // r7
  _DWORD *v12; // r0
  _BOOL4 v13; // r3
  _BOOL4 v14; // r4
  int v15; // r3
  _DWORD *v16; // r3
  int v17; // r1
  int v18; // r6
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  int v23; // r3
  char *v24; // r0
  int v25; // r3
  _DWORD *v26; // r3
  int v27; // r1
  _DWORD *v28; // r0
  char *v29; // r0
  char v30[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v31[160]; // [sp+70h] [bp-10A0h] BYREF
  char v32[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v30);
  v5 = v4;
  if ( v4 )
  {
    v6 = json_object_get(v4, "result");
    LOWORD(v7) = 916;
    v8 = (int *)v6;
    HIWORD(v7) = (unsigned int)"/2.0.0\", null]}" >> 16;
    v9 = json_object_get(v5, v7);
    LOWORD(v10) = 1404;
    v11 = (_DWORD *)v9;
    HIWORD(v10) = (unsigned int)"work->private" >> 16;
    v12 = (_DWORD *)json_object_get(v5, v10);
    v13 = v11 == 0;
    if ( !v8 )
      v13 = 1;
    if ( v12 )
      v14 = v13;
    else
      v14 = 1;
    if ( v14 || *v12 != 3 )
    {
      V_LOCK();
      LOWORD(v15) = 18340;
      HIWORD(v15) = (unsigned int)&unk_137124 >> 16;
      logfmt_raw(v32, 0x1000u, 0, v15, "stratum_handle_response_zec");
      V_UNLOCK();
      LOWORD(v16) = -12376;
      HIWORD(v16) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v17) = 17856;
      HIWORD(v17) = (unsigned int)&unk_136F40 >> 16;
      v18 = 0;
      zlog(*v16, v17, 164, "stratum_handle_response_zec", 27, 279, 20, v32);
    }
    else
    {
      v23 = *v8;
      v18 = *(unsigned __int8 *)(a3 + 1656);
      if ( v23 == 5 )
        v14 = *v11 == 7;
      if ( *(_BYTE *)(a3 + 1656) )
      {
        v24 = (char *)json_string_value(v11);
        share_result(v14, 0, v24, (double *)a3);
      }
      else
      {
        if ( json_integer_value((int)v12) >= 3 )
        {
          v28 = json_array_get(v11, 1u);
          v29 = (char *)json_string_value(v28);
          share_result(v14, 0, v29, (double *)a3);
        }
        v18 = 1;
      }
    }
    if ( *((_DWORD *)v5 + 1) == -1 )
      return v18;
    v19 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v20 = __ldrex(v19);
      v21 = v20 - 1;
    }
    while ( __strex(v21, v19) );
    if ( v21 )
    {
      return v18;
    }
    else
    {
      json_delete(v5);
      return v18;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v25) = 10692;
    HIWORD(v25) = (unsigned int)"all backend runtimes have been poweroff." >> 16;
    logfmt_raw(v32, 0x1000u, 0, v25, *(_DWORD *)v30, v31);
    V_UNLOCK();
    LOWORD(v26) = -12376;
    HIWORD(v26) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v27) = 17856;
    HIWORD(v27) = (unsigned int)&unk_136F40 >> 16;
    zlog(*v26, v27, 164, "stratum_handle_response_zec", 27, 269, 40, v32);
    return 0;
  }
}
