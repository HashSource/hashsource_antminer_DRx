int __fastcall sub_EA1C(int a1)
{
  int v2; // r6
  int v3; // r5
  char v5[2048]; // [sp+0h] [bp-810h] BYREF
  char s[16]; // [sp+800h] [bp-10h] BYREF

  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(v2 + 4);
  snprintf(s, 0x10u, "%d/Miner", *(_DWORD *)a1);
  sub_34684(s);
  sub_C814(a1);
  if ( (*(int (__fastcall **)(int))(v3 + 52))(a1) )
  {
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      strcpy(v5, "Waiting on sem in miner thread");
      sub_3F178(7, v5, 0);
    }
    sub_3484C((sem_t *)(a1 + 16));
    *(_DWORD *)(v2 + 232) = time(0);
    (*(void (__fastcall **)(int))(v3 + 60))(a1);
    (*(void (__fastcall **)(int))(v3 + 88))(a1);
  }
  else
  {
    sub_34354(v2, 0);
  }
  return 0;
}
