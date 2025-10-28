int __fastcall main(int a1, char **a2, char **a3)
{
  unsigned int v4; // r0
  unsigned int v5; // r0
  int v6; // r0
  _UNKNOWN **v7; // r1
  int v9; // r0
  _BYTE v10[4099]; // [sp+0h] [bp-1008h] BYREF

  v4 = sub_B088(a1, a2, a3);
  if ( v4 )
  {
    if ( a1 > 1 )
      v4 = sleep(0x28u);
    sub_AFE8(v4);
    sub_E444(&unk_1B3A8, &unk_1D410);
    sub_10D34(dword_1D420);
    if ( pthread_create(&newthread, 0, start_routine, 0) )
      goto LABEL_19;
    v5 = sleep(1u);
    if ( dword_1B394 == 1 )
    {
      puts("Web  Switch is OFF!");
      exit(1);
    }
    while ( sub_AA14(v5) == -1 )
      v5 = sleep(0x1Eu);
    v6 = sub_A938();
    v7 = &off_1D434;
    if ( v6 == -1 )
    {
      off_1D434 = sub_10CD4;
      off_1D43C = sub_10D04;
      puts("encrypt connect failed.");
      v9 = close(dword_258BC);
      sub_AA14(v9);
    }
    else
    {
      off_1D434 = sub_10C84;
      off_1D43C = sub_10CAC;
    }
    sub_AE1C(30, v7);
    signal(10, handler);
    signal(12, handler);
    signal(2, sub_A3EC);
    signal(15, sub_A3EC);
    dword_1B398 = pthread_create(&dword_1F464, 0, sub_A680, 0);
    if ( dword_1B398 || (dword_1B398 = pthread_create(&dword_1C3CC, 0, sub_A514, 0)) != 0 )
    {
LABEL_19:
      puts("Create pthread error!");
    }
    else
    {
      while ( byte_1B2EC )
      {
        if ( (unk_1B3B0 + 1) % 20 == unk_1B3AC || (unk_1D418 + 1) % 20 == unk_1D414 )
        {
          puts("the queue is full");
          sleep(5u);
        }
        else if ( sub_ADB0() == -1 )
        {
          puts("Bad Package REV!");
          sleep(1u);
        }
        else if ( byte_1E457 == 102 )
        {
          puts("this is respond ");
          memcpy(v10, &unk_1E460, sizeof(v10));
          sub_E598(&unk_1D410, *(_DWORD *)&byte_1E454, unk_1E458, *(_DWORD *)&algn_1E45A[2]);
        }
        else
        {
          puts("this is command");
          memcpy(v10, &unk_1E460, sizeof(v10));
          sub_E598(&unk_1B3A8, *(_DWORD *)&byte_1E454, unk_1E458, *(_DWORD *)&algn_1E45A[2]);
        }
      }
    }
  }
  else
  {
    puts("process exist!");
  }
  return 1;
}
