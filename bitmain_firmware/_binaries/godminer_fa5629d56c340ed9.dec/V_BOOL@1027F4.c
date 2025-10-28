int __fastcall V_BOOL(int a1, char *s, char a3)
{
  ++dword_1B6164;
  *(_DWORD *)(a1 + 4) = strlen(s);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = s;
  *(_QWORD *)(a1 + 8) = 2;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  return a1;
}
