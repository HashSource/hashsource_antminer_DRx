int __fastcall sub_4717C(unsigned __int8 *a1, _BYTE *a2, char a3)
{
  int v4; // r3
  unsigned __int8 *v5; // r12
  int v6; // r3
  unsigned int v8; // r2
  char *v9; // r1
  char *v10; // r5
  unsigned int v11; // t1
  unsigned int v12; // r2
  char *v13; // r1
  char *v14; // r5
  unsigned int v15; // t1
  char v16; // r0
  unsigned int v17; // r0
  char nptr; // [sp+4h] [bp-4h] BYREF
  _BYTE v19[2]; // [sp+5h] [bp-3h] BYREF
  char v20; // [sp+7h] [bp-1h] BYREF

  v5 = a1 + 1;
  v4 = *a1;
  *a2 = v4;
  switch ( v4 )
  {
    case 0:
      return 0;
    case 10:
      v6 = 1;
      goto LABEL_8;
    case 13:
      if ( a1[1] != 10 )
        goto LABEL_4;
      v6 = 2;
LABEL_8:
      *a2 = a3;
      break;
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
      v8 = a1[1];
      nptr = v4;
      if ( v8 <= 0x7F && (dword_69A0C[v8] & 4) != 0 )
      {
        v9 = v19;
        do
        {
          *v9++ = v8;
          v10 = v9;
          v11 = *++v5;
          v8 = v11;
        }
        while ( v11 <= 0x7F && (dword_69A0C[v8] & 4) != 0 && v9 < &v20 );
      }
      else
      {
        v10 = v19;
      }
      *v10 = 0;
      v17 = strtoul(&nptr, 0, 8);
      v6 = v10 - &nptr;
      if ( v17 >= 0xFF )
        LOBYTE(v17) = -1;
      *a2 = v17;
      return v6;
    case 88:
    case 120:
      v12 = a1[1];
      if ( v12 > 0x7F || (dword_69A0C[v12] & 0x1C) == 0 )
        goto LABEL_4;
      v13 = v19;
      do
      {
        *(v13 - 1) = v12;
        v14 = v13;
        v15 = *++v5;
        v12 = v15;
        if ( v15 > 0x7F )
          break;
        ++v13;
        if ( (dword_69A0C[v12] & 0x1C) == 0 )
          break;
      }
      while ( v13 != &v20 );
      *v14 = 0;
      v16 = strtoul(&nptr, 0, 16);
      v6 = v14 - &nptr + 1;
      *a2 = v16;
      break;
    case 97:
      v6 = 1;
      *a2 = 7;
      return v6;
    case 98:
      v6 = 1;
      *a2 = 8;
      return v6;
    case 102:
      v6 = 1;
      *a2 = 12;
      return v6;
    case 110:
      v6 = 1;
      *a2 = 10;
      return v6;
    case 114:
      v6 = 1;
      *a2 = 13;
      return v6;
    case 116:
      v6 = 1;
      *a2 = 9;
      return v6;
    case 118:
      v6 = 1;
      *a2 = 11;
      return v6;
    default:
LABEL_4:
      v6 = 1;
      break;
  }
  return v6;
}
