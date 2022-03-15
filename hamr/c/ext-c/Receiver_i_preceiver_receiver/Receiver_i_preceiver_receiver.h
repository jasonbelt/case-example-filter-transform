#ifndef RECEIVER_I_PRECEIVER_RECEIVER_H
#define RECEIVER_I_PRECEIVER_RECEIVER_H

#include <all.h>

Unit t_AttestationGate_Receiver_i_preceiver_receiver_initialise_(STACK_FRAME_ONLY);

Unit t_AttestationGate_Receiver_i_preceiver_receiver_finalise_(STACK_FRAME_ONLY);

Unit t_AttestationGate_Receiver_i_preceiver_receiver_handle_read_port_(
  STACK_FRAME
  IS_C4F575 value);

#endif
