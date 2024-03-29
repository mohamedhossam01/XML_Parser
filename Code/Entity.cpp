#include <bits/stdc++.h>
#include <unordered_map>
#include "Entity.h"
using namespace std;
using namespace Entity;
typedef unsigned long long ull;
#define USER_ID 0
#define FOLLOWER_ID 1
#define NAME 2
#define BODY 3
#define TOPICS 4
#define FOLLOWERS 5
#define POSTS 6
#define MAXASCII 256
// for color coding
#define ID_COLOR 0
#define USER_COLOR 1
#define USERS_COLOR 2
#define FOLLOWER_COLOR 3
#define FOLLOWERS_COLOR 4
#define POST_COLOR 5
#define POSTS_COLOR 6
#define NAME_COLOR 7
#define TOPIC_COLOR 8
#define TOPICS_COLOR 9
#define BODY_COLOR 10

vector<string> XmlParser::splitter(string s, int size) {
    vector<string>chars;
    while (s.size() > 0) {
        chars.push_back(s.substr(0, size));
        s.erase(0, size);
    }
    return chars;
}
string XmlParser::getSpace(int numOfSpaces) {
    string spaces;
    for (int i = 0; i < numOfSpaces; ++i)
        spaces.push_back(' ');
    return spaces;
}
string XmlParser::getTagName(string tag) {
    string name;
    for (int i = 0; i < tag.size(); ++i)
        if (tag[i] != '<' && tag[i] != '>' && tag[i] != '/')
            name.push_back(tag[i]);
    return name;
}
void XmlParser::deleteNewLines() {
    xmlCommpressed = "";
    int i = 0;
    string currentLine;
    while (i < xml.size()) {
        for (i; xml[i] != '\n' && i < xml.size(); ++i)
            currentLine += xml[i];
        ++i;
        xmlCommpressed += trimLine(currentLine);
        currentLine = "";
    }
}
string XmlParser::BiToHex(string s) {
    vector<string>chars = splitter(s, 5);
    string hex = "";
    for (string i : chars) {
        if (i == "00000") {
            hex += '0';
        }
        else if (i == "00001") {
            hex += '1';
        }
        else if (i == "00010") {
            hex += '2';
        }
        else if (i == "00011") {
            hex += '3';
        }
        else if (i == "00100") {
            hex += '4';
        }
        else if (i == "00101") {
            hex += '5';
        }
        else if (i == "00110") {
            hex += '6';
        }
        else if (i == "00111") {
            hex += '7';
        }
        else if (i == "01000") {
            hex += '8';
        }
        else if (i == "01001") {
            hex += '9';
        }
        else if (i == "01010") {
            hex += 'A';
        }
        else if (i == "01011") {
            hex += 'B';
        }
        else if (i == "01100") {
            hex += 'C';
        }
        else if (i == "01101") {
            hex += 'D';
        }
        else if (i == "01110") {
            hex += 'E';
        }
        else if (i == "01111") {
            hex += 'F';
        }
        else if (i == "10000") {
            hex += 'G';
        }
        else if (i == "10001") {
            hex += 'H';
        }
        else if (i == "10010") {
            hex += 'I';
        }
        else if (i == "10011") {
            hex += 'J';
        }
        else if (i == "10100") {
            hex += 'K';
        }
        else if (i == "10101") {
            hex += 'L';
        }
        else if (i == "10110") {
            hex += 'M';
        }
        else if (i == "10111") {
            hex += 'N';
        }
        else if (i == "11000") {
            hex += 'O';
        }
        else if (i == "11001") {
            hex += 'P';
        }
        else if (i == "11010") {
            hex += 'Q';
        }
        else if (i == "11011") {
            hex += 'R';
        }
        else if (i == "11100") {
            hex += 'S';
        }
        else if (i == "11101") {
            hex += 'T';
        }
        else if (i == "11110") {
            hex += 'U';
        }
        else if (i == "11111") {
            hex += 'V';
        }
    }
    return hex;
}
string XmlParser::HexToBi(string s) {
    string bi = "";
    for (char i : s) {
        if (i == '0') {
            bi += "00000";
        }
        else if (i == '1') {
            bi += "00001";
        }
        else if (i == '2') {
            bi += "00010";
        }
        else if (i == '3') {
            bi += "00011";
        }
        else if (i == '4') {
            bi += "00100";
        }
        else if (i == '5') {
            bi += "00101";
        }
        else if (i == '6') {
            bi += "00110";
        }
        else if (i == '7') {
            bi += "00111";
        }
        else if (i == '8') {
            bi += "01000";
        }
        else if (i == '9') {
            bi += "01001";
        }
        else if (i == 'A') {
            bi += "01010";
        }
        else if (i == 'B') {
            bi += "01011";
        }
        else if (i == 'C') {
            bi += "01100";
        }
        else if (i == 'D') {
            bi += "01101";
        }
        else if (i == 'E') {
            bi += "01110";
        }
        else if (i == 'F') {
            bi += "01111";
        }
        else if (i == 'G') {
            bi += "10000";
        }
        else if (i == 'H') {
            bi += "10001";
        }
        else if (i == 'I') {
            bi += "10010";
        }
        else if (i == 'J') {
            bi += "10011";
        }
        else if (i == 'K') {
            bi += "10100";
        }
        else if (i == 'L') {
            bi += "10101";
        }
        else if (i == 'M') {
            bi += "10110";
        }
        else if (i == 'N') {
            bi += "10111";
        }
        else if (i == 'O') {
            bi += "11000";
        }
        else if (i == 'P') {
            bi += "11001";
        }
        else if (i == 'Q') {
            bi += "11010";
        }
        else if (i == 'R') {
            bi += "11011";
        }
        else if (i == 'S') {
            bi += "11100";
        }
        else if (i == 'T') {
            bi += "11101";
        }
        else if (i == 'U') {
            bi += "11110";
        }
        else if (i == 'V') {
            bi += "11111";
        }
    }
    return bi;
}
XmlParser::Node::Node(int freq, string c, Node* left, Node* right) {
    this->freq = freq;
    this->c = c;
    this->right = right;
    this->left = left;
}
XmlParser::Node::~Node() {
    delete[] right;
    delete[] left;
}
bool XmlParser::compare::operator()(const Node* l, const Node* r)const {
    return l->freq > r->freq;
}
XmlParser::Node* XmlParser::huffman() {
    Node* l, * r;
    while (pq.size() > 1) {
        l = pq.top();
        pq.pop();
        r = pq.top();
        pq.pop();
        Node* newnode = new Node(l->freq + r->freq, l->c + r->c, l, r);
        pq.push(newnode);
    }
    return pq.top();
}
XmlParser::Node* XmlParser::TreeMaker(int freq[]) {
    while (!pq.empty()) {
        pq.pop();
    }
    string temp;
    for (int i = 0; i < MAXASCII; i++) {
        if (freq[i]) {
            temp = char(i);
            pq.push(new Node(freq[i], temp, nullptr, nullptr));
        }
    }
    Node* tree = huffman();
    return tree;
}
void XmlParser::leafCoding(Node* tree, string code) {
    if (tree == NULL) return;
    if (tree->c.size() == 1) {
        myPair<string, string> p(tree->c, code);
        pairs.push_back(p);
    }
    leafCoding(tree->left, code + '0');
    leafCoding(tree->right, code + '1');
}
bool XmlParser::compareByLength(const myPair<string, string>& a, const myPair<string, string>& b) {
    return a.second.size() < b.second.size();
}
void XmlParser::sortingTree() {
    sort(pairs.begin(), pairs.end(), &compareByLength);
}
string XmlParser::EncryptData(int freq[], string data) {
    string codedData = "";
    for (int i = 0; i < 256; i++) {
        if (freq[i]) {
            codedData += (char)i;
            codedData += "|";
            codedData += to_string(freq[i]);
            codedData += "/";
        }
    }
    codedData += "$$";
    int localcnt = 0;
    string zerosOnes = "";
    for (int i = 0; i < data.size(); i++) {
        string currentchar(1, data[i]);
        for (int j = 0; j < pairs.size(); j++) {
            if (currentchar == pairs[j].first) {
                zerosOnes += pairs[j].second;
                break;
            }
        }
    }
    while (zerosOnes.size() % 5 != 0) {
        zerosOnes = "0" + zerosOnes;
        localcnt++;
    }
    codedData += to_string(localcnt);
    string Hex = BiToHex(zerosOnes);

    codedData += Hex;
    return codedData;
}
string XmlParser::encode(string data) {
    fill(freq, freq + MAXASCII, 0);
    for (auto c : data) {
        freq[c]++;
    }
    leafCoding(TreeMaker(freq), "");
    sortingTree();
    return EncryptData(freq, data);
}
string XmlParser::decode(string data) {
    int newfreq[MAXASCII] = { 0 };
    string charCounterString = "";
    int charCounter;
    int indexcnt;
    string encryptedData = "";
    int i = 0;
    while (i < data.size() && data[i] != '$' && data[i + 1] != '$') {
        if (data[i] == '|') {
            indexcnt = i + 1;
            charCounterString = "";
            while (data[indexcnt] != '/') {
                charCounterString += data[indexcnt];
                indexcnt++;
            }
            charCounter = stoi(charCounterString);
            newfreq[(int)data[i - 1]] = charCounter;
            i += (indexcnt - i + 1);
        }
        else {
            i++;
        }
    }
    //frequency array is adjusted updated during while loop
    i += 2; //to jump over $$
    //frequency is updated now it`s time to take encrypted data
    if (i >= data.size())return "";
    int temp_cnt = data[i] - '0'; // saving number of reduandant zeros
    i++;

    for (; i < data.size(); i++) {
        encryptedData += data[i];               // we got all HEXNumbers
    }

    string ZerosOnes = HexToBi(encryptedData);

    //now we got all originalZeros&ones

    string ans = "";
    Node* root = TreeMaker(newfreq);
    Node* curr = root;
    for (int i = temp_cnt; i < ZerosOnes.size(); i++)
    {
        if (ZerosOnes[i] == '0')
            curr = curr->left;
        else
            curr = curr->right;

        // reached leaf node
        if ((curr->left == NULL) && (curr->right == NULL))
        {
            ans += curr->c;
            curr = root;
        }
    }
    return ans;
}
bool XmlParser::isSubString(string target, string base)
{
    int targetIndex = 0;
    if (target.size() > base.size())
        return 0;
    for (int i = 0; i < base.size() - target.size() + 1; ++i) {
        if (base[i] == target[targetIndex]) {
            for (int j = i; targetIndex < target.size(); ++j) {
                if (base[j] != target[targetIndex]) {
                    targetIndex = 0;
                    i = j;
                    break;
                }
                if (base[j] == target[targetIndex] && targetIndex == target.size() - 1)
                    return 1;
                ++targetIndex;
            }
        }
    }
    return 0;
}
bool XmlParser::isNumber(string number)
{
    for (auto c : number)
        if (!(c - '0' >= 0 && c - '0' <= 9))
            return 0;
    return 1;
}
int XmlParser::isItemFound(int item, vector<int>& itemVec)
{
    int start = 0, end = itemVec.size() - 1;
    while (start <= end) {
        int mid = (end - start) / 2 + start;
        if (itemVec[mid] == item)
            return mid;
        else if (itemVec[mid] > item)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
bool XmlParser::compareUsers(User user1, User user2)
{
    return stoi(user1.id.second) <= stoi(user2.id.second);
}
string XmlParser::searchPosts(string keyWord)
{
    int postNumber = 1;
    string postList;
    for (auto user : users) {
        for (auto post : user.posts.second) { //looping through the body of all posts of a user
            if (isSubString(keyWord, post.body.second)) {
                postList.append("Post #" + to_string(postNumber++) + ":\n" + "BY: " + user.name.second + " (" + user.id.second + ")" + "\n" + post.body.second + "\n_________\n");
                break;
            }
            for (auto topic : post.topics.second)
                if (isSubString(keyWord, topic)) {
                    postList.append("Post #" + to_string(postNumber++) + ":\n" + "BY: " + user.name.second + " (" + user.id.second + ")" + "\n" + post.body.second + "\n_________\n");
                    break;
                }
        }
    }
    if (postList.empty())
        postList = "NO POSTS FOUND :(";
    return postList;
}
string XmlParser::getMutualFollowers(string ID1, string ID2)
{
    if (!isNumber(ID1) && !isNumber(ID2))
        return "INVALID ID FOR USER 1 AND USER 2";
    else if (!isNumber(ID1) && isNumber(ID2))
        return "INVALID ID FOR USER 1";
    else if (isNumber(ID1) && !isNumber(ID2))
        return "INVALID ID FOR USER 2";
    else { //work starts here 
        if (ID1 == ID2)
            return "PLEASE ENTER DIFFERENT USERS' IDS";
        string usersList;
        vector<int> followers1, followers2;
        bool firstUserFound = 0, secondUserFound = 0;
        for (auto user : users) { //filling the vectors
            if (user.id.second == ID1) {
                firstUserFound = 1;
                for (auto follower : user.followers.second)
                    followers1.push_back(stoi(follower.id));
            }
            else if (user.id.second == ID2) {
                secondUserFound = 1;
                for (auto follower : user.followers.second)
                    followers2.push_back(stoi(follower.id));
            }
        }
        if (!firstUserFound && secondUserFound)
            return "USER 1 DOES NOT EXIST ON THE NETWORK";
        else if (firstUserFound && !secondUserFound)
            return "USER 2 DOES NOT EXIST ON THE NETWORK";
        else if (!firstUserFound && !secondUserFound)
            return "USER 1 AND USER 2 DON'T EXIST ON THE NETWORK";
        sort(followers1.begin(), followers1.end());
        sort(followers2.begin(), followers2.end());
        for (auto follower : followers1)
            if (isItemFound(follower, followers2) != -1)
                usersList.append(to_string(follower) + " ");
        return usersList.empty() ? "NO MUTUAL FOLLOWERS FOUND :(" : "Mutual users' IDs: \n" + usersList;
    }
}
string XmlParser::recommendPeople(string id)
{
    if (!isNumber(id))
        return "INVALID USER ID";
    vector<int>usersIds, toFollowIds;
    string toFollow;
    for (auto user : users)
        usersIds.push_back(stoi(user.id.second));
    int userIndex = isItemFound(stoi(id), usersIds);
    if (userIndex == -1)
        return "USER DOES NOT EXIST ON THE NETWORK";
    //getting the followers of followers
    for (auto follower : users[userIndex].followers.second) {
        int followerId = stoi(follower.id);
        int followerIndex = isItemFound(followerId, usersIds);
        for (auto followerOfFollower : users[followerIndex].followers.second)
            if (followerOfFollower.id != id)
                toFollowIds.push_back(stoi(followerOfFollower.id));
    }
    sort(toFollowIds.begin(), toFollowIds.end());
    toFollowIds.push_back(-1);
    for (int i = 0; i < toFollowIds.size() - 1; ++i)
        if (toFollowIds[i] != toFollowIds[i + 1])
            toFollow.append(to_string(toFollowIds[i]) + " ");
    return toFollow.empty() ? "No recommendations found :(" : "The list of recommended to follow: \n" + toFollow;
}
string XmlParser::doNetworkAnalysis()
{
    string influencerString;
    string writerString;
    int influncerFollowers = -1;
    int writerPosts = -1;
    for (auto user : users) {
        influncerFollowers = max(influncerFollowers, (int)user.followers.second.size());
        writerPosts = max(writerPosts, (int)user.posts.second.size());
    }
    for (auto user : users) {
        if (user.followers.second.size() == influncerFollowers)
            influencerString.append("User Name: " + user.name.second + " - User ID: " + user.id.second + "\n");
        if (user.posts.second.size() == writerPosts)
            writerString.append("User Name: " + user.name.second + " - User ID: " + user.id.second + "\n");
    }
    influencerString = (influncerFollowers == -1) ? "NO ONE IS FOLLOWING ANYONE" : "The List of most followed people with "
        + to_string(influncerFollowers) + " follower/s :\n" + influencerString;
    writerString = (writerPosts == -1) ? "NO ONE WROTE POSTS" : "The List of people with the highest number of posts with "
        + to_string(writerPosts) + " post/s :\n" + writerString;
    return influencerString + "____\n" + writerString;
}
void XmlParser::extractData() {
    users.clear();
    vector<Post> posts;
    vector<Follower> followers;
    vector<string> topics;
    int order = 0;
    int innerOrder = 0;
    int followersOder = -1;
    int postsOrder = -1;
    int topicsOrder = -1;
    bool followerHasId = 0;
    User user;
    Post post;
    Follower follower;
    bool inFollower = 0;
    bool inPost = 0;
    bool inPosts = 0;
    bool inFollowers = 0;
    bool inTopics = 0;
    bool inUser = 0;
    for (int i = 0; i < xmlCommpressed.size(); ++i) {
        if ((xmlCommpressed[i] == '<' && (i == 0 || xmlCommpressed[i - 1] != '\\' || (i >= 2 && xmlCommpressed[i - 1] == '\\' && xmlCommpressed[i - 2] == '\\')))) {
            string tagFrame = getTagFrame(xmlCommpressed, i);
            string tagName = getTagName(tagFrame);
            if (isStartTag(tagFrame)) {
                if (tagName == "name" || tagName == "body" || tagName == "topic" || tagName == "id") {
                    ++i;
                    string data = getData(xmlCommpressed, i);
                    getTagFrame(xmlCommpressed, i);
                    if (inUser && !inPosts && !inFollowers) {
                        if (tagName == "name") {
                            user.nameVector.push_back(createPair(order, data));
                            ++order;
                        }
                        else if (tagName == "id") {
                            user.idVector.push_back(createPair(order, data));
                            ++order;
                        }
                    }
                    else if (inUser && inFollower) {
                        if (tagName == "id") {
                            follower.idVector.push_back(data);
                            followerHasId = 1;
                        }
                    }
                    else if (inUser && inPost && !inTopics) {
                        if (tagName == "body") {
                            post.bodyVector.push_back(createPair(innerOrder, data));
                            ++innerOrder;
                        }
                    }
                    else if (inTopics) {
                        if (tagName == "topic") {
                            topics.push_back(data);
                        }
                    }
                }
                else if (tagName == "user") {
                    if (!inUser) {
                        order = 0;
                        followersOder = -1;
                        postsOrder = -1;
                        user.clear();
                        inUser = 1;
                    }
                }
                else if (tagName == "followers") {
                    if (!inFollowers) {
                        followersOder = order;
                        ++order;
                        inFollowers = 1;
                        followers.clear();
                    }
                }
                else if (tagName == "topics") {
                    if (!inTopics) {
                        inTopics = 1;
                        topicsOrder = innerOrder;
                        ++innerOrder;
                        topics.clear();
                    }
                }
                else if (tagName == "posts") {
                    if (!inPosts) {
                        inPosts = 1;
                        postsOrder = order;
                        posts.clear();
                        ++order;
                    }
                }
                else if (tagName == "follower") {
                    if (!inFollower) {
                        follower.clear();
                        inFollower = 1;
                    }
                }
                else if (tagName == "post") {
                    if (!inPost) {
                        innerOrder = 0;
                        post.clear();
                        inPost = 1;
                        topicsOrder = -1;
                    }
                }
            }
            else {
                if (tagName == "user") {
                    if (inUser) {
                        inUser = 0;
                        users.push_back(user);
                    }
                }
                else if (tagName == "followers") {
                    if (inFollowers) {
                        inFollowers = 0;
                        user.followersVector.push_back(createPair(followersOder, followers));
                    }
                }
                else if (tagName == "topics") {
                    if (inTopics) {
                        inTopics = 0;
                        post.topicsVector.push_back(createPair(topicsOrder, topics));
                    }
                }
                else if (tagName == "posts") {
                    if (inPosts) {
                        inPosts = 0;
                        user.postsVector.push_back(createPair(postsOrder, posts));
                    }
                }
                else if (tagName == "follower") {
                    if (inFollower) {
                        inFollower = 0;
                        if (followerHasId) {
                            followers.push_back(follower);
                            followerHasId = 0;
                        }
                    }
                }
                else if (tagName == "post") {
                    if (inPost) {
                        inPost = 0;
                        posts.push_back(post);
                    }
                }
            }
        }
    }
    for (int i = 0; i < users.size(); ++i) {
        users[i].setUser();
        for (int j = 0; j < users[i].posts.second.size(); ++j)
            users[i].posts.second[j].setPost();
        for (int j = 0; j < users[i].followers.second.size(); ++j)
            users[i].followers.second[j].setFollower();
    }
    sort(users.begin(), users.end(), compareUsers);
}
void XmlParser::printJson() {
    if (xml == "")
        return;
    json = "";
    json.append("{\n");
    toLines();
    tagTree = new TagTree();
    tagTree->constructTree(lines);
    tagTree->setTypes(tagTree->chain);
    tagTree->printInOrder(JSON_FORMAT, json);
    tagTree->~TagTree();
    json.append("}");
}
void XmlParser::correctTag(string tagName) {  //Lines vector->Lines vector (corrected)
    MultiSet escapeTags;
    if (tagName == "topics")
        escapeTags.insert("topic");
    else if (tagName == "follower")
        escapeTags.insert("id");
    else if (tagName == "followers") {
        escapeTags.insert("follower");
        escapeTags.insert("id");
    }
    else if (tagName == "post") {
        escapeTags.insert("body");
        escapeTags.insert("topic");
        escapeTags.insert("topics");
    }
    else if (tagName == "posts") {
        escapeTags.insert("body");
        escapeTags.insert("topic");
        escapeTags.insert("topics");
        escapeTags.insert("post");
    }
    else if (tagName == "user") {
        escapeTags.insert("id");
        escapeTags.insert("name");
        escapeTags.insert("body");
        escapeTags.insert("topic");
        escapeTags.insert("topics");
        escapeTags.insert("post");
        escapeTags.insert("posts");
        escapeTags.insert("follower");
        escapeTags.insert("followers");
    }
    else if (tagName == "users") {
        escapeTags.insert("id");
        escapeTags.insert("name");
        escapeTags.insert("body");
        escapeTags.insert("topic");
        escapeTags.insert("topics");
        escapeTags.insert("post");
        escapeTags.insert("posts");
        escapeTags.insert("follower");
        escapeTags.insert("followers");
        escapeTags.insert("user");
    }
    bool search = 0;
    //first stage
    vector<int>pos;
    for (int i = 0; i < lines.size(); ++i) {
        if (search == 1 && lines[i][0] == '<') {
            if (!escapeTags.count(getTagName(lines[i]))) {
                if (isStartTag(lines[i])) {
                    pos.push_back(i);
                }
                else
                    if (getTagName(lines[i]) != tagName)
                        pos.push_back(i);
                search = 0;
            }
        }
        if (lines[i][0] == '<' && isStartTag(lines[i])) {
            if (getTagName(lines[i]) == tagName) {
                search = 1;
            }
        }
    }
    if (search) {
        lines.push_back("</" + tagName + ">");
        search = 0;
    }

    vector<string>newLines(lines.size() + pos.size());
    for (int i = 0; i < pos.size(); ++i) {
        newLines[pos[i]] = "</" + tagName + ">";
    }
    int k = 0;
    for (int i = 0; i < lines.size();) {
        if (newLines[k].empty()) {
            newLines[k] = lines[i];
            ++k;
            ++i;
        }
        else {
            ++k;
        }
    }
    lines = newLines;
    newLines.clear();
    pos.clear();
    //second stage
    search = 0;
    for (int i = lines.size() - 1; i >= 0; --i) {
        if (search == 1 && lines[i][0] == '<') {
            if (!escapeTags.count(getTagName(lines[i]))) {
                if (!isStartTag(lines[i]))
                    pos.push_back(i + 1);
                else
                    if (getTagName(lines[i]) != tagName)
                        pos.push_back(i + 1);
                search = 0;
            }
        }
        if (lines[i][0] == '<' && !isStartTag(lines[i])) {
            if (getTagName(lines[i]) == tagName) {
                search = 1;
            }
        }
    }
    if (search) {
        lines.insert(lines.begin(), "<" + tagName + ">");
        search = 0;
    } //
    newLines.resize(lines.size() + pos.size());
    for (int i = 0; i < pos.size(); ++i) {
        newLines[pos[i]] = "<" + tagName + ">";
    }
    k = 0;
    for (int i = 0; i < lines.size(); ++i) {
        if (newLines[k].empty()) {
            newLines[k] = lines[i];
            ++k;
        }
        else {
            ++k;
            --i;
        }
    }
    lines = newLines;
    escapeTags.~MultiSet();
}
void XmlParser::toLines() {
    lines.clear();
    deleteNewLines();
    string tagFrame;
    string data;
    bool open = 0;
    for (int i = 0; i < xmlCommpressed.size(); ++i) {
        if (xmlCommpressed[i] != '\n') {
            if (xmlCommpressed[i] == '<' && (i == 0 || xmlCommpressed[i - 1] != '\\' || (i >= 2 && xmlCommpressed[i - 1] == '\\' && xmlCommpressed[i - 2] == '\\'))) {
                if (!trimLine(data).empty()) {
                    data = trimLine(data);
                    lines.push_back(data);
                    data.clear();
                }
                open = 1;
                tagFrame.push_back(xmlCommpressed[i]);
            }
            else if (xmlCommpressed[i] == '>' && (i == 0 || xmlCommpressed[i - 1] != '\\')) {
                open = 0;
                tagFrame.push_back(xmlCommpressed[i]);
                tagFrame = trimLine(tagFrame);
                lines.push_back(tagFrame);
                tagFrame.clear();
            }
            else {
                if (open)
                    tagFrame.push_back(xmlCommpressed[i]);
                else
                    data.push_back(xmlCommpressed[i]);
            }
        }
    }
    if (!trimLine(data).empty()) {
        data = trimLine(data);
        lines.push_back(data);
        data.clear();
    }
    recreateXml();
}
void XmlParser::fillColors() {
    colors.clear();
    colors.resize(11);
    for (int i = 0; i < xmlFormatted.size(); ++i) {
        if (xmlFormatted[i] == '<' && (i == 0 || xmlFormatted[i - 1] != '\\' || (i >= 2 && xmlFormatted[i - 1] == '\\' && xmlFormatted[i - 2] == '\\'))) { //markd the start of a tag
            int start = i;
            string tagFrame = getTagFrame(xmlFormatted, i);
            int end = i;
            string tagName = getTagName(tagFrame);
            int target = -1;
            if (tagName == "users")
                target = USERS_COLOR;
            else if (tagName == "user")
                target = USER_COLOR;
            else if (tagName == "id")
                target = ID_COLOR;
            else if (tagName == "name")
                target = NAME_COLOR;
            else if (tagName == "posts")
                target = POSTS_COLOR;
            else if (tagName == "post")
                target = POST_COLOR;
            else if (tagName == "body")
                target = BODY_COLOR;
            else if (tagName == "topic")
                target = TOPIC_COLOR;
            else if (tagName == "topics")
                target = TOPICS_COLOR;
            else if (tagName == "follower")
                target = FOLLOWER_COLOR;
            else if (tagName == "followers")
                target = FOLLOWERS_COLOR;
            else
                break;
            colors[target].push_back(createPair(start, end));
        }
    }
}
string XmlParser::getTagFrame(string& xml, int& pointer) {
    string tagFrame;
    tagFrame.push_back('<');
    ++pointer;
    for (pointer;
        !(xml[pointer] == '>' && (pointer == 0 || xml[pointer - 1] != '\\' || (pointer >= 2 && xml[pointer - 1] == '\\' && xml[pointer - 2] == '\\')))
        ; ++pointer)
        tagFrame.push_back(xml[pointer]);
    tagFrame.push_back('>');
    return tagFrame;
}
string XmlParser::trimLine(string input) {
    for (int i = 0; i < input.size() && input[i] == ' ';)
        input.erase(i, 1);
    for (int i = input.size() - 1; i >= 0 && input[i] == ' '; --i)
    {
        input.erase(i, 1);
    }
    return input;
}
void XmlParser::checkStack() {
    while (!tagStack.empty()) {
        auto stackTop = tagStack.top();
        errors.push_back(stackTop.second);
        tagStack.pop();
    }
}
string XmlParser::getData(string& xml, int& counter) {
    string data;
    while (!(xml[counter] == '<' && (counter == 0 || xml[counter - 1] != '\\' || (counter >= 2 && xml[counter - 1] == '\\' && xml[counter - 2] == '\\')))
        ) {
        data.push_back(xml[counter]);
        ++counter;
    }
    return data;
}
void XmlParser::setXml(string& xml)
{
    xml.erase(std::remove(xml.begin(), xml.end(), '\r'), xml.end());
    this->xml = xml;
}
template<class T>
static void XmlParser::setField(myPair<int, T>& target, vector< myPair<int, T> >& list) {
    if (!list.empty()) {
        if (list.size() == 1) {
            target = list[0];
        }
        else if (list.size() > 1) {
            bool nonEmptyFound = 0;
            for (int i = 0; i < list.size(); ++i) {
                if (!list[i].second.empty()) {
                    nonEmptyFound = 1;
                    target = list[i];
                    break;
                }
            }
            if (!nonEmptyFound)
                target = list[0];
        }
    }
}
void XmlParser::correctXml() {
    toLines();
    vector<string>toCorrect{ "id" ,"name","body","topic","topics","follower","followers","post","posts","user","users" };
    for (auto tag : toCorrect)
        correctTag(tag);
    xmlCommpressed.clear(); //cleared after using it in toLines
    for (auto line : lines)
        xmlCommpressed.append(line);
    extractData(); //fills data base
    getXmlFormatted();
}
void XmlParser::recreateXml() {
    reformatted.clear();
    for (int i = 0; i < lines.size(); ++i) {
        reformatted.append(lines[i]);
        reformatted.push_back('\n');
    }
}
void XmlParser::getXmlFormatted() {
    xmlFormatted = "";
    toLines();
    tagTree = new TagTree();
    tagTree->constructTree(lines);
    tagTree->printInOrder(XML_FORMAT, xmlFormatted);
    tagTree->~TagTree();
}
template<class T, class U>
XmlParser::myPair<T, U> XmlParser::createPair(T first, U second)
{
    myPair<T, U> mypair(first, second);
    return mypair;
}
void XmlParser::Follower::clear()
{
    id = "";
    idVector.clear();
}
void XmlParser::Follower::setFollower() {
    bool nonEmptyIdFound = 0;
    if (!idVector.empty()) {
        if (idVector.size() == 1) {
            id = idVector[0];
        }
        else {
            for (int i = 0; i < idVector.size(); ++i) {
                if (!idVector[i].empty()) {
                    id = idVector[i];
                    nonEmptyIdFound = 1;
                    break;
                }
                if (!nonEmptyIdFound) {
                    id = "";
                }
            }
        }
    }
}
template<class T, class U>
void XmlParser::myPair<T, U>::setPairValues(T first, U second)
{
    this->first = first;
    this->second = second;
}
template<class T, class U>
XmlParser::myPair<T, U>::myPair(T first, U second)
{
    this->first = first;
    this->second = second;
}
template<class T, class U>
XmlParser::myPair<T, U>::myPair()
{}
void XmlParser::Post::clear()
{
    postOrder.clear();
    body.first = -1;
    body.second = "";
    topics.first = -1;
    topics.second.clear();
    bodyVector.clear();
    topicsVector.clear();
}
void XmlParser::Post::setPost() {
    //setting the body
    setField(body, bodyVector);
    //setting the topics
    setField(topics, topicsVector);
}
void XmlParser::User::clear()
{
    userOrder.clear();

    id.first = -1, name.first = -1;
    id.second = "", name.second = "";

    posts.second.clear();
    posts.first = -1;

    followers.second.clear();
    followers.first = -1;


    idVector.clear();
    nameVector.clear();
    postsVector.clear();
    followersVector.clear();
}
void XmlParser::User::setUser()
{
    setField(name, nameVector);
    setField(id, idVector);
    setField(posts, postsVector);
    setField(followers, followersVector);
}
bool XmlParser::isStartTag(string tag) {
    if (tag[1] != '/' && tag[0] == '<')
        return true;
    return false;
}
void XmlParser::checkErrors()
{
    checkErrors(xml);
}
void XmlParser::checkErrors(string xml) {
    errors.clear();
    tagSet = new MultiSet();
    int lineIndex = 1;
    int i = 0;
    string tagFrame;
    string tagName;
    int startIndex = -1;
    int endIndex = -1;
    while (i < xml.size()) {
        if (xml[i] == '\n')
            ++lineIndex;
        else if (xml[i] == '<' && (i == 0 || xml[i - 1] != '\\' || (i >= 2 && xml[i - 1] == '\\' && xml[i - 2] == '\\'))) {
            startIndex = i;
            tagFrame = getTagFrame(xml, i);
            endIndex = i;
            tagName = getTagName(tagFrame);
            if (isStartTag(tagFrame)) {
                tagStack.push(createPair(createPair(tagName, lineIndex), createPair(startIndex, endIndex)));
                tagSet->insert(tagName);
            }
            else {
                if (tagStack.empty()) {
                    errors.push_back(createPair(startIndex, endIndex));
                }
                else if (tagName == tagStack.top().first.first) {
                    tagSet->erase(tagSet->lower_bound(tagName));
                    tagStack.pop();
                }
                else if (tagName != tagStack.top().first.first) {
                    if (!tagSet->count(tagName)) {
                        errors.push_back(createPair(startIndex, endIndex));
                    }
                    else {
                        while (tagStack.top().first.first != tagName) {
                            auto stackTop = tagStack.top();
                            errors.push_back(stackTop.second);
                            tagSet->erase(tagSet->lower_bound(tagStack.top().first.first));
                            tagStack.pop();
                        }
                        tagStack.pop();
                        tagSet->erase(tagSet->lower_bound(tagName));
                    }
                }
            }
        }
        ++i;
    }
    checkStack();
    tagSet->~MultiSet();
}
XmlParser::SetNode::SetNode(string data) {
    this->data = data;
    left = NULL;
    right = NULL;
}
string XmlParser::SetNode::getData() {
    return this->data;
}
XmlParser::SetNode* XmlParser::MultiSet::getMin(SetNode* root)
{
    if (root == NULL)
        return root;
    if (root->left == NULL)
        return root;
    while (root->left != NULL)
        return getMin(root->left);
}
XmlParser::SetNode* XmlParser::MultiSet::insert(string data, SetNode* root)
{
    if (root == NULL) {
        root = new SetNode(data);
        return  root;
    }
    if (data <= root->data) {
        root->left = insert(data, root->left);
    }
    else {
        root->right = insert(data, root->right);
    }
    return root;
}
XmlParser::SetNode* XmlParser::MultiSet::lower_bound(string data, SetNode* root)
{
    if (root == NULL || root->data == data)
        return root;
    if (data < root->data)
        return lower_bound(data, root->left);
    else
        return lower_bound(data, root->right);
}
int XmlParser::MultiSet::count(string data, SetNode* root)
{
    if (root == NULL)
        return 0;
    int iCount = 0;
    if (root->data < data)
        iCount += count(data, root->right);
    else if (root->data > data)
        iCount += count(data, root->left);
    else {
        ++iCount;
        iCount += count(data, root->left);
    }
    return iCount;
}
XmlParser::SetNode* XmlParser::MultiSet::erase(string data, SetNode* dataPointer, SetNode* root)
{
    if (root == NULL)
        return root;
    if (data < root->data)
        root->left = erase(data, dataPointer, root->left);
    else if (data > root->data)
        root->right = erase(data, dataPointer, root->right);
    else
        if (dataPointer != root) //not the required node to be erased
            root->left = erase(data, dataPointer, root->left);
        else { //reqired node
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }
            else if (root->left != NULL && root->right == NULL) {
                SetNode* temp = root->left;
                delete root;
                return temp;
            }
            else if (root->left == NULL && root->right != NULL) {
                SetNode* temp = root->right;
                delete root;
                return temp;
            }
            else {
                SetNode* toDelete = getMin(root->right);
                root->data = toDelete->data;
                root->right = erase(toDelete->data, toDelete, root->right);
            }
        }
    return root;
}
void XmlParser::MultiSet::deleteNodes(SetNode* root)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
        delete(root->left);
    if (root->right != NULL)
        delete(root->right);
    delete root;
}
XmlParser::MultiSet::MultiSet()
{
    chain = NULL;
}
XmlParser::MultiSet::~MultiSet()
{
    deleteNodes(chain);
    chain = NULL;
}
void XmlParser::MultiSet::insert(string data)
{
    this->chain = insert(data, chain);
}
XmlParser::SetNode* XmlParser::MultiSet::lower_bound(string data)
{
    return lower_bound(data, chain);
}
int XmlParser::MultiSet::count(string data)
{
    return count(data, chain);
}
void XmlParser::MultiSet::erase(SetNode* dataPointer)
{
    string data = dataPointer->data;
    this->chain = erase(data, dataPointer, chain);
}
XmlParser::TagNode::TagNode(string name, string value, int type, bool isArrayElement)
{
    this->name = name;
    this->value = value;
    this->type = type;
    this->parent = NULL;
    this->isArrayElement = isArrayElement;
}
void XmlParser::TagNode::setName(string name)
{
    this->name = name;
}
void XmlParser::TagNode::setValue(string value)
{
    this->value = value;
}
void XmlParser::TagNode::setParent(TagNode* parent)
{
    this->parent = parent;
}
void XmlParser::TagNode::addChild(TagNode* child)
{
    this->children.push_back(child);
}
string XmlParser::TagNode::getName()
{
    return this->name;
}
string XmlParser::TagNode::getValue()
{
    return this->value;
}
XmlParser::TagNode* XmlParser::TagNode::getParent()
{
    return this->parent;
}
void XmlParser::TagNode::setType(int type)
{
    this->type = type;
}
int XmlParser::TagNode::getType()
{
    return this->type;
}
vector<XmlParser::TagNode*> XmlParser::TagNode::getChildren()
{
    return this->children;
}
void XmlParser::TagTree::deleteNodes(TagNode* root)
{
    if (root == NULL)
        return;
    if (!root->children.empty()) {
        for (auto child : root->children)
            deleteNodes(child);
    }
    delete root;
}
void XmlParser::TagTree::setTypes(TagNode* root)
{
    if (root == NULL)
        return;
    if (root->children.empty())
        root->type = PRIMITIVE;
    else {
        if (root->children.size() == 1 || root->children[0]->name != root->children[1]->name) {
            root->type = OBJECT;
        }
        else {
            root->type = ARRAY;
            for (auto child : root->children)
                child->isArrayElement = 1;
        }
    }
    //cout << root->name << " " << root->type << endl;
    for (auto child : root->children)
        setTypes(child);
}
void XmlParser::TagTree::printInOrder(TagNode* root, int format, string& output, int lvl, bool isFinalElement)
{
    if (root == NULL)
        return;
    chain->type = ILLUSION;
    if (format == XML_FORMAT) {
        if (root->type != ILLUSION) {
            output.append(getSpace(4 * (lvl - 1)) + "<" + root->name + ">" + "\n");
            if (!root->value.empty())
                output.append(getSpace(4 * (lvl)) + root->value + "\n");
        }
    }
    //printing in json
    else if (format == JSON_FORMAT) {
        if (root->type != ILLUSION) {
            if (!root->isArrayElement) {
                output.append(getSpace(4 * (1 + (lvl - 1))) + "\"" + root->name + "\": "); //"name":(-)
            }
            if (root->type == PRIMITIVE) {//primitive
                if (root->value.empty()) {
                    root->value = "[]";
                    if (isFinalElement)
                        output.append(root->value + "\n"); //no comma
                    else
                        output.append(root->value + ",\n"); //add comma
                }
                else {
                    if (isFinalElement)
                        output.append("\"" + root->value + "\"\n"); //no comma
                    else
                        output.append("\"" + root->value + "\",\n"); //add comma
                }
            }
            else { //object or array
                if (root->type == OBJECT) { //object
                    if (!root->isArrayElement)
                        output.append("\n");
                    output.append(getSpace(4 * (1 + (lvl - 1))) + "{\n");
                }
                else { //array
                    if (!root->isArrayElement)
                        output.append("\n");
                    output.append(getSpace(4 * (1 + (lvl - 1))) + "[\n");
                }
            }
        }
    }
    //looping through children
    for (int i = 0; i < root->children.size(); ++i) {
        bool isFinalElement = (i == root->children.size() - 1) ? 1 : 0;
        printInOrder(root->children[i], format, output, lvl + 1, isFinalElement);
    }
    //after
    if (format == XML_FORMAT) {
        if (root->type != ILLUSION)
            output.append(getSpace(4 * (lvl - 1)) + "</" + root->name + ">\n");
    }
    else if (format == JSON_FORMAT) {
        if (root->type != ILLUSION) {
            if (root->type == OBJECT) { //object
                output.append(getSpace(4 * (lvl)));
                if (isFinalElement)
                    output.append("}\n");
                else
                    output.append("},\n");
            }
            else if (root->type == ARRAY) { //array
                output.append(getSpace(4 * (lvl)));
                if (isFinalElement)
                    output.append("]\n");
                else
                    output.append("],\n");
            }
        }
    }
}
XmlParser::TagTree::TagTree()
{
    chain = NULL;
    currentNode = NULL;
}
XmlParser::TagTree::~TagTree()
{
    deleteNodes(chain);
    chain = NULL;
}
void XmlParser::TagTree::constructTree(vector<string>& lines)
{
    TagNode* illusionParent = new TagNode("illusion");
    chain = illusionParent;
    currentNode = chain;
    for (auto line : lines) {
        if (line[0] == '<' && line[1] != '/') { //opening tag (new tag)
            TagNode* tag = new TagNode(getTagName(line)); //creating a new node
            currentNode->addChild(tag);
            tag->parent = currentNode;
            currentNode = tag;
        }
        else if (line[0] != '<') { //contains a value
            currentNode->value = line;
        }
        else //contains a closing tag
            if (currentNode->parent != NULL)
                currentNode = currentNode->parent;
    }
}
void XmlParser::TagTree::printInOrder(int format, string& output)
{
    this->printInOrder(chain, format, output);
}