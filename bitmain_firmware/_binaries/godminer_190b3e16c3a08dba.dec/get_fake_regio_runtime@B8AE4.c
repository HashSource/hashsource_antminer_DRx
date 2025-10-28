int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int (**v4)(); // r0
  int v5; // r7
  __int64 v6; // r0
  int v7; // r4
  int v8; // lr
  int v9; // r12
  int v10; // r2
  int v11; // r3

  if ( dword_18CAA4[a1] )
    return dword_18CAA4[a1];
  v3 = calloc(1u, 0x3C8u);
  v3[55] = a1;
  dword_18CAA4[a1] = v3;
  v4 = dev_ctrl((int)v3);
  ((void (__fastcall *)(int))v4[1])(a1);
  v5 = dword_18CAA4[a1];
  pthread_mutex_init((pthread_mutex_t *)(v5 + 848), 0);
  pthread_mutex_init((pthread_mutex_t *)(v5 + 872), 0);
  LODWORD(v6) = queue_new(1, 0);
  v7 = dword_18CAA4[a1];
  LOWORD(v8) = 27632;
  *(_DWORD *)(v5 + 824) = v6;
  HIWORD(v8) = (unsigned int)&loc_B6CF0 >> 16;
  LOWORD(v9) = 27840;
  LOWORD(v6) = 28168;
  WORD2(v6) = 28360;
  LOWORD(v10) = 27952;
  HIWORD(v9) = (unsigned int)&loc_B6DC0 >> 16;
  WORD1(v6) = (unsigned int)&loc_B6F08 >> 16;
  HIWORD(v6) = (unsigned int)&loc_B6FC8 >> 16;
  *(_DWORD *)(v7 + 816) = *(_DWORD *)(v7 + 824);
  LOWORD(v11) = 28560;
  HIWORD(v10) = (unsigned int)&loc_B6E30 >> 16;
  *(_DWORD *)(v7 + 232) = v8;
  HIWORD(v11) = (unsigned int)&loc_B7090 >> 16;
  *(_QWORD *)(v7 + 240) = v6;
  *(_DWORD *)(v7 + 236) = v9;
  *(_DWORD *)(v7 + 260) = v10;
  *(_DWORD *)(v7 + 268) = v11;
  *(_BYTE *)(v7 + 228) = 1;
  return v7;
}
