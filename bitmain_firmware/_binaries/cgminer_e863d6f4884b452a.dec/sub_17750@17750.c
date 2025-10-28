int __fastcall sub_17750(int a1, int a2, int (__fastcall **a3)(int))
{
  int v6; // r3
  char v8[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(v8, 0x800u, "Thread %d being disabled", a2);
    sub_343C4(4, v8, 0);
  }
  v6 = (unsigned __int8)byte_6FA71;
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 48) = 0;
  if ( v6 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(v8, "Waiting on sem in miner thread");
    sub_343C4(7, v8, 0);
  }
  sub_2D870((sem_t *)(a1 + 16));
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(v8, 0x800u, "Thread %d being re-enabled", a2);
    sub_343C4(4, v8, 0);
  }
  return (*a3)(a1);
}
