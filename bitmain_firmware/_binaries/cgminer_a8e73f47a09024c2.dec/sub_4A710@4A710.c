int __fastcall sub_4A710(_BYTE *a1)
{
  int result; // r0

  if ( sub_4A6F4() )
    result = sub_49E74();
  else
    result = sub_49F54();
  *a1 = result;
  return result;
}
