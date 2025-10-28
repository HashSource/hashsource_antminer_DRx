void *sub_D018()
{
  int v0; // r10
  int v1; // r4
  int *v2; // r5
  int v3; // r0
  int v4; // r2
  void *result; // r0
  int *v6; // [sp+4h] [bp-8h]

  v0 = 0;
  v6 = &dword_240B8;
  do
  {
    v1 = v6[1];
    ++v6;
    v2 = &dword_240BC[v0];
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
        v3 = dword_240AC;
        v4 = dword_241C8;
        *v2 = *(_DWORD *)v1;
        result = (void *)(v3 - 1);
        dword_240AC = (int)result;
        *(_DWORD *)v1 = dword_241C0;
        dword_241C0 = v1;
        v1 = *v2;
        dword_241C8 = v4 + 1;
        if ( !v1 )
          break;
      }
    }
    ++v0;
  }
  while ( v0 != 64 );
  return result;
}
