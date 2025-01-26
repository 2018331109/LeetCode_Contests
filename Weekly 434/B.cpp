class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        vector<int> mentions(numberOfUsers, 0);
        vector<int> active(numberOfUsers, 0);

        // Sort events: primary key - timestamp, secondary key - OFFLINE before MESSAGE
        sort(events.begin(), events.end(), [](const vector<string>& a, const vector<string>& b) {
            int timeA = stoi(a[1]), timeB = stoi(b[1]);
            if (timeA != timeB) return timeA < timeB;
            return a[0] == "OFFLINE"; // OFFLINE comes before MESSAGE for the same timestamp
        });

        for (auto& event : events) {
            int timestamp = stoi(event[1]);

            if (event[0] == "OFFLINE") {
                int id = stoi(event[2]);
                active[id] = timestamp + 60;
            } else if (event[0] == "MESSAGE") {
                if (event[2] == "ALL") {
                    for (int i = 0; i < numberOfUsers; ++i) {
                        ++mentions[i];
                    }
                } else if (event[2] == "HERE") {
                    for (int i = 0; i < numberOfUsers; ++i) {
                        if (active[i] <= timestamp) {
                            ++mentions[i];
                        }
                    }
                } else {
                    istringstream ss(event[2]);
                    string token;
                    while (ss >> token) {
                        if (token.substr(0, 2) == "id") {
                            int id = stoi(token.substr(2));
                            ++mentions[id];
                        }
                    }
                }
            }
        }

        return mentions;
    }
};

