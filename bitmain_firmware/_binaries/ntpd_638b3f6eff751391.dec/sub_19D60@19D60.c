void *__fastcall sub_19D60(void *src, size_t n, int a3)
{
  void *v5; // r6
  int v6; // r3
  void *result; // r0
  int v8; // r3
  int v9; // r12

  if ( a3 )
  {
    v5 = (void *)dword_7CF6C;
    v6 = 0;
  }
  else
  {
    dword_7CF70 = 1;
    v8 = dword_7CF6C;
    if ( (_UNKNOWN *)dword_7CF6C == &unk_7CF80 )
    {
      v5 = (void *)dword_7CF6C;
      v6 = 3;
    }
    else
    {
      v9 = dword_7D190;
      *(_BYTE *)dword_7CF6C = 44;
      dword_7CF6C = v8 + 1;
      dword_7D190 = v9 + 1;
      if ( v9 + 2 + n <= 0x47 )
      {
        v5 = (void *)(v8 + 2);
        dword_7D190 = v9 + 2;
        *(_BYTE *)(v8 + 1) = 32;
      }
      else
      {
        v5 = (void *)(v8 + 3);
        dword_7D190 = 0;
        *(_BYTE *)(v8 + 1) = 13;
        *(_BYTE *)(v8 + 2) = 10;
      }
      v6 = 3;
      dword_7CF6C = (int)v5;
    }
  }
  if ( dword_7D194 < (unsigned int)v5 + v6 + n )
  {
    sub_19AF8(32);
    v5 = (void *)dword_7CF6C;
  }
  result = memmove(v5, src, n);
  dword_7CF6C = (int)v5 + n;
  dword_7D190 += n;
  return result;
}
