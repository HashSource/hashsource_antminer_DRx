int __fastcall sub_316A8(int a1, int a2, int a3, int a4)
{
  int v6; // r6
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  char **v11; // r0
  int result; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  char **v17; // r1

  sub_30214((unsigned int *)a1, 22, 0, 0, a4);
  if ( a4 )
  {
    v6 = sub_2E530((unsigned int *)a1, ",\"VERSION\":[");
    v7 = sub_2E418(0, "CGMiner", 1, a49, 0);
    v8 = sub_2E418(v7, "API", 2, "3.1", 0);
    v9 = sub_2E418(v8, "Miner", 1, (const char *)&dword_6F80C, 0);
    v10 = sub_2E418(v9, "CompileTime", 1, byte_6F3CC, 0);
    v11 = (char **)sub_2E418(v10, "Type", 1, dest, 0);
    result = sub_2F9C4((unsigned int *)a1, v11, 1, 0);
    if ( v6 )
      *(_BYTE *)(a1 + 13) = 1;
  }
  else
  {
    sub_2E530((unsigned int *)a1, "VERSION,");
    v13 = sub_2E418(0, "CGMiner", 1, a49, 0);
    v14 = sub_2E418(v13, "API", 2, "3.1", 0);
    v15 = sub_2E418(v14, "Miner", 1, (const char *)&dword_6F80C, 0);
    v16 = sub_2E418(v15, "CompileTime", 1, byte_6F3CC, 0);
    v17 = (char **)sub_2E418(v16, "Type", 1, dest, 0);
    return sub_2F9C4((unsigned int *)a1, v17, 0, 0);
  }
  return result;
}
