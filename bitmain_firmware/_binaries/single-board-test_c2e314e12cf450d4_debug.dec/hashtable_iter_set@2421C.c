void __fastcall hashtable_iter_set(int a1, int a2)
{
  int v3; // [sp+Ch] [bp+Ch]

  v3 = a1 - 4;
  json_decref_0(*(_DWORD *)(a1 + 8));
  *(_DWORD *)(v3 + 12) = a2;
}
