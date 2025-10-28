int (__fastcall *__fastcall sub_EF8C(
        int (__fastcall *result)(_DWORD, _DWORD, _DWORD, _DWORD),
        int a2,
        void (__fastcall __noreturn *a3)(const char *a1, int a2, unsigned int a3, char **a4)))(_DWORD, _DWORD, _DWORD, _DWORD)
{
  if ( result )
    off_21DCC = result;
  else
    a3 = sub_EF08;
  if ( !result )
    off_21DCC = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))a3;
  return result;
}
