int __fastcall sub_38B64(int a1, _DWORD *a2, _QWORD ***a3)
{
  __int64 v3; // d0
  int v5; // r0
  int v8; // r6
  int v9; // r8
  bool v10; // zf
  int v11; // r9
  char **v12; // r3
  char *v13; // r8
  _DWORD *v14; // r1
  void *v15; // r0
  bool v16; // zf
  int v17; // r2
  int v18; // r2
  _QWORD **v19; // r3
  _QWORD *v20; // r4
  int v21; // r2
  _QWORD **v22; // r3
  _QWORD *v23; // r4
  int v24; // r3
  unsigned int *v25; // r3
  unsigned int v26; // r2
  _DWORD **v27; // r3
  _DWORD *v28; // r3
  int v29; // r2
  int v30; // r6
  unsigned int v31; // r8
  bool v32; // zf
  _DWORD *v33; // r1
  bool v34; // zf
  int v35; // r2
  int v36; // r2
  _DWORD **v37; // r3
  int v38; // r2
  _QWORD **v39; // r3
  _QWORD *v40; // r4
  _DWORD **v41; // r3
  _DWORD *v42; // r4
  int v43; // r2
  _DWORD **v45; // r3
  int v46; // r2
  _DWORD **v47; // r3
  _DWORD *v48; // r8
  _DWORD *v49; // r12
  _DWORD *v50; // lr
  int v51; // r0
  int v52; // r1
  int v53; // r2
  int v54; // r3
  _DWORD *v55; // r4
  int v56; // r1
  int v57; // r2
  int v58; // r3
  char *v59; // r3
  char *v60; // r1
  _DWORD *v61; // r0
  int v62; // r0
  char *v63; // r7
  int appended; // r8
  int v65; // r9
  int v66; // r0
  int v67; // r0
  int v68; // r0
  size_t v69; // r0
  _DWORD **v70; // r3
  _DWORD *v71; // r7
  const char *v72; // r0
  _DWORD *v73; // r0
  char *v74; // r3
  char *v75; // r1
  char *v76; // r12
  int *v77; // r0
  int v78; // [sp+0h] [bp-30h]
  const void *v79[3]; // [sp+8h] [bp-28h] BYREF
  unsigned int v80[7]; // [sp+14h] [bp-1Ch] BYREF

  v5 = *(unsigned __int8 *)(a1 + 36);
  switch ( v5 )
  {
    case 'F':
      if ( !a2 )
        goto LABEL_104;
      v18 = *a2;
      if ( (unsigned int)(*a2 - 3) > 1 )
      {
        v74 = "Expected real or integer, got %s";
        LOWORD(v75) = 9340;
        v76 = (&off_1323BC)[v18];
        v77 = (int *)a1;
        goto LABEL_158;
      }
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v19 = (*a3)++;
      v20 = *v19;
      json_number_value((int)a2);
      *v20 = v3;
      return v8;
    case 'I':
      if ( !a2 )
        goto LABEL_104;
      v21 = *a2;
      if ( *a2 != 3 )
        goto LABEL_157;
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v22 = (*a3)++;
      v23 = *v22;
      *v23 = json_integer_value((int)a2);
      return v8;
    case 'O':
      v24 = *(_DWORD *)(a1 + 60) & 1;
      if ( !a2 )
        goto LABEL_90;
      if ( v24 )
        return 0;
      if ( a2[1] == -1 )
      {
        v45 = (_DWORD **)(*a3)++;
        goto LABEL_92;
      }
      v25 = a2 + 1;
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 + 1, v25) );
      __dmb(0xBu);
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v27 = (_DWORD **)(*a3)++;
        v28 = *v27;
        goto LABEL_93;
      }
      return 0;
    case '[':
      if ( a2 && (v29 = *a2, *a2 != 1) )
      {
        v74 = "Expected array, got %s";
        LOWORD(v75) = 9340;
        v76 = (&off_1323BC)[v29];
        v77 = (int *)a1;
LABEL_158:
        HIWORD(v75) = (unsigned int)"<validation>" >> 16;
        v8 = -1;
        sub_386A0(v77, v75, 10, v74, v76);
      }
      else
      {
        sub_38700((_DWORD *)a1);
        v30 = *(unsigned __int8 *)(a1 + 36);
        if ( v30 == 93 )
        {
          v31 = 0;
LABEL_137:
          if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
            return 0;
LABEL_109:
          if ( a2 && json_array_size(a2) != (_DWORD *)v31 )
          {
            v8 = -1;
            v61 = json_array_size(a2);
            sub_386A0((int *)a1, "<validation>", 7, "%li array item(s) left unpacked", (char *)v61 - v31);
            return v8;
          }
          return 0;
        }
        if ( !*(_BYTE *)(a1 + 36) )
        {
LABEL_132:
          sub_386A0((int *)a1, "<format>", 9, "Unexpected end of format string");
          return -1;
        }
        v32 = v30 == 33;
        if ( v30 != 33 )
          v32 = v30 == 42;
        v31 = v32;
        if ( v32 )
        {
          v31 = 0;
LABEL_68:
          if ( v30 == 33 )
          {
            sub_38700((_DWORD *)a1);
            v35 = *(unsigned __int8 *)(a1 + 36);
            if ( v35 == 93 )
              goto LABEL_109;
          }
          else
          {
            sub_38700((_DWORD *)a1);
            v35 = *(unsigned __int8 *)(a1 + 36);
            if ( v35 == 93 )
              return 0;
            v30 = 42;
          }
          sub_386A0((int *)a1, "<format>", 9, "Expected ']' after '%c', got '%c'", v30, v35);
          return -1;
        }
        while ( strchr("{[siIbfFOon", v30) )
        {
          if ( a2 )
          {
            v33 = json_array_get(a2, v31);
            if ( !v33 )
            {
              v8 = -1;
              sub_386A0((int *)a1, "<validation>", 17, "Array index %lu out of range", v31);
              return v8;
            }
          }
          else
          {
            v33 = 0;
          }
          ++v31;
          if ( sub_38B64(a1, v33, a3) )
            return -1;
          sub_38700((_DWORD *)a1);
          v30 = *(unsigned __int8 *)(a1 + 36);
          if ( v30 == 93 )
            goto LABEL_137;
          if ( !*(_BYTE *)(a1 + 36) )
            goto LABEL_132;
          v34 = v30 == 42;
          if ( v30 != 42 )
            v34 = v30 == 33;
          if ( v34 )
            goto LABEL_68;
        }
        LOWORD(v59) = 9604;
        LOWORD(v60) = 9264;
        v78 = v30;
LABEL_102:
        HIWORD(v59) = (unsigned int)"Unexpected format character '%c'" >> 16;
        HIWORD(v60) = (unsigned int)"<format>" >> 16;
        v8 = -1;
        sub_386A0((int *)a1, v60, 9, v59, v78);
      }
      return v8;
    case 'b':
      if ( !a2 )
        goto LABEL_104;
      v36 = *a2;
      if ( (unsigned int)(*a2 - 5) > 1 )
      {
        v74 = "Expected true or false, got %s";
        LOWORD(v75) = 9340;
        v76 = (&off_1323BC)[v36];
        v77 = (int *)a1;
        goto LABEL_158;
      }
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v37 = (_DWORD **)(*a3)++;
      **v37 = v36 == 5;
      return v8;
    case 'f':
      if ( !a2 )
        goto LABEL_104;
      v38 = *a2;
      if ( *a2 != 4 )
      {
        v74 = "Expected real, got %s";
        LOWORD(v75) = 9340;
        v76 = (&off_1323BC)[v38];
        v77 = (int *)a1;
        goto LABEL_158;
      }
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v39 = (*a3)++;
      v40 = *v39;
      json_real_value();
      *v40 = v3;
      return v8;
    case 'i':
      if ( !a2 )
      {
LABEL_104:
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
          ++*a3;
        return 0;
      }
      v21 = *a2;
      if ( *a2 != 3 )
      {
LABEL_157:
        v74 = "Expected integer, got %s";
        LOWORD(v75) = (unsigned __int16)"<validation>";
        v76 = (&off_1323BC)[v21];
        v77 = (int *)a1;
        goto LABEL_158;
      }
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v41 = (_DWORD **)(*a3)++;
      v42 = *v41;
      *v42 = json_integer_value((int)a2);
      return v8;
    case 'n':
      if ( !a2 )
        return 0;
      v43 = *a2;
      if ( *a2 == 7 )
        return 0;
      v74 = "Expected null, got %s";
      LOWORD(v75) = 9340;
      v76 = (&off_1323BC)[v43];
      v77 = (int *)a1;
      goto LABEL_158;
    case 'o':
      v24 = *(_DWORD *)(a1 + 60) & 1;
