int __fastcall read_key(_BYTE *a1)
{
  *a1 = key_pressed;
  return 1;
}
