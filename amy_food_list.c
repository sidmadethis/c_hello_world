#include <stdio.h>

int main(){
    /*char good[74];*/
   /* char good[74][50]={'eggs', 'chicken', 'turkey', 'abalone', 'catfish', 'perch', 'macadamia
    nuts', 'walnuts', 'black currant oil', 'borage oil', 'coconut oil', 'evening primrose
    oil', 'fish oils', 'flaxseed oil', 'ghee', 'hemp oil', 'olive oil', 'arugula', 'beet
    greens', 'cilantro', 'collard greens', 'dandelion greens', 'endive', 'kale', 'lettuce',
    'romaine', 'musutard greens', 'radicchio', 'spinach', 'swiss chard', 'turnip greens',
    'watercress', 'tea', 'water', 'asparagus', 'avocado', 'bok choy', 'broccoli', 'brussels
    sprout', 'cabbage', 'garlic', 'jerusalem artichoke', 'kohirabi', 'leek', 'mushroom',
    'okra', 'olive', 'onions', 'bell pepper', 'hot pepper', 'radish', 'shallot',
    'tomatoes', 'anise', 'bay leaf', 'cardamom', 'cayenne', 'chili powder', 'cinnamon', 'cloves',
    'coriander', 'dill weed', 'garlic powder', 'nutmeg', 'parsley', 'tumeric', 'agar',
    'irish moss', 'kelp', 'laver', 'wakama'}; */

    char *good[40]={ "eggs", "chicken", "turkey" };

    char bad[117];
    char ok[100];
    char caution[41];

    char good12= *good[2];
    printf("%s", good12);
}

