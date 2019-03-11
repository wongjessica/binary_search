std::pair<bool,size_t> BinarySearch(const std::vector<int>& array, int key) {

auto lower = array.begin();
auto upper = array.end()-1;
while (lower <= upper) {
    auto mid = lower + (upper-lower) /2;
    if(key == *mid)
    {
        return {true,std::distance(array.begin(),mid)};
    }
    if(key < *mid)
        upper = mid-1;
    else
        lower = mid+1;
}

return {false,std::distance(array.begin(),lower)};
}

int main(int argc, const char * argv[]) {

std::vector<int> arr {2,5,11,15};
auto result = BinarySearch(arr,5);
if(result.first)
    std::cout << result.second << std::endl;
else
    std::cout << "Not found " << std::endl;
return 0;

}
