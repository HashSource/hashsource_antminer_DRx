void sub_E884()
{
  _DWORD *v0; // r4
  int v1; // r3
  int v2; // r5
  _DWORD *v3; // r3
  _DWORD *v4; // r3
  int v5; // r4

  v0 = (_DWORD *)dword_23FE8;
  if ( dword_23FE8 )
  {
    while ( 1 )
    {
      v3 = (_DWORD *)v0[1];
      if ( v3 )
      {
        *v3 = *v0;
        v1 = *v0;
        if ( *v0 )
          goto LABEL_4;
      }
      else
      {
        if ( (_DWORD *)dword_23FEC != v0 )
          off_21DCC("recvbuff.c", 141, 2, "(full_recv_list).tail == (rbunlinked)");
        v1 = *v0;
        dword_23FEC = *v0;
        if ( dword_23FEC )
        {
LABEL_4:
          v2 = dword_23FE8;
          *(_DWORD *)(v1 + 4) = v0[1];
          goto LABEL_5;
        }
      }
      if ( (_DWORD *)dword_23FE8 != v0 )
        off_21DCC("recvbuff.c", 141, 2, "(full_recv_list).head == (rbunlinked)");
      v2 = v0[1];
      dword_23FE8 = v2;
LABEL_5:
      *v0 = -1;
      v0[1] = -1;
      free(v0);
      if ( !v2 )
        break;
      v0 = (_DWORD *)v2;
    }
  }
  v4 = (_DWORD *)dword_23FF0;
  if ( dword_23FF0 )
  {
    do
    {
      v5 = v4[1];
      v4[1] = 0;
      dword_23FF0 = v5;
      free(v4);
      v4 = (_DWORD *)v5;
    }
    while ( v5 );
  }
}
