int *__fastcall sub_49E90(int *result, int a2)
{
  unsigned __int8 *v2; // r5
  int v3; // r4
  int v4; // r1
  int v5; // r3
  _DWORD *v6; // r6
  int v7; // r5
  _DWORD *v8; // [sp+0h] [bp-14h] BYREF
  int v9; // [sp+4h] [bp-10h]
  int v10; // [sp+8h] [bp-Ch]
  int v11; // [sp+Ch] [bp-8h]

  v2 = *(unsigned __int8 **)(a2 + 24);
  v8 = 0;
  v3 = (int)result;
  v9 = 0;
  v11 = 0;
  v10 = 4;
  if ( !dword_C9AC8 )
  {
    if ( *result < 0x20000 || !result[30] )
    {
      fputs(off_7B9FC[0], (FILE *)stderr);
      exit(70);
    }
    if ( !v2 || (v4 = *v2) == 0 )
    {
      fputs(off_7B970[0], (FILE *)stderr);
      (*(void (__fastcall **)(int, int))(v3 + 84))(v3, 1);
      _assert_fail("0 == 1", "reset.c", 0x5Bu, "optionResetOpt");
    }
    v5 = v2[1];
    dword_C9AC8 = 1;
    if ( v5 )
    {
      if ( sub_42BB4((int)result, (char *)v2, &v8) )
      {
        fprintf((FILE *)stderr, off_7B928[0], *(_DWORD *)(v3 + 24), v2, v8, v9, v10, v11);
        (*(void (__fastcall **)(int, int))(v3 + 84))(v3, 1);
        _assert_fail("0 == 1", "reset.c", 0x74u, "optionResetOpt");
      }
    }
    else
    {
      if ( v4 == 42 )
      {
        v6 = (_DWORD *)result[17];
        v7 = result[26];
        while ( 1 )
        {
          --v7;
          result = (int *)sub_41CEC(v3, v6);
          if ( v7 <= 0 )
            break;
          v6 += 16;
        }
        goto LABEL_10;
      }
      if ( sub_41F8C((int)result, v4, &v8, 0) )
      {
        fprintf((FILE *)stderr, off_7B924[0], *(_DWORD *)(v3 + 24), *v2, v8, v9, v10, v11);
        (*(void (__fastcall **)(int, int))(v3 + 84))(v3, 1);
        _assert_fail("0 == 1", "reset.c", 0x6Cu, "optionResetOpt");
      }
    }
    result = (int *)sub_41CEC(v3, v8);
LABEL_10:
    dword_C9AC8 = 0;
  }
  return result;
}
