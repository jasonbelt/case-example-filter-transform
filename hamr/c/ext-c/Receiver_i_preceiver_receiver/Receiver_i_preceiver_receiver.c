#include <Receiver_i_preceiver_receiver_api.h>
#include <Receiver_i_preceiver_receiver.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static char* component_id = "s_impl_Instance_preceiver_receiver";

Unit t_AttestationGate_Receiver_i_preceiver_receiver_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_initialise_", 0);

  printf("%s: t_AttestationGate_Receiver_i_preceiver_receiver_initialise_ called\n", component_id);

}

Unit t_AttestationGate_Receiver_i_preceiver_receiver_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_finalise_", 0);
}

Unit t_AttestationGate_Receiver_i_preceiver_receiver_handle_read_port_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_api.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_handle_read_port_raw", 0);

  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;

  //int32_t value = byteArray[0] << 24 | byteArray[1] << 16 | byteArray[2] << 8 | byteArray[3];
  int32_t value = byteArray[3] << 24 | byteArray[2] << 16 | byteArray[1] << 8 | byteArray[0];
  printf("[%s] Received %i\n", component_id, value);
  
  hex_dump(SF byteArray, numBytes);
}

Unit t_AttestationGate_Receiver_i_preceiver_receiver_handle_read_port_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_handle_read_port_", 0);

  t_AttestationGate_Receiver_i_preceiver_receiver_handle_read_port_raw(SF value->size, value->value);
}
