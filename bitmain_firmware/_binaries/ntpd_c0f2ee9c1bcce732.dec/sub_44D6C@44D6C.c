char *__fastcall sub_44D6C(char *result)
{
  char *v1; // r6
  int v2; // r5
  int v3; // r7
  bool v4; // cc
  int v5; // r4
  int v6; // r5
  int v7; // r2
  int v8; // r3
  const char *v9; // r0
  unsigned int v10; // r10
  unsigned int v11; // r10

  v1 = result;
  v2 = *((_DWORD *)result + 25);
  v3 = *((_DWORD *)result + 20);
  v4 = v2 <= 0;
  v5 = *((_DWORD *)result + 17);
  v6 = v2 - 1;
  if ( !v4 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v5 + 16);
      v8 = (unsigned __int16)v7 >> 12;
      if ( v8 != 1 )
        break;
      if ( (v7 & 0x400) != 0 )
        *(_DWORD *)(*(_DWORD *)(v3 + 68) + ((v5 - *((_DWORD *)v1 + 17)) & 0xFFFFFFC0) + 28) = 0;
      if ( (v7 & 0x40) != 0 )
      {
        --v6;
        v9 = *(const char **)(v5 + 24);
        v10 = (v5 - *((_DWORD *)v1 + 17)) & 0xFFFFFFC0;
        v5 += 64;
        v11 = *(_DWORD *)(v3 + 68) + v10;
        result = sub_44D28(v9);
        *(_DWORD *)(v11 + 24) = result;
        if ( v6 == -1 )
          return result;
      }
      else
      {
LABEL_5:
        --v6;
        v5 += 64;
        if ( v6 == -1 )
          return result;
      }
    }
    if ( v8 == 6 )
      *(_DWORD *)(*(_DWORD *)(v3 + 68) + ((v5 - *((_DWORD *)v1 + 17)) & 0xFFFFFFC0) + 28) = 0;
    goto LABEL_5;
  }
  return result;
}
