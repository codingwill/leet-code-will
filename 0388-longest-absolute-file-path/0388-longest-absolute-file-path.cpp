struct Node {
    Node* parent;
    vector<Node*> children;
    int length;
    Node(Node* parent, int length) {
        this->parent = parent;
        this->length = length;
    }
    Node() {
        this->parent = nullptr;
        this->length = 0;
    }
};


class Solution {
public:
    int lengthLongestPath(string input) {
        //cout << input.length() << '\n';
        cout << input << '\n';
        vector<Node*> lastParent(10000, nullptr);
        int n = input.size();
        int row = 0;
        Node* parent = new Node();
        lastParent[0] = parent;
        Node* node;
        string dir = "";
        int ans = 0;
        bool isFile = false;
        for (int i = 0; i < n; ++i) {
            if (!(input[i] == '\n' || input[i] == '\t')) {
                dir.push_back(input[i]);    
                //cout << "Hello World" << '\n';
            }
            if (input[i] == '.') {
                isFile = true;
            }
            if (i > 0) {
                if (input[i] == '\n') {
                    parent = lastParent[row];
                    node = new Node(parent, dir.length() + parent->length);
                    parent->children.push_back(node);
                    if (isFile) 
                        ans = max(ans, node->length + row);
                    cout << node->length << '\n';
                    dir.clear();
                    lastParent[row+1] = node;
                    row = 0;
                    dir.clear();
                    isFile = false;
                }
                if (input[i] == '\t') {
                    //parent = node;
                    row++;
                    dir.clear();
                }
            }
        }
        parent = lastParent[row];
        node = new Node(parent, dir.length() + parent->length);
        parent->children.push_back(node);
        if (isFile) ans = max(ans, node->length + row);
        dir.clear();
        lastParent[row] = node;
        return ans;
    }
};