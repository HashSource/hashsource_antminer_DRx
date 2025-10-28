void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return memcpy(result, &unk_18C000, 0x124u);
  return result;
}
