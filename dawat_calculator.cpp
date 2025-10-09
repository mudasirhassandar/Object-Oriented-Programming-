#include <iostream>
// #include <stdio.h>
using namespace std;
int main()
{
    int no_plates;
    cout << "Enter the number of plates(Trami) = ";
    cin >> no_plates;

    while (1)
    {
        cout << "--How many dishes you want in your menu (dawat)--\n";
        int dishes;
        cout << "7) 7 Dishes \n10) 10 Dishes \n15) 15 Dishes \n0)EXIT\n=";
        cin >> dishes;
        if (dishes == 0)
        {
            printf("Loop exited");
            break;
        }
        switch (dishes)
        {
        case 7:
            cout << "--The 7-Dishes are --\n";
            cout << ">METH-I-MAAZ\n>KABAB\n>PANEER = 4pieces\n>RED-CHICKEN\n>RISTA\n>DUPYAZ\n>KORMA\n>GOSHTABA\n>NADRU\n>PALAK\n>MUSHROOM\n>PULAV\n>HALWA\n>SALAD\n";
            cout << "----------------------------------------------------\n";
            break;
        case 10:
            cout << "--The 10-Dishes are --\n";
            cout << ">METH-I-MAAZ\n>KABAB\n>TABAKH-MAAZ\n>DEIN\n>PANEER = 4pieces\n>RED-CHICKEN\n>RISTA\n>DANIWAL-RISTA\n>DUPYAZ\n>KORMA\n>DANIWAL-KORMA\n>GOSHTABA\n>NADRU\n>PALAK\n>MUSHROOM\n>PULAV\n>HALWA\n>SALAD\n";
            cout << "-------------------------------------------------------\n";
            break;
        case 15:
            cout << "--The 15-Dishes are --\n";
            cout << ">METH-I-MAAZ\n>KABAB\n>SHAMI-KABAB\n>TABAKH-MAAZ\n>DEIN\n>PANEER = 4pieces\n>RED-CHICKEN\n>WHITE-CHICKEN\n>RISTA\n>DANIWAL-RISTA\n>MEAT-PEAR\n>ROGAN-JOSH\n>DUPYAZ\n>KORMA\n>DANIWAL-KORMA\n>AAB-GOSH\n>GOSHTABA\n>NADRU\n>PALAK\n>MUSHROOM\n>PULAV\n>HALWA\n>SALAD\n";
            cout << "--------------------------------------------------------\n";
            break;
        default:
            cout << "Invalid\n";
            cout << "--------------------------------------------------------\n";
            break;
        }
        switch (dishes)
        {
        case 7:
            cout << "REQUIRMENTS FOR MAKING 7-DISHES:\n";
            cout << "MEAT = " << 3 * no_plates << "kg\n";
            cout << "NO. OF CHICKEN = " << 1 * no_plates << "--""TOTAL-WEIGHT = "<< 1.5 * no_plates << "kg\n";
            cout << "FENNEL-SEED(sabut-baidaan) = " << 15 * no_plates << "gm\n";
            cout << "FENNEL-POWDER(baidaan-powder) = " << 15 * no_plates << "gm\n";
            cout << "CINNAMON(dalchini) = " << 15 * no_plates << "gm\n";
            cout << "GREEN-CARDAMOM(nitch-aael) = " << 15 * no_plates << "gm\n";
            cout << "BLACK-CARDAMOM(elaichi-kalan) = " << 15 * no_plates << "gm\n";
            cout << "BLACK-PEPPER(maritch) = " << 7 * no_plates << "gm\n";
            cout << "CLOVES(rong) = " << 0.25 * no_plates << "gm\n";
            cout << "BLACK-CUMIN(zeeri-siyah) = " << 6 * no_plates << "gm\n";
            cout << "BLACK-CUMIN-POWDER(zeer-powder) = " << 10 * no_plates << "gm\n";
            cout << "GINGER-POWDER(shoonth-powder) = " << 10 * no_plates << "gm\n";
            cout << "FENUGREEK(methi) = " << 10 * no_plates << "gm\n";
            cout << "DRIED-RED-CAPSICUM(shimla-mirch) = " << 100 * no_plates << "gm\n";
            cout << "RED-CHILLI-POWDER(mirch-powder) = " << 25 * no_plates << "gm\n";
            cout << "TURMERIC-POWDER(haldi) = " << 25 * no_plates << "gm\n";
            cout << "TOMATO JUICE = " << 15 * no_plates << "gm\n";
            cout << "CHICKEN MASALA = " << 10 * no_plates << "gm\n";
            cout << "GRALIC(lasun) = " << 50 * no_plates << "gm\n";
            cout << "MUSTARD OIL = " << 0.375 * no_plates << "kg\n";
            cout << "REFINE-OIL(dara-oil) = " << 0.25 * no_plates << "Liter\n";
            cout << "NO.OF EGGS = " << 2 * no_plates << "\n";
            cout << "PANEER = " << 0.5 * no_plates << "kg\n";
            cout << "SALT = " << 100 * no_plates << "gm\n";
            cout << "CORIANDER-POWDER(dania-powder) = " << 10 * no_plates << "gm\n";
            cout << "DAL-DA GHEE = " << 75 * no_plates << "gm\n";
            cout << "ONION = " << 20 * no_plates << "gm\n";
            cout << "KASHMIRI-COCKSCOMB(mawal) = " << 5 * no_plates << "gm\n";
            cout << "VINEGAR = " << 15 * no_plates << "gm\n";
            cout << "MINT-POWDER(pudina) = " << 5 * no_plates << "gm\n";
            cout << "MUSHROOM = " << 35 * no_plates << "gm\n";
            cout << "BASMATI-RICE = " << 200 * no_plates << "gm\n";
            cout << "BAY-LEAf(taj-patta) = " << 2.5 * no_plates << "gm\n";
            cout << "VERKA GHEE = " << 50 * no_plates << "gm\n";
            cout << "CASHEW(kaju) = " << 10 * no_plates << "gm\n";
            cout << "RAISINS(kishmish) = " << 15 * no_plates << "gm\n";
            cout << "COCONUT = " << 20 * no_plates << "gm\n";
            cout << "MUSK-MELON-SEED(kharbuz-beol) = " << 5 * no_plates << "gm\n";
            cout << "BLACK-BERRIES(zeerish) = " << 5 * no_plates << "gm\n";
            cout << "PULAV-DABA = " << 1 * no_plates << "daba\n";
            cout << "HALWA-DABA = " << 4 * no_plates << "daba\n";
            cout << "MIKL = " << 0 * no_plates << "kg\n";
            cout << "WAZA-UNIFORM(wazi-wardi) = " << 1;
            cout << "KHADER = " << 2 << "meter";
            cout << "DATES(khazir) = " << 20 * no_plates << "gm\n";
            cout << "DRIED-APRICOTS = " << 10 * no_plates << "gm\n";
            cout << "SALAD-TRY = " << 1 * no_plates << "try\n";
            cout << "MEAT-BAGS-INNER = " << 4 * no_plates << "bags\n";
            cout << "MEAT-BAGS-OUTER = " << 4 * no_plates << "bags\n";
            cout << "GOSHTAB-BOWL = " << 1 * no_plates << "bowl\n";
            cout << "RADISH = " << 0.100 * no_plates << "kg\n";
            cout << "CARROT = " << 0.100 * no_plates << "kg\n";
            cout << "CUCUMBER = " << 0.100 * no_plates << "kg\n";
            cout << "SUJI = " << 25 * no_plates << "gm\n";
            cout << "PALAK = " << 10 * no_plates << "gm\n";
            cout << "NADRU = " << 100 * no_plates << "gm\n";
            cout << "GREEN-CORIANDER-leaf(sabiz-daniwal) = " << 15 * no_plates << "gm\n";
            cout << "TOMATO = " << 0.040 * no_plates << "kg\n";
            cout << "GINGER = " << 5 * no_plates << "gm\n";
            cout << "CURD = " << 0.5 * no_plates << "kg\n";
            cout << "PINEAPPLE = " << 1 * no_plates << "pieces\n";
            cout << "CHERRY = " << 4 * no_plates << "pieces\n";
            cout << "PICKELES = " << 5 * no_plates << "gm\n";
            cout << "GREEN-CHILLI = " << 5 * no_plates << "gm\n";
            cout << "LAMB-FAT = " << 100 * no_plates << "gm\n";
            cout << "PLATE-COVER(trami-cover) = " << 1 * no_plates << "sheet\n";
            cout << "DISPOSAL = " << 1 * no_plates << "packet(colddrink,waterbottel,8disposal glasses,spoon,knife,toothpicks,hankes,tissues,sope paper,mint etc)\n";
            cout << "--------------------------------------------------------\n";
            break;
        case 10:
            cout << "REQUIRMENTS FOR MAKING 10-DISHES:\n";
            cout << "MEAT = " << 4 * no_plates << "kg\n";
            cout << "NO. OF CHICKEN = " << 1 * no_plates << "--"
                                                            "TOTAL-WEIGHT = "
                 << 1.5 * no_plates << "kg\n";
            cout << "FENNEL-SEED(sabut-baidaan) = " << 20 * no_plates << "gm\n";
            cout << "FENNEL-POWDER(baidaan-powder) = " << 20 * no_plates << "gm\n";
            cout << "CINNAMON(dalchini) = " << 20 * no_plates << "gm\n";
            cout << "GREEN-CARDAMOM(nitch-aael) = " << 20 * no_plates << "gm\n";
            cout << "BLACK-CARDAMOM(elaichi-kalan) = " << 20 * no_plates << "gm\n";
            cout << "BLACK-PEPPER(maritch) = " << 10 * no_plates << "gm\n";
            cout << "CLOVES(rong) = " << 0.25 * no_plates << "gm\n";
            cout << "BLACK-CUMIN(zeeri-siyah) = " << 9 * no_plates << "gm\n";
            cout << "BLACK-CUMIN-POWDER(zeer-powder) = " << 15 * no_plates << "gm\n";
            cout << "GINGER-POWDER(shoonth-powder) = " << 15 * no_plates << "gm\n";
            cout << "FENUGREEK(methi) = " << 15 * no_plates << "gm\n";
            cout << "DRIED-RED-CAPSICUM(shimla-mirch) = " << 142 * no_plates << "gm\n";
            cout << "RED-CHILLI-POWDER(mirch-powder) = " << 30 * no_plates << "gm\n";
            cout << "TURMERIC-POWDER(haldi) = " << 30 * no_plates << "gm\n";
            cout << "TOMATO JUICE = " << 15 * no_plates << "gm\n";
            cout << "CHICKEN MASALA = " << 10 * no_plates << "gm\n";
            cout << "GRALIC(lasun) = " << 50 * no_plates << "gm\n";
            cout << "MUSTARD OIL = " << 0.375 * no_plates << "kg\n";
            cout << "REFINE-OIL(dara-oil) = " << 0.25 * no_plates << "Liter\n";
            cout << "NO.OF EGGS = " << 2 * no_plates << "\n";
            cout << "PANEER = " << 0.5 * no_plates << "kg\n";
            cout << "SALT = " << 120 * no_plates << "gm\n";
            cout << "CORIANDER-POWDER(dania-powder) = " << 10 * no_plates << "gm\n";
            cout << "DAL-DA GHEE = " << 75 * no_plates << "gm\n";
            cout << "ONION = " << 28 * no_plates << "gm\n";
            cout << "KASHMIRI-COCKSCOMB(mawal) = " << 5 * no_plates << "gm\n";
            cout << "VINEGAR = " << 15 * no_plates << "gm\n";
            cout << "MINT-POWDER(pudina) = " << 5 * no_plates << "gm\n";
            cout << "MUSHROOM = " << 35 * no_plates << "gm\n";
            cout << "BASMATI-RICE = " << 200 * no_plates << "gm\n";
            cout << "BAY-LEAf(taj-patta) = " << 2.5 * no_plates << "gm\n";
            cout << "VERKA GHEE = " << 50 * no_plates << "gm\n";
            cout << "CASHEW(kaju) = " << 10 * no_plates << "gm\n";
            cout << "RAISINS(kishmish) = " << 15 * no_plates << "gm\n";
            cout << "COCONUT = " << 20 * no_plates << "gm\n";
            cout << "MUSK-MELON-SEED(kharbuz-beol) = " << 5 * no_plates << "gm\n";
            cout << "BLACK-BERRIES(zeerish) = " << 5 * no_plates << "gm\n";
            cout << "PULAV-DABA = " << 1 * no_plates << "daba\n";
            cout << "HALWA-DABA = " << 4 * no_plates << "daba\n";
            cout << "MIKL = " << 0.25 * no_plates << "kg\n";
            cout << "WAZA-UNIFORM(wazi-wardi) = " << 1;
            cout << "KHADER = " << 2 << "meter";
            cout << "DATES(khazir) = " << 20 * no_plates << "gm\n";
            cout << "DRIED-APRICOTS = " << 10 * no_plates << "gm\n";
            cout << "SALAD-TRY = " << 1 * no_plates << "try\n";
            cout << "MEAT-BAGS-INNER = " << 4 * no_plates << "bags\n";
            cout << "MEAT-BAGS-OUTER = " << 4 * no_plates << "bags\n";
            cout << "GOSHTAB-BOWL = " << 1 * no_plates << "bowl\n";
            cout << "RADISH = " << 0.100 * no_plates << "kg\n";
            cout << "CARROT = " << 0.100 * no_plates << "kg\n";
            cout << "CUCUMBER = " << 0.100 * no_plates << "kg\n";
            cout << "SUJI = " << 25 * no_plates << "gm\n";
            cout << "PALAK = " << 10 * no_plates << "gm\n";
            cout << "NADRU = " << 100 * no_plates << "gm\n";
            cout << "GREEN-CORIANDER-leaf(sabiz-daniwal) = " << 15 * no_plates << "gm\n";
            cout << "TOMATO = " << 0.040 * no_plates << "kg\n";
            cout << "GINGER = " << 5 * no_plates << "gm\n";
            cout << "CURD = " << 0.5 * no_plates << "kg\n";
            cout << "PINEAPPLE = " << 1 * no_plates << "pieces\n";
            cout << "CHERRY = " << 4 * no_plates << "pieces\n";
            cout << "PICKELES = " << 5 * no_plates << "gm\n";
            cout << "GREEN-CHILLI = " << 5 * no_plates << "gm\n";
            cout << "LAMB-FAT = " << 140 * no_plates << "gm\n";
            cout << "PLATE-COVER(trami-cover) = " << 1 * no_plates << "sheet\n";
            cout << "DISPOSAL = " << 1 * no_plates << "packet(colddrink,waterbottel,8disposal glasses,spoon,knife,toothpicks,hankes,tissues,sope paper,mint etc)\n";
            cout << "--------------------------------------------------------\n";
            break;
        case 15:
            cout << "REQUIRMENTS FOR MAKING 15-DISHES:\n";
            cout << "MEAT = " << 4.5 * no_plates << "kg\n";
            cout << "NO. OF CHICKEN = " << 2 * no_plates << "--"
                                                            "TOTAL-WEIGHT = "
                 << 3 * no_plates << "kg\n";
            cout << "FENNEL-SEED(sabut-baidaan) = " << 30 * no_plates << "gm\n";
            cout << "FENNEL-POWDER(baidaan-powder) = " << 30 * no_plates << "gm\n";
            cout << "CINNAMON(dalchini) = " << 30 * no_plates << "gm\n";
            cout << "GREEN-CARDAMOM(nitch-aael) = " << 30 * no_plates << "gm\n";
            cout << "BLACK-CARDAMOM(elaichi-kalan) = " << 30 * no_plates << "gm\n";
            cout << "BLACK-PEPPER(maritch) = " << 15 * no_plates << "gm\n";
            cout << "CLOVES(rong) = " << 0.25 * no_plates << "gm\n";
            cout << "BLACK-CUMIN(zeeri-siyah) = " << 8 * no_plates << "gm\n";
            cout << "BLACK-CUMIN-POWDER(zeer-powder) = " << 20 * no_plates << "gm\n";
            cout << "GINGER-POWDER(shoonth-powder) = " << 20 * no_plates << "gm\n";
            cout << "FENUGREEK(methi) = " << 20 * no_plates << "gm\n";
            cout << "DRIED-RED-CAPSICUM(shimla-mirch) = " << 200 * no_plates << "gm\n";
            cout << "RED-CHILLI-POWDER(mirch-powder) = " << 50 * no_plates << "gm\n";
            cout << "TURMERIC-POWDER(haldi) = " << 50 * no_plates << "gm\n";
            cout << "TOMATO JUICE = " << 15 * no_plates << "gm\n";
            cout << "CHICKEN MASALA = " << 10 * no_plates << "gm\n";
            cout << "GRALIC(lasun) = " << 100 * no_plates << "gm\n";
            cout << "MUSTARD OIL = " << 1 * no_plates << "kg\n";
            cout << "REFINE-OIL(dara-oil) = " << 0.25 * no_plates << "Liter\n";
            cout << "NO.OF EGGS = " << 2 * no_plates << "\n";
            cout << "PANEER = " << 0.5 * no_plates << "kg\n";
            cout << "SALT = " << 200 * no_plates << "gm\n";
            cout << "CORIANDER-POWDER(dania-powder) = " << 20 * no_plates << "gm\n";
            cout << "DAL-DA GHEE = " << 75 * no_plates << "gm\n";
            cout << "ONION = " << 40 * no_plates << "gm\n";
            cout << "KASHMIRI-COCKSCOMB(mawal) = " << 5 * no_plates << "gm\n";
            cout << "VINEGAR = " << 15 * no_plates << "gm\n";
            cout << "MINT-POWDER(pudina) = " << 5 * no_plates << "gm\n";
            cout << "MUSHROOM = " << 35 * no_plates << "gm\n";
            cout << "BASMATI-RICE = " << 200 * no_plates << "gm\n";
            cout << "BAY-LEAf(taj-patta) = " << 2.5 * no_plates << "gm\n";
            cout << "VERKA GHEE = " << 50 * no_plates << "gm\n";
            cout << "CASHEW(kaju) = " << 10 * no_plates << "gm\n";
            cout << "RAISINS(kishmish) = " << 15 * no_plates << "gm\n";
            cout << "COCONUT = " << 20 * no_plates << "gm\n";
            cout << "MUSK-MELON-SEED(kharbuz-beol) = " << 5 * no_plates << "gm\n";
            cout << "BLACK-BERRIES(zeerish) = " << 5 * no_plates << "gm\n";
            cout << "PULAV-DABA = " << 1 * no_plates << "daba\n";
            cout << "HALWA-DABA = " << 4 * no_plates << "daba\n";
            cout << "MIKL = " << 0.25 * no_plates << "kg\n";
            cout << "WAZA-UNIFORM(wazi-wardi) = " << 1;
            cout << "KHADER = " << 2 << "meter";
            cout << "DATES(khazir) = " << 20 * no_plates << "gm\n";
            cout << "DRIED-APRICOTS = " << 10 * no_plates << "gm\n";
            cout << "SALAD-TRY = " << 1 * no_plates << "try\n";
            cout << "MEAT-BAGS-INNER = " << 4 * no_plates << "bags\n";
            cout << "MEAT-BAGS-OUTER = " << 4 * no_plates << "bags\n";
            cout << "GOSHTAB-BOWL = " << 1 * no_plates << "bowl\n";
            cout << "RADISH = " << 0.100 * no_plates << "kg\n";
            cout << "CARROT = " << 0.100 * no_plates << "kg\n";
            cout << "CUCUMBER = " << 0.100 * no_plates << "kg\n";
            cout << "SUJI = " << 25 * no_plates << "gm\n";
            cout << "PALAK = " << 10 * no_plates << "gm\n";
            cout << "NADRU = " << 100 * no_plates << "gm\n";
            cout << "GREEN-CORIANDER-leaf(sabiz-daniwal) = " << 15 * no_plates << "gm\n";
            cout << "TOMATO = " << 0.040 * no_plates << "kg\n";
            cout << "GINGER = " << 5 * no_plates << "gm\n";
            cout << "CURD = " << 0.5 * no_plates << "kg\n";
            cout << "PINEAPPLE = " << 1 * no_plates << "pieces\n";
            cout << "CHERRY = " << 4 * no_plates << "pieces\n";
            cout << "PICKELES = " << 5 * no_plates << "gm\n";
            cout << "GREEN-CHILLI = " << 5 * no_plates << "gm\n";
            cout << "LAMB-FAT = " << 200 * no_plates << "gm\n";
            cout << "PLATE-COVER(trami-cover) = " << 1 * no_plates << "sheet\n";
            cout << "DISPOSAL = " << 1 * no_plates << "packet(colddrink,waterbottel,8disposal glasses,spoon,knife,toothpicks,hankes,tissues,sope paper,mint etc)\n";
            cout << "--------------------------------------------------------\n";
            break;
        }
    }
    return 0;
}