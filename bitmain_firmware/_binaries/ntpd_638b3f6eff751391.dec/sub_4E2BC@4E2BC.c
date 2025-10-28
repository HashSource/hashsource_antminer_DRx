void *sub_4E2BC()
{
  int v0; // r10
  int v1; // r4
  int *v2; // r5
  int v3; // r0
  int v4; // r2
  void *result; // r0
  int *v6; // [sp+4h] [bp-8h]

  v0 = 0;
  v6 = &dword_CB750;
  do
  {
    v1 = v6[1];
    ++v6;
    v2 = &dword_CB754[v0];
LABEL_3:
    if ( v1 )
    {
      while ( *(_DWORD *)(v1 + 68) <= 0xFFFFu )
      {
        if ( (*(_WORD *)(v1 + 76) & 1) != 0 )
        {
          v2 = (int *)v1;
          result = memset((void *)(v1 + 4), 0, 0x40u);
          *(_DWORD *)(v1 + 80) = 0;
          *(_DWORD *)(v1 + 84) = 0;
          v1 = *(_DWORD *)v1;
          goto LABEL_3;
        }
        v3 = dword_CB744;
        v4 = dword_CB860;
        *v2 = *(_DWORD *)v1;
        result = (void *)(v3 - 1);
        dword_CB744 = (int)result;
        *(_DWORD *)v1 = dword_CB858;
        dword_CB858 = v1;
        v1 = *v2;
        dword_CB860 = v4 + 1;
        if ( !v1 )
          break;
      }
    }
    ++v0;
  }
  while ( v0 != 64 );
  return result;
}
