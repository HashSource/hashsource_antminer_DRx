int __fastcall sub_56BAC(int a1, unsigned int a2, int a3, int a4, int a5)
{
  _DWORD *v9; // r0
  int v10; // r4
  int v11; // r1
  int v12; // r3
  int result; // r0

  if ( (_WORD)a1 )
    off_7C9FC("./../lib/isc/result.c", 120, 0, "base % 65536 == 0");
  if ( a2 > 0x10000 )
    off_7C9FC("./../lib/isc/result.c", 121, 0, "nresults <= 65536");
  if ( !a3 )
    off_7C9FC("./../lib/isc/result.c", 122, 0, "text != ((void *)0)");
  v9 = malloc(0x1Cu);
  v10 = (int)v9;
  if ( !v9 )
    return 1;
  *v9 = a1;
  v11 = dword_C9C6C;
  v9[2] = a3;
  v9[1] = a1 - 1 + a2;
  v9[3] = a4;
  v9[4] = a5;
  v9[5] = -1;
  dword_C9C6C = v11 + 1;
  v9[6] = -1;
  if ( v11 )
    sub_516D8("./../lib/isc/result.c", 138, "((*((&lock)))++ == 0 ? 0 : 34) == 0");
  v12 = dword_C9C74;
  result = dword_C9C6C - 1;
  if ( dword_C9C74 )
    *(_DWORD *)(dword_C9C74 + 24) = v10;
  *(_DWORD *)(v10 + 20) = v12;
  if ( !v12 )
    dword_C9C70 = v10;
  dword_C9C74 = v10;
  dword_C9C6C = result;
  *(_DWORD *)(v10 + 24) = 0;
  if ( result )
    sub_516D8("./../lib/isc/result.c", 142, "(--(*((&lock))) == 0 ? 0 : 34) == 0");
  return result;
}
