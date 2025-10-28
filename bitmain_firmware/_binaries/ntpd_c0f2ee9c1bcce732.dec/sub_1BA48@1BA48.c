int *__fastcall sub_1BA48(unsigned __int16 *a1, int a2)
{
  const void *v2; // r10
  _DWORD *v3; // r4
  int *v6; // r5
  int v8; // r3
  int v9; // r3

  v2 = a1 + 4;
  v3 = &unk_CAB10;
  v6 = (int *)&unk_CAADC;
  do
  {
    if ( (*((_BYTE *)v3 - 2) & 1) != 0 && a1[1] == *((unsigned __int16 *)v3 - 25) )
    {
      v8 = *((unsigned __int16 *)v3 - 26);
      if ( v8 == *a1 )
      {
        if ( v8 == 2 )
        {
          v9 = *((_DWORD *)a1 + 1) == *(v3 - 12);
        }
        else
        {
          if ( memcmp(v2, v6 + 2, 0x10u) )
            goto LABEL_4;
          v9 = *((_DWORD *)a1 + 6) - *(v3 - 7) + (*((_DWORD *)a1 + 6) == *(v3 - 7)) + *(v3 - 7) - *((_DWORD *)a1 + 6);
        }
        if ( v9 && *(v3 - 6) == a2 )
          return v6;
      }
    }
LABEL_4:
    v6 += 13;
    v3 += 13;
  }
  while ( v6 < &dword_CAB78 );
  return 0;
}
