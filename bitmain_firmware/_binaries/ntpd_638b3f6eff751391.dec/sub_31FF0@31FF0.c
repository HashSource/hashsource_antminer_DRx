void __fastcall sub_31FF0(int a1, int a2)
{
  int v3; // r5
  int v4; // r1
  unsigned __int8 *v5; // r4
  int v6; // r2
  int v7; // r4
  int v8; // r5
  int v9; // r3
  int v10; // r1
  char *v11; // r3
  int v12; // r0
  size_t v13; // r4
  int v14; // r4
  int v15; // r3
  int v16; // r4
  char buf[8]; // [sp+Ch] [bp-8h] BYREF

  v3 = *(_DWORD *)(a2 + 60);
  v4 = *(_DWORD *)(v3 + 760);
  v5 = *(unsigned __int8 **)(v3 + 28);
  if ( v4 && !*((_DWORD *)v5 + 3) )
  {
    sub_27040(a2, 1);
    v4 = *(_DWORD *)(v3 + 760);
  }
  if ( dword_7CF4C )
  {
    printf("jjy_poll (refclock_jjy.c) : %ld\n", v4);
    v4 = *(_DWORD *)(v3 + 760);
  }
  *(_DWORD *)(v3 + 760) = v4 + 1;
  v6 = *v5;
  *((_DWORD *)v5 + 3) = 0;
  v5[8] = 1;
  *((_DWORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 21) = 0;
  switch ( v6 )
  {
    case 2:
      v16 = *(_DWORD *)(a2 + 60);
      if ( dword_7CF4C )
        puts("jjy_poll_cdex_jst2000 (refclock_jjy.c) : send '<ENQ>1J<ETX>'");
      if ( write(*(_DWORD *)(v16 + 20), &unk_665C8, 4u) != 4 )
        goto LABEL_17;
      break;
    case 3:
      v14 = *(_DWORD *)(a2 + 60);
      v15 = *(__int16 *)(*(_DWORD *)(v14 + 28) + 2);
      if ( v15 == 1 )
      {
        buf[0] = 84;
      }
      else if ( v15 == 2 )
      {
        buf[0] = 67;
      }
      buf[1] = 0;
      if ( dword_7CF4C )
        printf("jjy_poll_echokeisokuki_lt2000 (refclock_jjy.c) : send '%s'\n", buf);
      if ( write(*(_DWORD *)(v14 + 20), buf, 1u) != 1 )
        sub_27040(a2, 3);
      break;
    case 1:
      v7 = *(_DWORD *)(a2 + 60);
      v8 = *(_DWORD *)(v7 + 28);
      v9 = dword_7CF4C;
      if ( (*(_BYTE *)(v7 + 752) & 1) != 0 )
        v10 = *(_DWORD *)(v8 + 12);
      else
        v10 = 2;
      if ( (*(_BYTE *)(v7 + 752) & 1) == 0 )
        *(_DWORD *)(v8 + 12) = v10;
      if ( v9 )
      {
        printf(
          "%s (refclock_jjy.c) : flag1=%X CLK_FLAG1=%X up->linecount=%d\n",
          "jjy_poll_tristate_jjy01",
          *(unsigned __int8 *)(v7 + 752),
          1,
          v10);
        if ( dword_7CF4C )
          printf(
            "%s (refclock_jjy.c) : send '%s'\n",
            "jjy_poll_tristate_jjy01",
            *((const char **)&unk_66398 + 4 * *(_DWORD *)(v8 + 12) + 1));
        v10 = *(_DWORD *)(v8 + 12);
      }
      v11 = (char *)&unk_66398 + 16 * v10;
      v12 = *(_DWORD *)(v7 + 20);
      v13 = *((_DWORD *)v11 + 3);
      if ( v13 != write(v12, *((const void **)v11 + 2), v13) )
LABEL_17:
        sub_27040(a2, 3);
      break;
  }
}
