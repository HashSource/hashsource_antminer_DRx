int __fastcall miner_monitor_init(int a1)
{
  int (**v1)(void); // r0
  int v2; // r0
  char *v3; // r5
  char *v4; // r8
  _BYTE *v5; // r0
  char *v6; // r9
  char *v7; // r4
  void *v8; // r0
  char *v9; // r2
  char *v10; // r3
  int v11; // r0

  v1 = (int (**)(void))dev_ctrl(a1);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = byte_1985E0;
    v4 = &byte_1985E0[216 * v2];
    do
    {
      v5 = calloc(0x100u, 1u);
      *v5 = 63;
      *((_DWORD *)v3 + 17) = v5;
      *((_DWORD *)v3 + 24) = calloc(0x10u, 4u);
      *((_DWORD *)v3 + 25) = calloc(0x10u, 4u);
      v6 = (char *)calloc(0x10u, 4u);
      *((_DWORD *)v3 + 1) = v6;
      v7 = (char *)calloc(0x10u, 4u);
      *(_DWORD *)v3 = v7;
      *((_DWORD *)v3 + 3) = calloc(0x10u, 4u);
      v8 = calloc(0x10u, 4u);
      v9 = v7 - 4;
      v10 = v6 - 4;
      *((_DWORD *)v3 + 2) = v8;
      *((_QWORD *)v3 + 26) = 0;
      *((_DWORD *)v3 + 50) = 0;
      do
      {
        *((_DWORD *)v10 + 1) = -64;
        v10 += 4;
        *((_DWORD *)v9 + 1) = -64;
        v9 += 4;
      }
      while ( v10 != v6 + 60 );
      v11 = (int)v3;
      v3 += 216;
      init_temp_senor_info(v11);
    }
    while ( v3 != v4 );
  }
  dword_19936C = (int)new_observable_subject();
  dword_199364 = (int)new_observable_subject();
  dword_199368 = (int)new_observable_subject();
  dword_199360 = (int)new_observable_subject();
  dword_199370 = (int)new_task_timer();
  add_new_task(dword_199370, (int)sub_62BF0, 1000);
  add_new_task(dword_199370, (int)sub_62B28, (int)"softreset_all_chip_dcr");
  add_new_task(dword_199370, (int)sub_6318C, 60000);
  dword_199374 = (int)new_task_timer();
  add_new_task(dword_199374, (int)sub_62A60, 5000);
  add_new_task(dword_199374, (int)sub_62998, 1000);
  return add_new_task(dword_199374, (int)task_check_miner_status, 1000);
}
