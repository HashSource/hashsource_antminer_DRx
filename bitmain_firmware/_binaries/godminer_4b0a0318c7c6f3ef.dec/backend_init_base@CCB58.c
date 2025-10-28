int __fastcall backend_init_base(int a1)
{
  int (**v2)(); // r0
  int v3; // r0
  int (*v4)(); // r3
  int v5; // r0
  int (*v6)(); // r3
  signed int v7; // r6
  void *v8; // r0
  int v9; // r1
  char *v10; // r0
  int v11; // r5
  signed int v12; // r7
  size_t v13; // r2
  int v14; // r3
  bool v15; // zf
  void (__fastcall *v16)(int); // r3
  void *(*v17)(void *); // r2
  void *(*v18)(void *); // r2
  void *(*v19)(void *); // r2

  v2 = dev_ctrl(a1);
  v3 = ((int (__fastcall *)(_DWORD))v2[15])(*(_DWORD *)(a1 + 248));
  *(_DWORD *)(a1 + 256) = v3;
  v4 = dev_ctrl(v3)[14];
  v5 = ((int (__fastcall *)(_DWORD))v4)(*(_DWORD *)(a1 + 248));
  v6 = dev_ctrl(v5)[1];
  ((void (__fastcall *)(_DWORD))v6)(*(_DWORD *)(a1 + 248));
  *(_DWORD *)(a1 + 872) = queue_new(1, 0);
  *(_DWORD *)(a1 + 880) = queue_new(*(_DWORD *)(a1 + 848), 0);
  *(_DWORD *)(a1 + 884) = queue_new(1, 0);
  *(_DWORD *)(a1 + 868) = queue_new(*(_DWORD *)(a1 + 844), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 920), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 944), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 968), 0);
  v7 = *(_DWORD *)(a1 + 352);
  *(_DWORD *)(a1 + 504) = calloc(v7, 1u);
  v8 = calloc(v7, 4u);
  v9 = *(_DWORD *)(a1 + 852);
  *(_DWORD *)(a1 + 496) = v8;
  *(_DWORD *)(a1 + 500) = calloc(v7, 2 * v9);
  *(_DWORD *)(a1 + 472) = calloc(v7, 0x30u);
  v10 = (char *)calloc(v7, 0x2Cu);
  *(_DWORD *)(a1 + 544) = v10;
  if ( v7 > 0 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      ++v12;
      pthread_mutex_init((pthread_mutex_t *)&v10[v11 + 20], 0);
      v7 = *(_DWORD *)(a1 + 352);
      v11 += 44;
      if ( v7 <= v12 )
        break;
      v10 = *(char **)(a1 + 544);
    }
  }
  v13 = *(_DWORD *)(a1 + 864);
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 444) = -1;
  *(_BYTE *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 508) = 0;
  *(_DWORD *)(a1 + 528) = 0;
  if ( v13 )
    *(_DWORD *)(a1 + 532) = calloc(v7, v13);
  *(_DWORD *)(a1 + 536) = 0;
  memset((void *)(a1 + 584), 0, 0x100u);
  v14 = *(_DWORD *)(a1 + 888);
  *(_BYTE *)(a1 + 912) = 0;
  *(_BYTE *)(a1 + 913) = 0;
  v15 = v14 == 0;
  v16 = *(void (__fastcall **)(int))(a1 + 80);
  if ( v15 )
    *(_DWORD *)(a1 + 888) = a1;
  *(_BYTE *)(a1 + 914) = 0;
  *(_BYTE *)(a1 + 915) = 0;
  *(_BYTE *)(a1 + 916) = 0;
  if ( v16 )
    v16(a1);
  LOWORD(v17) = -19120;
  HIWORD(v17) = (unsigned int)&loc_CB730 >> 16;
  pthread_create((pthread_t *)(a1 + 900), 0, v17, (void *)a1);
  LOWORD(v18) = -17852;
  HIWORD(v18) = (unsigned int)&loc_CBC24 >> 16;
  pthread_create((pthread_t *)(a1 + 892), 0, v18, (void *)a1);
  LOWORD(v19) = -13832;
  HIWORD(v19) = (unsigned int)&loc_CCBD8 >> 16;
  pthread_create((pthread_t *)(a1 + 908), 0, v19, (void *)a1);
  *(_BYTE *)(a1 + 260) = 1;
  return 0;
}
