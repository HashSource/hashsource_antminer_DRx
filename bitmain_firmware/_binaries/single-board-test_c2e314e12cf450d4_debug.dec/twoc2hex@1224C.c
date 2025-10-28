unsigned __int8 __cdecl twoc2hex(unsigned __int8 high, unsigned __int8 low)
{
  char v4; // [sp+7h] [bp+7h]

  v4 = c2hex(high);
  return c2hex(low) ^ (16 * v4);
}
