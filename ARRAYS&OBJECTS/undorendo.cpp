#include <iostream>
#include <stack>
using namespace std;

class Editor {
    stack<string> undoStack;
    stack<string> redoStack;

public:

    void performAction(string action) {
        undoStack.push(action);
        while(!redoStack.empty()) {
            redoStack.pop();
        }
        cout << "Action performed: " << action << endl;
    }
    void undo() {
        if(undoStack.empty()) {
            cout << "Nothing to undo\n";
            return;
        }
        string action = undoStack.top();
        undoStack.pop();
        redoStack.push(action);
        cout << "Undo: " << action << endl;
    }

    void redo() {
        if(redoStack.empty()) {
            cout << "Nothing to redo\n";
            return;
        }

        string action = redoStack.top();
        redoStack.pop();

        undoStack.push(action);

        cout << "Redo: " << action << endl;
    }
};

int main() {

    Editor e;

    e.performAction("Type A");
    e.performAction("Type B");
    e.performAction("Delete B");

    e.undo();
    e.undo();

    e.redo();

}