int __fastcall json_dumpf(_DWORD *a1, int a2, int a3)
{
  return json_dump_callback(a1, (int (__fastcall *)(char *, int, int))sub_35258, a2, a3);
}
