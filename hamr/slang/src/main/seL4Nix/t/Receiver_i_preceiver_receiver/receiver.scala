// #Sireum

// This file was auto-generated.  Do not edit

package t.Receiver_i_preceiver_receiver

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import t._
import t.AttestationGate.Receiver_i_preceiver_receiver_seL4Nix

object receiver extends App {

  val receiverBridge : t.AttestationGate.Receiver_i_preceiver_receiver_Bridge = {
    val read_port = Port[Base_Types.Bits] (id = 0, name = "s_impl_Instance_preceiver_receiver_read_port", mode = EventIn)

    t.AttestationGate.Receiver_i_preceiver_receiver_Bridge(
      id = 0,
      name = "s_impl_Instance_preceiver_receiver",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      read_port = read_port
    )
  }

  val entryPoints: Bridge.EntryPoints = receiverBridge.entryPoints
  val noData: Option[DataContent] = None()

  // read_port: In EventDataPort Base_Types.Bits
  val read_port_id: Art.PortId = receiverBridge.read_port.id
  var read_port_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!Receiver_i_preceiver_receiver_seL4Nix.read_port_IsEmpty()) {
      portIds = portIds :+ read_port_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == read_port_id) {
      return read_port_port
    } else {
      halt(s"Unexpected: receiver.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    read_port_port = Receiver_i_preceiver_receiver_seL4Nix.read_port_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    halt(s"Unexpected: receiver.putValue called with: ${portId}")
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def initialiseArchitecture(): Unit = {
    // nothing to do - CAmkES is responsible for initialization
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_initialization_api.get.logInfo("")
      t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_initialization_api.get.logDebug("")
      t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_initialization_api.get.logError("")
      t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_operational_api.get.logInfo("")
      t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_operational_api.get.logDebug("")
      t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_operational_api.get.logError("")
      val apiUsage_read_port: Option[Base_Types.Bits] = t.AttestationGate.Receiver_i_preceiver_receiver_Bridge.c_operational_api.get.get_read_port()
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(receiverBridge.name)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(receiverBridge.name)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(receiverBridge.name)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}
