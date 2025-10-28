int __fastcall json_object_key_to_iter(int result)
{
  if ( result )
    result -= 16;
  return result;
}
