int (__fastcall *__fastcall sub_51514(
        int (__fastcall *result)(_DWORD, _DWORD, _DWORD, _DWORD),
        int a2,
        void (__fastcall __noreturn *a3)(const char *a1, int a2, unsigned int a3, char **a4)))(_DWORD, _DWORD, _DWORD, _DWORD)
{
  if ( result )
    off_7C9FC = result;
  else
    a3 = sub_51490;
  if ( !result )
    off_7C9FC = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))a3;
  return result;
}
