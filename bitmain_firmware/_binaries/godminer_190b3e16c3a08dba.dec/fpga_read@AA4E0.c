int __fastcall fpga_read(int a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(dword_18C15C + (a1 & 0xFFFFFFFC));
  return 0;
}
