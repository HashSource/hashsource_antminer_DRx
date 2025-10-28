int __fastcall sub_E6B0(int a1, int a2, int a3)
{
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    snprintf(v7, 0x800u, "Thread %d being disabled", a2);
    sub_3F1C0(4, v7, 0);
  }
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 48) = 0;
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(v7, "Waiting on sem in miner thread");
    sub_3F1C0(7, v7, 0);
  }
  sub_347CC((sem_t *)(a1 + 16));
  if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    snprintf(v7, 0x800u, "Thread %d being re-enabled", a2);
    sub_3F1C0(4, v7, 0);
  }
  return (*(int (__fastcall **)(int))(a3 + 92))(a1);
}
