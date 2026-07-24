#include <bits/stdc++.h>

using namespace std;

// observer interface
class SubscriberInterface {
public:
    virtual void update() = 0;
    virtual void watchLatestVideo() = 0;
    virtual ~SubscriberInterface() = default;
};
class YoutubeChannelInterface {
public:
    // interface class of observable
    virtual void addSubscriber(SubscriberInterface* subscriber) = 0;
    virtual void removeSubscriber(SubscriberInterface* subscriber) = 0;
    virtual void notify() = 0;
    virtual void uploadVideo(string title) = 0;
    virtual string getLatestVideo() = 0;
    virtual ~YoutubeChannelInterface() = default;
};



// concrete class of observable
class Channel1 : public YoutubeChannelInterface {
private:
    vector<SubscriberInterface*> list;
    string latestVideo;

public:
    void addSubscriber(SubscriberInterface* subscriber) override {
        auto it = find(list.begin(), list.end(), subscriber);
        if (it != list.end()) {
            cout << "Subscriber already exists \n";
            return;
        }
        list.push_back(subscriber);
        cout << "subscriber added \n";
    }

    void removeSubscriber(SubscriberInterface* subscriber) override {
        auto it = find(list.begin(), list.end(), subscriber);
        if (it != list.end()) {
            list.erase(it);
            cout << "subscriber removed \n";
        } else {
            cout << "Subscriber not found \n";
        }
    }

    void notify() override {
        for (auto subscriber : list) {
            subscriber->update();
        }
    }

    void uploadVideo(string title) override {
        latestVideo = title;
        notify();
    }

    string getLatestVideo() override {
        return latestVideo;
    }
};

// concrete class of observer
class Subscriber1 : public SubscriberInterface {
private:
    YoutubeChannelInterface* observedChannel;
    string subscriberName;

public:
    Subscriber1(YoutubeChannelInterface* observedChannel, string subscriberName) {
        this->observedChannel = observedChannel;
        this->subscriberName = subscriberName;
        cout << "Subscribed to new channel\n";
    }

    void update() override {
        cout << subscriberName << " received notification: new video has been uploaded by subscribed channel\n";
    }

    void watchLatestVideo() override {
        cout << subscriberName << " is watching: " << observedChannel->getLatestVideo() << "\n";
    }
};

// client
int main() {
    YoutubeChannelInterface* channel = new Channel1();

    SubscriberInterface* subscriber = new Subscriber1(channel, "faizal");
    
    channel->addSubscriber(subscriber);
    channel->uploadVideo("video about Odessey film");
    
    subscriber->watchLatestVideo();
    channel->removeSubscriber(subscriber);

    delete subscriber;
    delete channel;
    return 0;
}