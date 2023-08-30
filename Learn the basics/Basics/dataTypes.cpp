int dataTypes(string type)
{
    // https://www.codingninjas.com/studio/problems/data-type_8357232
    // Write your code here
    if (type == "Long" || type == "Double")
    {
        return 8;
    }

    else if (type == "Float" || type == "Integer")
    {
        return 4;
    }

    else
    {
        return 1;
    }
}
