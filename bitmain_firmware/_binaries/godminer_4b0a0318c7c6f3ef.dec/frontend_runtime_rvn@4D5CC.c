void *frontend_runtime_rvn()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1967E0 = (int)stratum_connect;
  dword_1967E4 = (int)stratum_disconnect;
  dword_1967E8 = (int)stratum_recv_line;
  dword_1967EC = (int)stratum_send_line;
  dword_1967F0 = (int)stratum_login_base;
  dword_1967F4 = (int)stratum_handle_method_base;
  dword_1967F8 = (int)pre_stratum_handle_method_base;
  dword_1967FC = (int)stratum_handle_response_rvn;
  dword_196800 = (int)sub_4C47C;
  dword_196804 = (int)sub_4C3A4;
  dword_196808 = (int)sub_4CEB0;
  dword_19680C = (int)stratum_authorize_rvn;
  dword_196810 = (int)sub_4BD38;
  LODWORD(v0) = diff_to_target_rvn;
  HIDWORD(v0) = target_to_double_diff_rvn;
  dword_196814 = (int)sub_4BD20;
  dword_196818 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_196820 = v0;
  dword_19681C = (int)target_to_diff_rvn;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1967E0, 0x54u);
}