LABEL_90:
      if ( !v24 )
      {
        v45 = (_DWORD **)(*a3)++;
        if ( a2 )
        {
LABEL_92:
          v28 = *v45;
LABEL_93:
          *v28 = a2;
        }
      }
      return 0;
    case 's':
      if ( a2 )
      {
        v46 = *a2;
        if ( *a2 != 2 )
        {
          v74 = "Expected string, got %s";
          LOWORD(v75) = 9340;
          v76 = (&off_1323BC)[v46];
          v77 = (int *)a1;
          goto LABEL_158;
        }
      }
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v47 = (_DWORD **)(*a3)++;
      v48 = *v47;
      if ( *v47 )
      {
        sub_38700((_DWORD *)a1);
        if ( *(_BYTE *)(a1 + 36) == 37 )
        {
          v70 = (_DWORD **)(*a3)++;
          v71 = *v70;
          if ( *v70 )
          {
            if ( !a2 )
              return 0;
            *v48 = json_string_value(a2);
            *v71 = json_string_length(a2);
          }
          else
          {
            sub_386A0((int *)a1, "<args>", 12, "NULL string length argument");
            return -1;
          }
        }
        else
        {
          v49 = (_DWORD *)(a1 + 24);
          v50 = (_DWORD *)(a1 + 40);
          v51 = *(_DWORD *)(a1 + 24);
          v52 = *(_DWORD *)(a1 + 28);
          v53 = *(_DWORD *)(a1 + 32);
          v54 = *(_DWORD *)(a1 + 36);
          v55 = (_DWORD *)(a1 + 8);
          *v50 = v51;
          v50[1] = v52;
          v50[2] = v53;
          v50[3] = v54;
          v56 = v55[1];
          v57 = v55[2];
          v58 = v55[3];
          *v49 = *v55;
          v49[1] = v56;
          v49[2] = v57;
          v49[3] = v58;
          if ( !a2 )
            return 0;
          *v48 = json_string_value(a2);
        }
      }
      else
      {
        sub_386A0((int *)a1, "<args>", 12, "NULL string argument");
        return -1;
      }
      return v8;
    case '{':
      v8 = hashtable_init(v80);
      if ( v8 )
      {
        sub_386A0((int *)a1, "<internal>", 1, "Out of memory");
        return -1;
      }
      if ( a2 && *a2 )
      {
        v8 = -1;
        sub_386A0((int *)a1, "<validation>", 10, "Expected object, got %s", (&off_1323BC)[*a2]);
        goto LABEL_30;
      }
      sub_38700((_DWORD *)a1);
      v9 = *(unsigned __int8 *)(a1 + 36);
      if ( v9 != 125 )
      {
        if ( *(_BYTE *)(a1 + 36) )
        {
          v10 = v9 == 33;
          if ( v9 != 33 )
            v10 = v9 == 42;
          v11 = v10;
          if ( v10 )
          {
            v11 = 0;
LABEL_25:
            if ( v9 == 33 )
            {
              sub_38700((_DWORD *)a1);
              v17 = *(unsigned __int8 *)(a1 + 36);
              if ( v17 == 125 )
                goto LABEL_115;
            }
            else
            {
              sub_38700((_DWORD *)a1);
              v17 = *(unsigned __int8 *)(a1 + 36);
              if ( v17 == 125 )
                goto LABEL_30;
              v9 = 42;
            }
            v8 = -1;
            sub_386A0((int *)a1, "<format>", 9, "Expected '}' after '%c', got '%c'", v9, v17);
          }
          else
          {
            while ( 1 )
            {
              if ( v9 != 115 )
              {
                v8 = -1;
                sub_386A0((int *)a1, "<format>", 9, "Expected format 's', got '%c'", v9);
                goto LABEL_30;
              }
              v12 = (char **)(*a3)++;
              v13 = *v12;
              if ( !*v12 )
              {
                sub_386A0((int *)a1, "<args>", 12, "NULL object key");
                v8 = -1;
                goto LABEL_30;
              }
              sub_38700((_DWORD *)a1);
              if ( *(_BYTE *)(a1 + 36) == 63 )
              {
                sub_38700((_DWORD *)a1);
                if ( a2 )
                {
                  v11 = 1;
                  v14 = (_DWORD *)json_object_get(a2, v13);
                }
                else
                {
                  v14 = 0;
                  v11 = 1;
                }
              }
              else if ( a2 )
              {
                v14 = (_DWORD *)json_object_get(a2, v13);
                if ( !v14 )
                {
                  v8 = -1;
                  sub_386A0((int *)a1, "<validation>", 16, "Object item not found: %s", v13);
                  goto LABEL_30;
                }
              }
              else
              {
                v14 = 0;
              }
              if ( sub_38B64(a1, v14, a3) )
              {
                v8 = -1;
                goto LABEL_30;
              }
              v15 = json_null();
              hashtable_set(v80, v13, (unsigned int)v15);
              sub_38700((_DWORD *)a1);
              v9 = *(unsigned __int8 *)(a1 + 36);
              if ( v9 == 125 )
                break;
              if ( !*(_BYTE *)(a1 + 36) )
                goto LABEL_140;
              v16 = v9 == 42;
              if ( v9 != 42 )
                v16 = v9 == 33;
              if ( v16 )
                goto LABEL_25;
            }
            if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
              goto LABEL_30;
LABEL_115:
            if ( a2 )
            {
              if ( v11 )
                goto LABEL_117;
              goto LABEL_155;
            }
          }
        }
        else
        {
LABEL_140:
          sub_386A0((int *)a1, "<format>", 9, "Unexpected end of format string");
          v8 = -1;
        }
LABEL_30:
        hashtable_close((int)v80);
        return v8;
      }
      if ( (*(_DWORD *)(a1 + 60) & 2) == 0 || !a2 )
        goto LABEL_30;
