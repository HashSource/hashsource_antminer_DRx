void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return memcpy(result, capability, 0x124u);
  return result;
}
