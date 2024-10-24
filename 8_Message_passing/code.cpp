/*
//defination:
    Message passing in C++ is the process by which objects communicate by exchanging messages, typically in the form of method or function calls.

//What is Message Passing:
    Message passing in C++ involves passing objects or data between different parts of a program using functions,
    methods, or message queues. Objects communicate by sending and receiving data.
    A message for an object is a request for the execution of a procedure, and as such,
    it will invoke a function in the receiving object that produces the desired results.
    Message passing entails specifying the object’s name, the function’s name, and the data to be sent.
    
//What are Message Queues in C++?
    A message queue is a data structure that allows multiple processes or threads to communicate with each other by passing messages.
    It can be implemented using the standard library’s std::queue or a third-party library such as Boost.
    A message queue is a mechanism for sending and receiving messages, which are typically objects.
*/

#include <iostream>
#include <string>
#include <queue>

class Message {
public:
    std::string content;
    int priority;

    Message(std::string content, int priority) {
        this->content = content;
        this->priority = priority;
    }
};

class MessageQueue {
private:
    std::queue<Message> messages;

public:
    void push(Message message) {
        messages.push(message);
    }

    Message pop() {
        Message message = messages.front();
        messages.pop();
        return message;
    }

    bool isEmpty() {
        return messages.empty();
    }
};

class MessageHandler {
private:
    MessageQueue queue;

public:
    void handleMessage() {
        while (!queue.isEmpty()) {
            Message message = queue.pop();
            std::cout << "Received message: " << message.content << std::endl;
        }
    }

    void sendMessage(std::string content, int priority) {
        Message message(content, priority);
        queue.push(message);
    }
};

int main() {
    MessageHandler handler;

    handler.sendMessage("Hello world", 1);
    handler.sendMessage("How are you?", 2);
    handler.sendMessage("Goodbye", 3);

    handler.handleMessage();

    return 0;
}