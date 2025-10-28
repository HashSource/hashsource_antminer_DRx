int *sub_EBB0()
{
  int *v0; // r4
  _DWORD *v1; // r3
  int v2; // r3
  int v3; // r2

  v0 = (int *)dword_23FE8;
  if ( dword_23FE8 )
  {
    v1 = *(_DWORD **)(dword_23FE8 + 4);
    if ( v1 )
    {
      *v1 = *(_DWORD *)dword_23FE8;
      v2 = *v0;
      if ( *v0 )
      {
LABEL_5:
        *(_DWORD *)(v2 + 4) = v0[1];
LABEL_6:
        v3 = dword_23FF8;
        *v0 = -1;
        v0[1] = -1;
        dword_23FF8 = v3 - 1;
        return v0;
      }
    }
    else
    {
      if ( dword_23FEC != dword_23FE8 )
        off_21DCC("recvbuff.c", 250, 2, "(full_recv_list).tail == (rbuf)");
      v2 = *(_DWORD *)dword_23FE8;
      dword_23FEC = *(_DWORD *)dword_23FE8;
      if ( dword_23FEC )
        goto LABEL_5;
    }
    if ( (int *)dword_23FE8 != v0 )
      off_21DCC("recvbuff.c", 250, 2, "(full_recv_list).head == (rbuf)");
    dword_23FE8 = v0[1];
    goto LABEL_6;
  }
  dword_23FF8 = 0;
  return v0;
}
