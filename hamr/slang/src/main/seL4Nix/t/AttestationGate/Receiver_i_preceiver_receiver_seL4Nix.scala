// #Sireum

// This file was auto-generated.  Do not edit

package t.AttestationGate

import org.sireum._
import art._

@ext object Receiver_i_preceiver_receiver_seL4Nix {
  // returns T if seL4's read_port port is empty, F otherwise 
  def read_port_IsEmpty(): B = $

  // returns result of dequeuing seL4's read_port port 
  def read_port_Receive(): Option[DataContent] = $
}
