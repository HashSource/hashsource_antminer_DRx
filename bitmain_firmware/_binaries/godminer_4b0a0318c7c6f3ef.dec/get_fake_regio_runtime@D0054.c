int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int (**v4)(); // r0
  int v5; // r7
  int *v6; // r0
  int v7; // r4
  int v8; // lr
  int v9; // r12
  int v10; // r1
  int v11; // r2
  int v12; // r3

  if ( dword_1B4B30[a1] )
    return dword_1B4B30[a1];
  v3 = calloc(1u, 0x4A0u);
  v3[62] = a1;
  dword_1B4B30[a1] = v3;
  v4 = dev_ctrl((int)v3);
  ((void (__fastcall *)(int))v4[1])(a1);
  v5 = dword_1B4B30[a1];
  pthread_mutex_init((pthread_mutex_t *)(v5 + 920), 0);
  pthread_mutex_init((pthread_mutex_t *)(v5 + 944), 0);
  v6 = queue_new(1, 0);
  v7 = dword_1B4B30[a1];
  LOWORD(v8) = -12452;
  *(_DWORD *)(v5 + 884) = v6;
  HIWORD(v8) = (unsigned int)&loc_CD13C >> 16;
  LOWORD(v9) = -12244;
  LOWORD(v6) = -11916;
  LOWORD(v10) = -11724;
  LOWORD(v11) = -12132;
  HIWORD(v9) = (unsigned int)&loc_CD20C >> 16;
  HIWORD(v6) = (unsigned int)&loc_CD354 >> 16;
  HIWORD(v10) = (unsigned int)&loc_CD414 >> 16;
  *(_DWORD *)(v7 + 872) = *(_DWORD *)(v7 + 884);
  LOWORD(v12) = -11524;
  HIWORD(v11) = (unsigned int)&loc_CD27C >> 16;
  *(_DWORD *)(v7 + 268) = v8;
  HIWORD(v12) = (unsigned int)&loc_CD4DC >> 16;
  *(_DWORD *)(v7 + 276) = v6;
  *(_DWORD *)(v7 + 272) = v9;
  *(_DWORD *)(v7 + 280) = v10;
  *(_DWORD *)(v7 + 296) = v11;
  *(_DWORD *)(v7 + 316) = v12;
  *(_BYTE *)(v7 + 260) = 1;
  return v7;
}
