// #include<iostream>
// #include<string>
// using namespace std;
// string revStr(string str, int i, int n)
// {
//     if(i == n)
//         return string(1, str[i]);

//     return revStr(str, i+1, n) + str[i];
// }                                                                             
// int main()
// {
//     string str;
//     cin>>str;
//     int n = str.length();
//     string res = revStr(str, 0, n-1);
//     cout<<res;
// }