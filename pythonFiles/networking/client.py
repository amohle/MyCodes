from socket import *

serverName = "192.168.0.4"
serverPort = 12001
clientSocket = socket(AF_INET, SOCK_DGRAM)
while True:
    message = input("You:")
    clientSocket.sendto(message.encode(),(serverName, serverPort))
    modifiedMessage, serverAddress = clientSocket.recvfrom(2048)
    print(modifiedMessage.decode())
clientSocket.close()