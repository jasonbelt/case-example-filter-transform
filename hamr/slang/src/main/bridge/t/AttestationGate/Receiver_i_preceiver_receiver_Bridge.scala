// #Sireum

package t.AttestationGate

import org.sireum._
import art._
import t._
import t.AttestationGate.{Receiver_i_preceiver_receiver => component}

// This file was auto-generated.  Do not edit

@datatype class Receiver_i_preceiver_receiver_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  read_port: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(read_port),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(read_port),

    eventOuts = ISZ()
  )

  val initialization_api : Receiver_i_Initialization_Api = {
    val api = Receiver_i_Initialization_Api(
      id,
      read_port.id
    )
    Receiver_i_preceiver_receiver_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : Receiver_i_Operational_Api = {
    val api = Receiver_i_Operational_Api(
      id,
      read_port.id
    )
    Receiver_i_preceiver_receiver_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    Receiver_i_preceiver_receiver_Bridge.EntryPoints(
      id,

      read_port.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object Receiver_i_preceiver_receiver_Bridge {

  var c_initialization_api: Option[Receiver_i_Initialization_Api] = None()
  var c_operational_api: Option[Receiver_i_Operational_Api] = None()

  @datatype class EntryPoints(
    Receiver_i_preceiver_receiver_BridgeId : Art.BridgeId,

    read_port_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: Receiver_i_Initialization_Api,
    operational_api: Receiver_i_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(read_port_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

    def compute(): Unit = {
      // transpiler friendly filter
      def filter(receivedEvents: ISZ[Art.PortId], triggers: ISZ[Art.PortId]): ISZ[Art.PortId] = {
        var r = ISZ[Art.PortId]()
        val opsTriggers = ops.ISZOps(triggers)
        for(e <- receivedEvents) {
          if(opsTriggers.contains(e)) {
            r = r :+ e
          }
        }
        return r
      }

      // fetch received events ordered by highest urgency then earliest arrival-time
      val EventTriggered(receivedEvents) = Art.dispatchStatus(Receiver_i_preceiver_receiver_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == read_port_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(read_port_Id)

          // implement the following in 'component':  def handle_read_port(api: Receiver_i_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_read_port(operational_api, value)
        }
      }

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      // transpiler friendly filter
      def filter(receivedEvents: ISZ[Art.PortId], triggers: ISZ[Art.PortId]): ISZ[Art.PortId] = {
        var r = ISZ[Art.PortId]()
        val opsTriggers = ops.ISZOps(triggers)
        for(e <- receivedEvents) {
          if(opsTriggers.contains(e)) {
            r = r :+ e
          }
        }
        return r
      }

      // fetch received events ordered by highest urgency then earliest arrival-time
      val EventTriggered(receivedEvents) = Art.dispatchStatus(Receiver_i_preceiver_receiver_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == read_port_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(read_port_Id)

          // implement the following in 'component':  def handle_read_port(api: Receiver_i_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_read_port(operational_api, value)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: Receiver_i_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: Receiver_i_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: Receiver_i_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: Receiver_i_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: Receiver_i_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}