LABEL_155:
      v73 = json_object_size(a2);
      if ( v73 == (_DWORD *)v80[0] )
        goto LABEL_30;
LABEL_117:
      v62 = json_object_iter(a2);
      v63 = (char *)json_object_iter_key(v62);
      if ( !v63 )
        goto LABEL_30;
      appended = 1;
      v65 = 0;
      break;
    default:
      LOWORD(v59) = (unsigned __int16)"Unexpected format character '%c'";
      LOWORD(v60) = (unsigned __int16)"<format>";
      v78 = v5;
      goto LABEL_102;
  }
  while ( 1 )
  {
    v68 = json_object_key_to_iter((int)v63);
    if ( !json_object_iter_value(v68) )
    {
LABEL_148:
      if ( v65 )
      {
        if ( appended )
          v72 = "<unknown>";
        else
          v72 = (const char *)strbuffer_value((int)v79);
        sub_386A0((int *)a1, "<validation>", 7, "%li object item(s) left unpacked: %s", v65, v72);
        v8 = -1;
        strbuffer_close((int)v79);
      }
      goto LABEL_30;
    }
    if ( !hashtable_get((int)v80, v63) )
    {
      ++v65;
      if ( appended == 1 )
      {
        appended = strbuffer_init(v79);
LABEL_126:
        if ( !appended )
        {
          v69 = strlen(v63);
          appended = strbuffer_append_bytes(v79, v63, v69);
        }
        goto LABEL_120;
      }
      if ( !appended )
      {
        appended = strbuffer_append_bytes(v79, ", ", 2u);
        goto LABEL_126;
      }
    }
LABEL_120:
    v66 = json_object_key_to_iter((int)v63);
    v67 = json_object_iter_next(a2, v66);
    v63 = (char *)json_object_iter_key(v67);
    if ( !v63 )
      goto LABEL_148;
  }
}
