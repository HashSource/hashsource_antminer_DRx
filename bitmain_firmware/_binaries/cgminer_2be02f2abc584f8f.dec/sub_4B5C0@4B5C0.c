void __noreturn sub_4B5C0()
{
  int v0; // r10
  int v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r5
  int v6; // [sp+0h] [bp-Ch] BYREF
  _BYTE v7[5]; // [sp+7h] [bp-5h] BYREF

  while ( 1 )
  {
    dword_93C58 = (unsigned __int8)dword_93C58;
    dword_93C5C = 0;
    byte_93C60 = 0;
    v0 = 2;
    do
    {
      v5 = 6;
      do
      {
        v6 = 0;
        v7[0] = 0;
        if ( sub_4B598(v7, &v6) != -1 )
        {
          v1 = v7[0];
          v2 = v6;
          v3 = 120 * v6;
          v4 = 120 * v6;
          *((_DWORD *)&unk_93504 + v7[0] + 457) = 120 * v6;
          if ( v2 )
          {
            if ( !*((_BYTE *)&unk_93504 + v1 + 1798) )
            {
              *((_BYTE *)&unk_93504 + v1 + 1798) = 1;
              ++byte_93C57;
              dword_93518 |= 1 << v1;
            }
          }
          else if ( *((_BYTE *)&unk_93504 + v1 + 1798) == 1 )
          {
            *((_BYTE *)&unk_93504 + v1 + 1798) = 0;
            --byte_93C57;
            dword_93518 &= ~(1 << v1);
          }
          if ( v3 > *(int *)((char *)&dword_93C58 + 1) )
            *(int *)((char *)&dword_93C58 + 1) = v4;
          if ( v3 < *(int *)((char *)&dword_93C5C + 1) && v3 || !*(int *)((char *)&dword_93C5C + 1) )
            *(int *)((char *)&dword_93C5C + 1) = v4;
        }
        sub_2FF20();
        --v5;
      }
      while ( v5 );
      --v0;
    }
    while ( v0 );
    sleep(1u);
  }
}
