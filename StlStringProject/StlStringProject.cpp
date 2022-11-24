#include <iostream>
#include <string>

int main()
{
    std::cout << std::boolalpha;

    std::string s;
    s = "Hello world";
    
    std::cout << s << "\n";
    std::cout << s.length() << " " << s.capacity() << "\n";

    s += "!!!!!";
    std::cout << s << "\n";
    std::cout << s.length() << " " << s.capacity() << "\n";

    s.reserve(100);
    std::cout << s << "\n";
    std::cout << s.length() << " " << s.capacity() << "\n";

    s.clear();
    std::cout << s << "\n";
    std::cout << s.length() << " " << s.capacity() << "\n\n";

    s = "Helloworld";
    std::cout << s << "\n";
    //s.insert(5, 3, '$');
    s.insert(5, " all "); // "Hello all world"
    std::cout << s << "\n";
    s.erase(5, 4); // "Hello world"
    std::cout << s << "\n";
    s.push_back('!');
    std::cout << s << "\n";
    s.append(" and people!");
    std::cout << s << "\n\n";

    std::string s1{ "a" };
    std::string s2{ "aBC" };
    std::cout << s1.compare(s2) << "\n\n";

    std::string s3{ "***ABC+++" };
    std::cout << s3.starts_with("**") << "\n";
    std::cout << s3.ends_with("+++") << "\n\n";
    
    s3.replace(3, 3, 5, '^');
    std::cout << s3 << "\n\n";

    std::string s4{ "Hello world, hello all, hello people" };
    std::string s5 = s4.substr(6, 5);  
    std::cout << s5 << "\n";

    std::string stempl{ "lo" };
    int position{};

    do
    {
        position = s4.find(stempl, position);
        if (position != std::string::npos)
        {
            std::cout << position << " ";
            position++;
        }  
    } while (position != std::string::npos);
    std::cout << "\n";

    std::string snum{ "123.56" };
    //std::cout << 456 + stof(snum) << "\n";

    std::string message;
    int count = 38;

    message = "count of students: " + std::to_string(count);

    std::cout << message << "\n";


    return 0;


}
