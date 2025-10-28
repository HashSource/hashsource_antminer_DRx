int __fastcall sub_E878(int a1, int a2, int a3)
{
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(v7, 0x800u, "Thread %d being disabled", a2);
    sub_3F178(4, v7, 0);
  }
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 48) = 0;
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(v7, "Waiting on sem in miner thread");
    sub_3F178(7, v7, 0);
  }
  sub_3484C((sem_t *)(a1 + 16));
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(v7, 0x800u, "Thread %d being re-enabled", a2);
    sub_3F178(4, v7, 0);
  }
  return (*(int (__fastcall **)(int))(a3 + 92))(a1);
}
