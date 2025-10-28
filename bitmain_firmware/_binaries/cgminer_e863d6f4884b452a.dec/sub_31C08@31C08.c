int __fastcall sub_31C08(int a1, int a2, int a3, int a4)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  char **v9; // r0
  int result; // r0
  int v11; // r4
  int v12; // r9
  int v13; // r5
  int v14; // r3
  int (*v15)(void); // r6
  int v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  char **v20; // r0
  int v21; // [sp+Ch] [bp-20h]
  char s[24]; // [sp+14h] [bp-18h] BYREF

  sub_30214((unsigned int *)a1, 70, 0, 0, a4);
  if ( !a4 )
  {
    v6 = sub_2E418(0, "CGMiner", 1, a49, 0);
    v7 = sub_2E418(v6, "Miner", 1, (const char *)&dword_6F80C, 0);
    v8 = sub_2E418(v7, "CompileTime", 1, byte_6F3CC, 0);
    v9 = (char **)sub_2E418(v8, "Type", 1, dest, 0);
    result = sub_2F9C4((unsigned int *)a1, v9, 0, 0);
    if ( dword_735E8 <= 0 )
      return result;
    v21 = 0;
    goto LABEL_5;
  }
  v21 = sub_2E530((unsigned int *)a1, ",\"STATS\":[");
  v17 = sub_2E418(0, "CGMiner", 1, a49, 0);
  v18 = sub_2E418(v17, "Miner", 1, (const char *)&dword_6F80C, 0);
  v19 = sub_2E418(v18, "CompileTime", 1, byte_6F3CC, 0);
  v20 = (char **)sub_2E418(v19, "Type", 1, dest, 0);
  result = sub_2F9C4((unsigned int *)a1, v20, 1, 0);
  if ( dword_735E8 > 0 )
  {
LABEL_5:
    v11 = 0;
    v12 = 0;
    do
    {
      result = sub_1CBB4(v11);
      v13 = result;
      if ( result )
      {
        v14 = *(_DWORD *)(result + 4);
        if ( v14 )
        {
          v15 = *(int (**)(void))(v14 + 28);
          if ( v15 )
          {
            v16 = v15();
            v14 = *(_DWORD *)(v13 + 4);
            v15 = (int (*)(void))v16;
          }
          sprintf(s, "%s%d", *(const char **)(v14 + 8), *(_DWORD *)(v13 + 8));
          result = sub_319C8((unsigned int *)a1, v12, s, (const char *)(v13 + 292), (int)v15, a4);
          v12 = result;
        }
      }
      ++v11;
    }
    while ( dword_735E8 > v11 );
  }
  if ( v21 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
