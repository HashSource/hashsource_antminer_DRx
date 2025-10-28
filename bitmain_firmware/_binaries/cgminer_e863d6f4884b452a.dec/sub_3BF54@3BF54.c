int __fastcall sub_3BF54(_BYTE *a1)
{
  int result; // r0

  if ( word_6D7EC == 2 )
    result = sub_3BA00();
  else
    result = sub_3BA84();
  *a1 = result;
  return result;
}
