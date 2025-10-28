int __fastcall sub_3751C(int a1)
{
  __int16 *v2; // r5
  int v3; // r2
  int *v5; // r0
  int v6; // r4
  char *v7; // r0
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v2 = *(__int16 **)(a1 + 28);
  if ( ioctl(*(_DWORD *)(a1 + 20), 0x5415u, v8) < 0 )
  {
    if ( dword_7CF4C )
    {
      v5 = _errno_location();
      v6 = *v2;
      v7 = strerror(*v5);
      printf("Palisade HW_poll: unit %d: GET %s\n", v6, v7);
    }
    sub_4FE78(3, "Palisade(%d) HW_poll: ioctl(fd,GET): %m", *v2);
    return -1;
  }
  else
  {
    v3 = *((_DWORD *)v2 + 35);
    v8[0] |= 4u;
    if ( v3 == 3 )
      write(*(_DWORD *)(a1 + 20), &unk_665CC, 1u);
    if ( ioctl(*(_DWORD *)(a1 + 20), 0x5418u, v8) < 0 )
    {
      if ( dword_7CF4C )
        printf("Palisade HW_poll: unit %d: SET \n", *v2);
      sub_4FE78(3, "Palisade(%d) HW_poll: ioctl(fd, SET, RTS_on): %m", *v2);
      return -1;
    }
    else
    {
      v8[0] &= ~4u;
      sub_4CBA8(a1 + 216);
      if ( ioctl(*(_DWORD *)(a1 + 20), 0x5418u, v8) == -1 )
      {
        if ( dword_7CF4C )
          printf("Palisade HW_poll: unit %d: UNSET \n", *v2);
        sub_4FE78(3, "Palisade(%d) HW_poll: ioctl(fd, UNSET, RTS_off): %m", *v2);
        return -1;
      }
      else
      {
        return 0;
      }
    }
  }
}
