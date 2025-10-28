int __fastcall sub_598C0(char *a1, int a2, int a3, int a4)
{
  int result; // r0
  char v6[132]; // [sp+8h] [bp-84h] BYREF

  switch ( (unsigned int)a1 )
  {
    case 1u:
    case 0xDu:
      result = 6;
      break;
    case 2u:
      result = 38;
      break;
    case 5u:
      result = 26;
      break;
    case 9u:
    case 0x14u:
    case 0x16u:
    case 0x24u:
    case 0x28u:
      result = 30;
      break;
    case 0xCu:
      result = 1;
      break;
    case 0x11u:
      result = 39;
      break;
    case 0x17u:
    case 0x18u:
      result = 50;
      break;
    case 0x20u:
    case 0x67u:
    case 0x68u:
      result = 54;
      break;
    case 0x61u:
      result = 48;
      break;
    case 0x62u:
      result = 5;
      break;
    case 0x63u:
      result = 4;
      break;
    case 0x64u:
      result = 10;
      break;
    case 0x65u:
      result = 8;
      break;
    case 0x69u:
      result = 13;
      break;
    case 0x6Bu:
      result = 40;
      break;
    case 0x6Eu:
      result = 2;
      break;
    case 0x6Fu:
      result = 12;
      break;
    case 0x70u:
      result = 11;
      break;
    case 0x71u:
      result = 9;
      break;
    default:
      sub_57070(a1, v6, 0x80u, a4);
      sub_5166C("./../lib/isc/unix/errno2result.c", 111, "unable to convert errno to isc_result: %d: %s", a1, v6);
      result = 34;
      break;
  }
  return result;
}
