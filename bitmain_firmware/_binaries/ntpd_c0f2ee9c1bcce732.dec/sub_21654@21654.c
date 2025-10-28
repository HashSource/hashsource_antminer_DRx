int sub_21654()
{
  _DWORD *v0; // r5
  int result; // r0
  int v2; // t1
  int v3; // r4

  v0 = &unk_CB238;
  do
  {
    v2 = v0[1];
    ++v0;
    result = v2;
    if ( v2 )
    {
      do
      {
        while ( 1 )
        {
          v3 = *(_DWORD *)result;
          if ( (*(_BYTE *)(result + 56) & 0x16) == 0 )
            break;
          result = *(_DWORD *)result;
          if ( !v3 )
            goto LABEL_7;
        }
        sub_2310C(result, "STEP");
        result = v3;
      }
      while ( v3 );
    }
LABEL_7:
    ;
  }
  while ( v0 != (_DWORD *)&unk_CB438 );
  if ( dword_7CF4C )
    return printf("clear_all: at %lu\n", dword_CB548);
  return result;
}
