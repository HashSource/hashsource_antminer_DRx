void __fastcall hashtable_do_clear(int a1)
{
  int v2; // [sp+10h] [bp+10h]
  int i; // [sp+14h] [bp+14h]

  for ( i = *(_DWORD *)(a1 + 16); a1 + 12 != i; i = v2 )
  {
    v2 = *(_DWORD *)(i + 4);
    json_decref_0(*(_DWORD *)(i + 8));
    jsonp_free((void *)(i - 4));
  }
}
