#include<iostream>
#include<ctime>
#include<vector>
#include<cstring>
#include<fstream>
#include<string>

using namespace std;

int main(){
    int input;
    srand (time(NULL));
    int random;
    string filename = "";
    string buffer;


    cout << "Select Category:" <<endl;
    cout << "Movie" << endl << "Music" << endl << "Food" << endl << "> ";
    cin >> input;
    switch(input){
        case 1: filename+="movie.txt";
                break;
        case 2: filename+="music.txt";
                break;
        case 3: filename+="food.txt";
                break;
        default: cout << "Select between 1 and 3";
                  exit(-1);
    }

    ifstream file(filename);
    if(file.fail()){
        cout << "file not found";
        exit(-1);
    }

    random = rand() % 5;

    int line_num=0;
    while(getline(file, buffer)){
        ++ line_num;
        if(line_num == random)
            break;
    }
    size_t pos = buffer.find("=>");
    cout << "Hint :" << buffer.substr(pos+3) << endl << endl;
    buffer.erase(pos);

    char ans[buffer.length()];
    strcpy(ans, buffer.c_str());


    int game_progess[strlen(ans)];
    int win_check;
    int life=10,score = 0;
    char guess;
    bool is_win=true,is_found;
    vector<char> wrong_guess;
    //start game;
    for(int i=0; i<strlen(ans); i++)
        if((ans[i] >= 'a' && ans[i] <= 'z') || (ans[i] >= 'A' && ans[i] <= 'Z'))game_progess[i]=0;
        else game_progess[i] = 1;

    while(life > 0){
        for(int i=0; i<strlen(ans); i++){
            if(game_progess[i] == 0)cout << '_';
            else if(game_progess[i] == 1)cout << ans[i];
            cout << " ";
        }
        cout << score << " ";
        cout << "guess remain " << life << " ";
        if(life < 10){
            cout << ", wrong guess ";
            for(int j=0; j<wrong_guess.size(); j++)
                cout << wrong_guess.at(j) << " ";
        }
        cout << endl << ">";
        cin >> guess;

        //find char
        is_found = false;
        for(int j=0; j<strlen(ans); j++){
            if(guess == ans[j]){
                game_progess[j]=1;
                is_found = true;
                score +=10;
            }
        }
        if(!is_found){
            life--;
            wrong_guess.push_back(guess);
        }

        //check if win
        for(int j=0, count=0;j<strlen(ans);j++){
            if(game_progess[j]==1)count++;
            if(j==strlen(ans)-1)win_check = count;
        }
        if(win_check == strlen(ans))break;

    }

    cout << endl << "Answer is " << ans << "!" << endl;
    if(is_win)
        cout << "You win with score: " << score << ",your remain life: " << life << endl;
    else 
        cout << "You lose, try again next time";

    return 0;
}