int __fastcall sub_375C8(int a1)
{
  int v2; // r6
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( munmap((void *)dword_6FAEC, 0x400u) < 0 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
  {
    strcpy(v4, "munmap failed!\n");
    sub_343C4(3, v4, 0);
  }
  v2 = munmap((void *)dword_6FBC0, 0x1000000u);
  if ( v2 < 0 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
  {
    strcpy(v4, "munmap failed!\n");
    sub_343C4(3, v4, 0);
  }
  close(*(_DWORD *)(a1 + 174));
  close(*(_DWORD *)(a1 + 178));
  return v2;
}
