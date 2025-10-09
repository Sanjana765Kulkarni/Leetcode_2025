// Last updated: 09/10/2025, 11:24:24
class RandomizedSet {
public:
vector <int> arr;
    RandomizedSet() {
        // vector <int> arr;
         std::random_device rd;
        gen.seed(rd());
         cout << "null"<<endl;
    }
    
    bool insert(int val) {
        bool truth = true;

        if ( std::find(arr.begin(), arr.end(), val) != arr.end()) {truth = false;}
        if (truth == true)
        {
            arr.push_back(val);
        }
        
        return truth;
    }
    
    bool remove(int val) {
        bool truth = true;
       if ( std::find(arr.begin(), arr.end(), val) == arr.end()) {truth = false;}
        if (truth == true)
        {
            arr.erase(std :: remove(arr.begin(),arr.end(),val),arr.end());
            
        }
        return truth;

        
    }
    
    int getRandom() {
        if (arr.empty()) throw std::runtime_error("getRandom on empty RandomizedSet");
        std::uniform_int_distribution<int> dist(0, static_cast<int>(arr.size()) - 1);
        return arr[dist(gen)];

        
    }
private:
    std::mt19937 gen; 


};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */