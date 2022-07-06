from operator import mod
from socket import *
serverPort = 12001
serverSocket = socket(AF_INET, SOCK_DGRAM)
serverSocket.bind(("", serverPort))
print("The server is ready to receive")
while True:
    message, clientAddress = serverSocket.recvfrom(2048)
    print("client:"+message.decode())
    modifiedMessage = input("You:")
    mm="Server:"+modifiedMessage
    serverSocket.sendto(mm.encode(), clientAddress)