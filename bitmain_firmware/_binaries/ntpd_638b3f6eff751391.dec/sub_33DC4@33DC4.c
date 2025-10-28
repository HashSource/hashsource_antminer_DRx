void __fastcall sub_33DC4(int a1, size_t a2)
{
  int v3; // r6
  int v4; // r3
  int v5; // lr
  int v6; // r1
  char v7; // r3

  if ( !dword_CB470 || dword_CB470 == a2 )
  {
    v3 = *(_DWORD *)(a2 + 60);
    v4 = *(_DWORD *)(v3 + 220);
    v5 = dword_CB548;
    ++*(_DWORD *)(v3 + 760);
    dword_80130 = v5;
    sub_27430((_DWORD *)v3, *(_DWORD *)(v3 + 216), *(_DWORD *)(v3 + 220), *(_DWORD *)(v3 + 216), v4);
    v6 = *(_DWORD *)(v3 + 220);
    v7 = *(_BYTE *)(v3 + 752) & 1;
    *(_DWORD *)(v3 + 208) = *(_DWORD *)(v3 + 216);
    *(_DWORD *)(v3 + 212) = v6;
    *(_BYTE *)(v3 + 32) = v7 != 0;
    *(_QWORD *)(v3 + 232) = 0x3F847AE147AE147BLL;
    *(_QWORD *)(v3 + 240) = 0;
    sub_276A0(a2);
  }
}
