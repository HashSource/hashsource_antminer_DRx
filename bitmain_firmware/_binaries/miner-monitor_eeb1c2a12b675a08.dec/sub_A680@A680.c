void __fastcall sub_A680(void *a1)
{
  _BYTE v1[4095]; // [sp+0h] [bp-1004h] BYREF

LABEL_1:
  while ( byte_1B2EC )
  {
    while ( 1 )
    {
      puts("next command!");
      if ( dword_1B394 == 1 )
      {
        puts("Web  Switch is OFF!");
        exit(1);
      }
      if ( !sub_E62C((int)&dword_1B3A8, byte_1D444) )
        break;
      printf("get a command head:%s!\n", byte_1D444);
      printf("get a command:%s!\n", &byte_1D444[3]);
      sub_E698(dword_1B3A8, unk_1B3AC, unk_1B3B0, sub_E75C);
      memcpy(v1, &unk_1D454, sizeof(v1));
      if ( !sub_F854(
              *(_DWORD *)byte_1D444,
              *(_DWORD *)&byte_1D444[4],
              *(_DWORD *)&byte_1D444[8],
              *(_DWORD *)&byte_1D444[12]) )
        goto LABEL_1;
      puts("after deal_cmd()");
      printf("get a command nonce:%s!\n", byte_1E44C);
      dword_1B2F4 = 0;
      sub_10EC0(byte_1D444, dword_1D420, dword_1D420);
      printf("new node:%s,%s==========\n", &byte_1D444[3], byte_1E44C);
      memcpy(v1, &unk_1D454, sizeof(v1));
      sub_E7F4(*(_DWORD *)byte_1D444, *(_DWORD *)&byte_1D444[4], *(_DWORD *)&byte_1D444[8], *(_DWORD *)&byte_1D444[12]);
      if ( !byte_1B2EC )
        return;
    }
    puts("queue empty1");
    sleep(1u);
  }
}
