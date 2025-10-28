int __fastcall sub_5557C(int a1, int a2)
{
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r10
  int v8; // r7
  int v9; // r8
  int v10; // r3
  int v11; // r0

  v4 = *(_DWORD *)(a1 + 20);
  if ( !v4 )
  {
    if ( !*(_BYTE *)(a1 + *(_DWORD *)(a1 + 16) + 8) )
    {
      v5 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
      v4 = v5;
      if ( v5 == -1 )
      {
        *(_DWORD *)(a1 + 20) = -1;
        return v4;
      }
      *(_BYTE *)(a1 + 8) = v5;
      *(_DWORD *)(a1 + 16) = 0;
      if ( (unsigned int)(v5 - 128) <= 0x7F )
      {
        v6 = sub_56EEC((unsigned __int8)v5);
        v7 = v6;
        if ( !v6 )
          goto LABEL_19;
        if ( v6 <= 1 )
          _assert_fail("count >= 2", "load.c", 0xAFu, "stream_get");
        v8 = a1;
        v9 = a1 - 1 + v6;
        do
        {
          *(_BYTE *)(v8 + 9) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
          ++v8;
        }
        while ( v8 != v9 );
        if ( !sub_56F70(a1 + 8, v7, 0) )
        {
LABEL_19:
          *(_DWORD *)(a1 + 20) = -2;
          sub_552A0(a2, (_DWORD *)a1, "unable to decode byte 0x%x", v4);
          return -2;
        }
        *(_BYTE *)(a1 + v7 + 8) = 0;
      }
      else
      {
        *(_BYTE *)(a1 + 9) = 0;
      }
    }
    v10 = *(_DWORD *)(a1 + 16);
    v11 = *(unsigned __int8 *)(a1 + v10 + 8);
    v4 = v11;
    *(_DWORD *)(a1 + 16) = v10 + 1;
    ++*(_DWORD *)(a1 + 36);
    if ( v11 == 10 )
    {
      ++*(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
    }
    else if ( sub_56EEC(v11) )
    {
      ++*(_DWORD *)(a1 + 28);
    }
  }
  return v4;
}
