import Foundation

@objc
public protocol GMSDeviceDelegate {
    func onConnected(_ terminal: HpsTerminalInfo)
    func onDisconnected()
    func onError(_ deviceError: NSError)
    func onBluetoothDeviceList(_ peripherals: NSMutableArray)
}
