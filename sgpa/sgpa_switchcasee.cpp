#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "press.1 for physics group with mentoring marks:"
         << "press.2 for physics group without mentoring marks:"
         << "press.3 for chemistry group with mentoring marks:"
         << "press.4 for chemistry group without mentoring marks:";
    cin >> num;
    switch (num)
    {
    
    
    
    
        case 2:
       { int n, c, m1 = 4, PHY = 4, BEE = 4, EGD = 3, PEEM = 3, PHYSICSLAB = 1, BEELAB = 1;
        int c1 = m1 + PHY + BEE + EGD + PEEM + PHYSICSLAB + BEELAB;
        double arr[8], o, o1, o2, o3, o4, o5, o6;
        string sub[] = {"Physics", "math", "Bee", "Egd", "Peem", "Physics-Lab", "Bee-Lab"};
        for (n = 0; n <= 6; n++)
        {
            cout << "Enter your " << sub[n] << " marks"
                 << ":";
            cin >> arr[n];
        }
        o = arr[0] / 100 * 100;
        o1 = arr[1] / 100 * 100;
        o2 = arr[2] / 100 * 100;
        o3 = arr[3] / 100 * 100;
        o4 = arr[4] / 100 * 100;
        o5 = arr[5] / 50 * 100;
        o6 = arr[6] / 50 * 100;
        int p = (o / 10) + 1;
        int p1 = (o1 / 10) + 1;
        int p2 = (o2 / 10) + 1;
        int p3 = (o3 / 10) + 1;
        int p4 = (o4 / 10) + 1;
        int p5 = (o5 / 10) + 1;
        int p6 = (o6 / 10) + 1;
        double res = p * m1;
        double res1 = p1 * PHY;
        double res2 = p2 * BEE;
        double res3 = p3 * EGD;
        double res4 = p4 * PEEM;
        double res5 = p5 * PHYSICSLAB;
        double res6 = p6 * BEELAB;
        double dum = res + res1 + res2 + res3 + res4 + res5 + res6;
        double sgpa = dum / c1;
        cout << "SGPA ---> "
             << sgpa;
        break;}
        case 1:
       { int n, c, m1 = 4, PHY = 4, BEE = 4, EGD = 3, PEEM = 3, PHYSICSLAB = 1, BEELAB = 1, MENT = 1;
        int c1 = m1 + PHY + BEE + EGD + PEEM + PHYSICSLAB + BEELAB + MENT;
        double arr[8], o, o1, o2, o3, o4, o5, o6, o7;
        string sub[] = {"Physics", "math", "Bee", "Egd", "Peem", "Mentoring", "Physics-Lab", "Bee-Lab"};
        for (n = 0; n <= 7; n++)
        {
            cout << "Enter your " << sub[n] << " marks"
                 << ":";
            cin >> arr[n];
        }
        o = arr[0] / 100 * 100;
        o1 = arr[1] / 100 * 100;
        o2 = arr[2] / 100 * 100;
        o3 = arr[3] / 100 * 100;
        o4 = arr[4] / 100 * 100;
        o5 = arr[5] / 100 * 100;
        o6 = arr[6] / 50 * 100;
        o7 = arr[7] / 50 * 100;
        int p = (o / 10) + 1;
        int p1 = (o1 / 10) + 1;
        int p2 = (o2 / 10) + 1;
        int p3 = (o3 / 10) + 1;
        int p4 = (o4 / 10) + 1;
        int p5 = (o5 / 10) + 1;
        int p6 = (o6 / 10) + 1;
        int p7 = (o7 / 10) + 1;
        double res = p * m1;
        double res1 = p1 * PHY;
        double res2 = p2 * BEE;
        double res3 = p3 * EGD;
        double res4 = p4 * PEEM;
        double res5 = p5 * MENT;
        double res6 = p6 * PHYSICSLAB;
        double res7 = p7 * BEELAB;
        double dum = res + res1 + res2 + res3 + res4 + res5 + res6 + res7;
        double sgpa = dum / c1;
        cout << "SGPA\n"
             << sgpa;
        break;}

        case 3:
       { int n, c, m2 = 4, che = 4, pps = 4, eng = 3, men = 1, che_l = 1, pps_l = 1, manu_p = 1, eng_l = 1;
        int c1 = m2 + che + pps + eng + men + che_l + pps_l + manu_p + eng_l;
        double arr[8], o, o1, o2, o3, o4, o5, o6, o7, o8;
        string sub[] = {"MAth", "Chemistry", "PPS", "English", "Mentoring", "Chemistry-Lab", "PPS-Lab", "Manufactering practics", "English-Lab"};
        for (n = 0; n <= 8; n++)
        {
            cout << "Enter your " << sub[n] << " marks"
                 << ":";
            cin >> arr[n];
        }
        o = arr[0] / 100 * 100;
        o1 = arr[1] / 100 * 100;
        o2 = arr[2] / 100 * 100;
        o3 = arr[3] / 100 * 100;
        o4 = arr[4] / 100 * 100;
        o5 = arr[5] / 50 * 100;
        o6 = arr[6] / 50 * 100;
        o7 = arr[7] / 50 * 100;
        o8 = arr[8] / 50 * 100;
        int p = (o / 10) + 1;
        int p1 = (o1 / 10) + 1;
        int p2 = (o2 / 10) + 1;
        int p3 = (o3 / 10) + 1;
        int p4 = (o4 / 10) + 1;
        int p5 = (o5 / 10) + 1;
        int p6 = (o6 / 10) + 1;
        int p7 = (o7 / 10) + 1;
        int p8 = (o8 / 10) + 1;
        double res = p * m2;
        double res1 = p1 * che;
        double res2 = p2 * pps;
        double res3 = p3 * eng;
        double res4 = p4 * che_l;
        double res5 = p5 * pps_l;
        double res6 = p6 * manu_p;
        double res7 = p7 * eng_l;
        double res8 = p8 * manu_p;
        double dum = res + res1 + res2 + res3 + res4 + res5 + res6 + res7 + res8;
        double sgpa = dum / c1;
        cout << "SGPA ---> "
             << sgpa;
        break;}

    case 4:
       { int n, c, m2 = 4, che = 4, pps = 4, eng = 3, che_l = 1, pps_l = 1, manu_p = 1, eng_l = 1;
        int c1 = m2 + che + pps + eng + che_l + pps_l + manu_p + eng_l;
        double arr[8], o, o1, o2, o3, o4, o5, o6, o7;
        string sub[] = {"MAth", "Chemistry", "PPS", "English", "Chemistry-Lab", "PPS-Lab", "Manufactering practics", "English-Lab"};
        for (n = 0; n <= 7; n++)
        {
            cout << "Enter your " << sub[n] << " marks"
                 << ":";
            cin >> arr[n];
        }
        o = arr[0] / 100 * 100;
        o1 = arr[1] / 100 * 100;
        o2 = arr[2] / 100 * 100;
        o3 = arr[3] / 100 * 100;
        o4 = arr[4] / 50 * 100;
        o5 = arr[5] / 50 * 100;
        o6 = arr[6] / 50 * 100;
        o7 = arr[7] / 50 * 100;
        int p = (o / 10) + 1;
        int p1 = (o1 / 10) + 1;
        int p2 = (o2 / 10) + 1;
        int p3 = (o3 / 10) + 1;
        int p4 = (o4 / 10) + 1;
        int p5 = (o5 / 10) + 1;
        int p6 = (o6 / 10) + 1;
        int p7 = (o7 / 10) + 1;
        double res = p * m2;
        double res1 = p1 * che;
        double res2 = p2 * pps;
        double res3 = p3 * eng;
        double res4 = p4 * che_l;
        double res5 = p5 * pps_l;
        double res6 = p6 * manu_p;
        double res7 = p7 * eng_l;
        double dum = res + res1 + res2 + res3 + res4 + res5 + res6 + res7;
        double sgpa = dum / c1;
        cout << "SGPA ---> "
             << sgpa;
        break;
       }
    }
}
    

    