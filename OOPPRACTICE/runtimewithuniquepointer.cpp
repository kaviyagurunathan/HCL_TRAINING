#include <iostream>
#include <vector>
#include <memory>
using namespace std;
class Media {
public:
    virtual void play() {
        cout << "Playing media\n";
    }

    virtual ~Media() {
        cout << "Media destroyed\n";
    }
};

class Audio : public Media {
public:
    void play() override {
        cout << "Playing Audio\n";
    }

    ~Audio() {
        cout << "Audio destroyed\n";
    }
};

class Video : public Media {
public:
    void play() override {
        cout << "Playing Video\n";
    }

    ~Video() {
        cout << "Video destroyed\n";
    }
};

int main() {
    vector<unique_ptr<Media>> mediaList;

    mediaList.push_back(make_unique<Audio>());
    mediaList.push_back(make_unique<Video>());

    for (auto& m : mediaList) {
        m->play();
    }

    return 0;
}