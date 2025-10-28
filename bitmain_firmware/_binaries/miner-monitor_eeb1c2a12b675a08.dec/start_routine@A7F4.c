void *__fastcall start_routine(void *a1)
{
  _BYTE *v1; // r3
  _BYTE v3[16]; // [sp+0h] [bp-10h] BYREF

  while ( byte_1B2EC )
  {
    v1 = (_BYTE *)sub_F990(off_1B2F0, "api-switch", v3);
    if ( *v1 == 111 && v1[1] == 102 && v1[2] == 102 && !v1[3] )
      dword_1B394 = 1;
    printf("key_switch = %s\n", v3);
    sleep(0xFu);
  }
  puts("will bi exited###################");
  return 0;
}
