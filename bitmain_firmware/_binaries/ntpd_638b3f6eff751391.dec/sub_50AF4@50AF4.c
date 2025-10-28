int *sub_50AF4()
{
  int *v0; // r4
  _DWORD *v1; // r3
  int v2; // r3
  int v3; // r2

  v0 = (int *)dword_C9BF0;
  if ( dword_C9BF0 )
  {
    v1 = *(_DWORD **)(dword_C9BF0 + 4);
    if ( v1 )
    {
      *v1 = *(_DWORD *)dword_C9BF0;
      v2 = *v0;
      if ( *v0 )
      {
LABEL_5:
        *(_DWORD *)(v2 + 4) = v0[1];
LABEL_6:
        v3 = dword_C9C00;
        *v0 = -1;
        v0[1] = -1;
        dword_C9C00 = v3 - 1;
        return v0;
      }
    }
    else
    {
      if ( dword_C9BF4 != dword_C9BF0 )
        off_7C9FC("recvbuff.c", 250, 2, "(full_recv_list).tail == (rbuf)");
      v2 = *(_DWORD *)dword_C9BF0;
      dword_C9BF4 = *(_DWORD *)dword_C9BF0;
      if ( dword_C9BF4 )
        goto LABEL_5;
    }
    if ( (int *)dword_C9BF0 != v0 )
      off_7C9FC("recvbuff.c", 250, 2, "(full_recv_list).head == (rbuf)");
    dword_C9BF0 = v0[1];
    goto LABEL_6;
  }
  dword_C9C00 = 0;
  return v0;
}
