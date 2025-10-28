int __fastcall sub_90EC(const char *a1, const char *a2, const char *a3, const char **a4)
{
  int v8; // r0
  int v9; // r7
  int result; // r0
  const char *v11; // r0
  const char *v12; // r0
  int v13; // [sp+4h] [bp-8h] BYREF

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  v8 = open(a1, 2);
  v9 = v8;
  if ( v8 <= 0 )
    return -1;
  if ( ioctl(v8, 0x705u, &v13) < 0 )
    return 1;
  if ( (v13 & 0x20000) == 0 )
  {
    fwrite("\nError: I2C_FUNC_SMBUS_READ_BYTE function is required. Program halted.\n\n", 1u, 0x48u, (FILE *)stderr);
    exit(1);
  }
  if ( (v13 & 0x40000) == 0 )
  {
    fwrite("\nError: I2C_FUNC_SMBUS_WRITE_BYTE function is required. Program halted.\n\n", 1u, 0x49u, (FILE *)stderr);
    exit(1);
  }
  if ( (v13 & 0x80000) == 0 )
  {
    v12 = "\nError: I2C_FUNC_SMBUS_READ_BYTE_DATA function is required. Program halted.\n\n";
LABEL_19:
    fwrite(v12, 1u, 0x4Du, (FILE *)stderr);
    exit(1);
  }
  if ( (v13 & 0x100000) == 0 )
  {
    v11 = "\nError: I2C_FUNC_SMBUS_WRITE_BYTE_DATA function is required. Program halted.\n\n";
LABEL_17:
    fwrite(v11, 1u, 0x4Eu, (FILE *)stderr);
    exit(1);
  }
  if ( (v13 & 0x200000) == 0 )
  {
    v12 = "\nError: I2C_FUNC_SMBUS_READ_WORD_DATA function is required. Program halted.\n\n";
    goto LABEL_19;
  }
  if ( (v13 & 0x400000) == 0 )
  {
    v11 = "\nError: I2C_FUNC_SMBUS_WRITE_WORD_DATA function is required. Program halted.\n\n";
    goto LABEL_17;
  }
  result = ioctl(v9, 0x703u, a2);
  if ( result >= 0 )
  {
    result = 0;
    a4[2] = (const char *)v9;
    a4[1] = a2;
    *a4 = a1;
    a4[3] = a3;
  }
  return result;
}
