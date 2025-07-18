class RecentCounter {
    queue<int> track;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        track.push(t);
        while(track.front()<t-3000){
            track.pop();
        }
        return track.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */