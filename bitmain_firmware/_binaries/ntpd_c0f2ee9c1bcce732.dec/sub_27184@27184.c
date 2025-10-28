int __fastcall sub_27184(int a1)
{
  unsigned int v2; // r1
  const char *v3; // r0
  char v5; // r6
  int (__fastcall **v6)(int, int); // r8
  int v7; // r10
  int v8; // r7
  int v9; // r12
  int v10; // r3

  if ( *(_WORD *)(a1 + 12) == 2 && (v2 = bswap32(*(_DWORD *)(a1 + 16)), HIWORD(v2) << 16 == 2139029504) )
  {
    v5 = BYTE1(v2);
    if ( (unsigned __int8)byte_7A600 > (unsigned int)BYTE1(v2)
      && (v6 = (int (__fastcall **)(int, int))*(&off_65B1C + BYTE1(v2)), *v6) )
    {
      v7 = (unsigned __int8)v2;
      v8 = sub_4F524(776);
      memset((void *)v8, 0, 0x308u);
      v9 = *(_DWORD *)(a1 + 52);
      v10 = dword_CB548;
      *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 50);
      *(_BYTE *)(a1 + 67) = 3;
      *(_BYTE *)(a1 + 65) = v7;
      *(_BYTE *)(a1 + 64) = v5;
      *(_BYTE *)(a1 + 69) = 0;
      *(_DWORD *)(a1 + 60) = v8;
      *(_DWORD *)(a1 + 52) = v9 | 8;
      *(_BYTE *)(v8 + 35) = v5;
      *(_DWORD *)(v8 + 756) = v10;
      if ( *(_BYTE *)(a1 + 47) == 1 )
        *(_BYTE *)(a1 + 68) = 2;
      else
        *(_BYTE *)(a1 + 68) = 4;
      if ( (*v6)(v7, a1) )
      {
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(v8 + 748);
        return 1;
      }
      else
      {
        sub_27130(a1);
        return 0;
      }
    }
    else
    {
      sub_4FE78(3, "refclock_newpeer: clock type %d invalid\n", BYTE1(v2));
      return 0;
    }
  }
  else
  {
    v3 = (const char *)sub_50CD0(a1 + 12);
    sub_4FE78(3, "refclock_newpeer: clock address %s invalid", v3);
    return 0;
  }
}
