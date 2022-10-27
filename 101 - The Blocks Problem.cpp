#include <bits/stdc++.h>

#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector < vector < int > > bloques;
    int pos[n][2];
    for (int i = 0; i < n; i++) {
        vector < int > aux;
        aux.push_back(i);
        bloques.push_back(aux);
        pos[i][0] = i;
        pos[i][1] = 0;
    }

    string orden;
    cin.ignore();
    while (getline(cin, orden)) {
        if (orden.compare("quit") == 0) {
            break;
        }
        string comandos[] = {
            "",
            "",
            "",
            ""
        };
        int numeroComando = 0;
        for (int i = 0; i < orden.length(); i++) {
            if (orden[i] == ' ') {
                numeroComando++;
                continue;
            }
            comandos[numeroComando] += orden[i];
        }
        int a = stoi(comandos[1]);
        int b = stoi(comandos[3]);

        if (a == b) {
            continue;
        }
        if (pos[a][0] == pos[b][0]) {
            continue;
        }

        if (comandos[0].compare("move") == 0) {
            bloques.at(pos[a][0]).erase(bloques.at(pos[a][0]).begin() + pos[a][1]);
            if (comandos[2].compare("over") == 0) {
                bloques.at(pos[b][0]).push_back(a);
                pos[a][0] = pos[b][0];
                pos[a][1] = bloques.at(pos[b][0]).size() - 1;
            } else if (comandos[2].compare("onto") == 0) {
                bloques.at(pos[b][0]).insert(bloques.at(pos[b][0]).begin() + pos[b][1] + 1, a);
                pos[a][0] = pos[b][0];
                pos[a][1] = pos[b][1] + 1;
                for (int i = pos[a][1] + 1; i < bloques.at(pos[b][0]).size(); i++) {
                    pos[bloques.at(pos[b][0]).at(i)][1]++;
                }
            }

        } else if (comandos[0].compare("pile") == 0) {
            int x = pos[a][0];
            int y = pos[a][1];
            if (comandos[2].compare("over") == 0) {
                int newPosY = bloques.at(pos[b][0]).size();
                for (int i = y; i < bloques.at(x).size(); i++) {
                    bloques.at(pos[b][0]).push_back(bloques.at(x).at(i));
                    pos[bloques.at(x).at(i)][0] = pos[b][0];
                    pos[bloques.at(x).at(i)][1] = newPosY++;
                }

            } else if (comandos[2].compare("onto") == 0) {
                int lastPos = 0;
                for (int i = y; i < bloques.at(x).size(); i++) {
                    bloques.at(pos[b][0]).insert(bloques.at(pos[b][0]).begin() + pos[b][1] + 1 + (i - y), bloques.at(x).at(i));
                    pos[bloques.at(x).at(i)][0] = pos[b][0];
                    lastPos = pos[bloques.at(x).at(i)][1] = pos[b][1] + 1 + (i - y);
                }

                for (int i = lastPos + 1; i < bloques.at(pos[b][0]).size(); i++) {
                    pos[bloques.at(pos[b][0]).at(i)][1] = i;
                }
            }
            bloques.at(x).erase(bloques.at(x).begin() + y, bloques.at(x).begin() + bloques.at(x).size());

        }

    }

    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < bloques.at(i).size(); j++) {
            cout << bloques.at(i).at(j) << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << i << ": " << pos[i][0] << " " << pos[i][1] << endl;

    }

    return 0;

}
