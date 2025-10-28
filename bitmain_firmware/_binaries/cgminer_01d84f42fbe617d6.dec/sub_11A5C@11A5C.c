int __fastcall sub_11A5C(int a1)
{
  int v1; // r6
  int v3; // r5
  int v4; // r1
  int v5; // r2
  char v7[16]; // [sp+0h] [bp-810h] BYREF
  char v8[2048]; // [sp+10h] [bp-800h] BYREF

  v1 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(v1 + 4);
  snprintf(v7, 0x10u, "%d/Miner", *(_DWORD *)a1);
  sub_2F02C(v7);
  sub_F808(a1, v4, v5);
  if ( (*(int (__fastcall **)(int))(v3 + 52))(a1) )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      strcpy(v8, "Waiting on sem in miner thread");
      sub_38438(7, v8, 0);
    }
    sub_2F1F8((sem_t *)(a1 + 16));
    *(_DWORD *)(v1 + 232) = time(0);
    (*(void (__fastcall **)(int))(v3 + 60))(a1);
    (*(void (__fastcall **)(int))(v3 + 88))(a1);
  }
  else
  {
    sub_2ED00(v1);
  }
  return 0;
}
