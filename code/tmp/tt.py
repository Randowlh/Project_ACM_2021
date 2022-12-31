from bluetooth import *
server sock=BluetoothSocket ( RFCOMM)
server
sock.bind(("",PORT ANY))
server sock. listen(1)
port = server_sock.getsockname()[1]
uuid="94f39d29-7d6d-437d-973b-fba39e49d4ee"
advertise_service( server_sock,"SampleServer",
service_ id = uuid,
service classes = [ uuid, SERIAL PORT CLASS ],
profiles = [ SERIAL _PORT_PROFILE ]
)
print ("Waiting for connection on RFCOMM channel %d" % port)
client_sock, client_info = server_sock.accept()
print("Accepted connection from",client_ info)
try:
    while True:
        data = client_sock.recv(1024)
        if len (data) == 0: break
        print ("received [%]" % data.decode())
        client_sock.send (data)
except IOError:
        pass
print ("disconnected")
client_sock.close()
server_sock.close()
print ("all done")