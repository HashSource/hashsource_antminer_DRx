int __fastcall backend_init_base(int a1)
{
  int (**v2)(); // r0
  int v3; // r0
  int (**v4)(); // r0
  int v5; // r0
  int (**v6)(); // r0
  size_t v7; // r5
  void *v8; // r0
  int v9; // r1
  void *v10; // r0
  size_t v11; // r2
  int v12; // r3
  bool v13; // zf
  void (__fastcall *v14)(int); // r3
  void *(*v15)(void *); // r2
  void *(*v16)(void *); // r2
  void *(*v17)(void *); // r2

  v2 = dev_ctrl(a1);
  v3 = ((int (__fastcall *)(_DWORD))v2[12])(*(_DWORD *)(a1 + 220));
  *(_DWORD *)(a1 + 224) = v3;
  v4 = dev_ctrl(v3);
  v5 = ((int (__fastcall *)(_DWORD))v4[11])(*(_DWORD *)(a1 + 220));
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[1])(*(_DWORD *)(a1 + 220));
  *(_DWORD *)(a1 + 816) = queue_new(1, 0);
  *(_DWORD *)(a1 + 820) = queue_new(*(_DWORD *)(a1 + 792), 0);
  *(_DWORD *)(a1 + 824) = queue_new(1, 0);
  *(_DWORD *)(a1 + 812) = queue_new(*(_DWORD *)(a1 + 788), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 848), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 872), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 896), 0);
  v7 = *(_DWORD *)(a1 + 304);
  *(_DWORD *)(a1 + 456) = calloc(v7, 1u);
  v8 = calloc(v7, 4u);
  v9 = *(_DWORD *)(a1 + 796);
  *(_DWORD *)(a1 + 448) = v8;
  *(_DWORD *)(a1 + 452) = calloc(v7, 2 * v9);
  v10 = calloc(v7, 0x30u);
  v11 = *(_DWORD *)(a1 + 808);
  *(_DWORD *)(a1 + 424) = v10;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 396) = -1;
  *(_DWORD *)(a1 + 440) = 0;
  *(_DWORD *)(a1 + 444) = 0;
  *(_BYTE *)(a1 + 428) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 480) = 0;
  if ( v11 )
    *(_DWORD *)(a1 + 484) = calloc(v7, v11);
  *(_DWORD *)(a1 + 488) = 0;
  memset((void *)(a1 + 528), 0, 0x100u);
  v12 = *(_DWORD *)(a1 + 828);
  *(_BYTE *)(a1 + 844) = 0;
  *(_BYTE *)(a1 + 845) = 0;
  v13 = v12 == 0;
  v14 = *(void (__fastcall **)(int))(a1 + 76);
  if ( v13 )
    *(_DWORD *)(a1 + 828) = a1;
  *(_BYTE *)(a1 + 846) = 0;
  if ( v14 )
    v14(a1);
  LOWORD(v15) = 22912;
  HIWORD(v15) = (unsigned int)&loc_B5A80 >> 16;
  pthread_create((pthread_t *)(a1 + 836), 0, v15, (void *)a1);
  LOWORD(v16) = 24180;
  HIWORD(v16) = (unsigned int)&loc_B5F74 >> 16;
  pthread_create((pthread_t *)(a1 + 832), 0, v16, (void *)a1);
  LOWORD(v17) = 26336;
  HIWORD(v17) = (unsigned int)&loc_B67E0 >> 16;
  pthread_create((pthread_t *)(a1 + 840), 0, v17, (void *)a1);
  *(_BYTE *)(a1 + 228) = 1;
  return 0;
}
