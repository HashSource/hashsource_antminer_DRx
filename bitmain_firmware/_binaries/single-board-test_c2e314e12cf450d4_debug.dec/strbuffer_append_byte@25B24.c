int __cdecl strbuffer_append_byte(strbuffer_t *strbuff, char byte)
{
  char v3; // [sp+3h] [bp+3h] BYREF
  strbuffer_t *v4; // [sp+4h] [bp+4h]

  v4 = strbuff;
  v3 = byte;
  return strbuffer_append_bytes(strbuff, &v3, 1u);
}
