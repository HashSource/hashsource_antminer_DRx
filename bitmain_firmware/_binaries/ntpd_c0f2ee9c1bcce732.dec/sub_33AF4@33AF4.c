signed int __fastcall sub_33AF4(signed int result)
{
  if ( result <= 0 )
  {
    result = (signed int)&unk_800BC + 104 * result;
    if ( *(_DWORD *)(result + 24) != -1 )
      result = (signed int)sub_15FF4((int *)(result + 4));
    if ( dword_7CF4C )
      return fwrite("leitch_shutdown()\n", 1u, 0x12u, (FILE *)stderr);
  }
  return result;
}
