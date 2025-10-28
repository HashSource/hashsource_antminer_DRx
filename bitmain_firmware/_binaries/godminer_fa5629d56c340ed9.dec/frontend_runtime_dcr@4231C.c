void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_19750C = (int)stratum_connect;
  dword_197510 = (int)stratum_disconnect;
  dword_197514 = (int)stratum_recv_line;
  dword_197518 = (int)stratum_send_line;
  dword_19751C = (int)stratum_login_base;
  dword_197520 = (int)stratum_handle_method_base;
  dword_197524 = (int)pre_stratum_handle_method_base;
  dword_197528 = (int)stratum_handle_response_base;
  dword_19752C = (int)sub_4221C;
  dword_197530 = (int)sub_421B4;
  dword_197534 = (int)stratum_subscribe_base;
  dword_197538 = (int)stratum_authorize_base;
  dword_19753C = (int)sub_41694;
  LODWORD(v0) = diff_to_target_dcr;
  HIDWORD(v0) = target_to_double_diff_dcr;
  dword_197540 = (int)sub_41358;
  dword_197544 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_19754C = v0;
  dword_197548 = (int)target_to_diff_dcr;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_19750C, 0x54u);
}
