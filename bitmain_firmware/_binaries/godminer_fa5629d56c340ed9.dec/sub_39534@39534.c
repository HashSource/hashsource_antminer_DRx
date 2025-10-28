int __fastcall sub_39534(int a1, int a2)
{
  int v3; // r4

  v3 = *(_DWORD *)(a1 + 20);
  if ( !v3 )
    v3 = sub_393CC(a1, a2);
  if ( (unsigned int)(v3 + 2) > 1 )
    fh_buffer_putc((const void **)(a1 + 40), v3);
  return v3;
}
