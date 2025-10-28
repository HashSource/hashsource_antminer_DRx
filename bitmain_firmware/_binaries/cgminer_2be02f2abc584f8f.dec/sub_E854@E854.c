int __fastcall sub_E854(int a1)
{
  int v2; // r6
  int v3; // r5
  char v5[2048]; // [sp+0h] [bp-810h] BYREF
  char s[16]; // [sp+800h] [bp-10h] BYREF

  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(v2 + 4);
  snprintf(s, 0x10u, "%d/Miner", *(_DWORD *)a1);
  sub_34604(s);
  sub_C64C(a1);
  if ( (*(int (__fastcall **)(int))(v3 + 52))(a1) )
  {
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      strcpy(v5, "Waiting on sem in miner thread");
      sub_3F1C0(7, v5, 0);
    }
    sub_347CC((sem_t *)(a1 + 16));
    *(_DWORD *)(v2 + 232) = time(0);
    (*(void (__fastcall **)(int))(v3 + 60))(a1);
    (*(void (__fastcall **)(int))(v3 + 88))(a1);
  }
  else
  {
    sub_342D4(v2, 0);
  }
  return 0;
}
