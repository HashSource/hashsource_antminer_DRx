int __fastcall V_INT(int a1, char *s, __int64 a3)
{
  ++dword_18CFB8;
  *(_DWORD *)(a1 + 4) = strlen(s);
  *(_DWORD *)a1 = s;
  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 8) = 3;
  *(_DWORD *)(a1 + 24) = 0;
  return a1;
}
