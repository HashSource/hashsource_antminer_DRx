void __fastcall sub_38E9C(int a1)
{
  if ( *(_DWORD *)(a1 + 60) == 256 )
  {
    jsonp_free(*(void **)(a1 + 64));
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    strbuffer_close(a1 + 40);
  }
  else
  {
    strbuffer_close(a1 + 40);
  }
}
