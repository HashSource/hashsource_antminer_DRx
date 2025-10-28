ssize_t __fastcall sub_3E86C(int a1)
{
  int v2; // r6
  _BYTE *v3; // r4
  int v4; // r3
  char v5; // r12
  ssize_t result; // r0
  char v7; // r1
  char v8; // r2
  _BYTE buf[5]; // [sp+7h] [bp-5h] BYREF

  v2 = *(_DWORD *)(a1 + 60);
  v3 = *(_BYTE **)(v2 + 28);
  if ( dword_7CF4C > 2 )
    puts("arc: arc_event_handler() called.");
  v5 = v3[29];
  result = (unsigned __int8)v3[30];
  v7 = v3[31];
  v8 = v3[32];
  buf[0] = v3[28];
  v4 = buf[0];
  v3[28] = v5;
  v3[29] = result;
  v3[30] = v7;
  v3[31] = v8;
  if ( v4 )
  {
    result = write(*(_DWORD *)(v2 + 20), buf, 1u);
    if ( result == 1 )
    {
      if ( dword_7CF4C )
        result = printf("arc: sent `%2.2x', fd %d.\n", buf[0], *(_DWORD *)(v2 + 20));
    }
    else
    {
      result = sub_4FE78(5, "ARCRON: write to fd %d failed", *(_DWORD *)(v2 + 20));
    }
  }
  *(_DWORD *)(a1 + 524) = dword_CB548 + 2;
  return result;
}
