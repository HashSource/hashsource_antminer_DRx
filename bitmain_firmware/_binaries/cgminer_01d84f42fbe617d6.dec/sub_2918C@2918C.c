int __fastcall sub_2918C(int a1, char *s, int a3)
{
  size_t v5; // r0
  signed int v6; // r10
  int v7; // r3
  int v8; // r5
  unsigned int v9; // r9
  _BYTE *v10; // r4
  int v11; // r8
  unsigned int v12; // r12
  int *v13; // r0
  _BYTE *v14; // r3
  ssize_t v15; // r0
  __int64 v16; // d16
  __int64 v18; // r2
  struct timeval timeout; // [sp+18h] [bp-8Ch] BYREF
  fd_set writefds; // [sp+20h] [bp-84h] BYREF
  _BYTE v22[4]; // [sp+A0h] [bp-4h] BYREF

  v5 = strlen(s);
  v6 = a3 + 1;
  v7 = *(_DWORD *)(a1 + 580);
  *(_WORD *)&s[v5] = 10;
  if ( v6 <= 0 )
  {
    v16 = 0;
    goto LABEL_11;
  }
  v8 = v7 + 1;
  v9 = 0;
  v10 = &v22[4 * (v7 / 32)];
  v11 = 1 << (v7 % 32);
  while ( 2 )
  {
    v12 = 0;
    timeout.tv_usec = 0;
    timeout.tv_sec = 1;
    while ( 1 )
    {
      if ( v12 <= 0x1F )
        goto LABEL_7;
      *((_DWORD *)v10 - 32) |= v11;
      if ( select(v8, 0, &writefds, 0, &timeout) > 0 )
        break;
      v13 = _errno_location();
      v12 = 0;
      if ( *v13 != 4 )
        return 1;
LABEL_7:
      v14 = &v22[4 * v12++];
      *((_DWORD *)v14 - 32) = 0;
    }
    v15 = send(*(_DWORD *)(a1 + 580), &s[v9], v6, 0x4000);
    if ( v15 >= 0 )
      goto LABEL_9;
    if ( *_errno_location() != 11 )
      return 2;
    v15 = 0;
LABEL_9:
    v6 -= v15;
    v9 += v15;
    if ( v6 > 0 )
      continue;
    break;
  }
  v16 = vshrd_n_s64(vdup_n_s32(v9).n64_i64[0], 0x20u);
LABEL_11:
  *(_QWORD *)(a1 + 496) += v16;
  v18 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 504) += v16;
  *(_QWORD *)(a1 + 488) = v18 + 1;
  return 0;
}
