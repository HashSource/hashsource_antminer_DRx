int __fastcall sub_17300(int a1)
{
  int v1; // r8
  int v3; // r7
  char v5[16]; // [sp+0h] [bp-810h] BYREF
  char v6[2048]; // [sp+10h] [bp-800h] BYREF

  v1 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(v1 + 4);
  snprintf(v5, 0x10u, "%d/Miner", *(_DWORD *)a1);
  sub_2D764(v5);
  sub_172A8(a1);
  if ( (*(int (__fastcall **)(int))(v3 + 52))(a1) )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      strcpy(v6, "Waiting on sem in miner thread");
      sub_343C4(7, v6, 0);
    }
    sub_2D870((sem_t *)(a1 + 16));
    *(_DWORD *)(v1 + 232) = time(0);
    (*(void (__fastcall **)(int))(v3 + 60))(a1);
    (*(void (__fastcall **)(int))(v3 + 88))(a1);
    return 0;
  }
  else
  {
    sub_2D53C(v1, 0);
    return 0;
  }
}
