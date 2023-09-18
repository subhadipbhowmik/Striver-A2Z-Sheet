bool checkArmstrong(int n)
{
    int sum = 0, temp = n;
    while (temp != 0)
    {
        int lastDigit = temp % 10;
        sum = sum + lastDigit * lastDigit * lastDigit;
        temp /= 10;
    }

    if (sum == n)
    {
        return true;
    }

    else
    {
        return false;
    }
}
