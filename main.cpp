#include <iostream>
#include <string>

std::string find_operator(const std::string oper) 
{
    if (!(oper.find("+") == -1))
    {
        return "+";
    }
    else if (!(oper.find("-") == -1))
    {
        return "-";
    }
    else if (!(oper.find("*") == -1))
    {
        return "*";
    }
    else if (!(oper.find("/") == -1))
    {
        return "/";
    }   
    else 
    {
        return "";
    }
}

int main(int argc, char** argv) 
{
    std::cout << "\nType in a math operation (+, -, * and / operators allowed): ";
    std::string operation;
    std::getline(std::cin, operation); 
    std::string origin = operation;

    bool no_space_at_end = false;
    bool no_spaces = false;

    std::string operatorc = find_operator(operation);

    if (operation.find(operatorc) > operation.find(" ")) 
    {
        std::string num1 = operation.substr(0, operation.find(" "));
        std::string num2;
        operation.erase(0, operation.find(" ") + 1);
        if (!(operation.find(" ") == -1))
        {
            num2 = operation.substr(2, operation.length());  
            operation.erase(1, operation.length() + 1);
        }
        else 
        {
         no_space_at_end = true;
            num2 = operation.substr(1, operation.length());
            operation.erase(1, operation.length() + 1);
        }
        std::cout << std::endl;
        if (operation == "+")
        {
            if  (no_space_at_end)
            {
                origin.insert(origin.find("+") + 1, " ");
                std::cout << origin << " = " << std::stoi(num1) + std::stoi(num2) << "\n\n";
            }
            else 
            {
                std::cout << origin << " = " << std::stoi(num1) + std::stoi(num2) << "\n\n";
            }
        }    
        else if (operation == "-")
        {
            if  (no_space_at_end)
            {
                origin.insert(origin.find("-") + 1, " ");
                std::cout << origin << " = " << std::stoi(num1) - std::stoi(num2) << "\n\n";
            }
            else 
            {
                std::cout << origin << " = " << std::stoi(num1) - std::stoi(num2) << "\n\n";
            }
        }
        else if (operation == "*")
        {
            if  (no_space_at_end)
            {
                origin.insert(origin.find("*") + 1, " ");
                std::cout << origin << " = " << std::stoi(num1) * std::stoi(num2) << "\n\n";
            }
            else 
            {
                std::cout << origin << " = " << std::stoi(num1) * std::stoi(num2) << "\n\n";
            }            
        }
        else if (operation == "/")
        {
            if  (no_space_at_end)
            {
                origin.insert(origin.find("/") + 1, " ");
                std::cout << origin << " = " << std::stoi(num1) / std::stoi(num2) << "\n\n";
            }
            else
            {
                std::cout << origin << " = " << std::stoi(num1) / std::stoi(num2) << "\n\n";
            }
        }
    }
    else if (operation.find(operatorc) < operation.find(" ")) 
    {
        std::string num1 = operation.substr(0, operation.find(operatorc));
        operation.erase(0, operation.find(operatorc));
        std::string num2;
        if (!(operation.find(" ") == -1))
        {
            no_space_at_end = true;
            num2 = operation.substr(operation.find(operatorc) + 2);
            operation.erase(operation.find(operatorc) + 1);
        }
        else 
        {
            no_spaces = true;
            num2 = operation.substr(operation.find(operatorc) + 1);
            operation.erase(operation.find(operatorc) + 1);

        }
        std::cout << std::endl;
        if (operation == "+")
        {
            if  (no_space_at_end)
            {
                origin.insert(origin.find("+"), " ");
                std::cout << origin << " = " << std::stoi(num1) + std::stoi(num2) << "\n\n";
            }
            else if (no_spaces)
            {
                origin.insert(origin.find("+"), " ");
                origin.insert(origin.find("+") + 1, " ");
                std::cout << origin << " = " << std::stoi(num1) + std::stoi(num2) << "\n\n";
            }
            else 
            {
                std::cout << origin << " = " << std::stoi(num1) + std::stoi(num2) << "\n\n";
            }
        }    
        else if (operation == "-")
        {
            if  (no_space_at_end)
            {
                origin.insert(origin.find("-"), " ");
                std::cout << origin << " = " << std::stoi(num1) - std::stoi(num2) << "\n\n";
            }
            else if (no_spaces)
            {
                origin.insert(origin.find("-"), " ");
                origin.insert(origin.find("-") + 1, " ");
                std::cout << origin << " = " << std::stoi(num1) - std::stoi(num2) << "\n\n";
            }
            else 
            {
                std::cout << origin << " = " << std::stoi(num1) - std::stoi(num2) << "\n\n";
            }
        }
        else if (operation == "*")
        {
            if  (no_space_at_end)
            {
                origin.insert(origin.find("*"), " ");
                std::cout << origin << " = " << std::stoi(num1) * std::stoi(num2) << "\n\n";
            }
            else if (no_spaces)
            {
                origin.insert(origin.find("*"), " ");
                origin.insert(origin.find("*") + 1, " ");
                std::cout << origin << " = " << std::stoi(num1) * std::stoi(num2) << "\n\n";
            }
            else 
            {
                std::cout << origin << " = " << std::stoi(num1) * std::stoi(num2) << "\n\n";
            }            
        }
        else if (operation == "/")
        {
            if  (no_space_at_end)
            {
                origin.insert(origin.find("/"), " ");
                std::cout << origin << " = " << std::stoi(num1) / std::stoi(num2) << "\n\n";
            }
            else if (no_spaces)
            {
                origin.insert(origin.find("/"), " ");
                origin.insert(origin.find("/") + 1, " ");
                std::cout << origin << " = " << std::stoi(num1) / std::stoi(num2) << "\n\n"; 
            }
            else
            {
                std::cout << origin << " = " << std::stoi(num1) / std::stoi(num2) << "\n\n";
            }
        }
    } 
    return 0;
}
