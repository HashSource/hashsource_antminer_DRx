void __fastcall sub_A514(void *a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r3
  _BYTE v4[4095]; // [sp+0h] [bp-1004h] BYREF

  while ( byte_1B2EC )
  {
    while ( sub_E7D8(&dword_1D410) )
    {
      dword_1D41C = 0;
      if ( sub_E62C((int)&dword_1D410, &unk_1B3B8) )
      {
        v1 = sub_E698(dword_1D410, unk_1D414, unk_1D418, sub_E75C);
        sub_EB78(v1);
        printf("response node:%s,%s----------\n", &byte_1B3BB, byte_1C3C0);
        v2 = sub_10D90(&unk_1B3B8, dword_1D420);
        if ( !v2 )
        {
          puts("no cmd for responding!");
          exit(1);
        }
        v3 = *(_DWORD *)v2;
        if ( *(_BYTE *)(*(_DWORD *)v2 + 3) == 48 && *(_BYTE *)(v3 + 4) == 49 && !*(_BYTE *)(v3 + 5) )
          sub_FC80(off_1B2F0, 111547);
        printf("Delete node:%s,%s----------\n", &byte_1B3BB, byte_1C3C0);
        sub_10E24(&unk_1B3B8, dword_1D420);
        memcpy(v4, &unk_1B3C8, sizeof(v4));
        sub_E7F4(unk_1B3B8, *(_DWORD *)&byte_1B3BC, unk_1B3C0, unk_1B3C4);
      }
      else
      {
        puts("respond queue  empty");
      }
      dword_1B2F4 = 0;
      if ( !byte_1B2EC )
        return;
    }
  }
}
