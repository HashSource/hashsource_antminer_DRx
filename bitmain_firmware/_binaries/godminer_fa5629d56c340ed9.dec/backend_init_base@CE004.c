int __fastcall backend_init_base(int a1)
{
  int (**v2)(); // r0
  int v3; // r0
  int (**v4)(); // r0
  int v5; // r0
  int (**v6)(); // r0
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

  v2 = dev_ctrl(a1);
  v3 = ((int (__fastcall *)(_DWORD))v2[15])(*(_DWORD *)(a1 + 252));
  *(_DWORD *)(a1 + 260) = v3;
  v4 = dev_ctrl(v3);
  v5 = ((int (__fastcall *)(_DWORD))v4[14])(*(_DWORD *)(a1 + 252));
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[1])(*(_DWORD *)(a1 + 252));
  *(_DWORD *)(a1 + 880) = queue_new(1, 0);
  *(_DWORD *)(a1 + 888) = queue_new(*(_DWORD *)(a1 + 856), 0);
  *(_DWORD *)(a1 + 892) = queue_new(1, 0);
  *(_DWORD *)(a1 + 876) = queue_new(*(_DWORD *)(a1 + 852), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 928), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 952), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 976), 0);
  v7 = *(_DWORD *)(a1 + 356);
  *(_DWORD *)(a1 + 512) = calloc(v7, 1u);
  v8 = calloc(v7, 4u);
  v9 = *(_DWORD *)(a1 + 860);
  *(_DWORD *)(a1 + 504) = v8;
  *(_DWORD *)(a1 + 508) = calloc(v7, 2 * v9);
  *(_DWORD *)(a1 + 480) = calloc(v7, 0x30u);
  v10 = (char *)calloc(v7, 0x2Cu);
  *(_DWORD *)(a1 + 552) = v10;
  if ( v7 > 0 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      ++v12;
      pthread_mutex_init((pthread_mutex_t *)&v10[v11 + 20], 0);
      v7 = *(_DWORD *)(a1 + 356);
      v11 += 44;
      if ( v7 <= v12 )
        break;
      v10 = *(char **)(a1 + 552);
    }
  }
  v13 = *(_DWORD *)(a1 + 872);
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 496) = 0;
  *(_DWORD *)(a1 + 500) = 0;
  *(_DWORD *)(a1 + 452) = -1;
  *(_BYTE *)(a1 + 484) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 516) = 0;
  *(_DWORD *)(a1 + 536) = 0;
  if ( v13 )
    *(_DWORD *)(a1 + 540) = calloc(v7, v13);
  *(_DWORD *)(a1 + 544) = 0;
  memset((void *)(a1 + 592), 0, 0x100u);
  v14 = *(_DWORD *)(a1 + 896);
  *(_BYTE *)(a1 + 920) = 0;
  *(_BYTE *)(a1 + 921) = 0;
  v15 = v14 == 0;
  v16 = *(void (__fastcall **)(int))(a1 + 80);
  if ( v15 )
    *(_DWORD *)(a1 + 896) = a1;
  *(_BYTE *)(a1 + 922) = 0;
  *(_BYTE *)(a1 + 923) = 0;
  *(_BYTE *)(a1 + 924) = 0;
  if ( v16 )
    v16(a1);
  pthread_create((pthread_t *)(a1 + 908), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 900), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 916), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 264) = 1;
  return 0;
}
