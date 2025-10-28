int __fastcall check_register_value(char a1, const void *a2)
{
  size_t n; // [sp+Ch] [bp+Ch]

  n = 0;
  if ( dword_336850 == 1722 )
  {
    n = 7;
  }
  else if ( dword_336850 == 1725 )
  {
    n = 8;
  }
  if ( *(_DWORD *)(reg_value_buf + 8) > 0x1FFu )
  {
    printf("%s: reg_value_buf buffer is full!\n", "check_register_value");
    return -1;
  }
  else
  {
    memcpy((void *)(reg_value_buf + 10 * *(_DWORD *)reg_value_buf + 16), a2, n);
    *(_BYTE *)(reg_value_buf + 10 * *(_DWORD *)reg_value_buf + 24) = *((_BYTE *)a2 + n - 1) & 0x1F;
    *(_BYTE *)(reg_value_buf + 10 * (*(_DWORD *)reg_value_buf)++ + 25) = a1;
    ++*(_DWORD *)(reg_value_buf + 8);
    if ( *(_DWORD *)reg_value_buf > 0x200u )
      *(_DWORD *)reg_value_buf = 0;
    return 0;
  }
}
