int **__fastcall sub_21500(unsigned __int16 *a1, int ***a2, int a3, char a4)
{
  int **v6; // r4
  int v7; // r5
  int v8; // r10
  int v9; // r3
  int v10; // r3
  int v12; // r0
  char v13; // [sp+4h] [bp-8h]

  if ( a2 )
  {
    v6 = *a2;
  }
  else
  {
    v13 = a4;
    v12 = sub_2E254(a1);
    a4 = v13;
    v6 = (int **)dword_CB23C[v12];
  }
  if ( v6 )
  {
    v7 = a1[1];
    v8 = a4 & 0x20;
    do
    {
      if ( *((unsigned __int16 *)v6 + 7) != v7 )
        goto LABEL_6;
      v9 = *((unsigned __int16 *)v6 + 6);
      if ( v9 != *a1 )
        goto LABEL_6;
      if ( v9 == 2 )
      {
        v10 = *((_DWORD *)a1 + 1) == (_DWORD)v6[4];
      }
      else
      {
        if ( memcmp(a1 + 4, v6 + 5, 0x10u) )
          goto LABEL_6;
        v10 = (int)v6[9]
            + (*((_DWORD *)a1 + 6) == (_DWORD)v6[9])
            - *((_DWORD *)a1 + 6)
            + *((_DWORD *)a1 + 6)
            - (_DWORD)v6[9];
      }
      if ( v10 && (a3 == -1 || *((unsigned __int8 *)v6 + 47) == a3 || ((_BYTE)v6[14] & 0x20) != 0 && v8) )
        return v6;
LABEL_6:
      v6 = (int **)*v6;
    }
    while ( v6 );
  }
  return v6;
}
