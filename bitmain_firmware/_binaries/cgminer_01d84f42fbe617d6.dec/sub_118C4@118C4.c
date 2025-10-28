int __fastcall sub_118C4(int a1, int a2, int a3)
{
  int v6; // r3
  char v8[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    snprintf(v8, 0x800u, "Thread %d being disabled", a2);
    sub_38438(4, v8, 0);
  }
  v6 = (unsigned __int8)byte_630C1;
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 48) = 0;
  if ( v6 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    strcpy(v8, "Waiting on sem in miner thread");
    sub_38438(7, v8, 0);
  }
  sub_2F1F8((sem_t *)(a1 + 16));
  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    snprintf(v8, 0x800u, "Thread %d being re-enabled", a2);
    sub_38438(4, v8, 0);
  }
  return (*(int (__fastcall **)(int))(a3 + 92))(a1);
}
